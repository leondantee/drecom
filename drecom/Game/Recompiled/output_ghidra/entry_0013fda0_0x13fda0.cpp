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

// Function: entry_0013fda0
// Address: 0x13fda0 - 0x13fdf0
void entry_0013fda0_0x13fda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013fda0_0x13fda0");
#endif

    switch (ctx->pc) {
        case 0x13fdb8u: goto label_13fdb8;
        case 0x13fdecu: goto label_13fdec;
        default: break;
    }

    ctx->pc = 0x13fda0u;

    // 0x13fda0: 0x27a615c0  addiu       $a2, $sp, 0x15C0
    ctx->pc = 0x13fda0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 5568));
    // 0x13fda4: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x13fda4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x13fda8: 0x27a71610  addiu       $a3, $sp, 0x1610
    ctx->pc = 0x13fda8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 5648));
    // 0x13fdac: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x13fdacu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x13fdb0: 0xc04f9c0  jal         func_13E700
    ctx->pc = 0x13FDB0u;
    SET_GPR_U32(ctx, 31, 0x13FDB8u);
    ctx->pc = 0x13E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E700u, 0x13FDB0u, 0x13FDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FDB8u;
label_13fdb8:
    // 0x13fdb8: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x13fdb8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13fdbc: 0x32040041  andi        $a0, $s0, 0x41
    ctx->pc = 0x13fdbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65);
    // 0x13fdc0: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x13FDC0u;
    {
        const bool branch_taken_0x13fdc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13fdc0) {
            ctx->pc = 0x13FDF0u;
            return;
        }
    }
    ctx->pc = 0x13FDC8u;
    // 0x13fdc8: 0x3c123f80  lui         $s2, 0x3F80
    ctx->pc = 0x13fdc8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)16256 << 16));
    // 0x13fdcc: 0x44926000  mtc1        $s2, $f12
    ctx->pc = 0x13fdccu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x13fdd0: 0x27a21610  addiu       $v0, $sp, 0x1610
    ctx->pc = 0x13fdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 5648));
    // 0x13fdd4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x13fdd4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13fdd8: 0x27a515c0  addiu       $a1, $sp, 0x15C0
    ctx->pc = 0x13fdd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 5568));
    // 0x13fddc: 0x27a61610  addiu       $a2, $sp, 0x1610
    ctx->pc = 0x13fddcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 5648));
    // 0x13fde0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x13fde0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13fde4: 0xc04f984  jal         func_13E610
    ctx->pc = 0x13FDE4u;
    SET_GPR_U32(ctx, 31, 0x13FDECu);
    ctx->pc = 0x13E610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E610u, 0x13FDE4u, 0x13FDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FDECu;
label_13fdec:
    // 0x13fdec: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x13fdecu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x13fdf0u;
}
