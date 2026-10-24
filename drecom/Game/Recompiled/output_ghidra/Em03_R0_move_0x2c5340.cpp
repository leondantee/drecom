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

// Function: Em03_R0_move
// Address: 0x2c5340 - 0x2c5640
void Em03_R0_move_0x2c5340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em03_R0_move_0x2c5340");
#endif

    switch (ctx->pc) {
        case 0x2c5340u: goto label_2c5340;
        case 0x2c5344u: goto label_2c5344;
        case 0x2c5348u: goto label_2c5348;
        case 0x2c534cu: goto label_2c534c;
        case 0x2c5350u: goto label_2c5350;
        case 0x2c5354u: goto label_2c5354;
        case 0x2c5358u: goto label_2c5358;
        case 0x2c535cu: goto label_2c535c;
        case 0x2c5360u: goto label_2c5360;
        case 0x2c5364u: goto label_2c5364;
        case 0x2c5368u: goto label_2c5368;
        case 0x2c536cu: goto label_2c536c;
        case 0x2c5370u: goto label_2c5370;
        case 0x2c5374u: goto label_2c5374;
        case 0x2c5378u: goto label_2c5378;
        case 0x2c537cu: goto label_2c537c;
        case 0x2c5380u: goto label_2c5380;
        case 0x2c5384u: goto label_2c5384;
        case 0x2c5388u: goto label_2c5388;
        case 0x2c538cu: goto label_2c538c;
        case 0x2c5390u: goto label_2c5390;
        case 0x2c5394u: goto label_2c5394;
        case 0x2c5398u: goto label_2c5398;
        case 0x2c539cu: goto label_2c539c;
        case 0x2c53a0u: goto label_2c53a0;
        case 0x2c53a4u: goto label_2c53a4;
        case 0x2c53a8u: goto label_2c53a8;
        case 0x2c53acu: goto label_2c53ac;
        case 0x2c53b0u: goto label_2c53b0;
        case 0x2c53b4u: goto label_2c53b4;
        case 0x2c53b8u: goto label_2c53b8;
        case 0x2c53bcu: goto label_2c53bc;
        case 0x2c53c0u: goto label_2c53c0;
        case 0x2c53c4u: goto label_2c53c4;
        case 0x2c53c8u: goto label_2c53c8;
        case 0x2c53ccu: goto label_2c53cc;
        case 0x2c53d0u: goto label_2c53d0;
        case 0x2c53d4u: goto label_2c53d4;
        case 0x2c53d8u: goto label_2c53d8;
        case 0x2c53dcu: goto label_2c53dc;
        case 0x2c53e0u: goto label_2c53e0;
        case 0x2c53e4u: goto label_2c53e4;
        case 0x2c53e8u: goto label_2c53e8;
        case 0x2c53ecu: goto label_2c53ec;
        case 0x2c53f0u: goto label_2c53f0;
        case 0x2c53f4u: goto label_2c53f4;
        case 0x2c53f8u: goto label_2c53f8;
        case 0x2c53fcu: goto label_2c53fc;
        case 0x2c5400u: goto label_2c5400;
        case 0x2c5404u: goto label_2c5404;
        case 0x2c5408u: goto label_2c5408;
        case 0x2c540cu: goto label_2c540c;
        case 0x2c5410u: goto label_2c5410;
        case 0x2c5414u: goto label_2c5414;
        case 0x2c5418u: goto label_2c5418;
        case 0x2c541cu: goto label_2c541c;
        case 0x2c5420u: goto label_2c5420;
        case 0x2c5424u: goto label_2c5424;
        case 0x2c5428u: goto label_2c5428;
        case 0x2c542cu: goto label_2c542c;
        case 0x2c5430u: goto label_2c5430;
        case 0x2c5434u: goto label_2c5434;
        case 0x2c5438u: goto label_2c5438;
        case 0x2c543cu: goto label_2c543c;
        case 0x2c5440u: goto label_2c5440;
        case 0x2c5444u: goto label_2c5444;
        case 0x2c5448u: goto label_2c5448;
        case 0x2c544cu: goto label_2c544c;
        case 0x2c5450u: goto label_2c5450;
        case 0x2c5454u: goto label_2c5454;
        case 0x2c5458u: goto label_2c5458;
        case 0x2c545cu: goto label_2c545c;
        case 0x2c5460u: goto label_2c5460;
        case 0x2c5464u: goto label_2c5464;
        case 0x2c5468u: goto label_2c5468;
        case 0x2c546cu: goto label_2c546c;
        case 0x2c5470u: goto label_2c5470;
        case 0x2c5474u: goto label_2c5474;
        case 0x2c5478u: goto label_2c5478;
        case 0x2c547cu: goto label_2c547c;
        case 0x2c5480u: goto label_2c5480;
        case 0x2c5484u: goto label_2c5484;
        case 0x2c5488u: goto label_2c5488;
        case 0x2c548cu: goto label_2c548c;
        case 0x2c5490u: goto label_2c5490;
        case 0x2c5494u: goto label_2c5494;
        case 0x2c5498u: goto label_2c5498;
        case 0x2c549cu: goto label_2c549c;
        case 0x2c54a0u: goto label_2c54a0;
        case 0x2c54a4u: goto label_2c54a4;
        case 0x2c54a8u: goto label_2c54a8;
        case 0x2c54acu: goto label_2c54ac;
        case 0x2c54b0u: goto label_2c54b0;
        case 0x2c54b4u: goto label_2c54b4;
        case 0x2c54b8u: goto label_2c54b8;
        case 0x2c54bcu: goto label_2c54bc;
        case 0x2c54c0u: goto label_2c54c0;
        case 0x2c54c4u: goto label_2c54c4;
        case 0x2c54c8u: goto label_2c54c8;
        case 0x2c54ccu: goto label_2c54cc;
        case 0x2c54d0u: goto label_2c54d0;
        case 0x2c54d4u: goto label_2c54d4;
        case 0x2c54d8u: goto label_2c54d8;
        case 0x2c54dcu: goto label_2c54dc;
        case 0x2c54e0u: goto label_2c54e0;
        case 0x2c54e4u: goto label_2c54e4;
        case 0x2c54e8u: goto label_2c54e8;
        case 0x2c54ecu: goto label_2c54ec;
        case 0x2c54f0u: goto label_2c54f0;
        case 0x2c54f4u: goto label_2c54f4;
        case 0x2c54f8u: goto label_2c54f8;
        case 0x2c54fcu: goto label_2c54fc;
        case 0x2c5500u: goto label_2c5500;
        case 0x2c5504u: goto label_2c5504;
        case 0x2c5508u: goto label_2c5508;
        case 0x2c550cu: goto label_2c550c;
        case 0x2c5510u: goto label_2c5510;
        case 0x2c5514u: goto label_2c5514;
        case 0x2c5518u: goto label_2c5518;
        case 0x2c551cu: goto label_2c551c;
        case 0x2c5520u: goto label_2c5520;
        case 0x2c5524u: goto label_2c5524;
        case 0x2c5528u: goto label_2c5528;
        case 0x2c552cu: goto label_2c552c;
        case 0x2c5530u: goto label_2c5530;
        case 0x2c5534u: goto label_2c5534;
        case 0x2c5538u: goto label_2c5538;
        case 0x2c553cu: goto label_2c553c;
        case 0x2c5540u: goto label_2c5540;
        case 0x2c5544u: goto label_2c5544;
        case 0x2c5548u: goto label_2c5548;
        case 0x2c554cu: goto label_2c554c;
        case 0x2c5550u: goto label_2c5550;
        case 0x2c5554u: goto label_2c5554;
        case 0x2c5558u: goto label_2c5558;
        case 0x2c555cu: goto label_2c555c;
        case 0x2c5560u: goto label_2c5560;
        case 0x2c5564u: goto label_2c5564;
        case 0x2c5568u: goto label_2c5568;
        case 0x2c556cu: goto label_2c556c;
        case 0x2c5570u: goto label_2c5570;
        case 0x2c5574u: goto label_2c5574;
        case 0x2c5578u: goto label_2c5578;
        case 0x2c557cu: goto label_2c557c;
        case 0x2c5580u: goto label_2c5580;
        case 0x2c5584u: goto label_2c5584;
        case 0x2c5588u: goto label_2c5588;
        case 0x2c558cu: goto label_2c558c;
        case 0x2c5590u: goto label_2c5590;
        case 0x2c5594u: goto label_2c5594;
        case 0x2c5598u: goto label_2c5598;
        case 0x2c559cu: goto label_2c559c;
        case 0x2c55a0u: goto label_2c55a0;
        case 0x2c55a4u: goto label_2c55a4;
        case 0x2c55a8u: goto label_2c55a8;
        case 0x2c55acu: goto label_2c55ac;
        case 0x2c55b0u: goto label_2c55b0;
        case 0x2c55b4u: goto label_2c55b4;
        case 0x2c55b8u: goto label_2c55b8;
        case 0x2c55bcu: goto label_2c55bc;
        case 0x2c55c0u: goto label_2c55c0;
        case 0x2c55c4u: goto label_2c55c4;
        case 0x2c55c8u: goto label_2c55c8;
        case 0x2c55ccu: goto label_2c55cc;
        case 0x2c55d0u: goto label_2c55d0;
        case 0x2c55d4u: goto label_2c55d4;
        case 0x2c55d8u: goto label_2c55d8;
        case 0x2c55dcu: goto label_2c55dc;
        case 0x2c55e0u: goto label_2c55e0;
        case 0x2c55e4u: goto label_2c55e4;
        case 0x2c55e8u: goto label_2c55e8;
        case 0x2c55ecu: goto label_2c55ec;
        case 0x2c55f0u: goto label_2c55f0;
        case 0x2c55f4u: goto label_2c55f4;
        case 0x2c55f8u: goto label_2c55f8;
        case 0x2c55fcu: goto label_2c55fc;
        case 0x2c5600u: goto label_2c5600;
        case 0x2c5604u: goto label_2c5604;
        case 0x2c5608u: goto label_2c5608;
        case 0x2c560cu: goto label_2c560c;
        case 0x2c5610u: goto label_2c5610;
        case 0x2c5614u: goto label_2c5614;
        case 0x2c5618u: goto label_2c5618;
        case 0x2c561cu: goto label_2c561c;
        case 0x2c5620u: goto label_2c5620;
        case 0x2c5624u: goto label_2c5624;
        case 0x2c5628u: goto label_2c5628;
        case 0x2c562cu: goto label_2c562c;
        case 0x2c5630u: goto label_2c5630;
        case 0x2c5634u: goto label_2c5634;
        case 0x2c5638u: goto label_2c5638;
        case 0x2c563cu: goto label_2c563c;
        default: break;
    }

    ctx->pc = 0x2c5340u;

label_2c5340:
    // 0x2c5340: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2c5340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2c5344:
    // 0x2c5344: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x2c5344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
label_2c5348:
    // 0x2c5348: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c5348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2c534c:
    // 0x2c534c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c534cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2c5350:
    // 0x2c5350: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c5350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2c5354:
    // 0x2c5354: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x2c5354u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
label_2c5358:
    // 0x2c5358: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2c5358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_2c535c:
    // 0x2c535c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c535cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2c5360:
    // 0x2c5360: 0x0  nop
    ctx->pc = 0x2c5360u;
    // NOP
label_2c5364:
    // 0x2c5364: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x2c5364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_2c5368:
    // 0x2c5368: 0x24100064  addiu       $s0, $zero, 0x64
    ctx->pc = 0x2c5368u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2c536c:
    // 0x2c536c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2c536cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2c5370:
    // 0x2c5370: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2c5370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2c5374:
    // 0x2c5374: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x2c5374u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_2c5378:
    // 0x2c5378: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c5378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2c537c:
    // 0x2c537c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2c537cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2c5380:
    // 0x2c5380: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2c5380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_2c5384:
    // 0x2c5384: 0x24428090  addiu       $v0, $v0, -0x7F70
    ctx->pc = 0x2c5384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934672));
label_2c5388:
    // 0x2c5388: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c5388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2c538c:
    // 0x2c538c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c538cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2c5390:
    // 0x2c5390: 0x40f809  jalr        $v0
label_2c5394:
    if (ctx->pc == 0x2C5394u) {
        ctx->pc = 0x2C5398u;
        goto label_2c5398;
    }
    ctx->pc = 0x2C5390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C5398u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C5390u, 0x2C5398u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C5398u;
label_2c5398:
    // 0x2c5398: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2c5398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2c539c:
    // 0x2c539c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2c539cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2c53a0:
    // 0x2c53a0: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x2c53a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_2c53a4:
    // 0x2c53a4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c53a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2c53a8:
    // 0x2c53a8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2c53a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2c53ac:
    // 0x2c53ac: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2c53acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_2c53b0:
    // 0x2c53b0: 0x244280c0  addiu       $v0, $v0, -0x7F40
    ctx->pc = 0x2c53b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934720));
label_2c53b4:
    // 0x2c53b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c53b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2c53b8:
    // 0x2c53b8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c53b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2c53bc:
    // 0x2c53bc: 0x40f809  jalr        $v0
label_2c53c0:
    if (ctx->pc == 0x2C53C0u) {
        ctx->pc = 0x2C53C4u;
        goto label_2c53c4;
    }
    ctx->pc = 0x2C53BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C53C4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C53BCu, 0x2C53C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C53C4u;
label_2c53c4:
    // 0x2c53c4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2c53c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2c53c8:
    // 0x2c53c8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c53c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2c53cc:
    // 0x2c53cc: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x2c53ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_2c53d0:
    // 0x2c53d0: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2c53d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_2c53d4:
    // 0x2c53d4: 0x14400067  bnez        $v0, . + 4 + (0x67 << 2)
label_2c53d8:
    if (ctx->pc == 0x2C53D8u) {
        ctx->pc = 0x2C53DCu;
        goto label_2c53dc;
    }
    ctx->pc = 0x2C53D4u;
    {
        const bool branch_taken_0x2c53d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c53d4) {
            ctx->pc = 0x2C5574u;
            goto label_2c5574;
        }
    }
    ctx->pc = 0x2C53DCu;
label_2c53dc:
    // 0x2c53dc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2c53dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2c53e0:
    // 0x2c53e0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c53e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2c53e4:
    // 0x2c53e4: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x2c53e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2c53e8:
    // 0x2c53e8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2c53e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2c53ec:
    // 0x2c53ec: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x2c53ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c53f0:
    // 0x2c53f0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c53f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2c53f4:
    // 0x2c53f4: 0x0  nop
    ctx->pc = 0x2c53f4u;
    // NOP
label_2c53f8:
    // 0x2c53f8: 0x4501002b  bc1t        . + 4 + (0x2B << 2)
label_2c53fc:
    if (ctx->pc == 0x2C53FCu) {
        ctx->pc = 0x2C5400u;
        goto label_2c5400;
    }
    ctx->pc = 0x2C53F8u;
    {
        const bool branch_taken_0x2c53f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c53f8) {
            ctx->pc = 0x2C54A8u;
            goto label_2c54a8;
        }
    }
    ctx->pc = 0x2C5400u;
label_2c5400:
    // 0x2c5400: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2c5400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2c5404:
    // 0x2c5404: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c5404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2c5408:
    // 0x2c5408: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x2c5408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2c540c:
    // 0x2c540c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2c540cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2c5410:
    // 0x2c5410: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c5410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2c5414:
    // 0x2c5414: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x2c5414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c5418:
    // 0x2c5418: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2c5418u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2c541c:
    // 0x2c541c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2c541cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2c5420:
    // 0x2c5420: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x2c5420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c5424:
    // 0x2c5424: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2c5424u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2c5428:
    // 0x2c5428: 0x0  nop
    ctx->pc = 0x2c5428u;
    // NOP
label_2c542c:
    // 0x2c542c: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_2c5430:
    if (ctx->pc == 0x2C5430u) {
        ctx->pc = 0x2C5434u;
        goto label_2c5434;
    }
    ctx->pc = 0x2C542Cu;
    {
        const bool branch_taken_0x2c542c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c542c) {
            ctx->pc = 0x2C5454u;
            goto label_2c5454;
        }
    }
    ctx->pc = 0x2C5434u;
label_2c5434:
    // 0x2c5434: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2c5434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2c5438:
    // 0x2c5438: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x2c5438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2c543c:
    // 0x2c543c: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x2c543cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
label_2c5440:
    // 0x2c5440: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2c5440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_2c5444:
    // 0x2c5444: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c5444u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2c5448:
    // 0x2c5448: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x2c5448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c544c:
    // 0x2c544c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c544cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2c5450:
    // 0x2c5450: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x2c5450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
label_2c5454:
    // 0x2c5454: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2c5454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2c5458:
    // 0x2c5458: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c5458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2c545c:
    // 0x2c545c: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x2c545cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2c5460:
    // 0x2c5460: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2c5460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2c5464:
    // 0x2c5464: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x2c5464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c5468:
    // 0x2c5468: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2c5468u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2c546c:
    // 0x2c546c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x2c546cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_2c5470:
    // 0x2c5470: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2c5470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2c5474:
    // 0x2c5474: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c5474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2c5478:
    // 0x2c5478: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x2c5478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2c547c:
    // 0x2c547c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2c547cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2c5480:
    // 0x2c5480: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x2c5480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c5484:
    // 0x2c5484: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c5484u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2c5488:
    // 0x2c5488: 0x0  nop
    ctx->pc = 0x2c5488u;
    // NOP
label_2c548c:
    // 0x2c548c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_2c5490:
    if (ctx->pc == 0x2C5490u) {
        ctx->pc = 0x2C5494u;
        goto label_2c5494;
    }
    ctx->pc = 0x2C548Cu;
    {
        const bool branch_taken_0x2c548c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c548c) {
            ctx->pc = 0x2C54A8u;
            goto label_2c54a8;
        }
    }
    ctx->pc = 0x2C5494u;
label_2c5494:
    // 0x2c5494: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2c5494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2c5498:
    // 0x2c5498: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x2c5498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2c549c:
    // 0x2c549c: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x2c549cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_2c54a0:
    // 0x2c54a0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2c54a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_2c54a4:
    // 0x2c54a4: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x2c54a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
label_2c54a8:
    // 0x2c54a8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2c54a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2c54ac:
    // 0x2c54ac: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c54acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2c54b0:
    // 0x2c54b0: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x2c54b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2c54b4:
    // 0x2c54b4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2c54b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2c54b8:
    // 0x2c54b8: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x2c54b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c54bc:
    // 0x2c54bc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2c54bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2c54c0:
    // 0x2c54c0: 0x0  nop
    ctx->pc = 0x2c54c0u;
    // NOP
label_2c54c4:
    // 0x2c54c4: 0x4500002b  bc1f        . + 4 + (0x2B << 2)
label_2c54c8:
    if (ctx->pc == 0x2C54C8u) {
        ctx->pc = 0x2C54CCu;
        goto label_2c54cc;
    }
    ctx->pc = 0x2C54C4u;
    {
        const bool branch_taken_0x2c54c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c54c4) {
            ctx->pc = 0x2C5574u;
            goto label_2c5574;
        }
    }
    ctx->pc = 0x2C54CCu;
label_2c54cc:
    // 0x2c54cc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2c54ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2c54d0:
    // 0x2c54d0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c54d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2c54d4:
    // 0x2c54d4: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x2c54d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2c54d8:
    // 0x2c54d8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2c54d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2c54dc:
    // 0x2c54dc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c54dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2c54e0:
    // 0x2c54e0: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x2c54e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c54e4:
    // 0x2c54e4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2c54e4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2c54e8:
    // 0x2c54e8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2c54e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2c54ec:
    // 0x2c54ec: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x2c54ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c54f0:
    // 0x2c54f0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c54f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2c54f4:
    // 0x2c54f4: 0x0  nop
    ctx->pc = 0x2c54f4u;
    // NOP
label_2c54f8:
    // 0x2c54f8: 0x45010009  bc1t        . + 4 + (0x9 << 2)
label_2c54fc:
    if (ctx->pc == 0x2C54FCu) {
        ctx->pc = 0x2C5500u;
        goto label_2c5500;
    }
    ctx->pc = 0x2C54F8u;
    {
        const bool branch_taken_0x2c54f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c54f8) {
            ctx->pc = 0x2C5520u;
            goto label_2c5520;
        }
    }
    ctx->pc = 0x2C5500u;
label_2c5500:
    // 0x2c5500: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2c5500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2c5504:
    // 0x2c5504: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x2c5504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2c5508:
    // 0x2c5508: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x2c5508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
label_2c550c:
    // 0x2c550c: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2c550cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_2c5510:
    // 0x2c5510: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c5510u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2c5514:
    // 0x2c5514: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x2c5514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c5518:
    // 0x2c5518: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c5518u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2c551c:
    // 0x2c551c: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x2c551cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
label_2c5520:
    // 0x2c5520: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2c5520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2c5524:
    // 0x2c5524: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c5524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2c5528:
    // 0x2c5528: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x2c5528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2c552c:
    // 0x2c552c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2c552cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2c5530:
    // 0x2c5530: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x2c5530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c5534:
    // 0x2c5534: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c5534u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2c5538:
    // 0x2c5538: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x2c5538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_2c553c:
    // 0x2c553c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2c553cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2c5540:
    // 0x2c5540: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c5540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2c5544:
    // 0x2c5544: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x2c5544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2c5548:
    // 0x2c5548: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2c5548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2c554c:
    // 0x2c554c: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x2c554cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c5550:
    // 0x2c5550: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2c5550u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2c5554:
    // 0x2c5554: 0x0  nop
    ctx->pc = 0x2c5554u;
    // NOP
label_2c5558:
    // 0x2c5558: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_2c555c:
    if (ctx->pc == 0x2C555Cu) {
        ctx->pc = 0x2C5560u;
        goto label_2c5560;
    }
    ctx->pc = 0x2C5558u;
    {
        const bool branch_taken_0x2c5558 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c5558) {
            ctx->pc = 0x2C5574u;
            goto label_2c5574;
        }
    }
    ctx->pc = 0x2C5560u;
label_2c5560:
    // 0x2c5560: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2c5560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2c5564:
    // 0x2c5564: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x2c5564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_2c5568:
    // 0x2c5568: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x2c5568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_2c556c:
    // 0x2c556c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2c556cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_2c5570:
    // 0x2c5570: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x2c5570u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
label_2c5574:
    // 0x2c5574: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2c5574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2c5578:
    // 0x2c5578: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x2c5578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2c557c:
    // 0x2c557c: 0xc047fe2  jal         func_11FF88
label_2c5580:
    if (ctx->pc == 0x2C5580u) {
        ctx->pc = 0x2C5584u;
        goto label_2c5584;
    }
    ctx->pc = 0x2C557Cu;
    SET_GPR_U32(ctx, 31, 0x2C5584u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x2C557Cu, 0x2C5584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5584u;
label_2c5584:
    // 0x2c5584: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x2c5584u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2c5588:
    // 0x2c5588: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2c5588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2c558c:
    // 0x2c558c: 0xc44c0124  lwc1        $f12, 0x124($v0)
    ctx->pc = 0x2c558cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2c5590:
    // 0x2c5590: 0xc047fe2  jal         func_11FF88
label_2c5594:
    if (ctx->pc == 0x2C5594u) {
        ctx->pc = 0x2C5598u;
        goto label_2c5598;
    }
    ctx->pc = 0x2C5590u;
    SET_GPR_U32(ctx, 31, 0x2C5598u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x2C5590u, 0x2C5598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5598u;
label_2c5598:
    // 0x2c5598: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x2c5598u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2c559c:
    // 0x2c559c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2c559cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2c55a0:
    // 0x2c55a0: 0xc44c0128  lwc1        $f12, 0x128($v0)
    ctx->pc = 0x2c55a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2c55a4:
    // 0x2c55a4: 0xc047fe2  jal         func_11FF88
label_2c55a8:
    if (ctx->pc == 0x2C55A8u) {
        ctx->pc = 0x2C55ACu;
        goto label_2c55ac;
    }
    ctx->pc = 0x2C55A4u;
    SET_GPR_U32(ctx, 31, 0x2C55ACu);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x2C55A4u, 0x2C55ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C55ACu;
label_2c55ac:
    // 0x2c55ac: 0x24030808  addiu       $v1, $zero, 0x808
    ctx->pc = 0x2c55acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
label_2c55b0:
    // 0x2c55b0: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x2c55b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
label_2c55b4:
    // 0x2c55b4: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x2c55b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_2c55b8:
    // 0x2c55b8: 0x34630a05  ori         $v1, $v1, 0xA05
    ctx->pc = 0x2c55b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2565);
label_2c55bc:
    // 0x2c55bc: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x2c55bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_2c55c0:
    // 0x2c55c0: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2c55c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_2c55c4:
    // 0x2c55c4: 0x246518d8  addiu       $a1, $v1, 0x18D8
    ctx->pc = 0x2c55c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 6360));
label_2c55c8:
    // 0x2c55c8: 0x72403628  paddub      $a2, $s2, $zero
    ctx->pc = 0x2c55c8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_2c55cc:
    // 0x2c55cc: 0x72203e28  paddub      $a3, $s1, $zero
    ctx->pc = 0x2c55ccu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_2c55d0:
    // 0x2c55d0: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x2c55d0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2c55d4:
    // 0x2c55d4: 0xc059b14  jal         func_166C50
label_2c55d8:
    if (ctx->pc == 0x2C55D8u) {
        ctx->pc = 0x2C55DCu;
        goto label_2c55dc;
    }
    ctx->pc = 0x2C55D4u;
    SET_GPR_U32(ctx, 31, 0x2C55DCu);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x2C55D4u, 0x2C55DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C55DCu;
label_2c55dc:
    // 0x2c55dc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2c55dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2c55e0:
    // 0x2c55e0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x2c55e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2c55e4:
    // 0x2c55e4: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x2c55e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2c55e8:
    // 0x2c55e8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2c55e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2c55ec:
    // 0x2c55ec: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x2c55ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_2c55f0:
    // 0x2c55f0: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x2c55f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2c55f4:
    // 0x2c55f4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2c55f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2c55f8:
    // 0x2c55f8: 0x90420002  lbu         $v0, 0x2($v0)
    ctx->pc = 0x2c55f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_2c55fc:
    // 0x2c55fc: 0x304800ff  andi        $t0, $v0, 0xFF
    ctx->pc = 0x2c55fcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2c5600:
    // 0x2c5600: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x2c5600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
label_2c5604:
    // 0x2c5604: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2c5604u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_2c5608:
    // 0x2c5608: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x2c5608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
label_2c560c:
    // 0x2c560c: 0x34420a06  ori         $v0, $v0, 0xA06
    ctx->pc = 0x2c560cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2566);
label_2c5610:
    // 0x2c5610: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x2c5610u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2c5614:
    // 0x2c5614: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2c5614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_2c5618:
    // 0x2c5618: 0x244518e8  addiu       $a1, $v0, 0x18E8
    ctx->pc = 0x2c5618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 6376));
label_2c561c:
    // 0x2c561c: 0xc059b14  jal         func_166C50
label_2c5620:
    if (ctx->pc == 0x2C5620u) {
        ctx->pc = 0x2C5624u;
        goto label_2c5624;
    }
    ctx->pc = 0x2C561Cu;
    SET_GPR_U32(ctx, 31, 0x2C5624u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x2C561Cu, 0x2C5624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5624u;
label_2c5624:
    // 0x2c5624: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x2c5624u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2c5628:
    // 0x2c5628: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c5628u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2c562c:
    // 0x2c562c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c562cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c5630:
    // 0x2c5630: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c5630u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2c5634:
    // 0x2c5634: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2c5634u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2c5638:
    // 0x2c5638: 0x3e00008  jr          $ra
label_2c563c:
    if (ctx->pc == 0x2C563Cu) {
        ctx->pc = 0x2C5640u;
        goto label_fallthrough_0x2c5638;
    }
    ctx->pc = 0x2C5638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C5638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2c5638:
    ctx->pc = 0x2C5640u;
}
