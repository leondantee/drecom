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

// Function: entry_0029c20c
// Address: 0x29c20c - 0x29c280
void entry_0029c20c_0x29c20c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029c20c_0x29c20c");
#endif

    ctx->pc = 0x29c20cu;

    // 0x29c20c: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x29c20cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x29c210: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x29c210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c214: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x29c214u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x29c218: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x29c218u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x29c21c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29c21cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29c220: 0x0  nop
    ctx->pc = 0x29c220u;
    // NOP
    // 0x29c224: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x29c224u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x29c228: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x29c228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x29c22c: 0xc46000a8  lwc1        $f0, 0xA8($v1)
    ctx->pc = 0x29c22cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c230: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x29c230u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x29c234: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x29c234u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x29c238: 0xc420dce8  lwc1        $f0, -0x2318($at)
    ctx->pc = 0x29c238u;
    { uint32_t bits = FAST_READ32(0x3EDCE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c23c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x29c23cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x29c240: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x29c240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x29c244: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x29c244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29c248: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29c248u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29c24c: 0x0  nop
    ctx->pc = 0x29c24cu;
    // NOP
    // 0x29c250: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x29c250u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29c254: 0x0  nop
    ctx->pc = 0x29c254u;
    // NOP
    // 0x29c258: 0x4501005b  bc1t        . + 4 + (0x5B << 2)
    ctx->pc = 0x29C258u;
    {
        const bool branch_taken_0x29c258 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29c258) {
            ctx->pc = 0x29C3C8u;
            return;
        }
    }
    ctx->pc = 0x29C260u;
    // 0x29c260: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x29c260u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29c264: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x29C264u;
    {
        const bool branch_taken_0x29c264 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x29c264) {
            ctx->pc = 0x29C280u;
            return;
        }
    }
    ctx->pc = 0x29C26Cu;
    // 0x29c26c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29c26cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29c270: 0x0  nop
    ctx->pc = 0x29c270u;
    // NOP
    // 0x29c274: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x29c274u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x29c278: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x29C278u;
    {
        const bool branch_taken_0x29c278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c278) {
            ctx->pc = 0x29C29Cu;
            return;
        }
    }
    ctx->pc = 0x29C280u;
}
