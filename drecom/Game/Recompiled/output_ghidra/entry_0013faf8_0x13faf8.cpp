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

// Function: entry_0013faf8
// Address: 0x13faf8 - 0x13fb48
void entry_0013faf8_0x13faf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013faf8_0x13faf8");
#endif

    switch (ctx->pc) {
        case 0x13fb10u: goto label_13fb10;
        case 0x13fb44u: goto label_13fb44;
        default: break;
    }

    ctx->pc = 0x13faf8u;

    // 0x13faf8: 0x27a21570  addiu       $v0, $sp, 0x1570
    ctx->pc = 0x13faf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 5488));
    // 0x13fafc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x13fafcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13fb00: 0x27a21610  addiu       $v0, $sp, 0x1610
    ctx->pc = 0x13fb00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 5648));
    // 0x13fb04: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x13fb04u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13fb08: 0xc04f9c0  jal         func_13E700
    ctx->pc = 0x13FB08u;
    SET_GPR_U32(ctx, 31, 0x13FB10u);
    ctx->pc = 0x13E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E700u, 0x13FB08u, 0x13FB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FB10u;
label_13fb10:
    // 0x13fb10: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x13fb10u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13fb14: 0x70808628  paddub      $s0, $a0, $zero
    ctx->pc = 0x13fb14u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x13fb18: 0x32050208  andi        $a1, $s0, 0x208
    ctx->pc = 0x13fb18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)520);
    // 0x13fb1c: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x13FB1Cu;
    {
        const bool branch_taken_0x13fb1c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x13fb1c) {
            ctx->pc = 0x13FB48u;
            return;
        }
    }
    ctx->pc = 0x13FB24u;
    // 0x13fb24: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x13fb24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x13fb28: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x13fb28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x13fb2c: 0x27a41610  addiu       $a0, $sp, 0x1610
    ctx->pc = 0x13fb2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 5648));
    // 0x13fb30: 0x27a51570  addiu       $a1, $sp, 0x1570
    ctx->pc = 0x13fb30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 5488));
    // 0x13fb34: 0x27a61610  addiu       $a2, $sp, 0x1610
    ctx->pc = 0x13fb34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 5648));
    // 0x13fb38: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x13fb38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13fb3c: 0xc04f984  jal         func_13E610
    ctx->pc = 0x13FB3Cu;
    SET_GPR_U32(ctx, 31, 0x13FB44u);
    ctx->pc = 0x13E610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E610u, 0x13FB3Cu, 0x13FB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FB44u;
label_13fb44:
    // 0x13fb44: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x13fb44u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x13fb48u;
}
