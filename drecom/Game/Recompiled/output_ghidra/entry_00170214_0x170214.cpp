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

// Function: entry_00170214
// Address: 0x170214 - 0x170280
void entry_00170214_0x170214(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170214_0x170214");
#endif

    ctx->pc = 0x170214u;

    // 0x170214: 0xc7a00160  lwc1        $f0, 0x160($sp)
    ctx->pc = 0x170214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x170218: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x170218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x17021c: 0x3c123f80  lui         $s2, 0x3F80
    ctx->pc = 0x17021cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)16256 << 16));
    // 0x170220: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x170220u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x170224: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x170224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x170228: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x170228u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x17022c: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x17022cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
    // 0x170230: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x170230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x170234: 0xc420bd3c  lwc1        $f0, -0x42C4($at)
    ctx->pc = 0x170234u;
    { uint32_t bits = FAST_READ32(0x47BD3Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x170238: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x170238u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x17023c: 0xc7a20140  lwc1        $f2, 0x140($sp)
    ctx->pc = 0x17023cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x170240: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x170240u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x170244: 0xc421bd4c  lwc1        $f1, -0x42B4($at)
    ctx->pc = 0x170244u;
    { uint32_t bits = FAST_READ32(0x47BD4Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x170248: 0xc7a0013c  lwc1        $f0, 0x13C($sp)
    ctx->pc = 0x170248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17024c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x17024cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x170250: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x170250u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x170254: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x170254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x170258: 0xc7a10140  lwc1        $f1, 0x140($sp)
    ctx->pc = 0x170258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17025c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17025cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x170260: 0x0  nop
    ctx->pc = 0x170260u;
    // NOP
    // 0x170264: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x170264u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x170268: 0x0  nop
    ctx->pc = 0x170268u;
    // NOP
    // 0x17026c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x17026Cu;
    {
        const bool branch_taken_0x17026c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17026c) {
            ctx->pc = 0x170280u;
            return;
        }
    }
    ctx->pc = 0x170274u;
    // 0x170274: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x170274u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x170278: 0x0  nop
    ctx->pc = 0x170278u;
    // NOP
    // 0x17027c: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x17027cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    ctx->pc = 0x170280u;
}
