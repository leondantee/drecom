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

// Function: entry_002534f8
// Address: 0x2534f8 - 0x253550
void entry_002534f8_0x2534f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002534f8_0x2534f8");
#endif

    switch (ctx->pc) {
        case 0x253530u: goto label_253530;
        default: break;
    }

    ctx->pc = 0x2534f8u;

    // 0x2534f8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2534f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2534fc: 0x24420190  addiu       $v0, $v0, 0x190
    ctx->pc = 0x2534fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
    // 0x253500: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x253500u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x253504: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x253504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x253508: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x253508u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x25350c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x25350cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253510: 0x0  nop
    ctx->pc = 0x253510u;
    // NOP
    // 0x253514: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x253514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x253518: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x253518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x25351c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x25351cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x253520: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x253520u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x253524: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x253524u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x253528: 0xc07965c  jal         func_1E5970
    ctx->pc = 0x253528u;
    SET_GPR_U32(ctx, 31, 0x253530u);
    ctx->pc = 0x1E5970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5970u, 0x253528u, 0x253530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253530u;
label_253530:
    // 0x253530: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x253530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x253534: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x253534u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253538: 0x0  nop
    ctx->pc = 0x253538u;
    // NOP
    // 0x25353c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x25353cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x253540: 0x0  nop
    ctx->pc = 0x253540u;
    // NOP
    // 0x253544: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x253544u;
    {
        const bool branch_taken_0x253544 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x253544) {
            ctx->pc = 0x253550u;
            return;
        }
    }
    ctx->pc = 0x25354Cu;
    // 0x25354c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x25354cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x253550u;
}
