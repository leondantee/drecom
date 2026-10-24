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

// Function: entry_002c6da8
// Address: 0x2c6da8 - 0x2c6e30
void entry_002c6da8_0x2c6da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c6da8_0x2c6da8");
#endif

    switch (ctx->pc) {
        case 0x2c6decu: goto label_2c6dec;
        default: break;
    }

    ctx->pc = 0x2c6da8u;

    // 0x2c6da8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2c6da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c6dac: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2c6dacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2c6db0: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x2C6DB0u;
    {
        const bool branch_taken_0x2c6db0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6db0) {
            ctx->pc = 0x2C6E30u;
            return;
        }
    }
    ctx->pc = 0x2C6DB8u;
    // 0x2c6db8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c6db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c6dbc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c6dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c6dc0: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2c6dc0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c6dc4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c6dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c6dc8: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x2c6dc8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c6dcc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c6dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c6dd0: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2c6dd0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c6dd4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c6dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c6dd8: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2c6dd8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c6ddc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c6ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c6de0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2c6de0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2c6de4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2C6DE4u;
    SET_GPR_U32(ctx, 31, 0x2C6DECu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2C6DE4u, 0x2C6DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6DECu;
label_2c6dec:
    // 0x2c6dec: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2c6decu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c6df0: 0x30640007  andi        $a0, $v1, 0x7
    ctx->pc = 0x2c6df0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x2c6df4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c6df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c6df8: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2C6DF8u;
    {
        const bool branch_taken_0x2c6df8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c6df8) {
            ctx->pc = 0x2C6E30u;
            return;
        }
    }
    ctx->pc = 0x2C6E00u;
    // 0x2c6e00: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c6e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c6e04: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2c6e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c6e08: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2c6e08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c6e0c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2c6e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c6e10: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2c6e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c6e14: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2c6e14u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c6e18: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2c6e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c6e1c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2c6e1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c6e20: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2c6e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c6e24: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2c6e24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c6e28: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2c6e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c6e2c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2c6e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2c6e30u;
}
