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

// Function: caseD_f
// Address: 0x296978 - 0x2969f8
void caseD_f_0x296978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_f_0x296978");
#endif

    ctx->pc = 0x296978u;

    // 0x296978: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x296978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29697c: 0x8c6369b4  lw          $v1, 0x69B4($v1)
    ctx->pc = 0x29697cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27060)));
    // 0x296980: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x296980u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x296984: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x296984u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x296988: 0x24030062  addiu       $v1, $zero, 0x62
    ctx->pc = 0x296988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    // 0x29698c: 0x1083ff57  beq         $a0, $v1, . + 4 + (-0xA9 << 2)
    ctx->pc = 0x29698Cu;
    {
        const bool branch_taken_0x29698c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x29698c) {
            ctx->pc = 0x2966ECu;
            return;
        }
    }
    ctx->pc = 0x296994u;
    // 0x296994: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x296994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x296998: 0x8c6369b4  lw          $v1, 0x69B4($v1)
    ctx->pc = 0x296998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27060)));
    // 0x29699c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x29699cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2969a0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2969a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2969a4: 0x28610062  slti        $at, $v1, 0x62
    ctx->pc = 0x2969a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)98) ? 1 : 0);
    // 0x2969a8: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x2969A8u;
    {
        const bool branch_taken_0x2969a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2969a8) {
            ctx->pc = 0x2969F8u;
            return;
        }
    }
    ctx->pc = 0x2969B0u;
    // 0x2969b0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2969b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2969b4: 0x8c6369b4  lw          $v1, 0x69B4($v1)
    ctx->pc = 0x2969b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27060)));
    // 0x2969b8: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x2969b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2969bc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2969bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2969c0: 0x2863005e  slti        $v1, $v1, 0x5E
    ctx->pc = 0x2969c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)94) ? 1 : 0);
    // 0x2969c4: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2969C4u;
    {
        const bool branch_taken_0x2969c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2969c4) {
            ctx->pc = 0x2969F8u;
            return;
        }
    }
    ctx->pc = 0x2969CCu;
    // 0x2969cc: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x2969ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2969d0: 0x8ca469b4  lw          $a0, 0x69B4($a1)
    ctx->pc = 0x2969d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 27060)));
    // 0x2969d4: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x2969d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2969d8: 0xaca369b4  sw          $v1, 0x69B4($a1)
    ctx->pc = 0x2969d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 27060), GPR_U32(ctx, 3));
    // 0x2969dc: 0x90860000  lbu         $a2, 0x0($a0)
    ctx->pc = 0x2969dcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2969e0: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x2969e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2969e4: 0x8ca469c0  lw          $a0, 0x69C0($a1)
    ctx->pc = 0x2969e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 27072)));
    // 0x2969e8: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x2969e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2969ec: 0xaca369c0  sw          $v1, 0x69C0($a1)
    ctx->pc = 0x2969ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 27072), GPR_U32(ctx, 3));
    // 0x2969f0: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x2969f0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x2969f4: 0x0  nop
    ctx->pc = 0x2969f4u;
    // NOP
    ctx->pc = 0x2969f8u;
}
