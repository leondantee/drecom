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

// Function: entry_001397fc
// Address: 0x1397fc - 0x139840
void entry_001397fc_0x1397fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001397fc_0x1397fc");
#endif

    ctx->pc = 0x1397fcu;

    // 0x1397fc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1397fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x139800: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x139800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x139804: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x139804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x139808: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x139808u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13980c: 0x0  nop
    ctx->pc = 0x13980cu;
    // NOP
    // 0x139810: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x139810u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x139814: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x139814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x139818: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x139818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13981c: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x13981cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x139820: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x139820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139824: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x139824u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x139828: 0x0  nop
    ctx->pc = 0x139828u;
    // NOP
    // 0x13982c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x13982Cu;
    {
        const bool branch_taken_0x13982c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13982c) {
            ctx->pc = 0x139840u;
            return;
        }
    }
    ctx->pc = 0x139834u;
    // 0x139834: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x139834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139838: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x139838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13983c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x13983cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    ctx->pc = 0x139840u;
}
