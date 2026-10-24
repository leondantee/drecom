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

// Function: entry_0010d48c
// Address: 0x10d48c - 0x10d490
void entry_0010d48c_0x10d48c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d48c_0x10d48c");
#endif

    ctx->pc = 0x10d48cu;

    // 0x10d48c: 0xac6245c0  sw          $v0, 0x45C0($v1)
    ctx->pc = 0x10d48cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 17856), GPR_U32(ctx, 2));
    ctx->pc = 0x10d490u;
}
