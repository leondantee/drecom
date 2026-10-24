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

// Function: entry_003109a8
// Address: 0x3109a8 - 0x3109fc
void entry_003109a8_0x3109a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003109a8_0x3109a8");
#endif

    ctx->pc = 0x3109a8u;

    // 0x3109a8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x3109a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3109ac: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x3109acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3109b0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3109b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3109b4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3109b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3109b8: 0x108300d1  beq         $a0, $v1, . + 4 + (0xD1 << 2)
    ctx->pc = 0x3109B8u;
    {
        const bool branch_taken_0x3109b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3109b8) {
            ctx->pc = 0x310D00u;
            return;
        }
    }
    ctx->pc = 0x3109C0u;
    // 0x3109c0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x3109c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3109c4: 0x8c631364  lw          $v1, 0x1364($v1)
    ctx->pc = 0x3109c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4964)));
    // 0x3109c8: 0x2c610065  sltiu       $at, $v1, 0x65
    ctx->pc = 0x3109c8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)101) ? 1 : 0);
    // 0x3109cc: 0x1420007a  bnez        $at, . + 4 + (0x7A << 2)
    ctx->pc = 0x3109CCu;
    {
        const bool branch_taken_0x3109cc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3109cc) {
            ctx->pc = 0x310BB8u;
            return;
        }
    }
    ctx->pc = 0x3109D4u;
    // 0x3109d4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x3109d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3109d8: 0xac601364  sw          $zero, 0x1364($v1)
    ctx->pc = 0x3109d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4964), GPR_U32(ctx, 0));
    // 0x3109dc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x3109dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3109e0: 0x8c631368  lw          $v1, 0x1368($v1)
    ctx->pc = 0x3109e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4968)));
    // 0x3109e4: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x3109e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x3109e8: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x3109E8u;
    {
        const bool branch_taken_0x3109e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3109e8) {
            ctx->pc = 0x310A9Cu;
            return;
        }
    }
    ctx->pc = 0x3109F0u;
    // 0x3109f0: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x3109f0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3109f4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3109F4u;
    {
        const bool branch_taken_0x3109f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3109f4) {
            ctx->pc = 0x310A40u;
            return;
        }
    }
    ctx->pc = 0x3109FCu;
}
