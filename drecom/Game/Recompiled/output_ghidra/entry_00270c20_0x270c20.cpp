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

// Function: entry_00270c20
// Address: 0x270c20 - 0x270c64
void entry_00270c20_0x270c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00270c20_0x270c20");
#endif

    ctx->pc = 0x270c20u;

    // 0x270c20: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x270c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270c24: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x270c24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x270c28: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x270c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x270c2c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x270c2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x270c30: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x270C30u;
    {
        const bool branch_taken_0x270c30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x270c30) {
            ctx->pc = 0x270C64u;
            return;
        }
    }
    ctx->pc = 0x270C38u;
    // 0x270c38: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x270c38u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x270c3c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x270c3cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x270c40: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x270c40u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x270c44: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x270c44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x270c48: 0x3c0280ff  lui         $v0, 0x80FF
    ctx->pc = 0x270c48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33023 << 16));
    // 0x270c4c: 0x3448c0c0  ori         $t0, $v0, 0xC0C0
    ctx->pc = 0x270c4cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49344);
    // 0x270c50: 0x3c028040  lui         $v0, 0x8040
    ctx->pc = 0x270c50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32832 << 16));
    // 0x270c54: 0x34494040  ori         $t1, $v0, 0x4040
    ctx->pc = 0x270c54u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16448);
    // 0x270c58: 0x240a000a  addiu       $t2, $zero, 0xA
    ctx->pc = 0x270c58u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x270c5c: 0xc059190  jal         func_164640
    ctx->pc = 0x270C5Cu;
    SET_GPR_U32(ctx, 31, 0x270C64u);
    ctx->pc = 0x164640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164640u, 0x270C5Cu, 0x270C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270C64u;
}
