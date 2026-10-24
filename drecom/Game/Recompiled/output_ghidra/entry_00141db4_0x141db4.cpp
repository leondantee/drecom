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

// Function: entry_00141db4
// Address: 0x141db4 - 0x141dd8
void entry_00141db4_0x141db4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141db4_0x141db4");
#endif

    ctx->pc = 0x141db4u;

    // 0x141db4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x141db4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x141db8: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x141db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x141dbc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x141dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10000800u));
    // 0x141dc0: 0x503023  subu        $a2, $v0, $s0
    ctx->pc = 0x141dc0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x141dc4: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x141dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x141dc8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x141dc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x141dcc: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x141dccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x141dd0: 0x34420312  ori         $v0, $v0, 0x312
    ctx->pc = 0x141dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)786);
    // 0x141dd4: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x141dd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->pc = 0x141dd8u;
}
