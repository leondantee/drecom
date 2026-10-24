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

// Function: entry_002c7498
// Address: 0x2c7498 - 0x2c74e4
void entry_002c7498_0x2c7498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c7498_0x2c7498");
#endif

    switch (ctx->pc) {
        case 0x2c74a0u: goto label_2c74a0;
        default: break;
    }

    ctx->pc = 0x2c7498u;

    // 0x2c7498: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2C7498u;
    SET_GPR_U32(ctx, 31, 0x2C74A0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2C7498u, 0x2C74A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C74A0u;
label_2c74a0:
    // 0x2c74a0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c74a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c74a4: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x2c74a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2c74a8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2c74a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c74ac: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2C74ACu;
    {
        const bool branch_taken_0x2c74ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c74ac) {
            ctx->pc = 0x2C74E4u;
            return;
        }
    }
    ctx->pc = 0x2C74B4u;
    // 0x2c74b4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2c74b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c74b8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c74b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c74bc: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2c74bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c74c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c74c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c74c4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c74c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c74c8: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2c74c8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c74cc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c74ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c74d0: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2c74d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c74d4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c74d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c74d8: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2c74d8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c74dc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c74dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c74e0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2c74e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2c74e4u;
}
