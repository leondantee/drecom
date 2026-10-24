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

// Function: entry_00240f94
// Address: 0x240f94 - 0x24102c
void entry_00240f94_0x240f94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00240f94_0x240f94");
#endif

    ctx->pc = 0x240f94u;

    // 0x240f94: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x240f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x240f98: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x240f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x240f9c: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x240f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x240fa0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x240fa0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x240fa4: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x240fa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x240fa8: 0x26090150  addiu       $t1, $s0, 0x150
    ctx->pc = 0x240fa8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x240fac: 0x3c0a40a0  lui         $t2, 0x40A0
    ctx->pc = 0x240facu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)16544 << 16));
    // 0x240fb0: 0x448a0800  mtc1        $t2, $f1
    ctx->pc = 0x240fb0u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x240fb4: 0xc5200010  lwc1        $f0, 0x10($t1)
    ctx->pc = 0x240fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x240fb8: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x240fb8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x240fbc: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x240fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x240fc0: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x240fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x240fc4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x240fc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x240fc8: 0xe4a00010  swc1        $f0, 0x10($a1)
    ctx->pc = 0x240fc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x240fcc: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x240fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x240fd0: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x240fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x240fd4: 0x3c06442f  lui         $a2, 0x442F
    ctx->pc = 0x240fd4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17455 << 16));
    // 0x240fd8: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x240fd8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x240fdc: 0x0  nop
    ctx->pc = 0x240fdcu;
    // NOP
    // 0x240fe0: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x240fe0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x240fe4: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x240fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x240fe8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x240fe8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x240fec: 0x0  nop
    ctx->pc = 0x240fecu;
    // NOP
    // 0x240ff0: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x240FF0u;
    {
        const bool branch_taken_0x240ff0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x240ff0) {
            ctx->pc = 0x24102Cu;
            return;
        }
    }
    ctx->pc = 0x240FF8u;
    // 0x240ff8: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x240ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x240ffc: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x240ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x241000: 0x3c07442f  lui         $a3, 0x442F
    ctx->pc = 0x241000u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17455 << 16));
    // 0x241004: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x241004u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x241008: 0x0  nop
    ctx->pc = 0x241008u;
    // NOP
    // 0x24100c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x24100cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x241010: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x241010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x241014: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x241014u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x241018: 0x26080150  addiu       $t0, $s0, 0x150
    ctx->pc = 0x241018u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24101c: 0xe5000010  swc1        $f0, 0x10($t0)
    ctx->pc = 0x24101cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 16), bits); }
    // 0x241020: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x241020u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x241024: 0x260a0150  addiu       $t2, $s0, 0x150
    ctx->pc = 0x241024u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x241028: 0xa1490001  sb          $t1, 0x1($t2)
    ctx->pc = 0x241028u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 1), (uint8_t)GPR_U32(ctx, 9));
    ctx->pc = 0x24102cu;
}
