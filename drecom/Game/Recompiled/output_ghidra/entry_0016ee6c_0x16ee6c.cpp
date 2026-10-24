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

// Function: entry_0016ee6c
// Address: 0x16ee6c - 0x16ee78
void entry_0016ee6c_0x16ee6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ee6c_0x16ee6c");
#endif

    ctx->pc = 0x16ee6cu;

    // 0x16ee6c: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x16ee6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    // 0x16ee70: 0xae00008c  sw          $zero, 0x8C($s0)
    ctx->pc = 0x16ee70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
    // 0x16ee74: 0x0  nop
    ctx->pc = 0x16ee74u;
    // NOP
    ctx->pc = 0x16ee78u;
}
