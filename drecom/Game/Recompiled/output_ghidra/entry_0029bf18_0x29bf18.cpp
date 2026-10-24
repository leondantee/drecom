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

// Function: entry_0029bf18
// Address: 0x29bf18 - 0x29bf70
void entry_0029bf18_0x29bf18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029bf18_0x29bf18");
#endif

    ctx->pc = 0x29bf18u;

    // 0x29bf18: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x29bf18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x29bf1c: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x29bf1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29bf20: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x29bf20u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x29bf24: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x29bf24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x29bf28: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29bf28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29bf2c: 0x0  nop
    ctx->pc = 0x29bf2cu;
    // NOP
    // 0x29bf30: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x29bf30u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x29bf34: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x29bf34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x29bf38: 0xc46000a0  lwc1        $f0, 0xA0($v1)
    ctx->pc = 0x29bf38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29bf3c: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x29bf3cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x29bf40: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x29bf40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x29bf44: 0xc420dce0  lwc1        $f0, -0x2320($at)
    ctx->pc = 0x29bf44u;
    { uint32_t bits = FAST_READ32(0x3EDCE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29bf48: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x29bf48u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x29bf4c: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x29bf4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x29bf50: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x29bf50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x29bf54: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x29BF54u;
    {
        const bool branch_taken_0x29bf54 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x29bf54) {
            ctx->pc = 0x29BF70u;
            return;
        }
    }
    ctx->pc = 0x29BF5Cu;
    // 0x29bf5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29bf5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29bf60: 0x0  nop
    ctx->pc = 0x29bf60u;
    // NOP
    // 0x29bf64: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x29bf64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x29bf68: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x29BF68u;
    {
        const bool branch_taken_0x29bf68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29bf68) {
            ctx->pc = 0x29BF8Cu;
            return;
        }
    }
    ctx->pc = 0x29BF70u;
}
