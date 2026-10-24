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

// Function: entry_001889b0
// Address: 0x1889b0 - 0x1889fc
void entry_001889b0_0x1889b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001889b0_0x1889b0");
#endif

    ctx->pc = 0x1889b0u;

    // 0x1889b0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1889b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1889b4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1889b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1889b8: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x1889b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x1889bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1889bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1889c0: 0x0  nop
    ctx->pc = 0x1889c0u;
    // NOP
    // 0x1889c4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1889c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1889c8: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1889c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1889cc: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x1889ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1889d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1889d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1889d4: 0x0  nop
    ctx->pc = 0x1889d4u;
    // NOP
    // 0x1889d8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1889d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1889dc: 0x0  nop
    ctx->pc = 0x1889dcu;
    // NOP
    // 0x1889e0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1889E0u;
    {
        const bool branch_taken_0x1889e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1889e0) {
            ctx->pc = 0x1889FCu;
            return;
        }
    }
    ctx->pc = 0x1889E8u;
    // 0x1889e8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1889e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1889ec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1889ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1889f0: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x1889f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1889f4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1889f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1889f8: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1889f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    ctx->pc = 0x1889fcu;
}
