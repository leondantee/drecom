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

// Function: entry_00247cd4
// Address: 0x247cd4 - 0x247d4c
void entry_00247cd4_0x247cd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00247cd4_0x247cd4");
#endif

    ctx->pc = 0x247cd4u;

    // 0x247cd4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x247cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247cd8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x247cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x247cdc: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x247cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x247ce0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x247ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247ce4: 0xc4600184  lwc1        $f0, 0x184($v1)
    ctx->pc = 0x247ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x247ce8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x247ce8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x247cec: 0x0  nop
    ctx->pc = 0x247cecu;
    // NOP
    // 0x247cf0: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x247CF0u;
    {
        const bool branch_taken_0x247cf0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x247cf0) {
            ctx->pc = 0x247D4Cu;
            return;
        }
    }
    ctx->pc = 0x247CF8u;
    // 0x247cf8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x247cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247cfc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x247cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x247d00: 0xc4610028  lwc1        $f1, 0x28($v1)
    ctx->pc = 0x247d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x247d04: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x247d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247d08: 0xc4800184  lwc1        $f0, 0x184($a0)
    ctx->pc = 0x247d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x247d0c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x247d0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x247d10: 0xe4800184  swc1        $f0, 0x184($a0)
    ctx->pc = 0x247d10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 388), bits); }
    // 0x247d14: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x247d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247d18: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x247d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x247d1c: 0xc481001c  lwc1        $f1, 0x1C($a0)
    ctx->pc = 0x247d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x247d20: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x247d20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247d24: 0xc4a00184  lwc1        $f0, 0x184($a1)
    ctx->pc = 0x247d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x247d28: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x247d28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x247d2c: 0x0  nop
    ctx->pc = 0x247d2cu;
    // NOP
    // 0x247d30: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x247D30u;
    {
        const bool branch_taken_0x247d30 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x247d30) {
            ctx->pc = 0x247D4Cu;
            return;
        }
    }
    ctx->pc = 0x247D38u;
    // 0x247d38: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x247d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247d3c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x247d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x247d40: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x247d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x247d44: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x247d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247d48: 0xe4800184  swc1        $f0, 0x184($a0)
    ctx->pc = 0x247d48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 388), bits); }
    ctx->pc = 0x247d4cu;
}
