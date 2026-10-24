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

// Function: Get_btl_cam_type
// Address: 0x188360 - 0x188504
void Get_btl_cam_type_0x188360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Get_btl_cam_type_0x188360");
#endif

    switch (ctx->pc) {
        case 0x188360u: goto label_188360;
        case 0x188364u: goto label_188364;
        case 0x188368u: goto label_188368;
        case 0x18836cu: goto label_18836c;
        case 0x188370u: goto label_188370;
        case 0x188374u: goto label_188374;
        case 0x188378u: goto label_188378;
        case 0x18837cu: goto label_18837c;
        case 0x188380u: goto label_188380;
        case 0x188384u: goto label_188384;
        case 0x188388u: goto label_188388;
        case 0x18838cu: goto label_18838c;
        case 0x188390u: goto label_188390;
        case 0x188394u: goto label_188394;
        case 0x188398u: goto label_188398;
        case 0x18839cu: goto label_18839c;
        case 0x1883a0u: goto label_1883a0;
        case 0x1883a4u: goto label_1883a4;
        case 0x1883a8u: goto label_1883a8;
        case 0x1883acu: goto label_1883ac;
        case 0x1883b0u: goto label_1883b0;
        case 0x1883b4u: goto label_1883b4;
        case 0x1883b8u: goto label_1883b8;
        case 0x1883bcu: goto label_1883bc;
        case 0x1883c0u: goto label_1883c0;
        case 0x1883c4u: goto label_1883c4;
        case 0x1883c8u: goto label_1883c8;
        case 0x1883ccu: goto label_1883cc;
        case 0x1883d0u: goto label_1883d0;
        case 0x1883d4u: goto label_1883d4;
        case 0x1883d8u: goto label_1883d8;
        case 0x1883dcu: goto label_1883dc;
        case 0x1883e0u: goto label_1883e0;
        case 0x1883e4u: goto label_1883e4;
        case 0x1883e8u: goto label_1883e8;
        case 0x1883ecu: goto label_1883ec;
        case 0x1883f0u: goto label_1883f0;
        case 0x1883f4u: goto label_1883f4;
        case 0x1883f8u: goto label_1883f8;
        case 0x1883fcu: goto label_1883fc;
        case 0x188400u: goto label_188400;
        case 0x188404u: goto label_188404;
        case 0x188408u: goto label_188408;
        case 0x18840cu: goto label_18840c;
        case 0x188410u: goto label_188410;
        case 0x188414u: goto label_188414;
        case 0x188418u: goto label_188418;
        case 0x18841cu: goto label_18841c;
        case 0x188420u: goto label_188420;
        case 0x188424u: goto label_188424;
        case 0x188428u: goto label_188428;
        case 0x18842cu: goto label_18842c;
        case 0x188430u: goto label_188430;
        case 0x188434u: goto label_188434;
        case 0x188438u: goto label_188438;
        case 0x18843cu: goto label_18843c;
        case 0x188440u: goto label_188440;
        case 0x188444u: goto label_188444;
        case 0x188448u: goto label_188448;
        case 0x18844cu: goto label_18844c;
        case 0x188450u: goto label_188450;
        case 0x188454u: goto label_188454;
        case 0x188458u: goto label_188458;
        case 0x18845cu: goto label_18845c;
        case 0x188460u: goto label_188460;
        case 0x188464u: goto label_188464;
        case 0x188468u: goto label_188468;
        case 0x18846cu: goto label_18846c;
        case 0x188470u: goto label_188470;
        case 0x188474u: goto label_188474;
        case 0x188478u: goto label_188478;
        case 0x18847cu: goto label_18847c;
        case 0x188480u: goto label_188480;
        case 0x188484u: goto label_188484;
        case 0x188488u: goto label_188488;
        case 0x18848cu: goto label_18848c;
        case 0x188490u: goto label_188490;
        case 0x188494u: goto label_188494;
        case 0x188498u: goto label_188498;
        case 0x18849cu: goto label_18849c;
        case 0x1884a0u: goto label_1884a0;
        case 0x1884a4u: goto label_1884a4;
        case 0x1884a8u: goto label_1884a8;
        case 0x1884acu: goto label_1884ac;
        case 0x1884b0u: goto label_1884b0;
        case 0x1884b4u: goto label_1884b4;
        case 0x1884b8u: goto label_1884b8;
        case 0x1884bcu: goto label_1884bc;
        case 0x1884c0u: goto label_1884c0;
        case 0x1884c4u: goto label_1884c4;
        case 0x1884c8u: goto label_1884c8;
        case 0x1884ccu: goto label_1884cc;
        case 0x1884d0u: goto label_1884d0;
        case 0x1884d4u: goto label_1884d4;
        case 0x1884d8u: goto label_1884d8;
        case 0x1884dcu: goto label_1884dc;
        case 0x1884e0u: goto label_1884e0;
        case 0x1884e4u: goto label_1884e4;
        case 0x1884e8u: goto label_1884e8;
        case 0x1884ecu: goto label_1884ec;
        case 0x1884f0u: goto label_1884f0;
        case 0x1884f4u: goto label_1884f4;
        case 0x1884f8u: goto label_1884f8;
        case 0x1884fcu: goto label_1884fc;
        case 0x188500u: goto label_188500;
        default: break;
    }

    ctx->pc = 0x188360u;

label_188360:
    // 0x188360: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x188360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_188364:
    // 0x188364: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x188364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
label_188368:
    // 0x188368: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x188368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_18836c:
    // 0x18836c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18836cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_188370:
    // 0x188370: 0x8c240068  lw          $a0, 0x68($at)
    ctx->pc = 0x188370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 104)));
label_188374:
    // 0x188374: 0x2c810007  sltiu       $at, $a0, 0x7
    ctx->pc = 0x188374u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_188378:
    // 0x188378: 0x1020003e  beqz        $at, . + 4 + (0x3E << 2)
label_18837c:
    if (ctx->pc == 0x18837Cu) {
        ctx->pc = 0x188380u;
        goto label_188380;
    }
    ctx->pc = 0x188378u;
    {
        const bool branch_taken_0x188378 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x188378) {
            ctx->pc = 0x188474u;
            goto label_188474;
        }
    }
    ctx->pc = 0x188380u;
label_188380:
    // 0x188380: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x188380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_188384:
    // 0x188384: 0x2443edb0  addiu       $v1, $v0, -0x1250
    ctx->pc = 0x188384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962608));
label_188388:
    // 0x188388: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x188388u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_18838c:
    // 0x18838c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18838cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_188390:
    // 0x188390: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x188390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_188394:
    // 0x188394: 0x400008  jr          $v0
label_188398:
    if (ctx->pc == 0x188398u) {
        ctx->pc = 0x18839Cu;
        goto label_18839c;
    }
    ctx->pc = 0x188394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x188394u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x18839Cu;
label_18839c:
    // 0x18839c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18839cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1883a0:
    // 0x1883a0: 0x8c23006c  lw          $v1, 0x6C($at)
    ctx->pc = 0x1883a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 108)));
label_1883a4:
    // 0x1883a4: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1883a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1883a8:
    // 0x1883a8: 0x24426cf0  addiu       $v0, $v0, 0x6CF0
    ctx->pc = 0x1883a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27888));
label_1883ac:
    // 0x1883ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1883acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1883b0:
    // 0x1883b0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1883b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1883b4:
    // 0x1883b4: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1883b4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1883b8:
    // 0x1883b8: 0x1000002f  b           . + 4 + (0x2F << 2)
label_1883bc:
    if (ctx->pc == 0x1883BCu) {
        ctx->pc = 0x1883C0u;
        goto label_1883c0;
    }
    ctx->pc = 0x1883B8u;
    {
        const bool branch_taken_0x1883b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1883b8) {
            ctx->pc = 0x188478u;
            goto label_188478;
        }
    }
    ctx->pc = 0x1883C0u;
label_1883c0:
    // 0x1883c0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1883c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1883c4:
    // 0x1883c4: 0x8c23006c  lw          $v1, 0x6C($at)
    ctx->pc = 0x1883c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 108)));
label_1883c8:
    // 0x1883c8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1883c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1883cc:
    // 0x1883cc: 0x24426d20  addiu       $v0, $v0, 0x6D20
    ctx->pc = 0x1883ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27936));
label_1883d0:
    // 0x1883d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1883d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1883d4:
    // 0x1883d4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1883d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1883d8:
    // 0x1883d8: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1883d8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1883dc:
    // 0x1883dc: 0x10000026  b           . + 4 + (0x26 << 2)
label_1883e0:
    if (ctx->pc == 0x1883E0u) {
        ctx->pc = 0x1883E4u;
        goto label_1883e4;
    }
    ctx->pc = 0x1883DCu;
    {
        const bool branch_taken_0x1883dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1883dc) {
            ctx->pc = 0x188478u;
            goto label_188478;
        }
    }
    ctx->pc = 0x1883E4u;
label_1883e4:
    // 0x1883e4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1883e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1883e8:
    // 0x1883e8: 0x8c23006c  lw          $v1, 0x6C($at)
    ctx->pc = 0x1883e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 108)));
label_1883ec:
    // 0x1883ec: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1883ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1883f0:
    // 0x1883f0: 0x24426d40  addiu       $v0, $v0, 0x6D40
    ctx->pc = 0x1883f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27968));
label_1883f4:
    // 0x1883f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1883f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1883f8:
    // 0x1883f8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1883f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1883fc:
    // 0x1883fc: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1883fcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_188400:
    // 0x188400: 0x1000001d  b           . + 4 + (0x1D << 2)
label_188404:
    if (ctx->pc == 0x188404u) {
        ctx->pc = 0x188408u;
        goto label_188408;
    }
    ctx->pc = 0x188400u;
    {
        const bool branch_taken_0x188400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x188400) {
            ctx->pc = 0x188478u;
            goto label_188478;
        }
    }
    ctx->pc = 0x188408u;
label_188408:
    // 0x188408: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x188408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_18840c:
    // 0x18840c: 0x8c23006c  lw          $v1, 0x6C($at)
    ctx->pc = 0x18840cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 108)));
label_188410:
    // 0x188410: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x188410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_188414:
    // 0x188414: 0x24426d70  addiu       $v0, $v0, 0x6D70
    ctx->pc = 0x188414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28016));
label_188418:
    // 0x188418: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x188418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18841c:
    // 0x18841c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x18841cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_188420:
    // 0x188420: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x188420u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_188424:
    // 0x188424: 0x10000014  b           . + 4 + (0x14 << 2)
label_188428:
    if (ctx->pc == 0x188428u) {
        ctx->pc = 0x18842Cu;
        goto label_18842c;
    }
    ctx->pc = 0x188424u;
    {
        const bool branch_taken_0x188424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x188424) {
            ctx->pc = 0x188478u;
            goto label_188478;
        }
    }
    ctx->pc = 0x18842Cu;
label_18842c:
    // 0x18842c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18842cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_188430:
    // 0x188430: 0x8c23006c  lw          $v1, 0x6C($at)
    ctx->pc = 0x188430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 108)));
label_188434:
    // 0x188434: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x188434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_188438:
    // 0x188438: 0x24426d80  addiu       $v0, $v0, 0x6D80
    ctx->pc = 0x188438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28032));
label_18843c:
    // 0x18843c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18843cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_188440:
    // 0x188440: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x188440u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_188444:
    // 0x188444: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x188444u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_188448:
    // 0x188448: 0x1000000b  b           . + 4 + (0xB << 2)
label_18844c:
    if (ctx->pc == 0x18844Cu) {
        ctx->pc = 0x188450u;
        goto label_188450;
    }
    ctx->pc = 0x188448u;
    {
        const bool branch_taken_0x188448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x188448) {
            ctx->pc = 0x188478u;
            goto label_188478;
        }
    }
    ctx->pc = 0x188450u;
label_188450:
    // 0x188450: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x188450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_188454:
    // 0x188454: 0x8c23006c  lw          $v1, 0x6C($at)
    ctx->pc = 0x188454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 108)));
label_188458:
    // 0x188458: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x188458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_18845c:
    // 0x18845c: 0x24426d90  addiu       $v0, $v0, 0x6D90
    ctx->pc = 0x18845cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28048));
label_188460:
    // 0x188460: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x188460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_188464:
    // 0x188464: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x188464u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_188468:
    // 0x188468: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x188468u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_18846c:
    // 0x18846c: 0x10000002  b           . + 4 + (0x2 << 2)
label_188470:
    if (ctx->pc == 0x188470u) {
        ctx->pc = 0x188474u;
        goto label_188474;
    }
    ctx->pc = 0x18846Cu;
    {
        const bool branch_taken_0x18846c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18846c) {
            ctx->pc = 0x188478u;
            goto label_188478;
        }
    }
    ctx->pc = 0x188474u;
label_188474:
    // 0x188474: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x188474u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_188478:
    // 0x188478: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x188478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_18847c:
    // 0x18847c: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
label_188480:
    if (ctx->pc == 0x188480u) {
        ctx->pc = 0x188484u;
        goto label_188484;
    }
    ctx->pc = 0x18847Cu;
    {
        const bool branch_taken_0x18847c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18847c) {
            ctx->pc = 0x1884ECu;
            goto label_1884ec;
        }
    }
    ctx->pc = 0x188484u;
label_188484:
    // 0x188484: 0xc05f7dc  jal         func_17DF70
label_188488:
    if (ctx->pc == 0x188488u) {
        ctx->pc = 0x18848Cu;
        goto label_18848c;
    }
    ctx->pc = 0x188484u;
    SET_GPR_U32(ctx, 31, 0x18848Cu);
    ctx->pc = 0x17DF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17DF70u, 0x188484u, 0x18848Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18848Cu;
label_18848c:
    // 0x18848c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x18848cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_188490:
    // 0x188490: 0x10430014  beq         $v0, $v1, . + 4 + (0x14 << 2)
label_188494:
    if (ctx->pc == 0x188494u) {
        ctx->pc = 0x188498u;
        goto label_188498;
    }
    ctx->pc = 0x188490u;
    {
        const bool branch_taken_0x188490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x188490) {
            ctx->pc = 0x1884E4u;
            goto label_1884e4;
        }
    }
    ctx->pc = 0x188498u;
label_188498:
    // 0x188498: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x188498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18849c:
    // 0x18849c: 0x1043000d  beq         $v0, $v1, . + 4 + (0xD << 2)
label_1884a0:
    if (ctx->pc == 0x1884A0u) {
        ctx->pc = 0x1884A4u;
        goto label_1884a4;
    }
    ctx->pc = 0x18849Cu;
    {
        const bool branch_taken_0x18849c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x18849c) {
            ctx->pc = 0x1884D4u;
            goto label_1884d4;
        }
    }
    ctx->pc = 0x1884A4u;
label_1884a4:
    // 0x1884a4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1884a8:
    if (ctx->pc == 0x1884A8u) {
        ctx->pc = 0x1884ACu;
        goto label_1884ac;
    }
    ctx->pc = 0x1884A4u;
    {
        const bool branch_taken_0x1884a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1884a4) {
            ctx->pc = 0x1884B4u;
            goto label_1884b4;
        }
    }
    ctx->pc = 0x1884ACu;
label_1884ac:
    // 0x1884ac: 0x1000000f  b           . + 4 + (0xF << 2)
label_1884b0:
    if (ctx->pc == 0x1884B0u) {
        ctx->pc = 0x1884B4u;
        goto label_1884b4;
    }
    ctx->pc = 0x1884ACu;
    {
        const bool branch_taken_0x1884ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1884ac) {
            ctx->pc = 0x1884ECu;
            goto label_1884ec;
        }
    }
    ctx->pc = 0x1884B4u;
label_1884b4:
    // 0x1884b4: 0xc062144  jal         func_188510
label_1884b8:
    if (ctx->pc == 0x1884B8u) {
        ctx->pc = 0x1884BCu;
        goto label_1884bc;
    }
    ctx->pc = 0x1884B4u;
    SET_GPR_U32(ctx, 31, 0x1884BCu);
    ctx->pc = 0x188510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188510u, 0x1884B4u, 0x1884BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1884BCu;
label_1884bc:
    // 0x1884bc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1884c0:
    if (ctx->pc == 0x1884C0u) {
        ctx->pc = 0x1884C4u;
        goto label_1884c4;
    }
    ctx->pc = 0x1884BCu;
    {
        const bool branch_taken_0x1884bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1884bc) {
            ctx->pc = 0x1884ECu;
            goto label_1884ec;
        }
    }
    ctx->pc = 0x1884C4u;
label_1884c4:
    // 0x1884c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1884c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1884c8:
    // 0x1884c8: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1884c8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1884cc:
    // 0x1884cc: 0x10000007  b           . + 4 + (0x7 << 2)
label_1884d0:
    if (ctx->pc == 0x1884D0u) {
        ctx->pc = 0x1884D4u;
        goto label_1884d4;
    }
    ctx->pc = 0x1884CCu;
    {
        const bool branch_taken_0x1884cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1884cc) {
            ctx->pc = 0x1884ECu;
            goto label_1884ec;
        }
    }
    ctx->pc = 0x1884D4u;
label_1884d4:
    // 0x1884d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1884d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1884d8:
    // 0x1884d8: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1884d8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1884dc:
    // 0x1884dc: 0x10000003  b           . + 4 + (0x3 << 2)
label_1884e0:
    if (ctx->pc == 0x1884E0u) {
        ctx->pc = 0x1884E4u;
        goto label_1884e4;
    }
    ctx->pc = 0x1884DCu;
    {
        const bool branch_taken_0x1884dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1884dc) {
            ctx->pc = 0x1884ECu;
            goto label_1884ec;
        }
    }
    ctx->pc = 0x1884E4u;
label_1884e4:
    // 0x1884e4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1884e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1884e8:
    // 0x1884e8: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1884e8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1884ec:
    // 0x1884ec: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x1884ecu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_1884f0:
    // 0x1884f0: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1884f0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1884f4:
    // 0x1884f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1884f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1884f8:
    // 0x1884f8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1884f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1884fc:
    // 0x1884fc: 0x3e00008  jr          $ra
label_188500:
    if (ctx->pc == 0x188500u) {
        ctx->pc = 0x188504u;
        goto label_fallthrough_0x1884fc;
    }
    ctx->pc = 0x1884FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1884FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1884fc:
    ctx->pc = 0x188504u;
}
