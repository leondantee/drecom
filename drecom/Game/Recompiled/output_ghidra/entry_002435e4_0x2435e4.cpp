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

// Function: entry_002435e4
// Address: 0x2435e4 - 0x243668
void entry_002435e4_0x2435e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002435e4_0x2435e4");
#endif

    ctx->pc = 0x2435e4u;

    // 0x2435e4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2435e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2435e8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2435e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2435ec: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x2435ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2435f0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2435f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2435f4: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x2435f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2435f8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2435f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2435fc: 0x0  nop
    ctx->pc = 0x2435fcu;
    // NOP
    // 0x243600: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x243600u;
    {
        const bool branch_taken_0x243600 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x243600) {
            ctx->pc = 0x243668u;
            return;
        }
    }
    ctx->pc = 0x243608u;
    // 0x243608: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x243608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24360c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x24360cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x243610: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x243610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x243614: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x243614u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x243618: 0xc4600024  lwc1        $f0, 0x24($v1)
    ctx->pc = 0x243618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24361c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x24361cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x243620: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x243620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x243624: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x243624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x243628: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x243628u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x24362c: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x24362cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x243630: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x243630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x243634: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x243634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x243638: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x243638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24363c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24363cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x243640: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x243640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x243644: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x243644u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x243648: 0x0  nop
    ctx->pc = 0x243648u;
    // NOP
    // 0x24364c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x24364Cu;
    {
        const bool branch_taken_0x24364c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24364c) {
            ctx->pc = 0x243668u;
            return;
        }
    }
    ctx->pc = 0x243654u;
    // 0x243654: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x243654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x243658: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x243658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x24365c: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x24365cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x243660: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x243660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x243664: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x243664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    ctx->pc = 0x243668u;
}
