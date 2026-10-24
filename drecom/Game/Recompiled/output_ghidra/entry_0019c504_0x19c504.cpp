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

// Function: entry_0019c504
// Address: 0x19c504 - 0x19c508
void entry_0019c504_0x19c504(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c504_0x19c504");
#endif

    ctx->pc = 0x19c504u;

    // 0x19c504: 0xac201a60  sw          $zero, 0x1A60($at)
    ctx->pc = 0x19c504u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6752), GPR_U32(ctx, 0));
    ctx->pc = 0x19c508u;
}
