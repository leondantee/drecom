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

// Function: entry_003407e0
// Address: 0x3407e0 - 0x340818
void entry_003407e0_0x3407e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003407e0_0x3407e0");
#endif

    switch (ctx->pc) {
        case 0x340804u: goto label_340804;
        case 0x340814u: goto label_340814;
        default: break;
    }

    ctx->pc = 0x3407e0u;

    // 0x3407e0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x3407e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3407e4: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x3407e4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x3407e8: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x3407e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3407ec: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x3407ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3407f0: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x3407f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3407f4: 0x240900ff  addiu       $t1, $zero, 0xFF
    ctx->pc = 0x3407f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3407f8: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x3407f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3407fc: 0xc0cfd1c  jal         func_33F470
    ctx->pc = 0x3407FCu;
    SET_GPR_U32(ctx, 31, 0x340804u);
    ctx->pc = 0x33F470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F470u, 0x3407FCu, 0x340804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340804u;
label_340804:
    // 0x340804: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x340804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x340808: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x340808u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x34080c: 0xc0cfc80  jal         func_33F200
    ctx->pc = 0x34080Cu;
    SET_GPR_U32(ctx, 31, 0x340814u);
    ctx->pc = 0x33F200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F200u, 0x34080Cu, 0x340814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340814u;
label_340814:
    // 0x340814: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x340814u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x340818u;
}
