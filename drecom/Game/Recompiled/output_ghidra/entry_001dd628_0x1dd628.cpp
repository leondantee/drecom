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

// Function: entry_001dd628
// Address: 0x1dd628 - 0x1dd630
void entry_001dd628_0x1dd628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dd628_0x1dd628");
#endif

    ctx->pc = 0x1dd628u;

    // 0x1dd628: 0xafb20170  sw          $s2, 0x170($sp)
    ctx->pc = 0x1dd628u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 18));
    // 0x1dd62c: 0x0  nop
    ctx->pc = 0x1dd62cu;
    // NOP
    ctx->pc = 0x1dd630u;
}
