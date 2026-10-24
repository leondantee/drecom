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

// Function: entry_001049f8
// Address: 0x1049f8 - 0x1049fc
void entry_001049f8_0x1049f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001049f8_0x1049f8");
#endif

    ctx->pc = 0x1049f8u;

    // 0x1049f8: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1049f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    ctx->pc = 0x1049fcu;
}
