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

// Function: entry_001f5f74
// Address: 0x1f5f74 - 0x1f5fbc
void entry_001f5f74_0x1f5f74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f5f74_0x1f5f74");
#endif

    ctx->pc = 0x1f5f74u;

    // 0x1f5f74: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f5f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5f78: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x1f5f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f5f7c: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x1f5f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x1f5f80: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1f5f80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f5f84: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1f5f84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1f5f88: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x1f5f88u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f5f8c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f5f8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f5f90: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1f5f90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f5f94: 0x0  nop
    ctx->pc = 0x1f5f94u;
    // NOP
    // 0x1f5f98: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x1F5F98u;
    {
        const bool branch_taken_0x1f5f98 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f5f98) {
            ctx->pc = 0x1F5FBCu;
            return;
        }
    }
    ctx->pc = 0x1F5FA0u;
    // 0x1f5fa0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f5fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5fa4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f5fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f5fa8: 0xc4610098  lwc1        $f1, 0x98($v1)
    ctx->pc = 0x1f5fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f5fac: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f5facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5fb0: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x1f5fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f5fb4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1f5fb4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1f5fb8: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1f5fb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    ctx->pc = 0x1f5fbcu;
}
