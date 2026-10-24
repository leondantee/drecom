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

// Function: entry_0013f790
// Address: 0x13f790 - 0x13f7d0
void entry_0013f790_0x13f790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013f790_0x13f790");
#endif

    switch (ctx->pc) {
        case 0x13f7a0u: goto label_13f7a0;
        default: break;
    }

    ctx->pc = 0x13f790u;

    // 0x13f790: 0x27a41570  addiu       $a0, $sp, 0x1570
    ctx->pc = 0x13f790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 5488));
    // 0x13f794: 0x27a51610  addiu       $a1, $sp, 0x1610
    ctx->pc = 0x13f794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 5648));
    // 0x13f798: 0xc04f9c0  jal         func_13E700
    ctx->pc = 0x13F798u;
    SET_GPR_U32(ctx, 31, 0x13F7A0u);
    ctx->pc = 0x13E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E700u, 0x13F798u, 0x13F7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F7A0u;
label_13f7a0:
    // 0x13f7a0: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x13f7a0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13f7a4: 0x32060208  andi        $a2, $s0, 0x208
    ctx->pc = 0x13f7a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)520);
    // 0x13f7a8: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x13F7A8u;
    {
        const bool branch_taken_0x13f7a8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f7a8) {
            ctx->pc = 0x13F7D0u;
            return;
        }
    }
    ctx->pc = 0x13F7B0u;
    // 0x13f7b0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x13f7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x13f7b4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x13f7b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x13f7b8: 0x27a41610  addiu       $a0, $sp, 0x1610
    ctx->pc = 0x13f7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 5648));
    // 0x13f7bc: 0x27a51570  addiu       $a1, $sp, 0x1570
    ctx->pc = 0x13f7bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 5488));
    // 0x13f7c0: 0x27a61610  addiu       $a2, $sp, 0x1610
    ctx->pc = 0x13f7c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 5648));
    // 0x13f7c4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x13f7c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13f7c8: 0xc04f984  jal         func_13E610
    ctx->pc = 0x13F7C8u;
    SET_GPR_U32(ctx, 31, 0x13F7D0u);
    ctx->pc = 0x13E610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E610u, 0x13F7C8u, 0x13F7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F7D0u;
}
