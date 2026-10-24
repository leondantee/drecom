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

// Function: entry_0033fd8c
// Address: 0x33fd8c - 0x33fda8
void entry_0033fd8c_0x33fd8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033fd8c_0x33fd8c");
#endif

    ctx->pc = 0x33fd8cu;

    // 0x33fd8c: 0xa2000060  sb          $zero, 0x60($s0)
    ctx->pc = 0x33fd8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 96), (uint8_t)GPR_U32(ctx, 0));
    // 0x33fd90: 0xa2000064  sb          $zero, 0x64($s0)
    ctx->pc = 0x33fd90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 100), (uint8_t)GPR_U32(ctx, 0));
    // 0x33fd94: 0xa2000068  sb          $zero, 0x68($s0)
    ctx->pc = 0x33fd94u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 104), (uint8_t)GPR_U32(ctx, 0));
    // 0x33fd98: 0xa200006c  sb          $zero, 0x6C($s0)
    ctx->pc = 0x33fd98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 108), (uint8_t)GPR_U32(ctx, 0));
    // 0x33fd9c: 0x26100090  addiu       $s0, $s0, 0x90
    ctx->pc = 0x33fd9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x33fda0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x33fda0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x33fda4: 0x0  nop
    ctx->pc = 0x33fda4u;
    // NOP
    ctx->pc = 0x33fda8u;
}
