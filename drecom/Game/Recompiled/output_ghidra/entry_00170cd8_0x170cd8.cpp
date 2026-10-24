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

// Function: entry_00170cd8
// Address: 0x170cd8 - 0x170ce0
void entry_00170cd8_0x170cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170cd8_0x170cd8");
#endif

    ctx->pc = 0x170cd8u;

    // 0x170cd8: 0xafb40178  sw          $s4, 0x178($sp)
    ctx->pc = 0x170cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 20));
    // 0x170cdc: 0x0  nop
    ctx->pc = 0x170cdcu;
    // NOP
    ctx->pc = 0x170ce0u;
}
