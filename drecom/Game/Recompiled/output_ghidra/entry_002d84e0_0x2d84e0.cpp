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

// Function: entry_002d84e0
// Address: 0x2d84e0 - 0x2d8570
void entry_002d84e0_0x2d84e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d84e0_0x2d84e0");
#endif

    switch (ctx->pc) {
        case 0x2d84fcu: goto label_2d84fc;
        default: break;
    }

    ctx->pc = 0x2d84e0u;

    // 0x2d84e0: 0x920300db  lbu         $v1, 0xDB($s0)
    ctx->pc = 0x2d84e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 219)));
    // 0x2d84e4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2d84e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d84e8: 0x28830002  slti        $v1, $a0, 0x2
    ctx->pc = 0x2d84e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2d84ec: 0x14600032  bnez        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x2D84ECu;
    {
        const bool branch_taken_0x2d84ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d84ec) {
            ctx->pc = 0x2D85B8u;
            return;
        }
    }
    ctx->pc = 0x2D84F4u;
    // 0x2d84f4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2D84F4u;
    SET_GPR_U32(ctx, 31, 0x2D84FCu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2D84F4u, 0x2D84FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D84FCu;
label_2d84fc:
    // 0x2d84fc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2d84fcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2d8500: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2d8500u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d8504: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2d8504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2d8508: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x2D8508u;
    {
        const bool branch_taken_0x2d8508 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8508) {
            ctx->pc = 0x2D85B8u;
            return;
        }
    }
    ctx->pc = 0x2D8510u;
    // 0x2d8510: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8514: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x2d8514u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d8518: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2d8518u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d851c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d851cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d8520: 0x14830025  bne         $a0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x2D8520u;
    {
        const bool branch_taken_0x2d8520 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2d8520) {
            ctx->pc = 0x2D85B8u;
            return;
        }
    }
    ctx->pc = 0x2D8528u;
    // 0x2d8528: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d852c: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x2d852cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x2d8530: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2d8530u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d8534: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d8534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d8538: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2D8538u;
    {
        const bool branch_taken_0x2d8538 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d8538) {
            ctx->pc = 0x2D8570u;
            return;
        }
    }
    ctx->pc = 0x2D8540u;
    // 0x2d8540: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2d8540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8544: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x2d8544u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x2d8548: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2d8548u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d854c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2d854cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d8550: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D8550u;
    {
        const bool branch_taken_0x2d8550 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d8550) {
            ctx->pc = 0x2D8570u;
            return;
        }
    }
    ctx->pc = 0x2D8558u;
    // 0x2d8558: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d855c: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x2d855cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x2d8560: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2d8560u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d8564: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d8564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d8568: 0x14640013  bne         $v1, $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2D8568u;
    {
        const bool branch_taken_0x2d8568 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2d8568) {
            ctx->pc = 0x2D85B8u;
            return;
        }
    }
    ctx->pc = 0x2D8570u;
}
