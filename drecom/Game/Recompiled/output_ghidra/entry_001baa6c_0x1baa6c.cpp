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

// Function: entry_001baa6c
// Address: 0x1baa6c - 0x1baa7c
void entry_001baa6c_0x1baa6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001baa6c_0x1baa6c");
#endif

    ctx->pc = 0x1baa6cu;

    // 0x1baa6c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1baa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1baa70: 0x90440003  lbu         $a0, 0x3($v0)
    ctx->pc = 0x1baa70u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x1baa74: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1baa74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1baa78: 0xa0430003  sb          $v1, 0x3($v0)
    ctx->pc = 0x1baa78u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1baa7cu;
}
