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

// Function: entry_00340018
// Address: 0x340018 - 0x340050
void entry_00340018_0x340018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00340018_0x340018");
#endif

    switch (ctx->pc) {
        case 0x34003cu: goto label_34003c;
        case 0x34004cu: goto label_34004c;
        default: break;
    }

    ctx->pc = 0x340018u;

    // 0x340018: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x340018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x34001c: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x34001cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x340020: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x340020u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x340024: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x340024u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x340028: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x340028u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x34002c: 0x240900fe  addiu       $t1, $zero, 0xFE
    ctx->pc = 0x34002cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    // 0x340030: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x340030u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x340034: 0xc0cfd1c  jal         func_33F470
    ctx->pc = 0x340034u;
    SET_GPR_U32(ctx, 31, 0x34003Cu);
    ctx->pc = 0x33F470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F470u, 0x340034u, 0x34003Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34003Cu;
label_34003c:
    // 0x34003c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x34003cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x340040: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x340040u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x340044: 0xc0cfcbc  jal         func_33F2F0
    ctx->pc = 0x340044u;
    SET_GPR_U32(ctx, 31, 0x34004Cu);
    ctx->pc = 0x33F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F2F0u, 0x340044u, 0x34004Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34004Cu;
label_34004c:
    // 0x34004c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x34004cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x340050u;
}
