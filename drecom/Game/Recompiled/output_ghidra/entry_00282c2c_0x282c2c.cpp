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

// Function: entry_00282c2c
// Address: 0x282c2c - 0x282c30
void entry_00282c2c_0x282c2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00282c2c_0x282c2c");
#endif

    ctx->pc = 0x282c2cu;

    // 0x282c2c: 0xac20dc3c  sw          $zero, -0x23C4($at)
    ctx->pc = 0x282c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294958140), GPR_U32(ctx, 0));
    ctx->pc = 0x282c30u;
}
