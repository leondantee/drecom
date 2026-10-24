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

// Function: entry_0010d29c
// Address: 0x10d29c - 0x10d2a0
void entry_0010d29c_0x10d29c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d29c_0x10d29c");
#endif

    ctx->pc = 0x10d29cu;

    // 0x10d29c: 0xae4045c4  sw          $zero, 0x45C4($s2)
    ctx->pc = 0x10d29cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 17860), GPR_U32(ctx, 0));
    ctx->pc = 0x10d2a0u;
}
