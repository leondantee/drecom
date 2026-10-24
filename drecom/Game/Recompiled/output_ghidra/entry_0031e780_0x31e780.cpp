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

// Function: entry_0031e780
// Address: 0x31e780 - 0x31e784
void entry_0031e780_0x31e780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031e780_0x31e780");
#endif

    ctx->pc = 0x31e780u;

    // 0x31e780: 0xac23af6c  sw          $v1, -0x5094($at)
    ctx->pc = 0x31e780u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294946668), GPR_U32(ctx, 3));
    ctx->pc = 0x31e784u;
}
