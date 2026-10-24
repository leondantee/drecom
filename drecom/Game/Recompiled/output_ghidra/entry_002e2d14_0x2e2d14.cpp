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

// Function: entry_002e2d14
// Address: 0x2e2d14 - 0x2e2da0
void entry_002e2d14_0x2e2d14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e2d14_0x2e2d14");
#endif

    switch (ctx->pc) {
        case 0x2e2d20u: goto label_2e2d20;
        default: break;
    }

    ctx->pc = 0x2e2d14u;

    // 0x2e2d14: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2e2d14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e2d18: 0xc0b8c6c  jal         func_2E31B0
    ctx->pc = 0x2E2D18u;
    SET_GPR_U32(ctx, 31, 0x2E2D20u);
    ctx->pc = 0x2E31B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E31B0u, 0x2E2D18u, 0x2E2D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2D20u;
label_2e2d20:
    // 0x2e2d20: 0x9203006a  lbu         $v1, 0x6A($s0)
    ctx->pc = 0x2e2d20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 106)));
    // 0x2e2d24: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2e2d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2e2d28: 0xa203006a  sb          $v1, 0x6A($s0)
    ctx->pc = 0x2e2d28u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 106), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e2d2c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e2d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e2d30: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x2e2d30u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x2e2d34: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2e2d34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2e2d38: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2e2d38u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2e2d3c: 0x4610025  bgez        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x2E2D3Cu;
    {
        const bool branch_taken_0x2e2d3c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2e2d3c) {
            ctx->pc = 0x2E2DD4u;
            return;
        }
    }
    ctx->pc = 0x2E2D44u;
    // 0x2e2d44: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e2d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e2d48: 0x946311f6  lhu         $v1, 0x11F6($v1)
    ctx->pc = 0x2e2d48u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
    // 0x2e2d4c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2e2d4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2e2d50: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x2e2d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2e2d54: 0x10830012  beq         $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2E2D54u;
    {
        const bool branch_taken_0x2e2d54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e2d54) {
            ctx->pc = 0x2E2DA0u;
            return;
        }
    }
    ctx->pc = 0x2E2D5Cu;
    // 0x2e2d5c: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x2e2d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2e2d60: 0x1083000f  beq         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2E2D60u;
    {
        const bool branch_taken_0x2e2d60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e2d60) {
            ctx->pc = 0x2E2DA0u;
            return;
        }
    }
    ctx->pc = 0x2E2D68u;
    // 0x2e2d68: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2e2d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2e2d6c: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2E2D6Cu;
    {
        const bool branch_taken_0x2e2d6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e2d6c) {
            ctx->pc = 0x2E2DA0u;
            return;
        }
    }
    ctx->pc = 0x2E2D74u;
    // 0x2e2d74: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x2e2d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2e2d78: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E2D78u;
    {
        const bool branch_taken_0x2e2d78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e2d78) {
            ctx->pc = 0x2E2DA0u;
            return;
        }
    }
    ctx->pc = 0x2E2D80u;
    // 0x2e2d80: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2e2d80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e2d84: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E2D84u;
    {
        const bool branch_taken_0x2e2d84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e2d84) {
            ctx->pc = 0x2E2DA0u;
            return;
        }
    }
    ctx->pc = 0x2E2D8Cu;
    // 0x2e2d8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e2d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e2d90: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E2D90u;
    {
        const bool branch_taken_0x2e2d90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e2d90) {
            ctx->pc = 0x2E2DA0u;
            return;
        }
    }
    ctx->pc = 0x2E2D98u;
    // 0x2e2d98: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2E2D98u;
    {
        const bool branch_taken_0x2e2d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2d98) {
            ctx->pc = 0x2E2DA0u;
            return;
        }
    }
    ctx->pc = 0x2E2DA0u;
}
