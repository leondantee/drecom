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

// Function: entry_0013ead0
// Address: 0x13ead0 - 0x13eae0
void entry_0013ead0_0x13ead0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ead0_0x13ead0");
#endif

    ctx->pc = 0x13ead0u;

    // 0x13ead0: 0x8fa41680  lw          $a0, 0x1680($sp)
    ctx->pc = 0x13ead0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5760)));
    // 0x13ead4: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x13ead4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x13ead8: 0xafa51680  sw          $a1, 0x1680($sp)
    ctx->pc = 0x13ead8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5760), GPR_U32(ctx, 5));
    // 0x13eadc: 0x0  nop
    ctx->pc = 0x13eadcu;
    // NOP
    ctx->pc = 0x13eae0u;
}
