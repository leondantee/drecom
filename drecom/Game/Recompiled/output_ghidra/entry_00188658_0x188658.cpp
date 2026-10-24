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

// Function: entry_00188658
// Address: 0x188658 - 0x1886e4
void entry_00188658_0x188658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188658_0x188658");
#endif

    ctx->pc = 0x188658u;

    // 0x188658: 0xc60101b0  lwc1        $f1, 0x1B0($s0)
    ctx->pc = 0x188658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18865c: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x18865cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188660: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x188660u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x188664: 0x0  nop
    ctx->pc = 0x188664u;
    // NOP
    // 0x188668: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
    ctx->pc = 0x188668u;
    {
        const bool branch_taken_0x188668 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x188668) {
            ctx->pc = 0x1886E4u;
            return;
        }
    }
    ctx->pc = 0x188670u;
    // 0x188670: 0xc60101b0  lwc1        $f1, 0x1B0($s0)
    ctx->pc = 0x188670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188674: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x188674u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x188678: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x188678u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18867c: 0x0  nop
    ctx->pc = 0x18867cu;
    // NOP
    // 0x188680: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x188680u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x188684: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x188684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188688: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x188688u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18868c: 0x0  nop
    ctx->pc = 0x18868cu;
    // NOP
    // 0x188690: 0x4501009e  bc1t        . + 4 + (0x9E << 2)
    ctx->pc = 0x188690u;
    {
        const bool branch_taken_0x188690 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x188690) {
            ctx->pc = 0x18890Cu;
            return;
        }
    }
    ctx->pc = 0x188698u;
    // 0x188698: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x188698u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x18869c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x18869cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1886a0: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x1886a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1886a4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1886a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1886a8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1886a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1886ac: 0xe4206da0  swc1        $f0, 0x6DA0($at)
    ctx->pc = 0x1886acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x386DA0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x386DA0u, _value); } while (0); }
    // 0x1886b0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1886b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1886b4: 0xc4216da0  lwc1        $f1, 0x6DA0($at)
    ctx->pc = 0x1886b4u;
    { uint32_t bits = FAST_READ32(0x386DA0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1886b8: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x1886b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x1886bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1886bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1886c0: 0x0  nop
    ctx->pc = 0x1886c0u;
    // NOP
    // 0x1886c4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1886c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1886c8: 0x0  nop
    ctx->pc = 0x1886c8u;
    // NOP
    // 0x1886cc: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1886CCu;
    {
        const bool branch_taken_0x1886cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1886cc) {
            ctx->pc = 0x1886E4u;
            return;
        }
    }
    ctx->pc = 0x1886D4u;
    // 0x1886d4: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x1886d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x1886d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1886d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1886dc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1886dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1886e0: 0xe4206da0  swc1        $f0, 0x6DA0($at)
    ctx->pc = 0x1886e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x386DA0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x386DA0u, _value); } while (0); }
    ctx->pc = 0x1886e4u;
}
