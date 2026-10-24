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

// Function: entry_002d8bb0
// Address: 0x2d8bb0 - 0x2d8c38
void entry_002d8bb0_0x2d8bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d8bb0_0x2d8bb0");
#endif

    switch (ctx->pc) {
        case 0x2d8bc8u: goto label_2d8bc8;
        default: break;
    }

    ctx->pc = 0x2d8bb0u;

    // 0x2d8bb0: 0x920300db  lbu         $v1, 0xDB($s0)
    ctx->pc = 0x2d8bb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 219)));
    // 0x2d8bb4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2d8bb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d8bb8: 0x1880003d  blez        $a0, . + 4 + (0x3D << 2)
    ctx->pc = 0x2D8BB8u;
    {
        const bool branch_taken_0x2d8bb8 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x2d8bb8) {
            ctx->pc = 0x2D8CB0u;
            return;
        }
    }
    ctx->pc = 0x2D8BC0u;
    // 0x2d8bc0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2D8BC0u;
    SET_GPR_U32(ctx, 31, 0x2D8BC8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2D8BC0u, 0x2D8BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8BC8u;
label_2d8bc8:
    // 0x2d8bc8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2d8bc8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2d8bcc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2d8bccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d8bd0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2d8bd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2d8bd4: 0x10600036  beqz        $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x2D8BD4u;
    {
        const bool branch_taken_0x2d8bd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8bd4) {
            ctx->pc = 0x2D8CB0u;
            return;
        }
    }
    ctx->pc = 0x2D8BDCu;
    // 0x2d8bdc: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2d8bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8be0: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x2d8be0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d8be4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2d8be4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d8be8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2d8be8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d8bec: 0x14830030  bne         $a0, $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x2D8BECu;
    {
        const bool branch_taken_0x2d8bec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2d8bec) {
            ctx->pc = 0x2D8CB0u;
            return;
        }
    }
    ctx->pc = 0x2D8BF4u;
    // 0x2d8bf4: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2d8bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8bf8: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x2d8bf8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x2d8bfc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2d8bfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d8c00: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2D8C00u;
    {
        const bool branch_taken_0x2d8c00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8c00) {
            ctx->pc = 0x2D8C38u;
            return;
        }
    }
    ctx->pc = 0x2D8C08u;
    // 0x2d8c08: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8c0c: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x2d8c0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x2d8c10: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2d8c10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d8c14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d8c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d8c18: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D8C18u;
    {
        const bool branch_taken_0x2d8c18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d8c18) {
            ctx->pc = 0x2D8C38u;
            return;
        }
    }
    ctx->pc = 0x2D8C20u;
    // 0x2d8c20: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2d8c20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8c24: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x2d8c24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x2d8c28: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2d8c28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d8c2c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2d8c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d8c30: 0x1483001f  bne         $a0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x2D8C30u;
    {
        const bool branch_taken_0x2d8c30 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2d8c30) {
            ctx->pc = 0x2D8CB0u;
            return;
        }
    }
    ctx->pc = 0x2D8C38u;
}
