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

// Function: entry_00123ad0
// Address: 0x123ad0 - 0x123b08
void entry_00123ad0_0x123ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00123ad0_0x123ad0");
#endif

    ctx->pc = 0x123ad0u;

    // 0x123ad0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x123ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x123ad4: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x123ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x123ad8: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x123ad8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x123adc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x123adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x123ae0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x123ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x123ae4: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x123ae4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x123ae8: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x123ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x123aec: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x123aecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x123af0: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x123af0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x123af4: 0xa0a00003  sb          $zero, 0x3($a1)
    ctx->pc = 0x123af4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x123af8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x123af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x123afc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x123afcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x123b00: 0x100000e6  b           . + 4 + (0xE6 << 2)
    ctx->pc = 0x123B00u;
    {
        const bool branch_taken_0x123b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x123b00) {
            ctx->pc = 0x123E9Cu;
            return;
        }
    }
    ctx->pc = 0x123B08u;
}
