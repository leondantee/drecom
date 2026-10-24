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

// Function: entry_0016f318
// Address: 0x16f318 - 0x16f378
void entry_0016f318_0x16f318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016f318_0x16f318");
#endif

    switch (ctx->pc) {
        case 0x16f324u: goto label_16f324;
        case 0x16f334u: goto label_16f334;
        case 0x16f360u: goto label_16f360;
        case 0x16f374u: goto label_16f374;
        default: break;
    }

    ctx->pc = 0x16f318u;

    // 0x16f318: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x16f318u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x16f31c: 0xc096558  jal         func_259560
    ctx->pc = 0x16F31Cu;
    SET_GPR_U32(ctx, 31, 0x16F324u);
    ctx->pc = 0x259560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259560u, 0x16F31Cu, 0x16F324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F324u;
label_16f324:
    // 0x16f324: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x16f324u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x16f328: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x16f328u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x16f32c: 0xc05be64  jal         func_16F990
    ctx->pc = 0x16F32Cu;
    SET_GPR_U32(ctx, 31, 0x16F334u);
    ctx->pc = 0x16F990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F990u, 0x16F32Cu, 0x16F334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F334u;
label_16f334:
    // 0x16f334: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x16f334u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x16f338: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x16f338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16f33c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x16f33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x16f340: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x16F340u;
    {
        const bool branch_taken_0x16f340 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x16f340) {
            ctx->pc = 0x16F378u;
            return;
        }
    }
    ctx->pc = 0x16F348u;
    // 0x16f348: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x16f348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x16f34c: 0x2445fffe  addiu       $a1, $v0, -0x2
    ctx->pc = 0x16f34cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x16f350: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x16f350u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x16f354: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x16f354u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x16f358: 0xc05bf68  jal         func_16FDA0
    ctx->pc = 0x16F358u;
    SET_GPR_U32(ctx, 31, 0x16F360u);
    ctx->pc = 0x16FDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FDA0u, 0x16F358u, 0x16F360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F360u;
label_16f360:
    // 0x16f360: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x16f360u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x16f364: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x16f364u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x16f368: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x16f368u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16f36c: 0xc05bf68  jal         func_16FDA0
    ctx->pc = 0x16F36Cu;
    SET_GPR_U32(ctx, 31, 0x16F374u);
    ctx->pc = 0x16FDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FDA0u, 0x16F36Cu, 0x16F374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F374u;
label_16f374:
    // 0x16f374: 0x0  nop
    ctx->pc = 0x16f374u;
    // NOP
    ctx->pc = 0x16f378u;
}
