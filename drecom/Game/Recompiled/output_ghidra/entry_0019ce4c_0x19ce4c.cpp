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

// Function: entry_0019ce4c
// Address: 0x19ce4c - 0x19ce54
void entry_0019ce4c_0x19ce4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ce4c_0x19ce4c");
#endif

    ctx->pc = 0x19ce4cu;

    // 0x19ce4c: 0xac3095bc  sw          $s0, -0x6A44($at)
    ctx->pc = 0x19ce4cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294940092), GPR_U32(ctx, 16));
    // 0x19ce50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19ce50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x19ce54u;
}
