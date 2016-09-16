#include "mainkeyboard.h"
#include "ui_mainkeyboard.h"
#include <QDebug>
#include <QSqlTableModel>
#include <QMessageBox>
#include "common.h"

extern int lineeditflag;
extern int adminlineeditflag;

Mainkeyboard::Mainkeyboard(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Mainkeyboard)
{
    //
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);

    b1=0;b2=0;b3=0;b4=0;b5=0;b6=0;b7=0;b8=0;b9=0;b10=0;
    flag_en=0;
    count=0;
    file=new QFile("zk.txt");
    in=new QTextStream(file);
    zw[0]=this->ui->Buttonz1;
    zw[1]=this->ui->Buttonz2;
    zw[2]=this->ui->Buttonz3;
    zw[3]=this->ui->Buttonz4;
    zw[4]=this->ui->Buttonz5;
    zw[5]=this->ui->Buttonz6;
    zw[6]=this->ui->Buttonz7;
    zw[7]=this->ui->Buttonz8;
    if (!file->open(QIODevice::ReadOnly | QIODevice::Text))
        return;
    this->ui->Buttonz1->hide();
    this->ui->Buttonz2->hide();
    this->ui->Buttonz3->hide();
    this->ui->Buttonz4->hide();
    this->ui->Buttonz5->hide();
    this->ui->Buttonz6->hide();
    this->ui->Buttonz7->hide();
    this->ui->Buttonz8->hide();
    this->ui->lineEdit->hide();
    timer1=new QTimer(this->ui->Button_1);
    connect( timer1, SIGNAL(timeout()), this, SLOT(update1()) );
    timer2=new QTimer(this->ui->Button_2);
    connect( timer2, SIGNAL(timeout()), this, SLOT(update2()) );
    timer3=new QTimer(this->ui->Button_3);
    connect( timer3, SIGNAL(timeout()), this, SLOT(update3()) );
    timer4=new QTimer(this->ui->Button_4);
    connect( timer4, SIGNAL(timeout()), this, SLOT(update4()) );
    timer5=new QTimer(this->ui->Button_5);
    connect( timer5, SIGNAL(timeout()), this, SLOT(update5()) );
    timer6=new QTimer(this->ui->Button_6);
    connect( timer6, SIGNAL(timeout()), this, SLOT(update6()) );
    timer7=new QTimer(this->ui->Button_7);
    connect( timer7, SIGNAL(timeout()), this, SLOT(update7()) );
    timer8=new QTimer(this->ui->Button_8);
    connect( timer8, SIGNAL(timeout()), this, SLOT(update8()) );
    timer9=new QTimer(this->ui->Button_9);
    connect( timer9, SIGNAL(timeout()), this, SLOT(update9()) );
}

Mainkeyboard::~Mainkeyboard()
{
    delete ui;
}

void Mainkeyboard::on_Button_1_clicked()
{
    switch (flag_en)
    {
    case 2:
         this->ui->lineEdit_1->insert("1");
         break;
    }
}

void Mainkeyboard::on_Button_2_clicked()
{
    switch (flag_en)
    {
    case 0:
        if(b2==0)
        {
            this->ui->lineEdit_1->insert("A");
            b2++;
            timer2->start( 1000 );
        }else{
            this->ui->lineEdit_1->backspace();
            //backs();
            timer2->start( 1000 );
            switch(b2%4)
            {
            case 0:
                this->ui->lineEdit_1->insert("A");
                break;
            case 1:
                this->ui->lineEdit_1->insert("B");
                break;
            case 2:
                this->ui->lineEdit_1->insert("C");
                break;
            case 3:
                this->ui->lineEdit_1->insert("2");
                break;
            }
            b2++;
        }
        break;
    case 1:
        if(b2==0)
        {
            this->ui->lineEdit_1->insert("a");
            b2++;
            timer2->start( 1000 );
        }else{
            this->ui->lineEdit_1->backspace();
            //backs();
            timer2->start( 1000 );
            switch(b2%4)
            {
            case 0:
                this->ui->lineEdit_1->insert("a");
                break;
            case 1:
                this->ui->lineEdit_1->insert("b");
                break;
            case 2:
                this->ui->lineEdit_1->insert("c");
                break;
            case 3:
                this->ui->lineEdit_1->insert("2");
                break;
            }
            b2++;
        }
        break;
    case 2:
        this->ui->lineEdit_1->insert("2");
        break;
    case 3:
        if(b2==0)
        {
            this->ui->lineEdit->insert("a");
            b2++;
            timer2->start( 1000 );
        }else{
            this->ui->lineEdit->backspace();
            //backs();
            timer2->start( 1000 );
            switch(b2%4)
            {
            case 0:
                this->ui->lineEdit->insert("a");
                break;
            case 1:
                this->ui->lineEdit->insert("b");
                break;
            case 2:
                this->ui->lineEdit->insert("c");
                break;
            case 3:
                //this->ui->lineEdit->insert("2");
                break;
            }
            b2++;
        }
        break;
    }

}

void Mainkeyboard::on_Button_3_clicked()
{
    switch (flag_en)
    {
    case 0:
        if(b3==0)
        {
            this->ui->lineEdit_1->insert("D");
            b3++;
            timer3->start( 1000 );
        }else{
            this->ui->lineEdit_1->backspace();
            //backs();
            timer2->start( 1000 );
            switch(b3%4)
            {
            case 0:
                this->ui->lineEdit_1->insert("D");
                break;
            case 1:
                this->ui->lineEdit_1->insert("E");
                break;
            case 2:
                this->ui->lineEdit_1->insert("F");
                break;
            case 3:
                this->ui->lineEdit_1->insert("3");
                break;
            }
            b3++;
        }
        break;
    case 1:
        if(b3==0)
        {
            this->ui->lineEdit_1->insert("d");
            b3++;
            timer3->start( 1000 );
        }else{
            this->ui->lineEdit_1->backspace();
            //backs();
            timer3->start( 1000 );
            switch(b3%4)
            {
            case 0:
                this->ui->lineEdit_1->insert("d");
                break;
            case 1:
                this->ui->lineEdit_1->insert("e");
                break;
            case 2:
                this->ui->lineEdit_1->insert("f");
                break;
            case 3:
                this->ui->lineEdit_1->insert("3");
                break;
            }
            b3++;
        }
        break;
    case 2:
        this->ui->lineEdit_1->insert("3");
        break;
    case 3:
        if(b3==0)
        {
            this->ui->lineEdit->insert("d");
            b3++;
            timer3->start( 1000 );
        }else{
            this->ui->lineEdit->backspace();
            //backs();
            timer3->start( 1000 );
            switch(b3%4)
            {
            case 0:
                this->ui->lineEdit->insert("d");
                break;
            case 1:
                this->ui->lineEdit->insert("e");
                break;
            case 2:
                this->ui->lineEdit->insert("f");
                break;
            case 3:
                //this->ui->lineEdit->insert("3");
                break;
            }
            b3++;
        }
        break;
    }
}

void Mainkeyboard::on_Button_4_clicked()
{
    switch (flag_en)
    {
    case 0:
        if(b4==0)
        {
            this->ui->lineEdit_1->insert("G");
            b4++;
            timer4->start( 1000 );
        }else{
            this->ui->lineEdit_1->backspace();
            //backs();
            timer4->start( 1000 );
            switch(b4%4)
            {
            case 0:
                this->ui->lineEdit_1->insert("G");
                break;
            case 1:
                this->ui->lineEdit_1->insert("H");
                break;
            case 2:
                this->ui->lineEdit_1->insert("I");
                break;
            case 3:
                this->ui->lineEdit_1->insert("4");
                break;
            }
            b4++;
        }
        break;
    case 1:
        if(b4==0)
        {
            this->ui->lineEdit_1->insert("g");
            b4++;
            timer4->start( 1000 );
        }else{
            this->ui->lineEdit_1->backspace();
            //backs();
            timer4->start( 1000 );
            switch(b4%4)
            {
            case 0:
                this->ui->lineEdit_1->insert("g");
                break;
            case 1:
                this->ui->lineEdit_1->insert("h");
                break;
            case 2:
                this->ui->lineEdit_1->insert("i");
                break;
            case 3:
                this->ui->lineEdit_1->insert("4");
                break;
            }
            b4++;
        }
        break;
    case 2:
        this->ui->lineEdit_1->insert("4");
        break;
    case 3:
        if(b4==0)
        {
            this->ui->lineEdit->insert("g");
            b4++;
            timer4->start( 1000 );
        }else{
            this->ui->lineEdit->backspace();
            //backs();
            timer4->start( 1000 );
            switch(b4%4)
            {
            case 0:
                this->ui->lineEdit->insert("g");
                break;
            case 1:
                this->ui->lineEdit->insert("h");
                break;
            case 2:
                this->ui->lineEdit->insert("i");
                break;
            case 3:
                //this->ui->lineEdit->insert("4");
                break;
            }
            b4++;
        }
        break;
    }
}

void Mainkeyboard::on_Button_5_clicked()
{
    switch (flag_en)
    {
    case 0:
        if(b5==0)
        {
            this->ui->lineEdit_1->insert("J");
            b5++;
            timer5->start( 1000 );
        }else{
            this->ui->lineEdit_1->backspace();
            //backs();
            timer5->start( 1000 );
            switch(b5%4)
            {
            case 0:
                this->ui->lineEdit_1->insert("J");
                break;
            case 1:
                this->ui->lineEdit_1->insert("K");
                break;
            case 2:
                this->ui->lineEdit_1->insert("L");
                break;
            case 3:
                this->ui->lineEdit_1->insert("5");
                break;
            }
            b5++;
        }
        break;
    case 1:
        if(b5==0)
        {
            this->ui->lineEdit_1->insert("j");
            b5++;
            timer5->start( 1000 );
        }else{
            this->ui->lineEdit_1->backspace();
            //backs();
            timer5->start( 1000 );
            switch(b5%4)
            {
            case 0:
                this->ui->lineEdit_1->insert("j");
                break;
            case 1:
                this->ui->lineEdit_1->insert("k");
                break;
            case 2:
                this->ui->lineEdit_1->insert("l");
                break;
            case 3:
                this->ui->lineEdit_1->insert("5");
                break;
            }
            b5++;
        }
        break;
    case 2:
        this->ui->lineEdit_1->insert("5");
        break;
    case 3:
        if(b5==0)
        {
            this->ui->lineEdit->insert("j");
            b5++;
            timer5->start( 1000 );
        }else{
            this->ui->lineEdit->backspace();
            //backs();
            timer5->start( 1000 );
            switch(b5%4)
            {
            case 0:
                this->ui->lineEdit->insert("j");
                break;
            case 1:
                this->ui->lineEdit->insert("k");
                break;
            case 2:
                this->ui->lineEdit->insert("l");
                break;
            case 3:
                //this->ui->lineEdit->insert("5");
                break;
            }
            b5++;
        }
        break;
    }
}

void Mainkeyboard::on_Button_6_clicked()
{
    switch (flag_en)
    {
    case 0:
        if(b6==0)
        {
            this->ui->lineEdit_1->insert("M");
            b6++;
            timer6->start( 1000 );
        }else{
            this->ui->lineEdit_1->backspace();
            //backs();
            timer6->start( 1000 );
            switch(b6%4)
            {
            case 0:
                this->ui->lineEdit_1->insert("M");
                break;
            case 1:
                this->ui->lineEdit_1->insert("N");
                break;
            case 2:
                this->ui->lineEdit_1->insert("O");
                break;
            case 3:
                this->ui->lineEdit_1->insert("6");
                break;
            }
            b6++;
        }
        break;
    case 1:
        if(b6==0)
        {
            this->ui->lineEdit_1->insert("m");
            b6++;
            timer6->start( 1000 );
        }else{
            this->ui->lineEdit_1->backspace();
            //backs();
            timer6->start( 1000 );
            switch(b6%4)
            {
            case 0:
                this->ui->lineEdit_1->insert("m");
                break;
            case 1:
                this->ui->lineEdit_1->insert("n");
                break;
            case 2:
                this->ui->lineEdit_1->insert("o");
                break;
            case 3:
                this->ui->lineEdit_1->insert("6");
                break;
            }
            b6++;
        }
        break;
    case 2:
        this->ui->lineEdit_1->insert("6");
        break;
    case 3:
        if(b6==0)
        {
            this->ui->lineEdit->insert("m");
            b6++;
            timer6->start( 1000 );
        }else{
            this->ui->lineEdit->backspace();
            //backs();
            timer2->start( 1000 );
            switch(b6%4)
            {
            case 0:
                this->ui->lineEdit->insert("m");
                break;
            case 1:
                this->ui->lineEdit->insert("n");
                break;
            case 2:
                this->ui->lineEdit->insert("o");
                break;
            case 3:
                //this->ui->lineEdit->insert("6");
                break;
            }
            b6++;
        }
        break;
    }
}

void Mainkeyboard::on_Button_7_clicked()
{
    switch (flag_en)
    {
    case 0:
        if(b7==0)
        {
            this->ui->lineEdit_1->insert("P");
            b7++;
            timer2->start( 1000 );
        }else{
            this->ui->lineEdit_1->backspace();
            //backs();
            timer7->start( 1000 );
            switch(b7%5)
            {
            case 0:
                this->ui->lineEdit_1->insert("P");
                break;
            case 1:
                this->ui->lineEdit_1->insert("Q");
                break;
            case 2:
                this->ui->lineEdit_1->insert("R");
                break;
            case 3:
                this->ui->lineEdit_1->insert("S");
                break;
            case 4:
                this->ui->lineEdit_1->insert("7");
                break;
            }
            b7++;
        }
        break;
    case 1:
        if(b2==0)
        {
            this->ui->lineEdit_1->insert("p");
            b7++;
            timer7->start( 1000 );
        }else{
            this->ui->lineEdit_1->backspace();
            //backs();
            timer7->start( 1000 );
            switch(b7%5)
            {
            case 0:
                this->ui->lineEdit_1->insert("p");
                break;
            case 1:
                this->ui->lineEdit_1->insert("q");
                break;
            case 2:
                this->ui->lineEdit_1->insert("r");
                break;
            case 3:
                this->ui->lineEdit_1->insert("s");
                break;
            case 4:
                this->ui->lineEdit_1->insert("7");
                break;
            }
            b7++;
        }
        break;
    case 2:
        this->ui->lineEdit_1->insert("7");
        break;
    case 3:
        if(b7==0)
        {
            this->ui->lineEdit->insert("p");
            b7++;
            timer7->start( 1000 );
        }else{
            this->ui->lineEdit->backspace();
            //backs();
            timer7->start( 1000 );
            switch(b7%5)
            {
            case 0:
                this->ui->lineEdit->insert("p");
                break;
            case 1:
                this->ui->lineEdit->insert("q");
                break;
            case 2:
                this->ui->lineEdit->insert("r");
                break;
            case 3:
                this->ui->lineEdit->insert("s");
                break;
            }
            b7++;
        }
        break;
    }
}

void Mainkeyboard::on_Button_8_clicked()
{
    switch (flag_en)
    {
    case 0:
        if(b8==0)
        {
            this->ui->lineEdit_1->insert("T");
            b8++;
            timer8->start( 1000 );
        }else{
            this->ui->lineEdit_1->backspace();
            //backs();
            timer8->start( 1000 );
            switch(b8%4)
            {
            case 0:
                this->ui->lineEdit_1->insert("T");
                break;
            case 1:
                this->ui->lineEdit_1->insert("U");
                break;
            case 2:
                this->ui->lineEdit_1->insert("V");
                break;
            case 3:
                this->ui->lineEdit_1->insert("8");
                break;
            }
            b8++;
        }
        break;
    case 1:
        if(b8==0)
        {
            this->ui->lineEdit_1->insert("t");
            b8++;
            timer8->start( 1000 );
        }else{
            this->ui->lineEdit_1->backspace();
            //backs();
            timer8->start( 1000 );
            switch(b8%4)
            {
            case 0:
                this->ui->lineEdit_1->insert("t");
                break;
            case 1:
                this->ui->lineEdit_1->insert("u");
                break;
            case 2:
                this->ui->lineEdit_1->insert("v");
                break;
            case 3:
                this->ui->lineEdit_1->insert("8");
                break;
            }
            b8++;
        }
        break;
    case 2:
        this->ui->lineEdit_1->insert("8");
        break;
    case 3:
        if(b8==0)
        {
            this->ui->lineEdit->insert("t");
            b8++;
            timer8->start( 1000 );
        }else{
            this->ui->lineEdit->backspace();
            //backs();
            timer8->start( 1000 );
            switch(b8%4)
            {
            case 0:
                this->ui->lineEdit->insert("t");
                break;
            case 1:
                this->ui->lineEdit->insert("u");
                break;
            case 2:
                this->ui->lineEdit->insert("v");
                break;
            case 3:
                //this->ui->lineEdit->insert("8");
                break;
            }
            b8++;
        }
        break;
    }
}

void Mainkeyboard::on_Button_9_clicked()
{
    switch (flag_en)
    {
    case 0:
        if(b9==0)
        {
            this->ui->lineEdit_1->insert("W");
            b9++;
            timer9->start( 1000 );
        }else{
            this->ui->lineEdit_1->backspace();
            //backs();
            timer9->start( 1000 );
            switch(b9%5)
            {
            case 0:
                this->ui->lineEdit_1->insert("W");
                break;
            case 1:
                this->ui->lineEdit_1->insert("X");
                break;
            case 2:
                this->ui->lineEdit_1->insert("Y");
                break;
            case 3:
                this->ui->lineEdit_1->insert("Z");
                break;
            case 4:
                this->ui->lineEdit_1->insert("9");
                break;
            }
            b9++;
        }
        break;
    case 1:
        if(b9==0)
        {
            this->ui->lineEdit_1->insert("w");
            b9++;
            timer9->start( 1000 );
        }else{
            this->ui->lineEdit_1->backspace();
            //backs();
            timer9->start( 1000 );
            switch(b9%5)
            {
            case 0:
                this->ui->lineEdit_1->insert("w");
                break;
            case 1:
                this->ui->lineEdit_1->insert("x");
                break;
            case 2:
                this->ui->lineEdit_1->insert("y");
                break;
            case 3:
                this->ui->lineEdit_1->insert("z");
                break;
            case 4:
                this->ui->lineEdit_1->insert("9");
                break;
            }
            b9++;
        }
        break;
    case 2:
        this->ui->lineEdit_1->insert("9");
        break;
    case 3:
        if(b9==0)
        {
            this->ui->lineEdit->insert("w");
            b9++;
            timer9->start( 1000 );
        }else{
            this->ui->lineEdit->backspace();
            //backs();
            timer9->start( 1000 );
            switch(b9%5)
            {
            case 0:
                this->ui->lineEdit->insert("w");
                break;
            case 1:
                this->ui->lineEdit->insert("x");
                break;
            case 2:
                this->ui->lineEdit->insert("y");
                break;
            case 3:
                this->ui->lineEdit->insert("z");
                break;
            case 4:
                this->ui->lineEdit->insert("9");
                break;
            }
            b9++;
        }
        break;
    }

}

void Mainkeyboard::on_Button_qh_clicked()
{
    switch (flag_en)
    {
    case 0:
        flag_en++;
        this->ui->Button_qh->setText("abc");
        this->ui->Buttonz1->hide();
        this->ui->Buttonz2->hide();
        this->ui->Buttonz3->hide();
        this->ui->Buttonz4->hide();
        this->ui->Buttonz5->hide();
        this->ui->Buttonz6->hide();
        this->ui->Buttonz7->hide();
        this->ui->Buttonz8->hide();
        //this->ui->Button_sub->hide();
        //this->ui->Button_add->hide();
        this->ui->lineEdit->hide();
        break;
    case 1:
        flag_en++;
        this->ui->Button_qh->setText("123");
        this->ui->Buttonz1->hide();
        this->ui->Buttonz2->hide();
        this->ui->Buttonz3->hide();
        this->ui->Buttonz4->hide();
        this->ui->Buttonz5->hide();
        this->ui->Buttonz6->hide();
        this->ui->Buttonz7->hide();
        this->ui->Buttonz8->hide();
        //this->ui->Button_sub->hide();
        //this->ui->Button_add->hide();
        this->ui->lineEdit->hide();
        break;

    case 2:
        flag_en++;
        this->ui->Button_qh->setText(QString::fromUtf8("中"));
        this->ui->Buttonz1->show();
        this->ui->Buttonz2->show();
        this->ui->Buttonz3->show();
        this->ui->Buttonz4->show();
        this->ui->Buttonz5->show();
        this->ui->Buttonz6->show();
        this->ui->Buttonz7->show();
        this->ui->Buttonz8->show();
        //this->ui->Button_sub->show();
        //this->ui->Button_add->show();
        this->ui->lineEdit->show();
        break;
    case 3:
        flag_en=0;
        this->ui->Button_qh->setText("ABC");
        this->ui->Buttonz1->hide();
        this->ui->Buttonz2->hide();
        this->ui->Buttonz3->hide();
        this->ui->Buttonz4->hide();
        this->ui->Buttonz5->hide();
        this->ui->Buttonz6->hide();
        this->ui->Buttonz7->hide();
        this->ui->Buttonz8->hide();
        //this->ui->Button_sub->hide();
        //this->ui->Button_add->hide();
        this->ui->lineEdit->hide();
        break;
    }
}
void Mainkeyboard::update1()
{
    b1=0;
    timer1->stop();
}
void Mainkeyboard::update2()
{
    b2=0;
    timer2->stop();
    inputzw();
}
void Mainkeyboard::update3()
{
    b3=0;
    timer3->stop();
    inputzw();
}
void Mainkeyboard::update4()
{
    b4=0;
    timer4->stop();
    inputzw();
}
void Mainkeyboard::update5()
{
    b5=0;
    timer5->stop();
    inputzw();
}
void Mainkeyboard::update6()
{
    b6=0;
    timer6->stop();
    inputzw();
}
void Mainkeyboard::update7()
{
    b7=0;
    timer7->stop();
    inputzw();
}
void Mainkeyboard::update8()
{
    b8=0;
    timer8->stop();
    inputzw();
}
void Mainkeyboard::update9()
{
    b9=0;
    timer9->stop();
    inputzw();
}

void Mainkeyboard::inputzw()
{
    if(flag_en==3)
    {
        count=0;
        int ret=0;
        int j=0;
        in->seek(0);
        while(!in->atEnd())
        {
            QString a,b;

            a=this->ui->lineEdit->text();
            line=in->readLine();
            b=line.left(a.length());
            ret=QString::compare(a,b);
            if(!ret){
                count=a.length()+6;
                break;
            }
             //this->ui->lineEdit->setText(line.at(12));
        }
        if(!ret)
        {
            while(!QString::compare(line.at(count)," "))
                count++;
            for( i=0;i<8&&count<line.length();i++,count++)
            {

                zw[i]->setText(line.at(count));
            }
            j=i;
            while(j<8)
            {

                zw[j]->setText(" ");
                j++;
            }

        }
    }
}
//notice
void Mainkeyboard::userbs()
{
    this->ui->lineEdit_1->cut();
    this->ui->lineEdit_1->setFocus();
    this->ui->lineEdit_1->backspace();
}

void Mainkeyboard::on_Buttonz1_clicked()
{
    this->ui->lineEdit_1->insert(this->ui->Buttonz1->text());
    this->ui->lineEdit->clear();
}

void Mainkeyboard::on_Buttonz2_clicked()
{
    this->ui->lineEdit_1->insert(this->ui->Buttonz2->text());
    this->ui->lineEdit->clear();
}

void Mainkeyboard::on_Buttonz3_clicked()
{
    this->ui->lineEdit_1->insert(this->ui->Buttonz3->text());
    this->ui->lineEdit->clear();
}

void Mainkeyboard::on_Buttonz4_clicked()
{
    this->ui->lineEdit_1->insert(this->ui->Buttonz4->text());
    this->ui->lineEdit->clear();
}

void Mainkeyboard::on_Buttonz5_clicked()
{
    this->ui->lineEdit_1->insert(this->ui->Buttonz5->text());
    this->ui->lineEdit->clear();
}

void Mainkeyboard::on_Buttonz6_clicked()
{
    this->ui->lineEdit_1->insert(this->ui->Buttonz6->text());
    this->ui->lineEdit->clear();
}

void Mainkeyboard::on_Buttonz7_clicked()
{
    this->ui->lineEdit_1->insert(this->ui->Buttonz7->text());
    this->ui->lineEdit->clear();
}

void Mainkeyboard::on_Buttonz8_clicked()
{
    this->ui->lineEdit_1->insert(this->ui->Buttonz8->text());
    this->ui->lineEdit->clear();
}


void Mainkeyboard::on_Button_add_clicked()
{
    int j;
    if((i==8)&&(count<line.length()))
    {
        for(i=0 ;i<8&&count<line.length();i++,count++)
        {

            zw[i]->setText(line.at(count));
        }
        j=i;
        while(j<8)
        {

            zw[j]->setText(" ");
            j++;
        }
    }
}

void Mainkeyboard::on_Button_sub_clicked()
{
    count=count-i-8;
    if((count>8)&&(QString::compare(line.at(count)," ")))
    {
        for(i=0 ;i<8&&count<line.length();i++,count++)
        {
            zw[i]->setText(line.at(count));
        }
    }
}
void Mainkeyboard::on_Button_0_clicked()
{
    switch (flag_en)
    {
    case 2:
         this->ui->lineEdit_1->insert("0");
         break;
    }
}
void Mainkeyboard::on_Button_xh_clicked()
{
    if(this->ui->lineEdit->text()!=NULL)
        this->ui->lineEdit->backspace();
    else
         userbs();
}
void Mainkeyboard::on_Button_jh_clicked()
{
    //qDebug()<<"zzzzzzzzzzzzzzzzzzzzzzzz"<<adminflag;
    //id号检测
    QSqlTableModel model;
    if(adminflag)
        model.setTable("hjadmin");
    else
        model.setTable("hjcommon");
    model.setFilter(tr("id = '%1'").arg(ui->lineEdit_1->text()));
    model.select();
    if(model.rowCount()==1) {
        QMessageBox::warning(this,tr("错误提示"),tr("请输入有效ID"),tr("知道了"));
    }else{
        this->hide();
        if(lineeditflag==1)
        { 
           emit sendname(ui->lineEdit_1->text());
        }
        else if(lineeditflag==2)
        {
           emit sendid(ui->lineEdit_1->text());
        }
        else if(adminlineeditflag==1)
        {
           emit adminsendname(ui->lineEdit_1->text());
        }
        else if(adminlineeditflag==2)
        {
           emit adminsendid(ui->lineEdit_1->text());
        }
    }
}
