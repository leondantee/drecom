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

// Function: entry_001dcfd8
// Address: 0x1dcfd8 - 0x1dcfdc
void entry_001dcfd8_0x1dcfd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dcfd8_0x1dcfd8");
#endif

    ctx->pc = 0x1dcfd8u;

    // 0x1dcfd8: 0xafb4016c  sw          $s4, 0x16C($sp)
    ctx->pc = 0x1dcfd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 20));
    ctx->pc = 0x1dcfdcu;
}
