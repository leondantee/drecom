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

// Function: entry_001dd678
// Address: 0x1dd678 - 0x1dd680
void entry_001dd678_0x1dd678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dd678_0x1dd678");
#endif

    ctx->pc = 0x1dd678u;

    // 0x1dd678: 0xafb40178  sw          $s4, 0x178($sp)
    ctx->pc = 0x1dd678u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 20));
    // 0x1dd67c: 0x0  nop
    ctx->pc = 0x1dd67cu;
    // NOP
    ctx->pc = 0x1dd680u;
}
