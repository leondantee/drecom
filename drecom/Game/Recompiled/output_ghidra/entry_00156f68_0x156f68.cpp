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

// Function: entry_00156f68
// Address: 0x156f68 - 0x156f70
void entry_00156f68_0x156f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156f68_0x156f68");
#endif

    ctx->pc = 0x156f68u;

    // 0x156f68: 0x3c100048  lui         $s0, 0x48
    ctx->pc = 0x156f68u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)72 << 16));
    // 0x156f6c: 0x2616ec58  addiu       $s6, $s0, -0x13A8
    ctx->pc = 0x156f6cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962264));
    ctx->pc = 0x156f70u;
}
