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

// Function: entry_0029bd10
// Address: 0x29bd10 - 0x29bd84
void entry_0029bd10_0x29bd10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029bd10_0x29bd10");
#endif

    ctx->pc = 0x29bd10u;

    // 0x29bd10: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x29bd10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x29bd14: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x29bd14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29bd18: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x29bd18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x29bd1c: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x29bd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x29bd20: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29bd20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29bd24: 0x0  nop
    ctx->pc = 0x29bd24u;
    // NOP
    // 0x29bd28: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x29bd28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x29bd2c: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x29bd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x29bd30: 0xc46000a8  lwc1        $f0, 0xA8($v1)
    ctx->pc = 0x29bd30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29bd34: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x29bd34u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x29bd38: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x29bd38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x29bd3c: 0xc420dce8  lwc1        $f0, -0x2318($at)
    ctx->pc = 0x29bd3cu;
    { uint32_t bits = FAST_READ32(0x3EDCE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29bd40: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x29bd40u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x29bd44: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x29bd44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x29bd48: 0xc7a100ac  lwc1        $f1, 0xAC($sp)
    ctx->pc = 0x29bd48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29bd4c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29bd4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29bd50: 0x0  nop
    ctx->pc = 0x29bd50u;
    // NOP
    // 0x29bd54: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x29bd54u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29bd58: 0x0  nop
    ctx->pc = 0x29bd58u;
    // NOP
    // 0x29bd5c: 0x45010059  bc1t        . + 4 + (0x59 << 2)
    ctx->pc = 0x29BD5Cu;
    {
        const bool branch_taken_0x29bd5c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29bd5c) {
            ctx->pc = 0x29BEC4u;
            return;
        }
    }
    ctx->pc = 0x29BD64u;
    // 0x29bd64: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x29bd64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29bd68: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x29BD68u;
    {
        const bool branch_taken_0x29bd68 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x29bd68) {
            ctx->pc = 0x29BD84u;
            return;
        }
    }
    ctx->pc = 0x29BD70u;
    // 0x29bd70: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29bd70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29bd74: 0x0  nop
    ctx->pc = 0x29bd74u;
    // NOP
    // 0x29bd78: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x29bd78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x29bd7c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x29BD7Cu;
    {
        const bool branch_taken_0x29bd7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29bd7c) {
            ctx->pc = 0x29BDA0u;
            return;
        }
    }
    ctx->pc = 0x29BD84u;
}
