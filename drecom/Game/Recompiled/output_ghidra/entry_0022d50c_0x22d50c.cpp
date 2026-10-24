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

// Function: entry_0022d50c
// Address: 0x22d50c - 0x22d54c
void entry_0022d50c_0x22d50c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022d50c_0x22d50c");
#endif

    ctx->pc = 0x22d50cu;

    // 0x22d50c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22d50cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22d510: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x22d510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22d514: 0xc481009c  lwc1        $f1, 0x9C($a0)
    ctx->pc = 0x22d514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22d518: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22d518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22d51c: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x22d51cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22d520: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x22d520u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22d524: 0x0  nop
    ctx->pc = 0x22d524u;
    // NOP
    // 0x22d528: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x22D528u;
    {
        const bool branch_taken_0x22d528 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22d528) {
            ctx->pc = 0x22D54Cu;
            return;
        }
    }
    ctx->pc = 0x22D530u;
    // 0x22d530: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22d530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22d534: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x22d534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22d538: 0xc4810098  lwc1        $f1, 0x98($a0)
    ctx->pc = 0x22d538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22d53c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22d53cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22d540: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x22d540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22d544: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22d544u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x22d548: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x22d548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    ctx->pc = 0x22d54cu;
}
