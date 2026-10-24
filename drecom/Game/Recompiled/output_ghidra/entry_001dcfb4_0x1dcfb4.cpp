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

// Function: entry_001dcfb4
// Address: 0x1dcfb4 - 0x1dcfb8
void entry_001dcfb4_0x1dcfb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dcfb4_0x1dcfb4");
#endif

    ctx->pc = 0x1dcfb4u;

    // 0x1dcfb4: 0xafb10168  sw          $s1, 0x168($sp)
    ctx->pc = 0x1dcfb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 17));
    ctx->pc = 0x1dcfb8u;
}
