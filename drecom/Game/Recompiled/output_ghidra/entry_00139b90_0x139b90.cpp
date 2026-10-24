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

// Function: entry_00139b90
// Address: 0x139b90 - 0x139bb4
void entry_00139b90_0x139b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00139b90_0x139b90");
#endif

    ctx->pc = 0x139b90u;

    // 0x139b90: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x139b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x139b94: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x139b94u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x139b98: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x139B98u;
    {
        const bool branch_taken_0x139b98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x139b98) {
            ctx->pc = 0x139BB4u;
            return;
        }
    }
    ctx->pc = 0x139BA0u;
    // 0x139ba0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x139ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x139ba4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x139ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x139ba8: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x139ba8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x139bac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x139BACu;
    {
        const bool branch_taken_0x139bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x139bac) {
            ctx->pc = 0x139BC0u;
            return;
        }
    }
    ctx->pc = 0x139BB4u;
}
