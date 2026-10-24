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

// Function: entry_0012eb58
// Address: 0x12eb58 - 0x12eb60
void entry_0012eb58_0x12eb58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012eb58_0x12eb58");
#endif

    ctx->pc = 0x12eb58u;

    // 0x12eb58: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x12eb58u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12eb5c: 0x0  nop
    ctx->pc = 0x12eb5cu;
    // NOP
    ctx->pc = 0x12eb60u;
}
