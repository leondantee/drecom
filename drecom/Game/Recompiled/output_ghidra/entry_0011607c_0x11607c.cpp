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

// Function: entry_0011607c
// Address: 0x11607c - 0x116084
void entry_0011607c_0x11607c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011607c_0x11607c");
#endif

    ctx->pc = 0x11607cu;

    // 0x11607c: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x11607cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x116080: 0xafb00018  sw          $s0, 0x18($sp)
    ctx->pc = 0x116080u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
    ctx->pc = 0x116084u;
}
