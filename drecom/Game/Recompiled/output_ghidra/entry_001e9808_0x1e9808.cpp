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

// Function: entry_001e9808
// Address: 0x1e9808 - 0x1e98a4
void entry_001e9808_0x1e9808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e9808_0x1e9808");
#endif

    ctx->pc = 0x1e9808u;

    // 0x1e9808: 0x8fb00198  lw          $s0, 0x198($sp)
    ctx->pc = 0x1e9808u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e980c: 0x860311f2  lh          $v1, 0x11F2($s0)
    ctx->pc = 0x1e980cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4594)));
    // 0x1e9810: 0x32c3c  dsll32      $a1, $v1, 16
    ctx->pc = 0x1e9810u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1e9814: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x1e9814u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x1e9818: 0x28a1012d  slti        $at, $a1, 0x12D
    ctx->pc = 0x1e9818u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)301) ? 1 : 0);
    // 0x1e981c: 0x14200021  bnez        $at, . + 4 + (0x21 << 2)
    ctx->pc = 0x1E981Cu;
    {
        const bool branch_taken_0x1e981c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e981c) {
            ctx->pc = 0x1E98A4u;
            return;
        }
    }
    ctx->pc = 0x1E9824u;
    // 0x1e9824: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x1e9824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e9828: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x1e9828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x1e982c: 0x8463005e  lh          $v1, 0x5E($v1)
    ctx->pc = 0x1e982cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 94)));
    // 0x1e9830: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1e9830u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1e9834: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1e9834u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1e9838: 0x460001a  bltz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1E9838u;
    {
        const bool branch_taken_0x1e9838 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1e9838) {
            ctx->pc = 0x1E98A4u;
            return;
        }
    }
    ctx->pc = 0x1E9840u;
    // 0x1e9840: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e9840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e9844: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x1e9844u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x1e9848: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1e9848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1e984c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1e984cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1e9850: 0x4600014  bltz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1E9850u;
    {
        const bool branch_taken_0x1e9850 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1e9850) {
            ctx->pc = 0x1E98A4u;
            return;
        }
    }
    ctx->pc = 0x1E9858u;
    // 0x1e9858: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1e9858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1e985c: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x1e985cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1e9860: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x1e9860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x1e9864: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1E9864u;
    {
        const bool branch_taken_0x1e9864 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e9864) {
            ctx->pc = 0x1E98A4u;
            return;
        }
    }
    ctx->pc = 0x1E986Cu;
    // 0x1e986c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1e986cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e9870: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e9870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e9874: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1e9874u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1e9878: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1e9878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e987c: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e987cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e9880: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1e9880u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1e9884: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x1e9884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e9888: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x1e9888u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e988c: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e988cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e9890: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1e9890u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e9894: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e9894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e9898: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1e9898u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1e989c: 0x100000e4  b           . + 4 + (0xE4 << 2)
    ctx->pc = 0x1E989Cu;
    {
        const bool branch_taken_0x1e989c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e989c) {
            ctx->pc = 0x1E9C30u;
            return;
        }
    }
    ctx->pc = 0x1E98A4u;
}
