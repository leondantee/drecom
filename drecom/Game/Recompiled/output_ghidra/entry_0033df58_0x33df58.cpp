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

// Function: entry_0033df58
// Address: 0x33df58 - 0x33df60
void entry_0033df58_0x33df58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033df58_0x33df58");
#endif

    ctx->pc = 0x33df58u;

    // 0x33df58: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x33df58u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x33df5c: 0x26940002  addiu       $s4, $s4, 0x2
    ctx->pc = 0x33df5cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
    ctx->pc = 0x33df60u;
}
