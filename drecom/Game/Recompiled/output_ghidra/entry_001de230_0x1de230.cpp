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

// Function: entry_001de230
// Address: 0x1de230 - 0x1de2a0
void entry_001de230_0x1de230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001de230_0x1de230");
#endif

    ctx->pc = 0x1de230u;

    // 0x1de230: 0xc7a000ec  lwc1        $f0, 0xEC($sp)
    ctx->pc = 0x1de230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de234: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x1de234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x1de238: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1de238u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1de23c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1de23cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1de240: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x1de240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de244: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1de244u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1de248: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x1de248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1de24c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1de24cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1de250: 0xc420bd3c  lwc1        $f0, -0x42C4($at)
    ctx->pc = 0x1de250u;
    { uint32_t bits = FAST_READ32(0x47BD3Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de254: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x1de254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x1de258: 0xc7a200c4  lwc1        $f2, 0xC4($sp)
    ctx->pc = 0x1de258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1de25c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1de25cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1de260: 0xc421bd4c  lwc1        $f1, -0x42B4($at)
    ctx->pc = 0x1de260u;
    { uint32_t bits = FAST_READ32(0x47BD4Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1de264: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x1de264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de268: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1de268u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1de26c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1de26cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1de270: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x1de270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x1de274: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x1de274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1de278: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1de278u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1de27c: 0x0  nop
    ctx->pc = 0x1de27cu;
    // NOP
    // 0x1de280: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1de280u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1de284: 0x0  nop
    ctx->pc = 0x1de284u;
    // NOP
    // 0x1de288: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1DE288u;
    {
        const bool branch_taken_0x1de288 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1de288) {
            ctx->pc = 0x1DE2A0u;
            return;
        }
    }
    ctx->pc = 0x1DE290u;
    // 0x1de290: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1de290u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1de294: 0x0  nop
    ctx->pc = 0x1de294u;
    // NOP
    // 0x1de298: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x1de298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x1de29c: 0x0  nop
    ctx->pc = 0x1de29cu;
    // NOP
    ctx->pc = 0x1de2a0u;
}
