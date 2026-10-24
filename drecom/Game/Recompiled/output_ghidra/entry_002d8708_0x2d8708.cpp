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

// Function: entry_002d8708
// Address: 0x2d8708 - 0x2d8790
void entry_002d8708_0x2d8708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d8708_0x2d8708");
#endif

    switch (ctx->pc) {
        case 0x2d8720u: goto label_2d8720;
        default: break;
    }

    ctx->pc = 0x2d8708u;

    // 0x2d8708: 0x920300db  lbu         $v1, 0xDB($s0)
    ctx->pc = 0x2d8708u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 219)));
    // 0x2d870c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2d870cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d8710: 0x18600030  blez        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x2D8710u;
    {
        const bool branch_taken_0x2d8710 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x2d8710) {
            ctx->pc = 0x2D87D4u;
            return;
        }
    }
    ctx->pc = 0x2D8718u;
    // 0x2d8718: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2D8718u;
    SET_GPR_U32(ctx, 31, 0x2D8720u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2D8718u, 0x2D8720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8720u;
label_2d8720:
    // 0x2d8720: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2d8720u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2d8724: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x2d8724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2d8728: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2d8728u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2d872c: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x2D872Cu;
    {
        const bool branch_taken_0x2d872c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d872c) {
            ctx->pc = 0x2D87D4u;
            return;
        }
    }
    ctx->pc = 0x2D8734u;
    // 0x2d8734: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2d8734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8738: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x2d8738u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d873c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2d873cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d8740: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2d8740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d8744: 0x14830023  bne         $a0, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x2D8744u;
    {
        const bool branch_taken_0x2d8744 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2d8744) {
            ctx->pc = 0x2D87D4u;
            return;
        }
    }
    ctx->pc = 0x2D874Cu;
    // 0x2d874c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2d874cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8750: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x2d8750u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x2d8754: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2d8754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d8758: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2D8758u;
    {
        const bool branch_taken_0x2d8758 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8758) {
            ctx->pc = 0x2D8790u;
            return;
        }
    }
    ctx->pc = 0x2D8760u;
    // 0x2d8760: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8764: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x2d8764u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x2d8768: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2d8768u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d876c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d876cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d8770: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D8770u;
    {
        const bool branch_taken_0x2d8770 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d8770) {
            ctx->pc = 0x2D8790u;
            return;
        }
    }
    ctx->pc = 0x2D8778u;
    // 0x2d8778: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d877c: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x2d877cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x2d8780: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2d8780u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d8784: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2d8784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d8788: 0x14830012  bne         $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2D8788u;
    {
        const bool branch_taken_0x2d8788 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2d8788) {
            ctx->pc = 0x2D87D4u;
            return;
        }
    }
    ctx->pc = 0x2D8790u;
}
