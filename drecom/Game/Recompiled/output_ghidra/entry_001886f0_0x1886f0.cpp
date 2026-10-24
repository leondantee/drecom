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

// Function: entry_001886f0
// Address: 0x1886f0 - 0x188764
void entry_001886f0_0x1886f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001886f0_0x1886f0");
#endif

    ctx->pc = 0x1886f0u;

    // 0x1886f0: 0xc60101b0  lwc1        $f1, 0x1B0($s0)
    ctx->pc = 0x1886f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1886f4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1886f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1886f8: 0xc4206da0  lwc1        $f0, 0x6DA0($at)
    ctx->pc = 0x1886f8u;
    { uint32_t bits = FAST_READ32(0x386DA0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1886fc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1886fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x188700: 0x0  nop
    ctx->pc = 0x188700u;
    // NOP
    // 0x188704: 0x4501002c  bc1t        . + 4 + (0x2C << 2)
    ctx->pc = 0x188704u;
    {
        const bool branch_taken_0x188704 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x188704) {
            ctx->pc = 0x1887B8u;
            return;
        }
    }
    ctx->pc = 0x18870Cu;
    // 0x18870c: 0xc60101b0  lwc1        $f1, 0x1B0($s0)
    ctx->pc = 0x18870cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188710: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x188710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x188714: 0xc4206da0  lwc1        $f0, 0x6DA0($at)
    ctx->pc = 0x188714u;
    { uint32_t bits = FAST_READ32(0x386DA0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188718: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x188718u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x18871c: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x18871cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x188720: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x188720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x188724: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x188724u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x188728: 0x0  nop
    ctx->pc = 0x188728u;
    // NOP
    // 0x18872c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x18872cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x188730: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x188730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x188734: 0xc7a1005c  lwc1        $f1, 0x5C($sp)
    ctx->pc = 0x188734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188738: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x188738u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x18873c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18873cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x188740: 0x0  nop
    ctx->pc = 0x188740u;
    // NOP
    // 0x188744: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x188744u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x188748: 0x0  nop
    ctx->pc = 0x188748u;
    // NOP
    // 0x18874c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x18874Cu;
    {
        const bool branch_taken_0x18874c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18874c) {
            ctx->pc = 0x188764u;
            return;
        }
    }
    ctx->pc = 0x188754u;
    // 0x188754: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x188754u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x188758: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x188758u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18875c: 0x0  nop
    ctx->pc = 0x18875cu;
    // NOP
    // 0x188760: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x188760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    ctx->pc = 0x188764u;
}
