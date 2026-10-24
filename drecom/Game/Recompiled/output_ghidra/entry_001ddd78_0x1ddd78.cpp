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

// Function: entry_001ddd78
// Address: 0x1ddd78 - 0x1dde18
void entry_001ddd78_0x1ddd78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ddd78_0x1ddd78");
#endif

    switch (ctx->pc) {
        case 0x1ddde8u: goto label_1ddde8;
        default: break;
    }

    ctx->pc = 0x1ddd78u;

    // 0x1ddd78: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x1ddd78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1ddd7c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1ddd7cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1ddd80: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1ddd80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1ddd84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ddd84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ddd88: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1ddd88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1ddd8c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1ddd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1ddd90: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x1ddd90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x1ddd94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ddd94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ddd98: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x1ddd98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x1ddd9c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1ddd9cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ddda0: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x1ddda0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1ddda4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1ddda4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1ddda8: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x1ddda8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1dddac: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1dddacu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1dddb0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1dddb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1dddb4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dddb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dddb8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1dddb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1dddbc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1dddbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1dddc0: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x1dddc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x1dddc4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1dddc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dddc8: 0xc460008c  lwc1        $f0, 0x8C($v1)
    ctx->pc = 0x1dddc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dddcc: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x1dddccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x1dddd0: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x1dddd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1dddd4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1dddd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1dddd8: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x1dddd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1ddddc: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x1ddddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1ddde0: 0xc05da44  jal         func_176910
    ctx->pc = 0x1DDDE0u;
    SET_GPR_U32(ctx, 31, 0x1DDDE8u);
    ctx->pc = 0x176910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176910u, 0x1DDDE0u, 0x1DDDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDDE8u;
label_1ddde8:
    // 0x1ddde8: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x1ddde8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x1dddec: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x1dddecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dddf0: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x1dddf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dddf4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1dddf4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dddf8: 0x0  nop
    ctx->pc = 0x1dddf8u;
    // NOP
    // 0x1dddfc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1DDDFCu;
    {
        const bool branch_taken_0x1dddfc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dddfc) {
            ctx->pc = 0x1DDE18u;
            return;
        }
    }
    ctx->pc = 0x1DDE04u;
    // 0x1dde04: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x1dde04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dde08: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x1dde08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1dde0c: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1dde0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1dde10: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1dde10u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1dde14: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x1dde14u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1dde18u;
}
