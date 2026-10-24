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

// Function: entry_0010c2bc
// Address: 0x10c2bc - 0x10c2c0
void entry_0010c2bc_0x10c2bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010c2bc_0x10c2bc");
#endif

    ctx->pc = 0x10c2bcu;

    // 0x10c2bc: 0x24423990  addiu       $v0, $v0, 0x3990
    ctx->pc = 0x10c2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14736));
    ctx->pc = 0x10c2c0u;
}
