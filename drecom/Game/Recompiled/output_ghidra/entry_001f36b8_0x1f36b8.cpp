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

// Function: entry_001f36b8
// Address: 0x1f36b8 - 0x1f3700
void entry_001f36b8_0x1f36b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f36b8_0x1f36b8");
#endif

    ctx->pc = 0x1f36b8u;

    // 0x1f36b8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f36b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f36bc: 0xc4420124  lwc1        $f2, 0x124($v0)
    ctx->pc = 0x1f36bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f36c0: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x1f36c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x1f36c4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f36c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f36c8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1f36c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1f36cc: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x1f36ccu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f36d0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f36d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f36d4: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1f36d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f36d8: 0x0  nop
    ctx->pc = 0x1f36d8u;
    // NOP
    // 0x1f36dc: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1F36DCu;
    {
        const bool branch_taken_0x1f36dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f36dc) {
            ctx->pc = 0x1F3700u;
            return;
        }
    }
    ctx->pc = 0x1F36E4u;
    // 0x1f36e4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1f36e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f36e8: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x1f36e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f36ec: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1f36ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1f36f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f36f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f36f4: 0x0  nop
    ctx->pc = 0x1f36f4u;
    // NOP
    // 0x1f36f8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f36f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f36fc: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1f36fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    ctx->pc = 0x1f3700u;
}
