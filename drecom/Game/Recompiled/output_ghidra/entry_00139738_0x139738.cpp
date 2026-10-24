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

// Function: entry_00139738
// Address: 0x139738 - 0x139750
void entry_00139738_0x139738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00139738_0x139738");
#endif

    ctx->pc = 0x139738u;

    // 0x139738: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x139738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13973c: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x13973cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x139740: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x139740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x139744: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x139744u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x139748: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x139748u;
    {
        const bool branch_taken_0x139748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x139748) {
            ctx->pc = 0x139898u;
            return;
        }
    }
    ctx->pc = 0x139750u;
}
