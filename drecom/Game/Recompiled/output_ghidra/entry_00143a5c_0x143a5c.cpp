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

// Function: entry_00143a5c
// Address: 0x143a5c - 0x143a60
void entry_00143a5c_0x143a5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143a5c_0x143a5c");
#endif

    ctx->pc = 0x143a5cu;

    // 0x143a5c: 0xae6001ec  sw          $zero, 0x1EC($s3)
    ctx->pc = 0x143a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 492), GPR_U32(ctx, 0));
    ctx->pc = 0x143a60u;
}
