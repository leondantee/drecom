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

// Function: entry_0033d440
// Address: 0x33d440 - 0x33d4bc
void entry_0033d440_0x33d440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033d440_0x33d440");
#endif

    ctx->pc = 0x33d440u;

    // 0x33d440: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x33d440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33d444: 0xc44101a0  lwc1        $f1, 0x1A0($v0)
    ctx->pc = 0x33d444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33d448: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x33d448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33d44c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x33d44cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33d450: 0x0  nop
    ctx->pc = 0x33d450u;
    // NOP
    // 0x33d454: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x33D454u;
    {
        const bool branch_taken_0x33d454 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x33d454) {
            ctx->pc = 0x33D4BCu;
            return;
        }
    }
    ctx->pc = 0x33D45Cu;
    // 0x33d45c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x33d45cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33d460: 0xc44112cc  lwc1        $f1, 0x12CC($v0)
    ctx->pc = 0x33d460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33d464: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x33d464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33d468: 0xc44001a0  lwc1        $f0, 0x1A0($v0)
    ctx->pc = 0x33d468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33d46c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x33d46cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x33d470: 0xe44001a0  swc1        $f0, 0x1A0($v0)
    ctx->pc = 0x33d470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 416), bits); }
    // 0x33d474: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x33d474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33d478: 0xc44112cc  lwc1        $f1, 0x12CC($v0)
    ctx->pc = 0x33d478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33d47c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x33d47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33d480: 0xc44001a8  lwc1        $f0, 0x1A8($v0)
    ctx->pc = 0x33d480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33d484: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x33d484u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x33d488: 0xe44001a8  swc1        $f0, 0x1A8($v0)
    ctx->pc = 0x33d488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 424), bits); }
    // 0x33d48c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x33d48cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33d490: 0xc44112cc  lwc1        $f1, 0x12CC($v0)
    ctx->pc = 0x33d490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33d494: 0xc64001a0  lwc1        $f0, 0x1A0($s2)
    ctx->pc = 0x33d494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33d498: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x33d498u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x33d49c: 0xe64001a0  swc1        $f0, 0x1A0($s2)
    ctx->pc = 0x33d49cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 416), bits); }
    // 0x33d4a0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x33d4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33d4a4: 0xc44112cc  lwc1        $f1, 0x12CC($v0)
    ctx->pc = 0x33d4a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33d4a8: 0xc64001a8  lwc1        $f0, 0x1A8($s2)
    ctx->pc = 0x33d4a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33d4ac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x33d4acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x33d4b0: 0xe64001a8  swc1        $f0, 0x1A8($s2)
    ctx->pc = 0x33d4b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 424), bits); }
    // 0x33d4b4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x33D4B4u;
    {
        const bool branch_taken_0x33d4b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d4b4) {
            ctx->pc = 0x33D4E4u;
            return;
        }
    }
    ctx->pc = 0x33D4BCu;
}
