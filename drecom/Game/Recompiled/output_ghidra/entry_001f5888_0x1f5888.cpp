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

// Function: entry_001f5888
// Address: 0x1f5888 - 0x1f58d0
void entry_001f5888_0x1f5888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f5888_0x1f5888");
#endif

    ctx->pc = 0x1f5888u;

    // 0x1f5888: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f5888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f588c: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x1f588cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f5890: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x1f5890u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x1f5894: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1f5894u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f5898: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1f5898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1f589c: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x1f589cu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f58a0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f58a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f58a4: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1f58a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f58a8: 0x0  nop
    ctx->pc = 0x1f58a8u;
    // NOP
    // 0x1f58ac: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1F58ACu;
    {
        const bool branch_taken_0x1f58ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f58ac) {
            ctx->pc = 0x1F58D0u;
            return;
        }
    }
    ctx->pc = 0x1F58B4u;
    // 0x1f58b4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f58b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f58b8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f58b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f58bc: 0xc4610098  lwc1        $f1, 0x98($v1)
    ctx->pc = 0x1f58bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f58c0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f58c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f58c4: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x1f58c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f58c8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f58c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f58cc: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1f58ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    ctx->pc = 0x1f58d0u;
}
