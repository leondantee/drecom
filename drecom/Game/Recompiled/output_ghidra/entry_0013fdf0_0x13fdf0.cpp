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

// Function: entry_0013fdf0
// Address: 0x13fdf0 - 0x13fe48
void entry_0013fdf0_0x13fdf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013fdf0_0x13fdf0");
#endif

    switch (ctx->pc) {
        case 0x13fe08u: goto label_13fe08;
        case 0x13fe44u: goto label_13fe44;
        default: break;
    }

    ctx->pc = 0x13fdf0u;

    // 0x13fdf0: 0x27a515c0  addiu       $a1, $sp, 0x15C0
    ctx->pc = 0x13fdf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 5568));
    // 0x13fdf4: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x13fdf4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x13fdf8: 0x27a61610  addiu       $a2, $sp, 0x1610
    ctx->pc = 0x13fdf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 5648));
    // 0x13fdfc: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x13fdfcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x13fe00: 0xc04f9c0  jal         func_13E700
    ctx->pc = 0x13FE00u;
    SET_GPR_U32(ctx, 31, 0x13FE08u);
    ctx->pc = 0x13E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E700u, 0x13FE00u, 0x13FE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FE08u;
label_13fe08:
    // 0x13fe08: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x13fe08u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13fe0c: 0x70e08628  paddub      $s0, $a3, $zero
    ctx->pc = 0x13fe0cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x13fe10: 0x32020082  andi        $v0, $s0, 0x82
    ctx->pc = 0x13fe10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)130);
    // 0x13fe14: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x13FE14u;
    {
        const bool branch_taken_0x13fe14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13fe14) {
            ctx->pc = 0x13FE48u;
            return;
        }
    }
    ctx->pc = 0x13FE1Cu;
    // 0x13fe1c: 0x3c04bf80  lui         $a0, 0xBF80
    ctx->pc = 0x13fe1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49024 << 16));
    // 0x13fe20: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x13fe20u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x13fe24: 0x27a51610  addiu       $a1, $sp, 0x1610
    ctx->pc = 0x13fe24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 5648));
    // 0x13fe28: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x13fe28u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x13fe2c: 0x27a215c0  addiu       $v0, $sp, 0x15C0
    ctx->pc = 0x13fe2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 5568));
    // 0x13fe30: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x13fe30u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13fe34: 0x27a61610  addiu       $a2, $sp, 0x1610
    ctx->pc = 0x13fe34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 5648));
    // 0x13fe38: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x13fe38u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13fe3c: 0xc04f984  jal         func_13E610
    ctx->pc = 0x13FE3Cu;
    SET_GPR_U32(ctx, 31, 0x13FE44u);
    ctx->pc = 0x13E610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E610u, 0x13FE3Cu, 0x13FE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FE44u;
label_13fe44:
    // 0x13fe44: 0x0  nop
    ctx->pc = 0x13fe44u;
    // NOP
    ctx->pc = 0x13fe48u;
}
