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

// Function: entry_00184c50
// Address: 0x184c50 - 0x184c60
void entry_00184c50_0x184c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00184c50_0x184c50");
#endif

    ctx->pc = 0x184c50u;

    // 0x184c50: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x184c50u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x184c54: 0x26100060  addiu       $s0, $s0, 0x60
    ctx->pc = 0x184c54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x184c58: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x184c58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x184c5c: 0x0  nop
    ctx->pc = 0x184c5cu;
    // NOP
    ctx->pc = 0x184c60u;
}
