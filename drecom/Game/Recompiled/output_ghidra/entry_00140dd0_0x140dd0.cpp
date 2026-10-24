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

// Function: entry_00140dd0
// Address: 0x140dd0 - 0x140dd8
void entry_00140dd0_0x140dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140dd0_0x140dd0");
#endif

    ctx->pc = 0x140dd0u;

    // 0x140dd0: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x140dd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x140dd4: 0x0  nop
    ctx->pc = 0x140dd4u;
    // NOP
    ctx->pc = 0x140dd8u;
}
