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

// Function: entry_0016ee9c
// Address: 0x16ee9c - 0x16eea8
void entry_0016ee9c_0x16ee9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ee9c_0x16ee9c");
#endif

    ctx->pc = 0x16ee9cu;

    // 0x16ee9c: 0xafa000c4  sw          $zero, 0xC4($sp)
    ctx->pc = 0x16ee9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 0));
    // 0x16eea0: 0xae001320  sw          $zero, 0x1320($s0)
    ctx->pc = 0x16eea0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4896), GPR_U32(ctx, 0));
    // 0x16eea4: 0x0  nop
    ctx->pc = 0x16eea4u;
    // NOP
    ctx->pc = 0x16eea8u;
}
