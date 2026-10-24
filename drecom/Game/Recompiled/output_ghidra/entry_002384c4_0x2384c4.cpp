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

// Function: entry_002384c4
// Address: 0x2384c4 - 0x23853c
void entry_002384c4_0x2384c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002384c4_0x2384c4");
#endif

    ctx->pc = 0x2384c4u;

    // 0x2384c4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2384c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2384c8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2384c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2384cc: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x2384ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2384d0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2384d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2384d4: 0xc4400180  lwc1        $f0, 0x180($v0)
    ctx->pc = 0x2384d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2384d8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2384d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2384dc: 0x0  nop
    ctx->pc = 0x2384dcu;
    // NOP
    // 0x2384e0: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x2384E0u;
    {
        const bool branch_taken_0x2384e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2384e0) {
            ctx->pc = 0x23853Cu;
            return;
        }
    }
    ctx->pc = 0x2384E8u;
    // 0x2384e8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2384e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2384ec: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2384ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2384f0: 0xc4410024  lwc1        $f1, 0x24($v0)
    ctx->pc = 0x2384f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2384f4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2384f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2384f8: 0xc4400180  lwc1        $f0, 0x180($v0)
    ctx->pc = 0x2384f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2384fc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2384fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x238500: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x238500u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x238504: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x238504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x238508: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x238508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23850c: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x23850cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x238510: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x238510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x238514: 0xc4400180  lwc1        $f0, 0x180($v0)
    ctx->pc = 0x238514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x238518: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x238518u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23851c: 0x0  nop
    ctx->pc = 0x23851cu;
    // NOP
    // 0x238520: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x238520u;
    {
        const bool branch_taken_0x238520 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x238520) {
            ctx->pc = 0x23853Cu;
            return;
        }
    }
    ctx->pc = 0x238528u;
    // 0x238528: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x238528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x23852c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23852cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x238530: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x238530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x238534: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x238534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x238538: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x238538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    ctx->pc = 0x23853cu;
}
