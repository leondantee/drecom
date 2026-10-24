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

// Function: entry_001887b8
// Address: 0x1887b8 - 0x188810
void entry_001887b8_0x1887b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001887b8_0x1887b8");
#endif

    ctx->pc = 0x1887b8u;

    // 0x1887b8: 0xc60101b0  lwc1        $f1, 0x1B0($s0)
    ctx->pc = 0x1887b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1887bc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1887bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1887c0: 0xc4206da0  lwc1        $f0, 0x6DA0($at)
    ctx->pc = 0x1887c0u;
    { uint32_t bits = FAST_READ32(0x386DA0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1887c4: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x1887c4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1887c8: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x1887c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x1887cc: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1887ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1887d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1887d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1887d4: 0x0  nop
    ctx->pc = 0x1887d4u;
    // NOP
    // 0x1887d8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1887d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1887dc: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x1887dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x1887e0: 0xc7a1005c  lwc1        $f1, 0x5C($sp)
    ctx->pc = 0x1887e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1887e4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1887e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1887e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1887e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1887ec: 0x0  nop
    ctx->pc = 0x1887ecu;
    // NOP
    // 0x1887f0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1887f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1887f4: 0x0  nop
    ctx->pc = 0x1887f4u;
    // NOP
    // 0x1887f8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1887F8u;
    {
        const bool branch_taken_0x1887f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1887f8) {
            ctx->pc = 0x188810u;
            return;
        }
    }
    ctx->pc = 0x188800u;
    // 0x188800: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x188800u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x188804: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x188804u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x188808: 0x0  nop
    ctx->pc = 0x188808u;
    // NOP
    // 0x18880c: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x18880cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    ctx->pc = 0x188810u;
}
