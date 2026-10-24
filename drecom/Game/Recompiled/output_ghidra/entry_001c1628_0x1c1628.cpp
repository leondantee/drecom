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

// Function: entry_001c1628
// Address: 0x1c1628 - 0x1c1634
void entry_001c1628_0x1c1628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1628_0x1c1628");
#endif

    ctx->pc = 0x1c1628u;

    // 0x1c1628: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c1628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c162c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c162cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c1630: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1c1630u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1c1634u;
}
