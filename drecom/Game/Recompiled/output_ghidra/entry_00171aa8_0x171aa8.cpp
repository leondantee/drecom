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

// Function: entry_00171aa8
// Address: 0x171aa8 - 0x171ab0
void entry_00171aa8_0x171aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171aa8_0x171aa8");
#endif

    ctx->pc = 0x171aa8u;

    // 0x171aa8: 0xafb20178  sw          $s2, 0x178($sp)
    ctx->pc = 0x171aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 18));
    // 0x171aac: 0x0  nop
    ctx->pc = 0x171aacu;
    // NOP
    ctx->pc = 0x171ab0u;
}
