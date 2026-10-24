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

// Function: entry_001d8b10
// Address: 0x1d8b10 - 0x1d8b18
void entry_001d8b10_0x1d8b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d8b10_0x1d8b10");
#endif

    ctx->pc = 0x1d8b10u;

    // 0x1d8b10: 0x24102710  addiu       $s0, $zero, 0x2710
    ctx->pc = 0x1d8b10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x1d8b14: 0x0  nop
    ctx->pc = 0x1d8b14u;
    // NOP
    ctx->pc = 0x1d8b18u;
}
