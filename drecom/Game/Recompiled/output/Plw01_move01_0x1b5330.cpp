#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Plw01_move01
// Address: 0x1b5330 - 0x1b57ac
void Plw01_move01_0x1b5330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Plw01_move01_0x1b5330");
#endif

    switch (ctx->pc) {
        case 0x1b5330u: goto label_1b5330;
        case 0x1b5334u: goto label_1b5334;
        case 0x1b5338u: goto label_1b5338;
        case 0x1b533cu: goto label_1b533c;
        case 0x1b5340u: goto label_1b5340;
        case 0x1b5344u: goto label_1b5344;
        case 0x1b5348u: goto label_1b5348;
        case 0x1b534cu: goto label_1b534c;
        case 0x1b5350u: goto label_1b5350;
        case 0x1b5354u: goto label_1b5354;
        case 0x1b5358u: goto label_1b5358;
        case 0x1b535cu: goto label_1b535c;
        case 0x1b5360u: goto label_1b5360;
        case 0x1b5364u: goto label_1b5364;
        case 0x1b5368u: goto label_1b5368;
        case 0x1b536cu: goto label_1b536c;
        case 0x1b5370u: goto label_1b5370;
        case 0x1b5374u: goto label_1b5374;
        case 0x1b5378u: goto label_1b5378;
        case 0x1b537cu: goto label_1b537c;
        case 0x1b5380u: goto label_1b5380;
        case 0x1b5384u: goto label_1b5384;
        case 0x1b5388u: goto label_1b5388;
        case 0x1b538cu: goto label_1b538c;
        case 0x1b5390u: goto label_1b5390;
        case 0x1b5394u: goto label_1b5394;
        case 0x1b5398u: goto label_1b5398;
        case 0x1b539cu: goto label_1b539c;
        case 0x1b53a0u: goto label_1b53a0;
        case 0x1b53a4u: goto label_1b53a4;
        case 0x1b53a8u: goto label_1b53a8;
        case 0x1b53acu: goto label_1b53ac;
        case 0x1b53b0u: goto label_1b53b0;
        case 0x1b53b4u: goto label_1b53b4;
        case 0x1b53b8u: goto label_1b53b8;
        case 0x1b53bcu: goto label_1b53bc;
        case 0x1b53c0u: goto label_1b53c0;
        case 0x1b53c4u: goto label_1b53c4;
        case 0x1b53c8u: goto label_1b53c8;
        case 0x1b53ccu: goto label_1b53cc;
        case 0x1b53d0u: goto label_1b53d0;
        case 0x1b53d4u: goto label_1b53d4;
        case 0x1b53d8u: goto label_1b53d8;
        case 0x1b53dcu: goto label_1b53dc;
        case 0x1b53e0u: goto label_1b53e0;
        case 0x1b53e4u: goto label_1b53e4;
        case 0x1b53e8u: goto label_1b53e8;
        case 0x1b53ecu: goto label_1b53ec;
        case 0x1b53f0u: goto label_1b53f0;
        case 0x1b53f4u: goto label_1b53f4;
        case 0x1b53f8u: goto label_1b53f8;
        case 0x1b53fcu: goto label_1b53fc;
        case 0x1b5400u: goto label_1b5400;
        case 0x1b5404u: goto label_1b5404;
        case 0x1b5408u: goto label_1b5408;
        case 0x1b540cu: goto label_1b540c;
        case 0x1b5410u: goto label_1b5410;
        case 0x1b5414u: goto label_1b5414;
        case 0x1b5418u: goto label_1b5418;
        case 0x1b541cu: goto label_1b541c;
        case 0x1b5420u: goto label_1b5420;
        case 0x1b5424u: goto label_1b5424;
        case 0x1b5428u: goto label_1b5428;
        case 0x1b542cu: goto label_1b542c;
        case 0x1b5430u: goto label_1b5430;
        case 0x1b5434u: goto label_1b5434;
        case 0x1b5438u: goto label_1b5438;
        case 0x1b543cu: goto label_1b543c;
        case 0x1b5440u: goto label_1b5440;
        case 0x1b5444u: goto label_1b5444;
        case 0x1b5448u: goto label_1b5448;
        case 0x1b544cu: goto label_1b544c;
        case 0x1b5450u: goto label_1b5450;
        case 0x1b5454u: goto label_1b5454;
        case 0x1b5458u: goto label_1b5458;
        case 0x1b545cu: goto label_1b545c;
        case 0x1b5460u: goto label_1b5460;
        case 0x1b5464u: goto label_1b5464;
        case 0x1b5468u: goto label_1b5468;
        case 0x1b546cu: goto label_1b546c;
        case 0x1b5470u: goto label_1b5470;
        case 0x1b5474u: goto label_1b5474;
        case 0x1b5478u: goto label_1b5478;
        case 0x1b547cu: goto label_1b547c;
        case 0x1b5480u: goto label_1b5480;
        case 0x1b5484u: goto label_1b5484;
        case 0x1b5488u: goto label_1b5488;
        case 0x1b548cu: goto label_1b548c;
        case 0x1b5490u: goto label_1b5490;
        case 0x1b5494u: goto label_1b5494;
        case 0x1b5498u: goto label_1b5498;
        case 0x1b549cu: goto label_1b549c;
        case 0x1b54a0u: goto label_1b54a0;
        case 0x1b54a4u: goto label_1b54a4;
        case 0x1b54a8u: goto label_1b54a8;
        case 0x1b54acu: goto label_1b54ac;
        case 0x1b54b0u: goto label_1b54b0;
        case 0x1b54b4u: goto label_1b54b4;
        case 0x1b54b8u: goto label_1b54b8;
        case 0x1b54bcu: goto label_1b54bc;
        case 0x1b54c0u: goto label_1b54c0;
        case 0x1b54c4u: goto label_1b54c4;
        case 0x1b54c8u: goto label_1b54c8;
        case 0x1b54ccu: goto label_1b54cc;
        case 0x1b54d0u: goto label_1b54d0;
        case 0x1b54d4u: goto label_1b54d4;
        case 0x1b54d8u: goto label_1b54d8;
        case 0x1b54dcu: goto label_1b54dc;
        case 0x1b54e0u: goto label_1b54e0;
        case 0x1b54e4u: goto label_1b54e4;
        case 0x1b54e8u: goto label_1b54e8;
        case 0x1b54ecu: goto label_1b54ec;
        case 0x1b54f0u: goto label_1b54f0;
        case 0x1b54f4u: goto label_1b54f4;
        case 0x1b54f8u: goto label_1b54f8;
        case 0x1b54fcu: goto label_1b54fc;
        case 0x1b5500u: goto label_1b5500;
        case 0x1b5504u: goto label_1b5504;
        case 0x1b5508u: goto label_1b5508;
        case 0x1b550cu: goto label_1b550c;
        case 0x1b5510u: goto label_1b5510;
        case 0x1b5514u: goto label_1b5514;
        case 0x1b5518u: goto label_1b5518;
        case 0x1b551cu: goto label_1b551c;
        case 0x1b5520u: goto label_1b5520;
        case 0x1b5524u: goto label_1b5524;
        case 0x1b5528u: goto label_1b5528;
        case 0x1b552cu: goto label_1b552c;
        case 0x1b5530u: goto label_1b5530;
        case 0x1b5534u: goto label_1b5534;
        case 0x1b5538u: goto label_1b5538;
        case 0x1b553cu: goto label_1b553c;
        case 0x1b5540u: goto label_1b5540;
        case 0x1b5544u: goto label_1b5544;
        case 0x1b5548u: goto label_1b5548;
        case 0x1b554cu: goto label_1b554c;
        case 0x1b5550u: goto label_1b5550;
        case 0x1b5554u: goto label_1b5554;
        case 0x1b5558u: goto label_1b5558;
        case 0x1b555cu: goto label_1b555c;
        case 0x1b5560u: goto label_1b5560;
        case 0x1b5564u: goto label_1b5564;
        case 0x1b5568u: goto label_1b5568;
        case 0x1b556cu: goto label_1b556c;
        case 0x1b5570u: goto label_1b5570;
        case 0x1b5574u: goto label_1b5574;
        case 0x1b5578u: goto label_1b5578;
        case 0x1b557cu: goto label_1b557c;
        case 0x1b5580u: goto label_1b5580;
        case 0x1b5584u: goto label_1b5584;
        case 0x1b5588u: goto label_1b5588;
        case 0x1b558cu: goto label_1b558c;
        case 0x1b5590u: goto label_1b5590;
        case 0x1b5594u: goto label_1b5594;
        case 0x1b5598u: goto label_1b5598;
        case 0x1b559cu: goto label_1b559c;
        case 0x1b55a0u: goto label_1b55a0;
        case 0x1b55a4u: goto label_1b55a4;
        case 0x1b55a8u: goto label_1b55a8;
        case 0x1b55acu: goto label_1b55ac;
        case 0x1b55b0u: goto label_1b55b0;
        case 0x1b55b4u: goto label_1b55b4;
        case 0x1b55b8u: goto label_1b55b8;
        case 0x1b55bcu: goto label_1b55bc;
        case 0x1b55c0u: goto label_1b55c0;
        case 0x1b55c4u: goto label_1b55c4;
        case 0x1b55c8u: goto label_1b55c8;
        case 0x1b55ccu: goto label_1b55cc;
        case 0x1b55d0u: goto label_1b55d0;
        case 0x1b55d4u: goto label_1b55d4;
        case 0x1b55d8u: goto label_1b55d8;
        case 0x1b55dcu: goto label_1b55dc;
        case 0x1b55e0u: goto label_1b55e0;
        case 0x1b55e4u: goto label_1b55e4;
        case 0x1b55e8u: goto label_1b55e8;
        case 0x1b55ecu: goto label_1b55ec;
        case 0x1b55f0u: goto label_1b55f0;
        case 0x1b55f4u: goto label_1b55f4;
        case 0x1b55f8u: goto label_1b55f8;
        case 0x1b55fcu: goto label_1b55fc;
        case 0x1b5600u: goto label_1b5600;
        case 0x1b5604u: goto label_1b5604;
        case 0x1b5608u: goto label_1b5608;
        case 0x1b560cu: goto label_1b560c;
        case 0x1b5610u: goto label_1b5610;
        case 0x1b5614u: goto label_1b5614;
        case 0x1b5618u: goto label_1b5618;
        case 0x1b561cu: goto label_1b561c;
        case 0x1b5620u: goto label_1b5620;
        case 0x1b5624u: goto label_1b5624;
        case 0x1b5628u: goto label_1b5628;
        case 0x1b562cu: goto label_1b562c;
        case 0x1b5630u: goto label_1b5630;
        case 0x1b5634u: goto label_1b5634;
        case 0x1b5638u: goto label_1b5638;
        case 0x1b563cu: goto label_1b563c;
        case 0x1b5640u: goto label_1b5640;
        case 0x1b5644u: goto label_1b5644;
        case 0x1b5648u: goto label_1b5648;
        case 0x1b564cu: goto label_1b564c;
        case 0x1b5650u: goto label_1b5650;
        case 0x1b5654u: goto label_1b5654;
        case 0x1b5658u: goto label_1b5658;
        case 0x1b565cu: goto label_1b565c;
        case 0x1b5660u: goto label_1b5660;
        case 0x1b5664u: goto label_1b5664;
        case 0x1b5668u: goto label_1b5668;
        case 0x1b566cu: goto label_1b566c;
        case 0x1b5670u: goto label_1b5670;
        case 0x1b5674u: goto label_1b5674;
        case 0x1b5678u: goto label_1b5678;
        case 0x1b567cu: goto label_1b567c;
        case 0x1b5680u: goto label_1b5680;
        case 0x1b5684u: goto label_1b5684;
        case 0x1b5688u: goto label_1b5688;
        case 0x1b568cu: goto label_1b568c;
        case 0x1b5690u: goto label_1b5690;
        case 0x1b5694u: goto label_1b5694;
        case 0x1b5698u: goto label_1b5698;
        case 0x1b569cu: goto label_1b569c;
        case 0x1b56a0u: goto label_1b56a0;
        case 0x1b56a4u: goto label_1b56a4;
        case 0x1b56a8u: goto label_1b56a8;
        case 0x1b56acu: goto label_1b56ac;
        case 0x1b56b0u: goto label_1b56b0;
        case 0x1b56b4u: goto label_1b56b4;
        case 0x1b56b8u: goto label_1b56b8;
        case 0x1b56bcu: goto label_1b56bc;
        case 0x1b56c0u: goto label_1b56c0;
        case 0x1b56c4u: goto label_1b56c4;
        case 0x1b56c8u: goto label_1b56c8;
        case 0x1b56ccu: goto label_1b56cc;
        case 0x1b56d0u: goto label_1b56d0;
        case 0x1b56d4u: goto label_1b56d4;
        case 0x1b56d8u: goto label_1b56d8;
        case 0x1b56dcu: goto label_1b56dc;
        case 0x1b56e0u: goto label_1b56e0;
        case 0x1b56e4u: goto label_1b56e4;
        case 0x1b56e8u: goto label_1b56e8;
        case 0x1b56ecu: goto label_1b56ec;
        case 0x1b56f0u: goto label_1b56f0;
        case 0x1b56f4u: goto label_1b56f4;
        case 0x1b56f8u: goto label_1b56f8;
        case 0x1b56fcu: goto label_1b56fc;
        case 0x1b5700u: goto label_1b5700;
        case 0x1b5704u: goto label_1b5704;
        case 0x1b5708u: goto label_1b5708;
        case 0x1b570cu: goto label_1b570c;
        case 0x1b5710u: goto label_1b5710;
        case 0x1b5714u: goto label_1b5714;
        case 0x1b5718u: goto label_1b5718;
        case 0x1b571cu: goto label_1b571c;
        case 0x1b5720u: goto label_1b5720;
        case 0x1b5724u: goto label_1b5724;
        case 0x1b5728u: goto label_1b5728;
        case 0x1b572cu: goto label_1b572c;
        case 0x1b5730u: goto label_1b5730;
        case 0x1b5734u: goto label_1b5734;
        case 0x1b5738u: goto label_1b5738;
        case 0x1b573cu: goto label_1b573c;
        case 0x1b5740u: goto label_1b5740;
        case 0x1b5744u: goto label_1b5744;
        case 0x1b5748u: goto label_1b5748;
        case 0x1b574cu: goto label_1b574c;
        case 0x1b5750u: goto label_1b5750;
        case 0x1b5754u: goto label_1b5754;
        case 0x1b5758u: goto label_1b5758;
        case 0x1b575cu: goto label_1b575c;
        case 0x1b5760u: goto label_1b5760;
        case 0x1b5764u: goto label_1b5764;
        case 0x1b5768u: goto label_1b5768;
        case 0x1b576cu: goto label_1b576c;
        case 0x1b5770u: goto label_1b5770;
        case 0x1b5774u: goto label_1b5774;
        case 0x1b5778u: goto label_1b5778;
        case 0x1b577cu: goto label_1b577c;
        case 0x1b5780u: goto label_1b5780;
        case 0x1b5784u: goto label_1b5784;
        case 0x1b5788u: goto label_1b5788;
        case 0x1b578cu: goto label_1b578c;
        case 0x1b5790u: goto label_1b5790;
        case 0x1b5794u: goto label_1b5794;
        case 0x1b5798u: goto label_1b5798;
        case 0x1b579cu: goto label_1b579c;
        case 0x1b57a0u: goto label_1b57a0;
        case 0x1b57a4u: goto label_1b57a4;
        case 0x1b57a8u: goto label_1b57a8;
        default: break;
    }

    ctx->pc = 0x1b5330u;

label_1b5330:
    // 0x1b5330: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b5330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1b5334:
    // 0x1b5334: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x1b5334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
label_1b5338:
    // 0x1b5338: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b5338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1b533c:
    // 0x1b533c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b533cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1b5340:
    // 0x1b5340: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x1b5340u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
label_1b5344:
    // 0x1b5344: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1b5344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_1b5348:
    // 0x1b5348: 0x24510080  addiu       $s1, $v0, 0x80
    ctx->pc = 0x1b5348u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_1b534c:
    // 0x1b534c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1b534cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1b5350:
    // 0x1b5350: 0xc4411388  lwc1        $f1, 0x1388($v0)
    ctx->pc = 0x1b5350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b5354:
    // 0x1b5354: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x1b5354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
label_1b5358:
    // 0x1b5358: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b5358u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b535c:
    // 0x1b535c: 0x0  nop
    ctx->pc = 0x1b535cu;
    // NOP
label_1b5360:
    // 0x1b5360: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b5360u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b5364:
    // 0x1b5364: 0x0  nop
    ctx->pc = 0x1b5364u;
    // NOP
label_1b5368:
    // 0x1b5368: 0x45010009  bc1t        . + 4 + (0x9 << 2)
label_1b536c:
    if (ctx->pc == 0x1B536Cu) {
        ctx->pc = 0x1B5370u;
        goto label_1b5370;
    }
    ctx->pc = 0x1B5368u;
    {
        const bool branch_taken_0x1b5368 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b5368) {
            ctx->pc = 0x1B5390u;
            goto label_1b5390;
        }
    }
    ctx->pc = 0x1B5370u;
label_1b5370:
    // 0x1b5370: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1b5370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1b5374:
    // 0x1b5374: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x1b5374u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
label_1b5378:
    // 0x1b5378: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1b537c:
    if (ctx->pc == 0x1B537Cu) {
        ctx->pc = 0x1B5380u;
        goto label_1b5380;
    }
    ctx->pc = 0x1B5378u;
    {
        const bool branch_taken_0x1b5378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b5378) {
            ctx->pc = 0x1B5390u;
            goto label_1b5390;
        }
    }
    ctx->pc = 0x1B5380u;
label_1b5380:
    // 0x1b5380: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1b5380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1b5384:
    // 0x1b5384: 0xc4401380  lwc1        $f0, 0x1380($v0)
    ctx->pc = 0x1b5384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b5388:
    // 0x1b5388: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1b5388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1b538c:
    // 0x1b538c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1b538cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_1b5390:
    // 0x1b5390: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1b5390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1b5394:
    // 0x1b5394: 0x8442127c  lh          $v0, 0x127C($v0)
    ctx->pc = 0x1b5394u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4732)));
label_1b5398:
    // 0x1b5398: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1b539c:
    if (ctx->pc == 0x1B539Cu) {
        ctx->pc = 0x1B53A0u;
        goto label_1b53a0;
    }
    ctx->pc = 0x1B5398u;
    {
        const bool branch_taken_0x1b5398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5398) {
            ctx->pc = 0x1B53B0u;
            goto label_1b53b0;
        }
    }
    ctx->pc = 0x1B53A0u;
label_1b53a0:
    // 0x1b53a0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1b53a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1b53a4:
    // 0x1b53a4: 0x8462127c  lh          $v0, 0x127C($v1)
    ctx->pc = 0x1b53a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
label_1b53a8:
    // 0x1b53a8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b53a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1b53ac:
    // 0x1b53ac: 0xa462127c  sh          $v0, 0x127C($v1)
    ctx->pc = 0x1b53acu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 2));
label_1b53b0:
    // 0x1b53b0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1b53b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1b53b4:
    // 0x1b53b4: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x1b53b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
label_1b53b8:
    // 0x1b53b8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1b53bc:
    if (ctx->pc == 0x1B53BCu) {
        ctx->pc = 0x1B53C0u;
        goto label_1b53c0;
    }
    ctx->pc = 0x1B53B8u;
    {
        const bool branch_taken_0x1b53b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b53b8) {
            ctx->pc = 0x1B53D8u;
            goto label_1b53d8;
        }
    }
    ctx->pc = 0x1B53C0u;
label_1b53c0:
    // 0x1b53c0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1b53c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1b53c4:
    // 0x1b53c4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1b53c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1b53c8:
    // 0x1b53c8: 0x3c022800  lui         $v0, 0x2800
    ctx->pc = 0x1b53c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10240 << 16));
label_1b53cc:
    // 0x1b53cc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1b53ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1b53d0:
    // 0x1b53d0: 0x10400084  beqz        $v0, . + 4 + (0x84 << 2)
label_1b53d4:
    if (ctx->pc == 0x1B53D4u) {
        ctx->pc = 0x1B53D8u;
        goto label_1b53d8;
    }
    ctx->pc = 0x1B53D0u;
    {
        const bool branch_taken_0x1b53d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b53d0) {
            ctx->pc = 0x1B55E4u;
            goto label_1b55e4;
        }
    }
    ctx->pc = 0x1B53D8u;
label_1b53d8:
    // 0x1b53d8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1b53d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1b53dc:
    // 0x1b53dc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1b53dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1b53e0:
    // 0x1b53e0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1b53e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1b53e4:
    // 0x1b53e4: 0xc48c00d4  lwc1        $f12, 0xD4($a0)
    ctx->pc = 0x1b53e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b53e8:
    // 0x1b53e8: 0xc46d1568  lwc1        $f13, 0x1568($v1)
    ctx->pc = 0x1b53e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1b53ec:
    // 0x1b53ec: 0x9044156c  lbu         $a0, 0x156C($v0)
    ctx->pc = 0x1b53ecu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5484)));
label_1b53f0:
    // 0x1b53f0: 0xc058978  jal         func_1625E0
label_1b53f4:
    if (ctx->pc == 0x1B53F4u) {
        ctx->pc = 0x1B53F8u;
        goto label_1b53f8;
    }
    ctx->pc = 0x1B53F0u;
    SET_GPR_U32(ctx, 31, 0x1B53F8u);
    ctx->pc = 0x1625E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1625E0u, 0x1B53F0u, 0x1B53F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B53F8u;
label_1b53f8:
    // 0x1b53f8: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1b53f8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1b53fc:
    // 0x1b53fc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1b53fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1b5400:
    // 0x1b5400: 0xc4411388  lwc1        $f1, 0x1388($v0)
    ctx->pc = 0x1b5400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b5404:
    // 0x1b5404: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x1b5404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
label_1b5408:
    // 0x1b5408: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b5408u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b540c:
    // 0x1b540c: 0x0  nop
    ctx->pc = 0x1b540cu;
    // NOP
label_1b5410:
    // 0x1b5410: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b5410u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b5414:
    // 0x1b5414: 0x0  nop
    ctx->pc = 0x1b5414u;
    // NOP
label_1b5418:
    // 0x1b5418: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1b541c:
    if (ctx->pc == 0x1B541Cu) {
        ctx->pc = 0x1B5420u;
        goto label_1b5420;
    }
    ctx->pc = 0x1B5418u;
    {
        const bool branch_taken_0x1b5418 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b5418) {
            ctx->pc = 0x1B5438u;
            goto label_1b5438;
        }
    }
    ctx->pc = 0x1B5420u;
label_1b5420:
    // 0x1b5420: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1b5420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1b5424:
    // 0x1b5424: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1b5424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1b5428:
    // 0x1b5428: 0x3c022800  lui         $v0, 0x2800
    ctx->pc = 0x1b5428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10240 << 16));
label_1b542c:
    // 0x1b542c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1b542cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1b5430:
    // 0x1b5430: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1b5434:
    if (ctx->pc == 0x1B5434u) {
        ctx->pc = 0x1B5438u;
        goto label_1b5438;
    }
    ctx->pc = 0x1B5430u;
    {
        const bool branch_taken_0x1b5430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5430) {
            ctx->pc = 0x1B543Cu;
            goto label_1b543c;
        }
    }
    ctx->pc = 0x1B5438u;
label_1b5438:
    // 0x1b5438: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1b5438u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1b543c:
    // 0x1b543c: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x1b543cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_1b5440:
    // 0x1b5440: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1b5440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1b5444:
    // 0x1b5444: 0x9042156c  lbu         $v0, 0x156C($v0)
    ctx->pc = 0x1b5444u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5484)));
label_1b5448:
    // 0x1b5448: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b5448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1b544c:
    // 0x1b544c: 0x10620065  beq         $v1, $v0, . + 4 + (0x65 << 2)
label_1b5450:
    if (ctx->pc == 0x1B5450u) {
        ctx->pc = 0x1B5454u;
        goto label_1b5454;
    }
    ctx->pc = 0x1B544Cu;
    {
        const bool branch_taken_0x1b544c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b544c) {
            ctx->pc = 0x1B55E4u;
            goto label_1b55e4;
        }
    }
    ctx->pc = 0x1B5454u;
label_1b5454:
    // 0x1b5454: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1b5454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1b5458:
    // 0x1b5458: 0x9042156c  lbu         $v0, 0x156C($v0)
    ctx->pc = 0x1b5458u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5484)));
label_1b545c:
    // 0x1b545c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1b545cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1b5460:
    // 0x1b5460: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1b5460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1b5464:
    // 0x1b5464: 0x1062003f  beq         $v1, $v0, . + 4 + (0x3F << 2)
label_1b5468:
    if (ctx->pc == 0x1B5468u) {
        ctx->pc = 0x1B546Cu;
        goto label_1b546c;
    }
    ctx->pc = 0x1B5464u;
    {
        const bool branch_taken_0x1b5464 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b5464) {
            ctx->pc = 0x1B5564u;
            goto label_1b5564;
        }
    }
    ctx->pc = 0x1B546Cu;
label_1b546c:
    // 0x1b546c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1b546cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1b5470:
    // 0x1b5470: 0x10620030  beq         $v1, $v0, . + 4 + (0x30 << 2)
label_1b5474:
    if (ctx->pc == 0x1B5474u) {
        ctx->pc = 0x1B5478u;
        goto label_1b5478;
    }
    ctx->pc = 0x1B5470u;
    {
        const bool branch_taken_0x1b5470 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b5470) {
            ctx->pc = 0x1B5534u;
            goto label_1b5534;
        }
    }
    ctx->pc = 0x1B5478u;
label_1b5478:
    // 0x1b5478: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b5478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b547c:
    // 0x1b547c: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
label_1b5480:
    if (ctx->pc == 0x1B5480u) {
        ctx->pc = 0x1B5484u;
        goto label_1b5484;
    }
    ctx->pc = 0x1B547Cu;
    {
        const bool branch_taken_0x1b547c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b547c) {
            ctx->pc = 0x1B5504u;
            goto label_1b5504;
        }
    }
    ctx->pc = 0x1B5484u;
label_1b5484:
    // 0x1b5484: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1b5484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1b5488:
    // 0x1b5488: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
label_1b548c:
    if (ctx->pc == 0x1B548Cu) {
        ctx->pc = 0x1B5490u;
        goto label_1b5490;
    }
    ctx->pc = 0x1B5488u;
    {
        const bool branch_taken_0x1b5488 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b5488) {
            ctx->pc = 0x1B54D4u;
            goto label_1b54d4;
        }
    }
    ctx->pc = 0x1B5490u;
label_1b5490:
    // 0x1b5490: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b5490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b5494:
    // 0x1b5494: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1b5498:
    if (ctx->pc == 0x1B5498u) {
        ctx->pc = 0x1B549Cu;
        goto label_1b549c;
    }
    ctx->pc = 0x1B5494u;
    {
        const bool branch_taken_0x1b5494 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b5494) {
            ctx->pc = 0x1B54A4u;
            goto label_1b54a4;
        }
    }
    ctx->pc = 0x1B549Cu;
label_1b549c:
    // 0x1b549c: 0x1000003b  b           . + 4 + (0x3B << 2)
label_1b54a0:
    if (ctx->pc == 0x1B54A0u) {
        ctx->pc = 0x1B54A4u;
        goto label_1b54a4;
    }
    ctx->pc = 0x1B549Cu;
    {
        const bool branch_taken_0x1b549c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b549c) {
            ctx->pc = 0x1B558Cu;
            goto label_1b558c;
        }
    }
    ctx->pc = 0x1B54A4u;
label_1b54a4:
    // 0x1b54a4: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x1b54a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_1b54a8:
    // 0x1b54a8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b54a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b54ac:
    // 0x1b54ac: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_1b54b0:
    if (ctx->pc == 0x1B54B0u) {
        ctx->pc = 0x1B54B4u;
        goto label_1b54b4;
    }
    ctx->pc = 0x1B54ACu;
    {
        const bool branch_taken_0x1b54ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b54ac) {
            ctx->pc = 0x1B54B8u;
            goto label_1b54b8;
        }
    }
    ctx->pc = 0x1B54B4u;
label_1b54b4:
    // 0x1b54b4: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1b54b4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1b54b8:
    // 0x1b54b8: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x1b54b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_1b54bc:
    // 0x1b54bc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1b54bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1b54c0:
    // 0x1b54c0: 0x14620032  bne         $v1, $v0, . + 4 + (0x32 << 2)
label_1b54c4:
    if (ctx->pc == 0x1B54C4u) {
        ctx->pc = 0x1B54C8u;
        goto label_1b54c8;
    }
    ctx->pc = 0x1B54C0u;
    {
        const bool branch_taken_0x1b54c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b54c0) {
            ctx->pc = 0x1B558Cu;
            goto label_1b558c;
        }
    }
    ctx->pc = 0x1B54C8u;
label_1b54c8:
    // 0x1b54c8: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1b54c8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1b54cc:
    // 0x1b54cc: 0x1000002f  b           . + 4 + (0x2F << 2)
label_1b54d0:
    if (ctx->pc == 0x1B54D0u) {
        ctx->pc = 0x1B54D4u;
        goto label_1b54d4;
    }
    ctx->pc = 0x1B54CCu;
    {
        const bool branch_taken_0x1b54cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b54cc) {
            ctx->pc = 0x1B558Cu;
            goto label_1b558c;
        }
    }
    ctx->pc = 0x1B54D4u;
label_1b54d4:
    // 0x1b54d4: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x1b54d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_1b54d8:
    // 0x1b54d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b54d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b54dc:
    // 0x1b54dc: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_1b54e0:
    if (ctx->pc == 0x1B54E0u) {
        ctx->pc = 0x1B54E4u;
        goto label_1b54e4;
    }
    ctx->pc = 0x1B54DCu;
    {
        const bool branch_taken_0x1b54dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b54dc) {
            ctx->pc = 0x1B54E8u;
            goto label_1b54e8;
        }
    }
    ctx->pc = 0x1B54E4u;
label_1b54e4:
    // 0x1b54e4: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1b54e4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1b54e8:
    // 0x1b54e8: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x1b54e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_1b54ec:
    // 0x1b54ec: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1b54ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1b54f0:
    // 0x1b54f0: 0x14620026  bne         $v1, $v0, . + 4 + (0x26 << 2)
label_1b54f4:
    if (ctx->pc == 0x1B54F4u) {
        ctx->pc = 0x1B54F8u;
        goto label_1b54f8;
    }
    ctx->pc = 0x1B54F0u;
    {
        const bool branch_taken_0x1b54f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b54f0) {
            ctx->pc = 0x1B558Cu;
            goto label_1b558c;
        }
    }
    ctx->pc = 0x1B54F8u;
label_1b54f8:
    // 0x1b54f8: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1b54f8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1b54fc:
    // 0x1b54fc: 0x10000023  b           . + 4 + (0x23 << 2)
label_1b5500:
    if (ctx->pc == 0x1B5500u) {
        ctx->pc = 0x1B5504u;
        goto label_1b5504;
    }
    ctx->pc = 0x1B54FCu;
    {
        const bool branch_taken_0x1b54fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b54fc) {
            ctx->pc = 0x1B558Cu;
            goto label_1b558c;
        }
    }
    ctx->pc = 0x1B5504u;
label_1b5504:
    // 0x1b5504: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x1b5504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_1b5508:
    // 0x1b5508: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b5508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b550c:
    // 0x1b550c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_1b5510:
    if (ctx->pc == 0x1B5510u) {
        ctx->pc = 0x1B5514u;
        goto label_1b5514;
    }
    ctx->pc = 0x1B550Cu;
    {
        const bool branch_taken_0x1b550c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b550c) {
            ctx->pc = 0x1B5518u;
            goto label_1b5518;
        }
    }
    ctx->pc = 0x1B5514u;
label_1b5514:
    // 0x1b5514: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1b5514u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1b5518:
    // 0x1b5518: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x1b5518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_1b551c:
    // 0x1b551c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1b551cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1b5520:
    // 0x1b5520: 0x1462001a  bne         $v1, $v0, . + 4 + (0x1A << 2)
label_1b5524:
    if (ctx->pc == 0x1B5524u) {
        ctx->pc = 0x1B5528u;
        goto label_1b5528;
    }
    ctx->pc = 0x1B5520u;
    {
        const bool branch_taken_0x1b5520 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b5520) {
            ctx->pc = 0x1B558Cu;
            goto label_1b558c;
        }
    }
    ctx->pc = 0x1B5528u;
label_1b5528:
    // 0x1b5528: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1b5528u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1b552c:
    // 0x1b552c: 0x10000017  b           . + 4 + (0x17 << 2)
label_1b5530:
    if (ctx->pc == 0x1B5530u) {
        ctx->pc = 0x1B5534u;
        goto label_1b5534;
    }
    ctx->pc = 0x1B552Cu;
    {
        const bool branch_taken_0x1b552c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b552c) {
            ctx->pc = 0x1B558Cu;
            goto label_1b558c;
        }
    }
    ctx->pc = 0x1B5534u;
label_1b5534:
    // 0x1b5534: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x1b5534u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_1b5538:
    // 0x1b5538: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1b5538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1b553c:
    // 0x1b553c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_1b5540:
    if (ctx->pc == 0x1B5540u) {
        ctx->pc = 0x1B5544u;
        goto label_1b5544;
    }
    ctx->pc = 0x1B553Cu;
    {
        const bool branch_taken_0x1b553c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b553c) {
            ctx->pc = 0x1B5548u;
            goto label_1b5548;
        }
    }
    ctx->pc = 0x1B5544u;
label_1b5544:
    // 0x1b5544: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1b5544u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1b5548:
    // 0x1b5548: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x1b5548u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_1b554c:
    // 0x1b554c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1b554cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1b5550:
    // 0x1b5550: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
label_1b5554:
    if (ctx->pc == 0x1B5554u) {
        ctx->pc = 0x1B5558u;
        goto label_1b5558;
    }
    ctx->pc = 0x1B5550u;
    {
        const bool branch_taken_0x1b5550 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b5550) {
            ctx->pc = 0x1B558Cu;
            goto label_1b558c;
        }
    }
    ctx->pc = 0x1B5558u;
label_1b5558:
    // 0x1b5558: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1b5558u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1b555c:
    // 0x1b555c: 0x1000000b  b           . + 4 + (0xB << 2)
label_1b5560:
    if (ctx->pc == 0x1B5560u) {
        ctx->pc = 0x1B5564u;
        goto label_1b5564;
    }
    ctx->pc = 0x1B555Cu;
    {
        const bool branch_taken_0x1b555c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b555c) {
            ctx->pc = 0x1B558Cu;
            goto label_1b558c;
        }
    }
    ctx->pc = 0x1B5564u;
label_1b5564:
    // 0x1b5564: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x1b5564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_1b5568:
    // 0x1b5568: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1b5568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1b556c:
    // 0x1b556c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_1b5570:
    if (ctx->pc == 0x1B5570u) {
        ctx->pc = 0x1B5574u;
        goto label_1b5574;
    }
    ctx->pc = 0x1B556Cu;
    {
        const bool branch_taken_0x1b556c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b556c) {
            ctx->pc = 0x1B5578u;
            goto label_1b5578;
        }
    }
    ctx->pc = 0x1B5574u;
label_1b5574:
    // 0x1b5574: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1b5574u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1b5578:
    // 0x1b5578: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x1b5578u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_1b557c:
    // 0x1b557c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b557cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b5580:
    // 0x1b5580: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_1b5584:
    if (ctx->pc == 0x1B5584u) {
        ctx->pc = 0x1B5588u;
        goto label_1b5588;
    }
    ctx->pc = 0x1B5580u;
    {
        const bool branch_taken_0x1b5580 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b5580) {
            ctx->pc = 0x1B558Cu;
            goto label_1b558c;
        }
    }
    ctx->pc = 0x1B5588u;
label_1b5588:
    // 0x1b5588: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1b5588u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1b558c:
    // 0x1b558c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1b558cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1b5590:
    // 0x1b5590: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1b5590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1b5594:
    // 0x1b5594: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x1b5594u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
label_1b5598:
    // 0x1b5598: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1b5598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1b559c:
    // 0x1b559c: 0xa050156c  sb          $s0, 0x156C($v0)
    ctx->pc = 0x1b559cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5484), (uint8_t)GPR_U32(ctx, 16));
label_1b55a0:
    // 0x1b55a0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1b55a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1b55a4:
    // 0x1b55a4: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x1b55a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
label_1b55a8:
    // 0x1b55a8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1b55a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1b55ac:
    // 0x1b55ac: 0x8c4213e8  lw          $v0, 0x13E8($v0)
    ctx->pc = 0x1b55acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5096)));
label_1b55b0:
    // 0x1b55b0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_1b55b4:
    if (ctx->pc == 0x1B55B4u) {
        ctx->pc = 0x1B55B8u;
        goto label_1b55b8;
    }
    ctx->pc = 0x1B55B0u;
    {
        const bool branch_taken_0x1b55b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b55b0) {
            ctx->pc = 0x1B55D8u;
            goto label_1b55d8;
        }
    }
    ctx->pc = 0x1B55B8u;
label_1b55b8:
    // 0x1b55b8: 0x8e220090  lw          $v0, 0x90($s1)
    ctx->pc = 0x1b55b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_1b55bc:
    // 0x1b55bc: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1b55bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_1b55c0:
    // 0x1b55c0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1b55c4:
    if (ctx->pc == 0x1B55C4u) {
        ctx->pc = 0x1B55C8u;
        goto label_1b55c8;
    }
    ctx->pc = 0x1B55C0u;
    {
        const bool branch_taken_0x1b55c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b55c0) {
            ctx->pc = 0x1B55D8u;
            goto label_1b55d8;
        }
    }
    ctx->pc = 0x1B55C8u;
label_1b55c8:
    // 0x1b55c8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1b55c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1b55cc:
    // 0x1b55cc: 0xa040156d  sb          $zero, 0x156D($v0)
    ctx->pc = 0x1b55ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5485), (uint8_t)GPR_U32(ctx, 0));
label_1b55d0:
    // 0x1b55d0: 0x10000004  b           . + 4 + (0x4 << 2)
label_1b55d4:
    if (ctx->pc == 0x1B55D4u) {
        ctx->pc = 0x1B55D8u;
        goto label_1b55d8;
    }
    ctx->pc = 0x1B55D0u;
    {
        const bool branch_taken_0x1b55d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b55d0) {
            ctx->pc = 0x1B55E4u;
            goto label_1b55e4;
        }
    }
    ctx->pc = 0x1B55D8u;
label_1b55d8:
    // 0x1b55d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b55d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b55dc:
    // 0x1b55dc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1b55dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1b55e0:
    // 0x1b55e0: 0xa043156d  sb          $v1, 0x156D($v0)
    ctx->pc = 0x1b55e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5485), (uint8_t)GPR_U32(ctx, 3));
label_1b55e4:
    // 0x1b55e4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1b55e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1b55e8:
    // 0x1b55e8: 0xc058aa4  jal         func_162A90
label_1b55ec:
    if (ctx->pc == 0x1B55ECu) {
        ctx->pc = 0x1B55F0u;
        goto label_1b55f0;
    }
    ctx->pc = 0x1B55E8u;
    SET_GPR_U32(ctx, 31, 0x1B55F0u);
    ctx->pc = 0x162A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162A90u, 0x1B55E8u, 0x1B55F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B55F0u;
label_1b55f0:
    // 0x1b55f0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1b55f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1b55f4:
    // 0x1b55f4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1b55f4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_1b55f8:
    // 0x1b55f8: 0xc057274  jal         func_15C9D0
label_1b55fc:
    if (ctx->pc == 0x1B55FCu) {
        ctx->pc = 0x1B5600u;
        goto label_1b5600;
    }
    ctx->pc = 0x1B55F8u;
    SET_GPR_U32(ctx, 31, 0x1B5600u);
    ctx->pc = 0x15C9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C9D0u, 0x1B55F8u, 0x1B5600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5600u;
label_1b5600:
    // 0x1b5600: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1b5600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1b5604:
    // 0x1b5604: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1b5604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1b5608:
    // 0x1b5608: 0x9042156c  lbu         $v0, 0x156C($v0)
    ctx->pc = 0x1b5608u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5484)));
label_1b560c:
    // 0x1b560c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1b560cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1b5610:
    // 0x1b5610: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1b5610u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1b5614:
    // 0x1b5614: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b5614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1b5618:
    // 0x1b5618: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1b5618u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1b561c:
    // 0x1b561c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1b561cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_1b5620:
    // 0x1b5620: 0x24429040  addiu       $v0, $v0, -0x6FC0
    ctx->pc = 0x1b5620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938688));
label_1b5624:
    // 0x1b5624: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1b5624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1b5628:
    // 0x1b5628: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1b5628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1b562c:
    // 0x1b562c: 0x9042156d  lbu         $v0, 0x156D($v0)
    ctx->pc = 0x1b562cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5485)));
label_1b5630:
    // 0x1b5630: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b5630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1b5634:
    // 0x1b5634: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b5634u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1b5638:
    // 0x1b5638: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b5638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1b563c:
    // 0x1b563c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b563cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1b5640:
    // 0x1b5640: 0x40f809  jalr        $v0
label_1b5644:
    if (ctx->pc == 0x1B5644u) {
        ctx->pc = 0x1B5648u;
        goto label_1b5648;
    }
    ctx->pc = 0x1B5640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B5648u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5640u, 0x1B5648u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B5648u;
label_1b5648:
    // 0x1b5648: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1b5648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1b564c:
    // 0x1b564c: 0xc4601568  lwc1        $f0, 0x1568($v1)
    ctx->pc = 0x1b564cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b5650:
    // 0x1b5650: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1b5650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1b5654:
    // 0x1b5654: 0xe4601570  swc1        $f0, 0x1570($v1)
    ctx->pc = 0x1b5654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5488), bits); }
label_1b5658:
    // 0x1b5658: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1b5658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1b565c:
    // 0x1b565c: 0x8463127a  lh          $v1, 0x127A($v1)
    ctx->pc = 0x1b565cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
label_1b5660:
    // 0x1b5660: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_1b5664:
    if (ctx->pc == 0x1B5664u) {
        ctx->pc = 0x1B5668u;
        goto label_1b5668;
    }
    ctx->pc = 0x1B5660u;
    {
        const bool branch_taken_0x1b5660 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5660) {
            ctx->pc = 0x1B5678u;
            goto label_1b5678;
        }
    }
    ctx->pc = 0x1B5668u;
label_1b5668:
    // 0x1b5668: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1b5668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1b566c:
    // 0x1b566c: 0x8483127a  lh          $v1, 0x127A($a0)
    ctx->pc = 0x1b566cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4730)));
label_1b5670:
    // 0x1b5670: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1b5670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1b5674:
    // 0x1b5674: 0xa483127a  sh          $v1, 0x127A($a0)
    ctx->pc = 0x1b5674u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4730), (uint16_t)GPR_U32(ctx, 3));
label_1b5678:
    // 0x1b5678: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1b5678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1b567c:
    // 0x1b567c: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1b567cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1b5680:
    // 0x1b5680: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1b5680u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
label_1b5684:
    // 0x1b5684: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1b5684u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1b5688:
    // 0x1b5688: 0x14600042  bnez        $v1, . + 4 + (0x42 << 2)
label_1b568c:
    if (ctx->pc == 0x1B568Cu) {
        ctx->pc = 0x1B5690u;
        goto label_1b5690;
    }
    ctx->pc = 0x1B5688u;
    {
        const bool branch_taken_0x1b5688 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b5688) {
            ctx->pc = 0x1B5794u;
            goto label_1b5794;
        }
    }
    ctx->pc = 0x1B5690u;
label_1b5690:
    // 0x1b5690: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1b5690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1b5694:
    // 0x1b5694: 0x8463127a  lh          $v1, 0x127A($v1)
    ctx->pc = 0x1b5694u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
label_1b5698:
    // 0x1b5698: 0x1460003e  bnez        $v1, . + 4 + (0x3E << 2)
label_1b569c:
    if (ctx->pc == 0x1B569Cu) {
        ctx->pc = 0x1B56A0u;
        goto label_1b56a0;
    }
    ctx->pc = 0x1B5698u;
    {
        const bool branch_taken_0x1b5698 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b5698) {
            ctx->pc = 0x1B5794u;
            goto label_1b5794;
        }
    }
    ctx->pc = 0x1B56A0u;
label_1b56a0:
    // 0x1b56a0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1b56a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1b56a4:
    // 0x1b56a4: 0x9063156d  lbu         $v1, 0x156D($v1)
    ctx->pc = 0x1b56a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5485)));
label_1b56a8:
    // 0x1b56a8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1b56a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1b56ac:
    // 0x1b56ac: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1b56acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b56b0:
    // 0x1b56b0: 0x1083001f  beq         $a0, $v1, . + 4 + (0x1F << 2)
label_1b56b4:
    if (ctx->pc == 0x1B56B4u) {
        ctx->pc = 0x1B56B8u;
        goto label_1b56b8;
    }
    ctx->pc = 0x1B56B0u;
    {
        const bool branch_taken_0x1b56b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1b56b0) {
            ctx->pc = 0x1B5730u;
            goto label_1b5730;
        }
    }
    ctx->pc = 0x1B56B8u;
label_1b56b8:
    // 0x1b56b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b56b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b56bc:
    // 0x1b56bc: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
label_1b56c0:
    if (ctx->pc == 0x1B56C0u) {
        ctx->pc = 0x1B56C4u;
        goto label_1b56c4;
    }
    ctx->pc = 0x1B56BCu;
    {
        const bool branch_taken_0x1b56bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1b56bc) {
            ctx->pc = 0x1B56D4u;
            goto label_1b56d4;
        }
    }
    ctx->pc = 0x1B56C4u;
label_1b56c4:
    // 0x1b56c4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_1b56c8:
    if (ctx->pc == 0x1B56C8u) {
        ctx->pc = 0x1B56CCu;
        goto label_1b56cc;
    }
    ctx->pc = 0x1B56C4u;
    {
        const bool branch_taken_0x1b56c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b56c4) {
            ctx->pc = 0x1B56D4u;
            goto label_1b56d4;
        }
    }
    ctx->pc = 0x1B56CCu;
label_1b56cc:
    // 0x1b56cc: 0x10000031  b           . + 4 + (0x31 << 2)
label_1b56d0:
    if (ctx->pc == 0x1B56D0u) {
        ctx->pc = 0x1B56D4u;
        goto label_1b56d4;
    }
    ctx->pc = 0x1B56CCu;
    {
        const bool branch_taken_0x1b56cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b56cc) {
            ctx->pc = 0x1B5794u;
            goto label_1b5794;
        }
    }
    ctx->pc = 0x1B56D4u;
label_1b56d4:
    // 0x1b56d4: 0xc057acc  jal         func_15EB30
label_1b56d8:
    if (ctx->pc == 0x1B56D8u) {
        ctx->pc = 0x1B56DCu;
        goto label_1b56dc;
    }
    ctx->pc = 0x1B56D4u;
    SET_GPR_U32(ctx, 31, 0x1B56DCu);
    ctx->pc = 0x15EB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EB30u, 0x1B56D4u, 0x1B56DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B56DCu;
label_1b56dc:
    // 0x1b56dc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1b56e0:
    if (ctx->pc == 0x1B56E0u) {
        ctx->pc = 0x1B56E4u;
        goto label_1b56e4;
    }
    ctx->pc = 0x1B56DCu;
    {
        const bool branch_taken_0x1b56dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b56dc) {
            ctx->pc = 0x1B56F8u;
            goto label_1b56f8;
        }
    }
    ctx->pc = 0x1B56E4u;
label_1b56e4:
    // 0x1b56e4: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1b56e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1b56e8:
    // 0x1b56e8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1b56e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1b56ec:
    // 0x1b56ec: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1b56ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_1b56f0:
    // 0x1b56f0: 0x10000028  b           . + 4 + (0x28 << 2)
label_1b56f4:
    if (ctx->pc == 0x1B56F4u) {
        ctx->pc = 0x1B56F8u;
        goto label_1b56f8;
    }
    ctx->pc = 0x1B56F0u;
    {
        const bool branch_taken_0x1b56f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b56f0) {
            ctx->pc = 0x1B5794u;
            goto label_1b5794;
        }
    }
    ctx->pc = 0x1B56F8u;
label_1b56f8:
    // 0x1b56f8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b56f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b56fc:
    // 0x1b56fc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1b56fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1b5700:
    // 0x1b5700: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1b5700u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_1b5704:
    // 0x1b5704: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1b5704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1b5708:
    // 0x1b5708: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x1b5708u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
label_1b570c:
    // 0x1b570c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1b570cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1b5710:
    // 0x1b5710: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1b5710u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_1b5714:
    // 0x1b5714: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1b5714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1b5718:
    // 0x1b5718: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1b5718u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1b571c:
    // 0x1b571c: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x1b571cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1b5720:
    // 0x1b5720: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1b5720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1b5724:
    // 0x1b5724: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1b5724u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_1b5728:
    // 0x1b5728: 0x1000001a  b           . + 4 + (0x1A << 2)
label_1b572c:
    if (ctx->pc == 0x1B572Cu) {
        ctx->pc = 0x1B5730u;
        goto label_1b5730;
    }
    ctx->pc = 0x1B5728u;
    {
        const bool branch_taken_0x1b5728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5728) {
            ctx->pc = 0x1B5794u;
            goto label_1b5794;
        }
    }
    ctx->pc = 0x1B5730u;
label_1b5730:
    // 0x1b5730: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1b5730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1b5734:
    // 0x1b5734: 0x8463127c  lh          $v1, 0x127C($v1)
    ctx->pc = 0x1b5734u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
label_1b5738:
    // 0x1b5738: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
label_1b573c:
    if (ctx->pc == 0x1B573Cu) {
        ctx->pc = 0x1B5740u;
        goto label_1b5740;
    }
    ctx->pc = 0x1B5738u;
    {
        const bool branch_taken_0x1b5738 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b5738) {
            ctx->pc = 0x1B5794u;
            goto label_1b5794;
        }
    }
    ctx->pc = 0x1B5740u;
label_1b5740:
    // 0x1b5740: 0xc057acc  jal         func_15EB30
label_1b5744:
    if (ctx->pc == 0x1B5744u) {
        ctx->pc = 0x1B5748u;
        goto label_1b5748;
    }
    ctx->pc = 0x1B5740u;
    SET_GPR_U32(ctx, 31, 0x1B5748u);
    ctx->pc = 0x15EB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EB30u, 0x1B5740u, 0x1B5748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5748u;
label_1b5748:
    // 0x1b5748: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1b574c:
    if (ctx->pc == 0x1B574Cu) {
        ctx->pc = 0x1B5750u;
        goto label_1b5750;
    }
    ctx->pc = 0x1B5748u;
    {
        const bool branch_taken_0x1b5748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5748) {
            ctx->pc = 0x1B5764u;
            goto label_1b5764;
        }
    }
    ctx->pc = 0x1B5750u;
label_1b5750:
    // 0x1b5750: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1b5750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1b5754:
    // 0x1b5754: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1b5754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1b5758:
    // 0x1b5758: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1b5758u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_1b575c:
    // 0x1b575c: 0x1000000d  b           . + 4 + (0xD << 2)
label_1b5760:
    if (ctx->pc == 0x1B5760u) {
        ctx->pc = 0x1B5764u;
        goto label_1b5764;
    }
    ctx->pc = 0x1B575Cu;
    {
        const bool branch_taken_0x1b575c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b575c) {
            ctx->pc = 0x1B5794u;
            goto label_1b5794;
        }
    }
    ctx->pc = 0x1B5764u;
label_1b5764:
    // 0x1b5764: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b5764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b5768:
    // 0x1b5768: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1b5768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1b576c:
    // 0x1b576c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1b576cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_1b5770:
    // 0x1b5770: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1b5770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1b5774:
    // 0x1b5774: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x1b5774u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
label_1b5778:
    // 0x1b5778: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1b5778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1b577c:
    // 0x1b577c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1b577cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_1b5780:
    // 0x1b5780: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1b5780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1b5784:
    // 0x1b5784: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1b5784u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_1b5788:
    // 0x1b5788: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x1b5788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1b578c:
    // 0x1b578c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1b578cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1b5790:
    // 0x1b5790: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1b5790u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_1b5794:
    // 0x1b5794: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x1b5794u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b5798:
    // 0x1b5798: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b5798u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b579c:
    // 0x1b579c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b579cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1b57a0:
    // 0x1b57a0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1b57a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1b57a4:
    // 0x1b57a4: 0x3e00008  jr          $ra
label_1b57a8:
    if (ctx->pc == 0x1B57A8u) {
        ctx->pc = 0x1B57ACu;
        goto label_fallthrough_0x1b57a4;
    }
    ctx->pc = 0x1B57A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B57A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1b57a4:
    ctx->pc = 0x1B57ACu;
}
