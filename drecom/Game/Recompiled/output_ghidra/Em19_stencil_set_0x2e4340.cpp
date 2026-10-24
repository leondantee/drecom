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

// Function: Em19_stencil_set
// Address: 0x2e4340 - 0x2e4520
void Em19_stencil_set_0x2e4340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em19_stencil_set_0x2e4340");
#endif

    switch (ctx->pc) {
        case 0x2e4394u: goto label_2e4394;
        case 0x2e43d8u: goto label_2e43d8;
        case 0x2e4400u: goto label_2e4400;
        case 0x2e4444u: goto label_2e4444;
        case 0x2e4488u: goto label_2e4488;
        case 0x2e44a0u: goto label_2e44a0;
        case 0x2e44e4u: goto label_2e44e4;
        case 0x2e450cu: goto label_2e450c;
        default: break;
    }

    ctx->pc = 0x2e4340u;

    // 0x2e4340: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e4340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e4344: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x2e4344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x2e4348: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e4348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e434c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x2e434cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x2e4350: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2e4350u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2e4354: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x2e4354u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x2e4358: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2e4358u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2e435c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e435cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e4360: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e4360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e4364: 0x8c500234  lw          $s0, 0x234($v0)
    ctx->pc = 0x2e4364u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 564)));
    // 0x2e4368: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2e4368u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2e436c: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x2e436cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x2e4370: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2e4370u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2e4374: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e4374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e4378: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2e4378u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2e437c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e437cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e4380: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e4380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e4384: 0x24440204  addiu       $a0, $v0, 0x204
    ctx->pc = 0x2e4384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 516));
    // 0x2e4388: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x2e4388u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2e438c: 0xc06b06c  jal         func_1AC1B0
    ctx->pc = 0x2E438Cu;
    SET_GPR_U32(ctx, 31, 0x2E4394u);
    ctx->pc = 0x1AC1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1B0u, 0x2E438Cu, 0x2E4394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4394u;
label_2e4394:
    // 0x2e4394: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2e4394u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2e4398: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x2e4398u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x2e439c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2e439cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2e43a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e43a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e43a4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2e43a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2e43a8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e43a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e43ac: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x2e43acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e43b0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2e43b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2e43b4: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x2e43b4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x2e43b8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2e43b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2e43bc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e43bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e43c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e43c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e43c4: 0x8c450244  lw          $a1, 0x244($v0)
    ctx->pc = 0x2e43c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 580)));
    // 0x2e43c8: 0x24840204  addiu       $a0, $a0, 0x204
    ctx->pc = 0x2e43c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 516));
    // 0x2e43cc: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x2e43ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2e43d0: 0xc06b07c  jal         func_1AC1F0
    ctx->pc = 0x2E43D0u;
    SET_GPR_U32(ctx, 31, 0x2E43D8u);
    ctx->pc = 0x1AC1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1F0u, 0x2E43D0u, 0x2E43D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E43D8u;
label_2e43d8:
    // 0x2e43d8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2e43d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2e43dc: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x2e43dcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x2e43e0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2e43e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2e43e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e43e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e43e8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2e43e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2e43ec: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e43ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e43f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e43f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e43f4: 0x24440204  addiu       $a0, $v0, 0x204
    ctx->pc = 0x2e43f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 516));
    // 0x2e43f8: 0xc06b0d4  jal         func_1AC350
    ctx->pc = 0x2E43F8u;
    SET_GPR_U32(ctx, 31, 0x2E4400u);
    ctx->pc = 0x1AC350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC350u, 0x2E43F8u, 0x2E4400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4400u;
label_2e4400:
    // 0x2e4400: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2e4400u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2e4404: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x2e4404u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x2e4408: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2e4408u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2e440c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e440cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e4410: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e4410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e4414: 0x8c50023c  lw          $s0, 0x23C($v0)
    ctx->pc = 0x2e4414u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 572)));
    // 0x2e4418: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2e4418u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2e441c: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x2e441cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x2e4420: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2e4420u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2e4424: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e4424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e4428: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2e4428u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2e442c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e442cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e4430: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e4430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e4434: 0x2444021c  addiu       $a0, $v0, 0x21C
    ctx->pc = 0x2e4434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 540));
    // 0x2e4438: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x2e4438u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2e443c: 0xc06b06c  jal         func_1AC1B0
    ctx->pc = 0x2E443Cu;
    SET_GPR_U32(ctx, 31, 0x2E4444u);
    ctx->pc = 0x1AC1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1B0u, 0x2E443Cu, 0x2E4444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4444u;
label_2e4444:
    // 0x2e4444: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2e4444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2e4448: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x2e4448u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x2e444c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2e444cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2e4450: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e4450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e4454: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2e4454u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2e4458: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e4458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e445c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x2e445cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e4460: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2e4460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2e4464: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x2e4464u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x2e4468: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2e4468u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2e446c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e446cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e4470: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e4470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e4474: 0x8c45024c  lw          $a1, 0x24C($v0)
    ctx->pc = 0x2e4474u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x2e4478: 0x2484021c  addiu       $a0, $a0, 0x21C
    ctx->pc = 0x2e4478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 540));
    // 0x2e447c: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x2e447cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2e4480: 0xc06b07c  jal         func_1AC1F0
    ctx->pc = 0x2E4480u;
    SET_GPR_U32(ctx, 31, 0x2E4488u);
    ctx->pc = 0x1AC1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1F0u, 0x2E4480u, 0x2E4488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4488u;
label_2e4488:
    // 0x2e4488: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e4488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e448c: 0x8c44024c  lw          $a0, 0x24C($v0)
    ctx->pc = 0x2e448cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x2e4490: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e4490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e4494: 0x8c450250  lw          $a1, 0x250($v0)
    ctx->pc = 0x2e4494u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 592)));
    // 0x2e4498: 0xc075898  jal         func_1D6260
    ctx->pc = 0x2E4498u;
    SET_GPR_U32(ctx, 31, 0x2E44A0u);
    ctx->pc = 0x1D6260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6260u, 0x2E4498u, 0x2E44A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E44A0u;
label_2e44a0:
    // 0x2e44a0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2e44a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2e44a4: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x2e44a4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x2e44a8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2e44a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2e44ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e44acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e44b0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2e44b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2e44b4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e44b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e44b8: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x2e44b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e44bc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2e44bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2e44c0: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x2e44c0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x2e44c4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2e44c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2e44c8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e44c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e44cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e44ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e44d0: 0x8c450254  lw          $a1, 0x254($v0)
    ctx->pc = 0x2e44d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 596)));
    // 0x2e44d4: 0x2484021c  addiu       $a0, $a0, 0x21C
    ctx->pc = 0x2e44d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 540));
    // 0x2e44d8: 0x240600c0  addiu       $a2, $zero, 0xC0
    ctx->pc = 0x2e44d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x2e44dc: 0xc06b07c  jal         func_1AC1F0
    ctx->pc = 0x2E44DCu;
    SET_GPR_U32(ctx, 31, 0x2E44E4u);
    ctx->pc = 0x1AC1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1F0u, 0x2E44DCu, 0x2E44E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E44E4u;
label_2e44e4:
    // 0x2e44e4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2e44e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2e44e8: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x2e44e8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x2e44ec: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2e44ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2e44f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e44f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e44f4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2e44f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2e44f8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e44f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e44fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e44fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e4500: 0x2444021c  addiu       $a0, $v0, 0x21C
    ctx->pc = 0x2e4500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 540));
    // 0x2e4504: 0xc06b0d4  jal         func_1AC350
    ctx->pc = 0x2E4504u;
    SET_GPR_U32(ctx, 31, 0x2E450Cu);
    ctx->pc = 0x1AC350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC350u, 0x2E4504u, 0x2E450Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E450Cu;
label_2e450c:
    // 0x2e450c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x2e450cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e4510: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e4510u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e4514: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2e4514u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e4518: 0x3e00008  jr          $ra
    ctx->pc = 0x2E4518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4518u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E4520u;
}
