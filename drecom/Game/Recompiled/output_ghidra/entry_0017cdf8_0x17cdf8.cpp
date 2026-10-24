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

// Function: entry_0017cdf8
// Address: 0x17cdf8 - 0x17ce98
void entry_0017cdf8_0x17cdf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017cdf8_0x17cdf8");
#endif

    switch (ctx->pc) {
        case 0x17ce20u: goto label_17ce20;
        case 0x17ce50u: goto label_17ce50;
        default: break;
    }

    ctx->pc = 0x17cdf8u;

    // 0x17cdf8: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x17cdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x17cdfc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x17cdfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x17ce00: 0x2404271a  addiu       $a0, $zero, 0x271A
    ctx->pc = 0x17ce00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10010));
    // 0x17ce04: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x17ce04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x17ce08: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x17ce08u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x17ce0c: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x17ce0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x17ce10: 0x24a6ec38  addiu       $a2, $a1, -0x13C8
    ctx->pc = 0x17ce10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962232));
    // 0x17ce14: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x17ce14u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x17ce18: 0xc059b14  jal         func_166C50
    ctx->pc = 0x17CE18u;
    SET_GPR_U32(ctx, 31, 0x17CE20u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x17CE18u, 0x17CE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CE20u;
label_17ce20:
    // 0x17ce20: 0x938280a0  lbu         $v0, -0x7F60($gp)
    ctx->pc = 0x17ce20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934688)));
    // 0x17ce24: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x17ce24u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17ce28: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x17ce28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x17ce2c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x17ce2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x17ce30: 0x2404361a  addiu       $a0, $zero, 0x361A
    ctx->pc = 0x17ce30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13850));
    // 0x17ce34: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x17ce34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x17ce38: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x17ce38u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x17ce3c: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x17ce3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x17ce40: 0x24a2ec40  addiu       $v0, $a1, -0x13C0
    ctx->pc = 0x17ce40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962240));
    // 0x17ce44: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x17ce44u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x17ce48: 0xc059b14  jal         func_166C50
    ctx->pc = 0x17CE48u;
    SET_GPR_U32(ctx, 31, 0x17CE50u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x17CE48u, 0x17CE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CE50u;
label_17ce50:
    // 0x17ce50: 0x938280a4  lbu         $v0, -0x7F5C($gp)
    ctx->pc = 0x17ce50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934692)));
    // 0x17ce54: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x17ce54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17ce58: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x17ce58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17ce5c: 0x10a401f7  beq         $a1, $a0, . + 4 + (0x1F7 << 2)
    ctx->pc = 0x17CE5Cu;
    {
        const bool branch_taken_0x17ce5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x17ce5c) {
            ctx->pc = 0x17D63Cu;
            return;
        }
    }
    ctx->pc = 0x17CE64u;
    // 0x17ce64: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x17ce64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x17ce68: 0x10a301b2  beq         $a1, $v1, . + 4 + (0x1B2 << 2)
    ctx->pc = 0x17CE68u;
    {
        const bool branch_taken_0x17ce68 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x17ce68) {
            ctx->pc = 0x17D534u;
            return;
        }
    }
    ctx->pc = 0x17CE70u;
    // 0x17ce70: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x17ce70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17ce74: 0x10a3015a  beq         $a1, $v1, . + 4 + (0x15A << 2)
    ctx->pc = 0x17CE74u;
    {
        const bool branch_taken_0x17ce74 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x17ce74) {
            ctx->pc = 0x17D3E0u;
            return;
        }
    }
    ctx->pc = 0x17CE7Cu;
    // 0x17ce7c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x17ce7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17ce80: 0x10a400dd  beq         $a1, $a0, . + 4 + (0xDD << 2)
    ctx->pc = 0x17CE80u;
    {
        const bool branch_taken_0x17ce80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x17ce80) {
            ctx->pc = 0x17D1F8u;
            return;
        }
    }
    ctx->pc = 0x17CE88u;
    // 0x17ce88: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17CE88u;
    {
        const bool branch_taken_0x17ce88 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ce88) {
            ctx->pc = 0x17CE98u;
            return;
        }
    }
    ctx->pc = 0x17CE90u;
    // 0x17ce90: 0x100001fc  b           . + 4 + (0x1FC << 2)
    ctx->pc = 0x17CE90u;
    {
        const bool branch_taken_0x17ce90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ce90) {
            ctx->pc = 0x17D684u;
            return;
        }
    }
    ctx->pc = 0x17CE98u;
}
