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

// Function: entry_001e7c70
// Address: 0x1e7c70 - 0x1e7c88
void entry_001e7c70_0x1e7c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e7c70_0x1e7c70");
#endif

    ctx->pc = 0x1e7c70u;

    // 0x1e7c70: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1e7c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e7c74: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1e7c74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1e7c78: 0x24020029  addiu       $v0, $zero, 0x29
    ctx->pc = 0x1e7c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x1e7c7c: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x1e7c7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1e7c80: 0xfe040000  sd          $a0, 0x0($s0)
    ctx->pc = 0x1e7c80u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 4));
    // 0x1e7c84: 0x0  nop
    ctx->pc = 0x1e7c84u;
    // NOP
    ctx->pc = 0x1e7c88u;
}
