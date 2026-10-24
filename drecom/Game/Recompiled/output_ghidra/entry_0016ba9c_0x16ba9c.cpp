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

// Function: entry_0016ba9c
// Address: 0x16ba9c - 0x16baa8
void entry_0016ba9c_0x16ba9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ba9c_0x16ba9c");
#endif

    ctx->pc = 0x16ba9cu;

    // 0x16ba9c: 0x8fb400a8  lw          $s4, 0xA8($sp)
    ctx->pc = 0x16ba9cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x16baa0: 0x8fb70098  lw          $s7, 0x98($sp)
    ctx->pc = 0x16baa0u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x16baa4: 0x0  nop
    ctx->pc = 0x16baa4u;
    // NOP
    ctx->pc = 0x16baa8u;
}
