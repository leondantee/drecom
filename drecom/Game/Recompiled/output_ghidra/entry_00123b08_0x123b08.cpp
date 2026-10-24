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

// Function: entry_00123b08
// Address: 0x123b08 - 0x123b54
void entry_00123b08_0x123b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00123b08_0x123b08");
#endif

    ctx->pc = 0x123b08u;

    // 0x123b08: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x123b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x123b0c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x123b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x123b10: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x123b10u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x123b14: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x123b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x123b18: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x123b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x123b1c: 0xa0820001  sb          $v0, 0x1($a0)
    ctx->pc = 0x123b1cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x123b20: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x123b20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x123b24: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x123b24u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x123b28: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x123b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x123b2c: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x123b2cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x123b30: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x123b30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x123b34: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x123b34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x123b38: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x123b38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x123b3c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x123b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x123b40: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x123b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x123b44: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x123b44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x123b48: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x123b48u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x123b4c: 0x100000d3  b           . + 4 + (0xD3 << 2)
    ctx->pc = 0x123B4Cu;
    {
        const bool branch_taken_0x123b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x123b4c) {
            ctx->pc = 0x123E9Cu;
            return;
        }
    }
    ctx->pc = 0x123B54u;
}
