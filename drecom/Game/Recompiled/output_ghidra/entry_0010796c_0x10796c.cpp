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

// Function: entry_0010796c
// Address: 0x10796c - 0x107970
void entry_0010796c_0x10796c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010796c_0x10796c");
#endif

    ctx->pc = 0x10796cu;

    // 0x10796c: 0xae023de0  sw          $v0, 0x3DE0($s0)
    ctx->pc = 0x10796cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 15840), GPR_U32(ctx, 2));
    ctx->pc = 0x107970u;
}
