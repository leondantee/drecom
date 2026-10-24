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

// Function: entry_00170cb0
// Address: 0x170cb0 - 0x170cb8
void entry_00170cb0_0x170cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170cb0_0x170cb0");
#endif

    ctx->pc = 0x170cb0u;

    // 0x170cb0: 0xafb10174  sw          $s1, 0x174($sp)
    ctx->pc = 0x170cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 17));
    // 0x170cb4: 0x0  nop
    ctx->pc = 0x170cb4u;
    // NOP
    ctx->pc = 0x170cb8u;
}
