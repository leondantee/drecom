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

// Function: entry_00340690
// Address: 0x340690 - 0x3406c8
void entry_00340690_0x340690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00340690_0x340690");
#endif

    switch (ctx->pc) {
        case 0x3406b4u: goto label_3406b4;
        case 0x3406c4u: goto label_3406c4;
        default: break;
    }

    ctx->pc = 0x340690u;

    // 0x340690: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x340690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x340694: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x340694u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x340698: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x340698u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x34069c: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x34069cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3406a0: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x3406a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3406a4: 0x240900ff  addiu       $t1, $zero, 0xFF
    ctx->pc = 0x3406a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3406a8: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x3406a8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3406ac: 0xc0cfd1c  jal         func_33F470
    ctx->pc = 0x3406ACu;
    SET_GPR_U32(ctx, 31, 0x3406B4u);
    ctx->pc = 0x33F470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F470u, 0x3406ACu, 0x3406B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3406B4u;
label_3406b4:
    // 0x3406b4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3406b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3406b8: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x3406b8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x3406bc: 0xc0cfc80  jal         func_33F200
    ctx->pc = 0x3406BCu;
    SET_GPR_U32(ctx, 31, 0x3406C4u);
    ctx->pc = 0x33F200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F200u, 0x3406BCu, 0x3406C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3406C4u;
label_3406c4:
    // 0x3406c4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3406c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x3406c8u;
}
