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

// Function: entry_0013f7d0
// Address: 0x13f7d0 - 0x13f818
void entry_0013f7d0_0x13f7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013f7d0_0x13f7d0");
#endif

    switch (ctx->pc) {
        case 0x13f7e0u: goto label_13f7e0;
        case 0x13f814u: goto label_13f814;
        default: break;
    }

    ctx->pc = 0x13f7d0u;

    // 0x13f7d0: 0x27a41570  addiu       $a0, $sp, 0x1570
    ctx->pc = 0x13f7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 5488));
    // 0x13f7d4: 0x27a51610  addiu       $a1, $sp, 0x1610
    ctx->pc = 0x13f7d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 5648));
    // 0x13f7d8: 0xc04f9c0  jal         func_13E700
    ctx->pc = 0x13F7D8u;
    SET_GPR_U32(ctx, 31, 0x13F7E0u);
    ctx->pc = 0x13E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E700u, 0x13F7D8u, 0x13F7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F7E0u;
label_13f7e0:
    // 0x13f7e0: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x13f7e0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13f7e4: 0x32040041  andi        $a0, $s0, 0x41
    ctx->pc = 0x13f7e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65);
    // 0x13f7e8: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x13F7E8u;
    {
        const bool branch_taken_0x13f7e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f7e8) {
            ctx->pc = 0x13F818u;
            return;
        }
    }
    ctx->pc = 0x13F7F0u;
    // 0x13f7f0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x13f7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x13f7f4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x13f7f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x13f7f8: 0x27a21610  addiu       $v0, $sp, 0x1610
    ctx->pc = 0x13f7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 5648));
    // 0x13f7fc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x13f7fcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13f800: 0x27a51570  addiu       $a1, $sp, 0x1570
    ctx->pc = 0x13f800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 5488));
    // 0x13f804: 0x27a61610  addiu       $a2, $sp, 0x1610
    ctx->pc = 0x13f804u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 5648));
    // 0x13f808: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x13f808u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13f80c: 0xc04f984  jal         func_13E610
    ctx->pc = 0x13F80Cu;
    SET_GPR_U32(ctx, 31, 0x13F814u);
    ctx->pc = 0x13E610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E610u, 0x13F80Cu, 0x13F814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F814u;
label_13f814:
    // 0x13f814: 0x0  nop
    ctx->pc = 0x13f814u;
    // NOP
    ctx->pc = 0x13f818u;
}
