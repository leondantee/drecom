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

// Function: entry_00192d30
// Address: 0x192d30 - 0x192d40
void entry_00192d30_0x192d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00192d30_0x192d30");
#endif

    ctx->pc = 0x192d30u;

    // 0x192d30: 0x2501021  addu        $v0, $s2, $s0
    ctx->pc = 0x192d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x192d34: 0xa0540000  sb          $s4, 0x0($v0)
    ctx->pc = 0x192d34u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 20));
    // 0x192d38: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x192d38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x192d3c: 0x0  nop
    ctx->pc = 0x192d3cu;
    // NOP
    ctx->pc = 0x192d40u;
}
