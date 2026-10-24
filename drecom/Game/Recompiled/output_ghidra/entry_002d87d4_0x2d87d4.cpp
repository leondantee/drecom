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

// Function: entry_002d87d4
// Address: 0x2d87d4 - 0x2d8848
void entry_002d87d4_0x2d87d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d87d4_0x2d87d4");
#endif

    switch (ctx->pc) {
        case 0x2d87ecu: goto label_2d87ec;
        default: break;
    }

    ctx->pc = 0x2d87d4u;

    // 0x2d87d4: 0x920300db  lbu         $v1, 0xDB($s0)
    ctx->pc = 0x2d87d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 219)));
    // 0x2d87d8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2d87d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d87dc: 0x1880004b  blez        $a0, . + 4 + (0x4B << 2)
    ctx->pc = 0x2D87DCu;
    {
        const bool branch_taken_0x2d87dc = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x2d87dc) {
            ctx->pc = 0x2D890Cu;
            return;
        }
    }
    ctx->pc = 0x2D87E4u;
    // 0x2d87e4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2D87E4u;
    SET_GPR_U32(ctx, 31, 0x2D87ECu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2D87E4u, 0x2D87ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D87ECu;
label_2d87ec:
    // 0x2d87ec: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2d87ecu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2d87f0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2d87f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d87f4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2d87f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2d87f8: 0x10600044  beqz        $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x2D87F8u;
    {
        const bool branch_taken_0x2d87f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d87f8) {
            ctx->pc = 0x2D890Cu;
            return;
        }
    }
    ctx->pc = 0x2D8800u;
    // 0x2d8800: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2d8800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8804: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x2d8804u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d8808: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2d8808u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d880c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d880cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d8810: 0x1464003e  bne         $v1, $a0, . + 4 + (0x3E << 2)
    ctx->pc = 0x2D8810u;
    {
        const bool branch_taken_0x2d8810 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2d8810) {
            ctx->pc = 0x2D890Cu;
            return;
        }
    }
    ctx->pc = 0x2D8818u;
    // 0x2d8818: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d881c: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x2d881cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x2d8820: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2d8820u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d8824: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d8824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d8828: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D8828u;
    {
        const bool branch_taken_0x2d8828 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d8828) {
            ctx->pc = 0x2D8848u;
            return;
        }
    }
    ctx->pc = 0x2D8830u;
    // 0x2d8830: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8834: 0x90640001  lbu         $a0, 0x1($v1)
    ctx->pc = 0x2d8834u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x2d8838: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x2d8838u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2d883c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2d883cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d8840: 0x14640032  bne         $v1, $a0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2D8840u;
    {
        const bool branch_taken_0x2d8840 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2d8840) {
            ctx->pc = 0x2D890Cu;
            return;
        }
    }
    ctx->pc = 0x2D8848u;
}
