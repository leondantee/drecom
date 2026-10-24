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

// Function: entry_002279a0
// Address: 0x2279a0 - 0x2279e0
void entry_002279a0_0x2279a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002279a0_0x2279a0");
#endif

    ctx->pc = 0x2279a0u;

    // 0x2279a0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2279a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2279a4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2279a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2279a8: 0xc461009c  lwc1        $f1, 0x9C($v1)
    ctx->pc = 0x2279a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2279ac: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x2279acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2279b0: 0xc4a00124  lwc1        $f0, 0x124($a1)
    ctx->pc = 0x2279b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2279b4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2279b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2279b8: 0x0  nop
    ctx->pc = 0x2279b8u;
    // NOP
    // 0x2279bc: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x2279BCu;
    {
        const bool branch_taken_0x2279bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2279bc) {
            ctx->pc = 0x2279E0u;
            return;
        }
    }
    ctx->pc = 0x2279C4u;
    // 0x2279c4: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2279c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2279c8: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x2279c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x2279cc: 0xc4610098  lwc1        $f1, 0x98($v1)
    ctx->pc = 0x2279ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2279d0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2279d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2279d4: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x2279d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2279d8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2279d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2279dc: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x2279dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    ctx->pc = 0x2279e0u;
}
