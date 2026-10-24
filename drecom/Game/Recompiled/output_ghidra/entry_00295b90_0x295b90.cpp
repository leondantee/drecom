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

// Function: entry_00295b90
// Address: 0x295b90 - 0x295b98
void entry_00295b90_0x295b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00295b90_0x295b90");
#endif

    ctx->pc = 0x295b90u;

    // 0x295b90: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x295b90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x295b94: 0x0  nop
    ctx->pc = 0x295b94u;
    // NOP
    ctx->pc = 0x295b98u;
}
