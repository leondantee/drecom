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

// Function: entry_00174d38
// Address: 0x174d38 - 0x174dc0
void entry_00174d38_0x174d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174d38_0x174d38");
#endif

    ctx->pc = 0x174d38u;

    // 0x174d38: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x174d38u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x174d3c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x174d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x174d40: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x174d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x174d44: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x174D44u;
    {
        const bool branch_taken_0x174d44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x174d44) {
            ctx->pc = 0x174DC0u;
            return;
        }
    }
    ctx->pc = 0x174D4Cu;
    // 0x174d4c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x174d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x174d50: 0x1202001b  beq         $s0, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x174D50u;
    {
        const bool branch_taken_0x174d50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x174d50) {
            ctx->pc = 0x174DC0u;
            return;
        }
    }
    ctx->pc = 0x174D58u;
    // 0x174d58: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x174d58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x174d5c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x174d5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x174d60: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x174d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x174d64: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x174D64u;
    {
        const bool branch_taken_0x174d64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x174d64) {
            ctx->pc = 0x174DC0u;
            return;
        }
    }
    ctx->pc = 0x174D6Cu;
    // 0x174d6c: 0x9602000e  lhu         $v0, 0xE($s0)
    ctx->pc = 0x174d6cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x174d70: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x174d70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x174d74: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x174d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x174d78: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x174D78u;
    {
        const bool branch_taken_0x174d78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x174d78) {
            ctx->pc = 0x174DC0u;
            return;
        }
    }
    ctx->pc = 0x174D80u;
    // 0x174d80: 0x860210a6  lh          $v0, 0x10A6($s0)
    ctx->pc = 0x174d80u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4262)));
    // 0x174d84: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x174d84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x174d88: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x174d88u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x174d8c: 0x14143c  dsll32      $v0, $s4, 16
    ctx->pc = 0x174d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 16));
    // 0x174d90: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x174d90u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x174d94: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x174d94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x174d98: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x174D98u;
    {
        const bool branch_taken_0x174d98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x174d98) {
            ctx->pc = 0x174DC0u;
            return;
        }
    }
    ctx->pc = 0x174DA0u;
    // 0x174da0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x174da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x174da4: 0x2221004  sllv        $v0, $v0, $s1
    ctx->pc = 0x174da4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
    // 0x174da8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x174da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x174dac: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x174dacu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x174db0: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x174db0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x174db4: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x174db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x174db8: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x174db8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x174dbc: 0x0  nop
    ctx->pc = 0x174dbcu;
    // NOP
    ctx->pc = 0x174dc0u;
}
