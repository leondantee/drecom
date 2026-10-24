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

// Function: R10f_init
// Address: 0x27a340 - 0x27a6b8
void R10f_init_0x27a340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R10f_init_0x27a340");
#endif

    switch (ctx->pc) {
        case 0x27a388u: goto label_27a388;
        case 0x27a3a0u: goto label_27a3a0;
        case 0x27a3e4u: goto label_27a3e4;
        case 0x27a460u: goto label_27a460;
        case 0x27a488u: goto label_27a488;
        case 0x27a4a0u: goto label_27a4a0;
        case 0x27a4a8u: goto label_27a4a8;
        case 0x27a4e8u: goto label_27a4e8;
        case 0x27a4f8u: goto label_27a4f8;
        case 0x27a5a8u: goto label_27a5a8;
        case 0x27a5bcu: goto label_27a5bc;
        case 0x27a5d0u: goto label_27a5d0;
        case 0x27a610u: goto label_27a610;
        case 0x27a61cu: goto label_27a61c;
        case 0x27a64cu: goto label_27a64c;
        default: break;
    }

    ctx->pc = 0x27a340u;

    // 0x27a340: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x27a340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x27a344: 0x7fbf0050  sq          $ra, 0x50($sp)
    ctx->pc = 0x27a344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x27a348: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x27a348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x27a34c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x27a34cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x27a350: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27a350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x27a354: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27a354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27a358: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27a358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27a35c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x27a35cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x27a360: 0x24511ac0  addiu       $s1, $v0, 0x1AC0
    ctx->pc = 0x27a360u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 6848));
    // 0x27a364: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x27a364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x27a368: 0x24540b10  addiu       $s4, $v0, 0xB10
    ctx->pc = 0x27a368u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 2832));
    // 0x27a36c: 0x8e9202d0  lw          $s2, 0x2D0($s4)
    ctx->pc = 0x27a36cu;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x5D0DE0u));
    // 0x27a370: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x27a370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x27a374: 0x24441ac0  addiu       $a0, $v0, 0x1AC0
    ctx->pc = 0x27a374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6848));
    // 0x27a378: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27a378u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27a37c: 0x24060070  addiu       $a2, $zero, 0x70
    ctx->pc = 0x27a37cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x27a380: 0xc046314  jal         func_118C50
    ctx->pc = 0x27A380u;
    SET_GPR_U32(ctx, 31, 0x27A388u);
    ctx->pc = 0x118C50u;
    {
        ctx->pc = 0x27A388u;
        ps2_stubs::memset(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x27A388u) { return; }
    ctx->pc = 0x27A388u;
label_27a388:
    // 0x27a388: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x27a388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27a38c: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x27a38cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x27a390: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27a390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27a394: 0x24440b30  addiu       $a0, $v0, 0xB30
    ctx->pc = 0x27a394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2864));
    // 0x27a398: 0xc0a103c  jal         func_2840F0
    ctx->pc = 0x27A398u;
    SET_GPR_U32(ctx, 31, 0x27A3A0u);
    ctx->pc = 0x2840F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2840F0u, 0x27A398u, 0x27A3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A3A0u;
label_27a3a0:
    // 0x27a3a0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27a3a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27a3a4: 0x8c30f9e4  lw          $s0, -0x61C($at)
    ctx->pc = 0x27a3a4u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x61F9E4u));
    // 0x27a3a8: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x27a3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x27a3ac: 0xae0212a8  sw          $v0, 0x12A8($s0)
    ctx->pc = 0x27a3acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4776), GPR_U32(ctx, 2));
    // 0x27a3b0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27a3b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27a3b4: 0x8c30f9f0  lw          $s0, -0x610($at)
    ctx->pc = 0x27a3b4u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x61F9F0u));
    // 0x27a3b8: 0xae0012a8  sw          $zero, 0x12A8($s0)
    ctx->pc = 0x27a3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4776), GPR_U32(ctx, 0));
    // 0x27a3bc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27a3bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27a3c0: 0x8c231aa4  lw          $v1, 0x1AA4($at)
    ctx->pc = 0x27a3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1AA4u));
    // 0x27a3c4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x27a3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x27a3c8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x27a3c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x27a3cc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27A3CCu;
    {
        const bool branch_taken_0x27a3cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27a3cc) {
            ctx->pc = 0x27A3ECu;
            goto label_27a3ec;
        }
    }
    ctx->pc = 0x27A3D4u;
    // 0x27a3d4: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27a3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27a3d8: 0x244407b0  addiu       $a0, $v0, 0x7B0
    ctx->pc = 0x27a3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1968));
    // 0x27a3dc: 0xc0a1030  jal         func_2840C0
    ctx->pc = 0x27A3DCu;
    SET_GPR_U32(ctx, 31, 0x27A3E4u);
    ctx->pc = 0x2840C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2840C0u, 0x27A3DCu, 0x27A3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A3E4u;
label_27a3e4:
    // 0x27a3e4: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x27A3E4u;
    {
        const bool branch_taken_0x27a3e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a3e4) {
            ctx->pc = 0x27A4A0u;
            goto label_27a4a0;
        }
    }
    ctx->pc = 0x27A3ECu;
label_27a3ec:
    // 0x27a3ec: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x27a3ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x27a3f0: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x27a3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x27a3f4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x27a3f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x27a3f8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x27a3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27a3fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27a3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27a400: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x27a400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x27a404: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x27a404u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x27a408: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x27a408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x27a40c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x27a40cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x27a410: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x27a410u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x27a414: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x27a414u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27a418: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27a418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27a41c: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x27a41cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x27a420: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x27a420u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x27a424: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x27a424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x27a428: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x27a428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x27a42c: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x27a42cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x27a430: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x27a430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x27a434: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x27a434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x27a438: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x27a438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x27a43c: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x27a43cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x27a440: 0x326200ff  andi        $v0, $s3, 0xFF
    ctx->pc = 0x27a440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x27a444: 0x28410006  slti        $at, $v0, 0x6
    ctx->pc = 0x27a444u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x27a448: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x27A448u;
    {
        const bool branch_taken_0x27a448 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a448) {
            ctx->pc = 0x27A468u;
            goto label_27a468;
        }
    }
    ctx->pc = 0x27A450u;
    // 0x27a450: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27a450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27a454: 0x244407b8  addiu       $a0, $v0, 0x7B8
    ctx->pc = 0x27a454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1976));
    // 0x27a458: 0xc0a1030  jal         func_2840C0
    ctx->pc = 0x27A458u;
    SET_GPR_U32(ctx, 31, 0x27A460u);
    ctx->pc = 0x2840C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2840C0u, 0x27A458u, 0x27A460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A460u;
label_27a460:
    // 0x27a460: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x27A460u;
    {
        const bool branch_taken_0x27a460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a460) {
            ctx->pc = 0x27A4A0u;
            goto label_27a4a0;
        }
    }
    ctx->pc = 0x27A468u;
label_27a468:
    // 0x27a468: 0x326200ff  andi        $v0, $s3, 0xFF
    ctx->pc = 0x27a468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x27a46c: 0x2841000b  slti        $at, $v0, 0xB
    ctx->pc = 0x27a46cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x27a470: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x27A470u;
    {
        const bool branch_taken_0x27a470 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a470) {
            ctx->pc = 0x27A490u;
            goto label_27a490;
        }
    }
    ctx->pc = 0x27A478u;
    // 0x27a478: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27a478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27a47c: 0x244407c0  addiu       $a0, $v0, 0x7C0
    ctx->pc = 0x27a47cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1984));
    // 0x27a480: 0xc0a1030  jal         func_2840C0
    ctx->pc = 0x27A480u;
    SET_GPR_U32(ctx, 31, 0x27A488u);
    ctx->pc = 0x2840C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2840C0u, 0x27A480u, 0x27A488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A488u;
label_27a488:
    // 0x27a488: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x27A488u;
    {
        const bool branch_taken_0x27a488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a488) {
            ctx->pc = 0x27A4A0u;
            goto label_27a4a0;
        }
    }
    ctx->pc = 0x27A490u;
label_27a490:
    // 0x27a490: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27a490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27a494: 0x244407c8  addiu       $a0, $v0, 0x7C8
    ctx->pc = 0x27a494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1992));
    // 0x27a498: 0xc0a1030  jal         func_2840C0
    ctx->pc = 0x27A498u;
    SET_GPR_U32(ctx, 31, 0x27A4A0u);
    ctx->pc = 0x2840C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2840C0u, 0x27A498u, 0x27A4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A4A0u;
label_27a4a0:
    // 0x27a4a0: 0xc09ec58  jal         func_27B160
    ctx->pc = 0x27A4A0u;
    SET_GPR_U32(ctx, 31, 0x27A4A8u);
    ctx->pc = 0x27B160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B160u, 0x27A4A0u, 0x27A4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A4A8u;
label_27a4a8:
    // 0x27a4a8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27a4a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27a4ac: 0x8c231aa4  lw          $v1, 0x1AA4($at)
    ctx->pc = 0x27a4acu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1AA4u));
    // 0x27a4b0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x27a4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x27a4b4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x27a4b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x27a4b8: 0x1440005a  bnez        $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x27A4B8u;
    {
        const bool branch_taken_0x27a4b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27a4b8) {
            ctx->pc = 0x27A624u;
            goto label_27a624;
        }
    }
    ctx->pc = 0x27A4C0u;
    // 0x27a4c0: 0x24020070  addiu       $v0, $zero, 0x70
    ctx->pc = 0x27a4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x27a4c4: 0xa2220062  sb          $v0, 0x62($s1)
    ctx->pc = 0x27a4c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 98), (uint8_t)GPR_U32(ctx, 2));
    // 0x27a4c8: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x27a4c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x27a4cc: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x27a4ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x27a4d0: 0xa2420000  sb          $v0, 0x0($s2)
    ctx->pc = 0x27a4d0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x27a4d4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x27a4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27a4d8: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x27a4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x27a4dc: 0x2445b350  addiu       $a1, $v0, -0x4CB0
    ctx->pc = 0x27a4dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947664));
    // 0x27a4e0: 0xc0848cc  jal         func_212330
    ctx->pc = 0x27A4E0u;
    SET_GPR_U32(ctx, 31, 0x27A4E8u);
    ctx->pc = 0x212330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212330u, 0x27A4E0u, 0x27A4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A4E8u;
label_27a4e8:
    // 0x27a4e8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x27a4e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27a4ec: 0x24050090  addiu       $a1, $zero, 0x90
    ctx->pc = 0x27a4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x27a4f0: 0xc099794  jal         func_265E50
    ctx->pc = 0x27A4F0u;
    SET_GPR_U32(ctx, 31, 0x27A4F8u);
    ctx->pc = 0x265E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265E50u, 0x27A4F0u, 0x27A4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A4F8u;
label_27a4f8:
    // 0x27a4f8: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x27a4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x27a4fc: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x27a4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x27a500: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x27a500u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x27a504: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x27a504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x27a508: 0x2442e650  addiu       $v0, $v0, -0x19B0
    ctx->pc = 0x27a508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960720));
    // 0x27a50c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27a50cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27a510: 0x8c501390  lw          $s0, 0x1390($v0)
    ctx->pc = 0x27a510u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5008)));
    // 0x27a514: 0x3c02420c  lui         $v0, 0x420C
    ctx->pc = 0x27a514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16908 << 16));
    // 0x27a518: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27a518u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27a51c: 0x0  nop
    ctx->pc = 0x27a51cu;
    // NOP
    // 0x27a520: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x27a520u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x27a524: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x27a524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x27a528: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x27a528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x27a52c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x27a52cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x27a530: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x27a530u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x27a534: 0x3c0245c7  lui         $v0, 0x45C7
    ctx->pc = 0x27a534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17863 << 16));
    // 0x27a538: 0x34425800  ori         $v0, $v0, 0x5800
    ctx->pc = 0x27a538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22528);
    // 0x27a53c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27a53cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27a540: 0x0  nop
    ctx->pc = 0x27a540u;
    // NOP
    // 0x27a544: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x27a544u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x27a548: 0x3c024544  lui         $v0, 0x4544
    ctx->pc = 0x27a548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17732 << 16));
    // 0x27a54c: 0x3442e000  ori         $v0, $v0, 0xE000
    ctx->pc = 0x27a54cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57344);
    // 0x27a550: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27a550u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27a554: 0x0  nop
    ctx->pc = 0x27a554u;
    // NOP
    // 0x27a558: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x27a558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x27a55c: 0x3c02c5e1  lui         $v0, 0xC5E1
    ctx->pc = 0x27a55cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50657 << 16));
    // 0x27a560: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x27a560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x27a564: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27a564u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27a568: 0x0  nop
    ctx->pc = 0x27a568u;
    // NOP
    // 0x27a56c: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x27a56cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x27a570: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x27a570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x27a574: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x27a574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x27a578: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27a578u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27a57c: 0x0  nop
    ctx->pc = 0x27a57cu;
    // NOP
    // 0x27a580: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x27a580u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
    // 0x27a584: 0xae200054  sw          $zero, 0x54($s1)
    ctx->pc = 0x27a584u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
    // 0x27a588: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x27a588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x27a58c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x27a58cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27a590: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x27a590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x27a594: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x27a594u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x27a598: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x27a598u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x27a59c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x27a59cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x27a5a0: 0xc077e50  jal         func_1DF940
    ctx->pc = 0x27A5A0u;
    SET_GPR_U32(ctx, 31, 0x27A5A8u);
    ctx->pc = 0x1DF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF940u, 0x27A5A0u, 0x27A5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A5A8u;
label_27a5a8:
    // 0x27a5a8: 0x8e040058  lw          $a0, 0x58($s0)
    ctx->pc = 0x27a5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x27a5ac: 0x24053001  addiu       $a1, $zero, 0x3001
    ctx->pc = 0x27a5acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12289));
    // 0x27a5b0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x27a5b0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27a5b4: 0xc077a5c  jal         func_1DE970
    ctx->pc = 0x27A5B4u;
    SET_GPR_U32(ctx, 31, 0x27A5BCu);
    ctx->pc = 0x1DE970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE970u, 0x27A5B4u, 0x27A5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A5BCu;
label_27a5bc:
    // 0x27a5bc: 0x8e040058  lw          $a0, 0x58($s0)
    ctx->pc = 0x27a5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x27a5c0: 0x24053001  addiu       $a1, $zero, 0x3001
    ctx->pc = 0x27a5c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12289));
    // 0x27a5c4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x27a5c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27a5c8: 0xc077a5c  jal         func_1DE970
    ctx->pc = 0x27A5C8u;
    SET_GPR_U32(ctx, 31, 0x27A5D0u);
    ctx->pc = 0x1DE970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE970u, 0x27A5C8u, 0x27A5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A5D0u;
label_27a5d0:
    // 0x27a5d0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x27a5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x27a5d4: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x27a5d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x27a5d8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x27a5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x27a5dc: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x27a5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x27a5e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27a5e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27a5e4: 0x0  nop
    ctx->pc = 0x27a5e4u;
    // NOP
    // 0x27a5e8: 0xe60001a4  swc1        $f0, 0x1A4($s0)
    ctx->pc = 0x27a5e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 420), bits); }
    // 0x27a5ec: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x27a5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x27a5f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27a5f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27a5f4: 0x0  nop
    ctx->pc = 0x27a5f4u;
    // NOP
    // 0x27a5f8: 0xe60001a8  swc1        $f0, 0x1A8($s0)
    ctx->pc = 0x27a5f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 424), bits); }
    // 0x27a5fc: 0xe60001a0  swc1        $f0, 0x1A0($s0)
    ctx->pc = 0x27a5fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 416), bits); }
    // 0x27a600: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x27a600u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x27a604: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x27a604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x27a608: 0xc077e1c  jal         func_1DF870
    ctx->pc = 0x27A608u;
    SET_GPR_U32(ctx, 31, 0x27A610u);
    ctx->pc = 0x1DF870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF870u, 0x27A608u, 0x27A610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A610u;
label_27a610:
    // 0x27a610: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x27a610u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x27a614: 0xc075da8  jal         func_1D76A0
    ctx->pc = 0x27A614u;
    SET_GPR_U32(ctx, 31, 0x27A61Cu);
    ctx->pc = 0x1D76A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D76A0u, 0x27A614u, 0x27A61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A61Cu;
label_27a61c:
    // 0x27a61c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x27A61Cu;
    {
        const bool branch_taken_0x27a61c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a61c) {
            ctx->pc = 0x27A630u;
            goto label_27a630;
        }
    }
    ctx->pc = 0x27A624u;
label_27a624:
    // 0x27a624: 0x26520120  addiu       $s2, $s2, 0x120
    ctx->pc = 0x27a624u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 288));
    // 0x27a628: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x27a628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x27a62c: 0xa2420000  sb          $v0, 0x0($s2)
    ctx->pc = 0x27a62cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
label_27a630:
    // 0x27a630: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x27a630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x27a634: 0x2442b0d0  addiu       $v0, $v0, -0x4F30
    ctx->pc = 0x27a634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947024));
    // 0x27a638: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27a638u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27a63c: 0xac22d4bc  sw          $v0, -0x2B44($at)
    ctx->pc = 0x27a63cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CD4BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CD4BCu, _value); } while (0);
    // 0x27a640: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x27a640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27a644: 0xc0c79e8  jal         func_31E7A0
    ctx->pc = 0x27A644u;
    SET_GPR_U32(ctx, 31, 0x27A64Cu);
    ctx->pc = 0x31E7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E7A0u, 0x27A644u, 0x27A64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A64Cu;
label_27a64c:
    // 0x27a64c: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x27a64cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x27a650: 0x2463b4f0  addiu       $v1, $v1, -0x4B10
    ctx->pc = 0x27a650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948080));
    // 0x27a654: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27a654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27a658: 0xac23d73c  sw          $v1, -0x28C4($at)
    ctx->pc = 0x27a658u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CD73Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CD73Cu, _value); } while (0);
    // 0x27a65c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27a65cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27a660: 0x8c241b04  lw          $a0, 0x1B04($at)
    ctx->pc = 0x27a660u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1B04u));
    // 0x27a664: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x27a664u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x27a668: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x27a668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x27a66c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x27A66Cu;
    {
        const bool branch_taken_0x27a66c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a66c) {
            ctx->pc = 0x27A688u;
            goto label_27a688;
        }
    }
    ctx->pc = 0x27A674u;
    // 0x27a674: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27a674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27a678: 0x8c231ae4  lw          $v1, 0x1AE4($at)
    ctx->pc = 0x27a678u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1AE4u));
    // 0x27a67c: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x27a67cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x27a680: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x27A680u;
    {
        const bool branch_taken_0x27a680 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a680) {
            ctx->pc = 0x27A694u;
            goto label_27a694;
        }
    }
    ctx->pc = 0x27A688u;
label_27a688:
    // 0x27a688: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x27a688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27a68c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27a68cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27a690: 0xa023d731  sb          $v1, -0x28CF($at)
    ctx->pc = 0x27a690u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CD731u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD731u, _value); } while (0);
label_27a694:
    // 0x27a694: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x27a694u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27a698: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x27a698u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27a69c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x27a69cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27a6a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27a6a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27a6a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27a6a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27a6a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27a6a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27a6ac: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x27a6acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x27a6b0: 0x3e00008  jr          $ra
    ctx->pc = 0x27A6B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27A6B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27A6B8u;
}
