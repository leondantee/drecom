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

// Function: entry_00337b94
// Address: 0x337b94 - 0x337ba0
void entry_00337b94_0x337b94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00337b94_0x337b94");
#endif

    ctx->pc = 0x337b94u;

    // 0x337b94: 0x8e025dd4  lw          $v0, 0x5DD4($s0)
    ctx->pc = 0x337b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24020)));
    // 0x337b98: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x337b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x337b9c: 0xae025dd4  sw          $v0, 0x5DD4($s0)
    ctx->pc = 0x337b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24020), GPR_U32(ctx, 2));
    ctx->pc = 0x337ba0u;
}
