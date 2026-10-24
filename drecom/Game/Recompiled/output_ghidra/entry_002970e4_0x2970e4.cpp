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

// Function: entry_002970e4
// Address: 0x2970e4 - 0x2970e8
void entry_002970e4_0x2970e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002970e4_0x2970e4");
#endif

    ctx->pc = 0x2970e4u;

    // 0x2970e4: 0xac20ca00  sw          $zero, -0x3600($at)
    ctx->pc = 0x2970e4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294953472), GPR_U32(ctx, 0));
    ctx->pc = 0x2970e8u;
}
