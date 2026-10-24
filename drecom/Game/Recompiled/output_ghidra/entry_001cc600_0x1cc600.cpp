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

// Function: entry_001cc600
// Address: 0x1cc600 - 0x1cc63c
void entry_001cc600_0x1cc600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cc600_0x1cc600");
#endif

    switch (ctx->pc) {
        case 0x1cc608u: goto label_1cc608;
        case 0x1cc630u: goto label_1cc630;
        default: break;
    }

    ctx->pc = 0x1cc600u;

    // 0x1cc600: 0xc0bcd40  jal         func_2F3500
    ctx->pc = 0x1CC600u;
    SET_GPR_U32(ctx, 31, 0x1CC608u);
    ctx->pc = 0x2F3500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3500u, 0x1CC600u, 0x1CC608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC608u;
label_1cc608:
    // 0x1cc608: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1cc608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cc60c: 0x906409df  lbu         $a0, 0x9DF($v1)
    ctx->pc = 0x1cc60cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x1cc610: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1cc610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1cc614: 0x306500c0  andi        $a1, $v1, 0xC0
    ctx->pc = 0x1cc614u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)192);
    // 0x1cc618: 0x10a0003e  beqz        $a1, . + 4 + (0x3E << 2)
    ctx->pc = 0x1CC618u;
    {
        const bool branch_taken_0x1cc618 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc618) {
            ctx->pc = 0x1CC714u;
            return;
        }
    }
    ctx->pc = 0x1CC620u;
    // 0x1cc620: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1cc620u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cc624: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x1cc624u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1cc628: 0xc09b88c  jal         func_26E230
    ctx->pc = 0x1CC628u;
    SET_GPR_U32(ctx, 31, 0x1CC630u);
    ctx->pc = 0x26E230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26E230u, 0x1CC628u, 0x1CC630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC630u;
label_1cc630:
    // 0x1cc630: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x1cc630u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cc634: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x1CC634u;
    {
        const bool branch_taken_0x1cc634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc634) {
            ctx->pc = 0x1CC714u;
            return;
        }
    }
    ctx->pc = 0x1CC63Cu;
}
