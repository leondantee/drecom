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

// Function: entry_0018218c
// Address: 0x18218c - 0x1821f0
void entry_0018218c_0x18218c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018218c_0x18218c");
#endif

    switch (ctx->pc) {
        case 0x1821c8u: goto label_1821c8;
        default: break;
    }

    ctx->pc = 0x18218cu;

    // 0x18218c: 0xc7ac0038  lwc1        $f12, 0x38($sp)
    ctx->pc = 0x18218cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x182190: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x182190u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x182194: 0xc42df1d8  lwc1        $f13, -0xE28($at)
    ctx->pc = 0x182194u;
    { uint32_t bits = FAST_READ32(0x47F1D8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x182198: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x182198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x18219c: 0x8c26f210  lw          $a2, -0xDF0($at)
    ctx->pc = 0x18219cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x47F210u));
    // 0x1821a0: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x1821a0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1821a4: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1821a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1821a8: 0x2463f230  addiu       $v1, $v1, -0xDD0
    ctx->pc = 0x1821a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963760));
    // 0x1821ac: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x1821acu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1821b0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1821b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1821b4: 0x8c26f220  lw          $a2, -0xDE0($at)
    ctx->pc = 0x1821b4u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x47F220u));
    // 0x1821b8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1821b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1821bc: 0xc42ef1e0  lwc1        $f14, -0xE20($at)
    ctx->pc = 0x1821bcu;
    { uint32_t bits = FAST_READ32(0x47F1E0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1821c0: 0xc05ed40  jal         func_17B500
    ctx->pc = 0x1821C0u;
    SET_GPR_U32(ctx, 31, 0x1821C8u);
    ctx->pc = 0x17B500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B500u, 0x1821C0u, 0x1821C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1821C8u;
label_1821c8:
    // 0x1821c8: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1821c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1821cc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1821ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1821d0: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x1821d0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1821d4: 0x30670080  andi        $a3, $v1, 0x80
    ctx->pc = 0x1821d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x1821d8: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1821D8u;
    {
        const bool branch_taken_0x1821d8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x1821d8) {
            ctx->pc = 0x1821F0u;
            return;
        }
    }
    ctx->pc = 0x1821E0u;
    // 0x1821e0: 0xc60101b0  lwc1        $f1, 0x1B0($s0)
    ctx->pc = 0x1821e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1821e4: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x1821e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1821e8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1821e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1821ec: 0xe60101b0  swc1        $f1, 0x1B0($s0)
    ctx->pc = 0x1821ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 432), bits); }
    ctx->pc = 0x1821f0u;
}
