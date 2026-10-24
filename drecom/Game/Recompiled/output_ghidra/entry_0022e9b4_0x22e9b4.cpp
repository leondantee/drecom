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

// Function: entry_0022e9b4
// Address: 0x22e9b4 - 0x22e9fc
void entry_0022e9b4_0x22e9b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022e9b4_0x22e9b4");
#endif

    ctx->pc = 0x22e9b4u;

    // 0x22e9b4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22e9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22e9b8: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x22e9b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x22e9bc: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x22e9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x22e9c0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x22e9c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22e9c4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x22e9c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x22e9c8: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x22e9c8u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22e9cc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x22e9ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22e9d0: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x22e9d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22e9d4: 0x0  nop
    ctx->pc = 0x22e9d4u;
    // NOP
    // 0x22e9d8: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x22E9D8u;
    {
        const bool branch_taken_0x22e9d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22e9d8) {
            ctx->pc = 0x22E9FCu;
            return;
        }
    }
    ctx->pc = 0x22E9E0u;
    // 0x22e9e0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22e9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22e9e4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22e9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22e9e8: 0xc4610098  lwc1        $f1, 0x98($v1)
    ctx->pc = 0x22e9e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22e9ec: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22e9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22e9f0: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x22e9f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22e9f4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x22e9f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x22e9f8: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x22e9f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    ctx->pc = 0x22e9fcu;
}
