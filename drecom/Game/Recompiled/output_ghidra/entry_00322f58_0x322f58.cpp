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

// Function: entry_00322f58
// Address: 0x322f58 - 0x322f60
void entry_00322f58_0x322f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00322f58_0x322f58");
#endif

    ctx->pc = 0x322f58u;

    // 0x322f58: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x322f58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x322f5c: 0x0  nop
    ctx->pc = 0x322f5cu;
    // NOP
    ctx->pc = 0x322f60u;
}
