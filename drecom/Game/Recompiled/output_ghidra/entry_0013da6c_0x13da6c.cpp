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

// Function: entry_0013da6c
// Address: 0x13da6c - 0x13daa4
void entry_0013da6c_0x13da6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013da6c_0x13da6c");
#endif

    ctx->pc = 0x13da6cu;

    // 0x13da6c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x13da6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x13da70: 0x3803c  dsll32      $s0, $v1, 0
    ctx->pc = 0x13da70u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) << (32 + 0));
    // 0x13da74: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x13da74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13da78: 0x2002027  not         $a0, $s0
    ctx->pc = 0x13da78u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 16) | GPR_U64(ctx, 0)));
    // 0x13da7c: 0xdca30008  ld          $v1, 0x8($a1)
    ctx->pc = 0x13da7cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x13da80: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x13da80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x13da84: 0xfca30008  sd          $v1, 0x8($a1)
    ctx->pc = 0x13da84u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 3));
    // 0x13da88: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x13da88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13da8c: 0xdc830008  ld          $v1, 0x8($a0)
    ctx->pc = 0x13da8cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x13da90: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x13da90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x13da94: 0xfc830008  sd          $v1, 0x8($a0)
    ctx->pc = 0x13da94u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 3));
    // 0x13da98: 0x2404027c  addiu       $a0, $zero, 0x27C
    ctx->pc = 0x13da98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 636));
    // 0x13da9c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x13da9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13daa0: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x13daa0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    ctx->pc = 0x13daa4u;
}
