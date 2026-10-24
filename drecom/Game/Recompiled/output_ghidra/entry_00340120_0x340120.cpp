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

// Function: entry_00340120
// Address: 0x340120 - 0x340160
void entry_00340120_0x340120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00340120_0x340120");
#endif

    switch (ctx->pc) {
        case 0x340148u: goto label_340148;
        case 0x340158u: goto label_340158;
        default: break;
    }

    ctx->pc = 0x340120u;

    // 0x340120: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x340120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x340124: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x340124u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x340128: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x340128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x34012c: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x34012cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x340130: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x340130u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x340134: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x340134u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x340138: 0x240900fe  addiu       $t1, $zero, 0xFE
    ctx->pc = 0x340138u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    // 0x34013c: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x34013cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x340140: 0xc0cfd1c  jal         func_33F470
    ctx->pc = 0x340140u;
    SET_GPR_U32(ctx, 31, 0x340148u);
    ctx->pc = 0x33F470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F470u, 0x340140u, 0x340148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340148u;
label_340148:
    // 0x340148: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x340148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x34014c: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x34014cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x340150: 0xc0cfcf0  jal         func_33F3C0
    ctx->pc = 0x340150u;
    SET_GPR_U32(ctx, 31, 0x340158u);
    ctx->pc = 0x33F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F3C0u, 0x340150u, 0x340158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340158u;
label_340158:
    // 0x340158: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x340158u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x34015c: 0x0  nop
    ctx->pc = 0x34015cu;
    // NOP
    ctx->pc = 0x340160u;
}
