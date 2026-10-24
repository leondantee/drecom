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

// Function: entry_0018b498
// Address: 0x18b498 - 0x18b4a0
void entry_0018b498_0x18b498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b498_0x18b498");
#endif

    ctx->pc = 0x18b498u;

    // 0x18b498: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x18b498u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x18b49c: 0x0  nop
    ctx->pc = 0x18b49cu;
    // NOP
    ctx->pc = 0x18b4a0u;
}
