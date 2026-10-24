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

// Function: entry_001737d8
// Address: 0x1737d8 - 0x1737e0
void entry_001737d8_0x1737d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001737d8_0x1737d8");
#endif

    ctx->pc = 0x1737d8u;

    // 0x1737d8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1737d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1737dc: 0x0  nop
    ctx->pc = 0x1737dcu;
    // NOP
    ctx->pc = 0x1737e0u;
}
