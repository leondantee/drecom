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

// Function: entry_001797c8
// Address: 0x1797c8 - 0x1797d0
void entry_001797c8_0x1797c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001797c8_0x1797c8");
#endif

    ctx->pc = 0x1797c8u;

    // 0x1797c8: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1797c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1797cc: 0x0  nop
    ctx->pc = 0x1797ccu;
    // NOP
    ctx->pc = 0x1797d0u;
}
