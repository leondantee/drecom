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

// Function: entry_002dca74
// Address: 0x2dca74 - 0x2dcae0
void entry_002dca74_0x2dca74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002dca74_0x2dca74");
#endif

    ctx->pc = 0x2dca74u;

    // 0x2dca74: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2dca74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2dca78: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x2dca78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x2dca7c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2dca7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2dca80: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2dca80u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2dca84: 0x2841000b  slti        $at, $v0, 0xB
    ctx->pc = 0x2dca84u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x2dca88: 0x14200015  bnez        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x2DCA88u;
    {
        const bool branch_taken_0x2dca88 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dca88) {
            ctx->pc = 0x2DCAE0u;
            return;
        }
    }
    ctx->pc = 0x2DCA90u;
    // 0x2dca90: 0xc6010094  lwc1        $f1, 0x94($s0)
    ctx->pc = 0x2dca90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dca94: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2dca94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2dca98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2dca98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dca9c: 0x0  nop
    ctx->pc = 0x2dca9cu;
    // NOP
    // 0x2dcaa0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2dcaa0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2dcaa4: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2dcaa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2dcaa8: 0xc6010094  lwc1        $f1, 0x94($s0)
    ctx->pc = 0x2dcaa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dcaac: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2dcaacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2dcab0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2dcab0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dcab4: 0x0  nop
    ctx->pc = 0x2dcab4u;
    // NOP
    // 0x2dcab8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2dcab8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dcabc: 0x0  nop
    ctx->pc = 0x2dcabcu;
    // NOP
    // 0x2dcac0: 0x45010017  bc1t        . + 4 + (0x17 << 2)
    ctx->pc = 0x2DCAC0u;
    {
        const bool branch_taken_0x2dcac0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dcac0) {
            ctx->pc = 0x2DCB20u;
            return;
        }
    }
    ctx->pc = 0x2DCAC8u;
    // 0x2dcac8: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2dcac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2dcacc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2dcaccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dcad0: 0x0  nop
    ctx->pc = 0x2dcad0u;
    // NOP
    // 0x2dcad4: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2dcad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2dcad8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2DCAD8u;
    {
        const bool branch_taken_0x2dcad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dcad8) {
            ctx->pc = 0x2DCB20u;
            return;
        }
    }
    ctx->pc = 0x2DCAE0u;
}
