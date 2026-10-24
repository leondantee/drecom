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

// Function: entry_00139ca4
// Address: 0x139ca4 - 0x139cc8
void entry_00139ca4_0x139ca4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00139ca4_0x139ca4");
#endif

    ctx->pc = 0x139ca4u;

    // 0x139ca4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x139ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x139ca8: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x139ca8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x139cac: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x139CACu;
    {
        const bool branch_taken_0x139cac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x139cac) {
            ctx->pc = 0x139CC8u;
            return;
        }
    }
    ctx->pc = 0x139CB4u;
    // 0x139cb4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x139cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x139cb8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x139cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x139cbc: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x139cbcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x139cc0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x139CC0u;
    {
        const bool branch_taken_0x139cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x139cc0) {
            ctx->pc = 0x139CD4u;
            return;
        }
    }
    ctx->pc = 0x139CC8u;
}
