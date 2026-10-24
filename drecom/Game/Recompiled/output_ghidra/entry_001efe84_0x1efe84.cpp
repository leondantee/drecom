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

// Function: entry_001efe84
// Address: 0x1efe84 - 0x1efed8
void entry_001efe84_0x1efe84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001efe84_0x1efe84");
#endif

    ctx->pc = 0x1efe84u;

    // 0x1efe84: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1efe84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1efe88: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x1efe88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1efe8c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1efe8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1efe90: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x1efe90u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1efe94: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x1efe94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x1efe98: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1efe98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1efe9c: 0x0  nop
    ctx->pc = 0x1efe9cu;
    // NOP
    // 0x1efea0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1efea0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1efea4: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1efea4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1efea8: 0x0  nop
    ctx->pc = 0x1efea8u;
    // NOP
    // 0x1efeac: 0x45000030  bc1f        . + 4 + (0x30 << 2)
    ctx->pc = 0x1EFEACu;
    {
        const bool branch_taken_0x1efeac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1efeac) {
            ctx->pc = 0x1EFF70u;
            return;
        }
    }
    ctx->pc = 0x1EFEB4u;
    // 0x1efeb4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1efeb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1efeb8: 0xc4810124  lwc1        $f1, 0x124($a0)
    ctx->pc = 0x1efeb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1efebc: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x1efebcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x1efec0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1efec0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1efec4: 0x0  nop
    ctx->pc = 0x1efec4u;
    // NOP
    // 0x1efec8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1efec8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1efecc: 0xe4800124  swc1        $f0, 0x124($a0)
    ctx->pc = 0x1efeccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
    // 0x1efed0: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1EFED0u;
    {
        const bool branch_taken_0x1efed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1efed0) {
            ctx->pc = 0x1EFF70u;
            return;
        }
    }
    ctx->pc = 0x1EFED8u;
}
