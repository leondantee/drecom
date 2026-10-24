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

// Function: entry_00107aa4
// Address: 0x107aa4 - 0x107aa8
void entry_00107aa4_0x107aa4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107aa4_0x107aa4");
#endif

    ctx->pc = 0x107aa4u;

    // 0x107aa4: 0xaca23a9c  sw          $v0, 0x3A9C($a1)
    ctx->pc = 0x107aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 15004), GPR_U32(ctx, 2));
    ctx->pc = 0x107aa8u;
}
