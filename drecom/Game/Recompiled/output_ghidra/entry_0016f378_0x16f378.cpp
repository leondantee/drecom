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

// Function: entry_0016f378
// Address: 0x16f378 - 0x16f3c0
void entry_0016f378_0x16f378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016f378_0x16f378");
#endif

    switch (ctx->pc) {
        case 0x16f3a4u: goto label_16f3a4;
        case 0x16f3bcu: goto label_16f3bc;
        default: break;
    }

    ctx->pc = 0x16f378u;

    // 0x16f378: 0x92040012  lbu         $a0, 0x12($s0)
    ctx->pc = 0x16f378u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x16f37c: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x16f37cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x16f380: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x16f380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x16f384: 0x1443000e  bne         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x16F384u;
    {
        const bool branch_taken_0x16f384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x16f384) {
            ctx->pc = 0x16F3C0u;
            return;
        }
    }
    ctx->pc = 0x16F38Cu;
    // 0x16f38c: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x16f38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x16f390: 0x2445fff7  addiu       $a1, $v0, -0x9
    ctx->pc = 0x16f390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967287));
    // 0x16f394: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x16f394u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x16f398: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x16f398u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x16f39c: 0xc05bf68  jal         func_16FDA0
    ctx->pc = 0x16F39Cu;
    SET_GPR_U32(ctx, 31, 0x16F3A4u);
    ctx->pc = 0x16FDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FDA0u, 0x16F39Cu, 0x16F3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F3A4u;
label_16f3a4:
    // 0x16f3a4: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x16f3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x16f3a8: 0x2445ffff  addiu       $a1, $v0, -0x1
    ctx->pc = 0x16f3a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x16f3ac: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x16f3acu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x16f3b0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x16f3b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16f3b4: 0xc05bf68  jal         func_16FDA0
    ctx->pc = 0x16F3B4u;
    SET_GPR_U32(ctx, 31, 0x16F3BCu);
    ctx->pc = 0x16FDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FDA0u, 0x16F3B4u, 0x16F3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F3BCu;
label_16f3bc:
    // 0x16f3bc: 0x0  nop
    ctx->pc = 0x16f3bcu;
    // NOP
    ctx->pc = 0x16f3c0u;
}
