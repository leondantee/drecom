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

// Function: entry_00174df0
// Address: 0x174df0 - 0x174e60
void entry_00174df0_0x174df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174df0_0x174df0");
#endif

    ctx->pc = 0x174df0u;

    // 0x174df0: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x174df0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x174df4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x174df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x174df8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x174df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x174dfc: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x174DFCu;
    {
        const bool branch_taken_0x174dfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x174dfc) {
            ctx->pc = 0x174E60u;
            return;
        }
    }
    ctx->pc = 0x174E04u;
    // 0x174e04: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x174e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x174e08: 0x12020015  beq         $s0, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x174E08u;
    {
        const bool branch_taken_0x174e08 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x174e08) {
            ctx->pc = 0x174E60u;
            return;
        }
    }
    ctx->pc = 0x174E10u;
    // 0x174e10: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x174e10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x174e14: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x174e14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x174e18: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x174e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x174e1c: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x174E1Cu;
    {
        const bool branch_taken_0x174e1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x174e1c) {
            ctx->pc = 0x174E60u;
            return;
        }
    }
    ctx->pc = 0x174E24u;
    // 0x174e24: 0x860210a6  lh          $v0, 0x10A6($s0)
    ctx->pc = 0x174e24u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4262)));
    // 0x174e28: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x174e28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x174e2c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x174e2cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x174e30: 0x14143c  dsll32      $v0, $s4, 16
    ctx->pc = 0x174e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 16));
    // 0x174e34: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x174e34u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x174e38: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x174e38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x174e3c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x174E3Cu;
    {
        const bool branch_taken_0x174e3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x174e3c) {
            ctx->pc = 0x174E60u;
            return;
        }
    }
    ctx->pc = 0x174E44u;
    // 0x174e44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x174e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x174e48: 0x2221004  sllv        $v0, $v0, $s1
    ctx->pc = 0x174e48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
    // 0x174e4c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x174e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x174e50: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x174e50u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x174e54: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x174e54u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x174e58: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x174e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x174e5c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x174e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    ctx->pc = 0x174e60u;
}
