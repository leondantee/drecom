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

// Function: entry_002e4f80
// Address: 0x2e4f80 - 0x2e4fc0
void entry_002e4f80_0x2e4f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e4f80_0x2e4f80");
#endif

    ctx->pc = 0x2e4f80u;

    // 0x2e4f80: 0x1a20fff0  blez        $s1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2E4F80u;
    {
        const bool branch_taken_0x2e4f80 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x2e4f80) {
            ctx->pc = 0x2E4F44u;
            return;
        }
    }
    ctx->pc = 0x2E4F88u;
    // 0x2e4f88: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2e4f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e4f8c: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x2e4f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x2e4f90: 0x24700ab0  addiu       $s0, $v1, 0xAB0
    ctx->pc = 0x2e4f90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 2736));
    // 0x2e4f94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e4f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e4f98: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x2e4f98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e4f9c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2e4f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e4fa0: 0x8c700058  lw          $s0, 0x58($v1)
    ctx->pc = 0x2e4fa0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x2e4fa4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e4fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e4fa8: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x2e4fa8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e4fac: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2e4facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e4fb0: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x2e4fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x2e4fb4: 0x24700990  addiu       $s0, $v1, 0x990
    ctx->pc = 0x2e4fb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 2448));
    // 0x2e4fb8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e4fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e4fbc: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x2e4fbcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x2e4fc0u;
}
