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

// Function: entry_002d8e1c
// Address: 0x2d8e1c - 0x2d8eac
void entry_002d8e1c_0x2d8e1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d8e1c_0x2d8e1c");
#endif

    switch (ctx->pc) {
        case 0x2d8e38u: goto label_2d8e38;
        default: break;
    }

    ctx->pc = 0x2d8e1cu;

    // 0x2d8e1c: 0x920400db  lbu         $a0, 0xDB($s0)
    ctx->pc = 0x2d8e1cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 219)));
    // 0x2d8e20: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x2d8e20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2d8e24: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x2d8e24u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2d8e28: 0x14600032  bnez        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x2D8E28u;
    {
        const bool branch_taken_0x2d8e28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d8e28) {
            ctx->pc = 0x2D8EF4u;
            return;
        }
    }
    ctx->pc = 0x2D8E30u;
    // 0x2d8e30: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2D8E30u;
    SET_GPR_U32(ctx, 31, 0x2D8E38u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2D8E30u, 0x2D8E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8E38u;
label_2d8e38:
    // 0x2d8e38: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2d8e38u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2d8e3c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2d8e3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d8e40: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x2d8e40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2d8e44: 0x1460002b  bnez        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x2D8E44u;
    {
        const bool branch_taken_0x2d8e44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d8e44) {
            ctx->pc = 0x2D8EF4u;
            return;
        }
    }
    ctx->pc = 0x2D8E4Cu;
    // 0x2d8e4c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2d8e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8e50: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x2d8e50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d8e54: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2d8e54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d8e58: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d8e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d8e5c: 0x14830025  bne         $a0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x2D8E5Cu;
    {
        const bool branch_taken_0x2d8e5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2d8e5c) {
            ctx->pc = 0x2D8EF4u;
            return;
        }
    }
    ctx->pc = 0x2D8E64u;
    // 0x2d8e64: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8e68: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x2d8e68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x2d8e6c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2d8e6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d8e70: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d8e70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d8e74: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2D8E74u;
    {
        const bool branch_taken_0x2d8e74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d8e74) {
            ctx->pc = 0x2D8EACu;
            return;
        }
    }
    ctx->pc = 0x2D8E7Cu;
    // 0x2d8e7c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8e80: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x2d8e80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x2d8e84: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2d8e84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d8e88: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2d8e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d8e8c: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D8E8Cu;
    {
        const bool branch_taken_0x2d8e8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d8e8c) {
            ctx->pc = 0x2D8EACu;
            return;
        }
    }
    ctx->pc = 0x2D8E94u;
    // 0x2d8e94: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8e98: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x2d8e98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x2d8e9c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2d8e9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d8ea0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d8ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d8ea4: 0x14830013  bne         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2D8EA4u;
    {
        const bool branch_taken_0x2d8ea4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2d8ea4) {
            ctx->pc = 0x2D8EF4u;
            return;
        }
    }
    ctx->pc = 0x2D8EACu;
}
