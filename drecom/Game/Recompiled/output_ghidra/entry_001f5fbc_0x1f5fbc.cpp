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

// Function: entry_001f5fbc
// Address: 0x1f5fbc - 0x1f6004
void entry_001f5fbc_0x1f5fbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f5fbc_0x1f5fbc");
#endif

    ctx->pc = 0x1f5fbcu;

    // 0x1f5fbc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f5fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5fc0: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x1f5fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f5fc4: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x1f5fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x1f5fc8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1f5fc8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f5fcc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1f5fccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1f5fd0: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x1f5fd0u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f5fd4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f5fd4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f5fd8: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1f5fd8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f5fdc: 0x0  nop
    ctx->pc = 0x1f5fdcu;
    // NOP
    // 0x1f5fe0: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1F5FE0u;
    {
        const bool branch_taken_0x1f5fe0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f5fe0) {
            ctx->pc = 0x1F6004u;
            return;
        }
    }
    ctx->pc = 0x1F5FE8u;
    // 0x1f5fe8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f5fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5fec: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f5fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f5ff0: 0xc4610098  lwc1        $f1, 0x98($v1)
    ctx->pc = 0x1f5ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f5ff4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f5ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5ff8: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x1f5ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f5ffc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f5ffcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f6000: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1f6000u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    ctx->pc = 0x1f6004u;
}
