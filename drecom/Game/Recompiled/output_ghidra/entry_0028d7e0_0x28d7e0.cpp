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

// Function: entry_0028d7e0
// Address: 0x28d7e0 - 0x28d7ec
void entry_0028d7e0_0x28d7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028d7e0_0x28d7e0");
#endif

    ctx->pc = 0x28d7e0u;

    // 0x28d7e0: 0x8e065dd0  lw          $a2, 0x5DD0($s0)
    ctx->pc = 0x28d7e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24016)));
    // 0x28d7e4: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x28d7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x28d7e8: 0xae035dd0  sw          $v1, 0x5DD0($s0)
    ctx->pc = 0x28d7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24016), GPR_U32(ctx, 3));
    ctx->pc = 0x28d7ecu;
}
