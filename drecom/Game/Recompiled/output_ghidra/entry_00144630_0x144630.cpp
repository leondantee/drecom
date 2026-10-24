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

// Function: entry_00144630
// Address: 0x144630 - 0x144688
void entry_00144630_0x144630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00144630_0x144630");
#endif

    switch (ctx->pc) {
        case 0x144658u: goto label_144658;
        case 0x144664u: goto label_144664;
        default: break;
    }

    ctx->pc = 0x144630u;

    // 0x144630: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x144630u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x144634: 0x8e021374  lw          $v0, 0x1374($s0)
    ctx->pc = 0x144634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4980)));
    // 0x144638: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x144638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14463c: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x14463cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x144640: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x144640u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x144644: 0x8e021374  lw          $v0, 0x1374($s0)
    ctx->pc = 0x144644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4980)));
    // 0x144648: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x144648u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14464c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x14464cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x144650: 0xc040c80  jal         func_103200
    ctx->pc = 0x144650u;
    SET_GPR_U32(ctx, 31, 0x144658u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x144658u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x144658u) { return; }
    ctx->pc = 0x144658u;
label_144658:
    // 0x144658: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x144658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x14465c: 0xc067588  jal         func_19D620
    ctx->pc = 0x14465Cu;
    SET_GPR_U32(ctx, 31, 0x144664u);
    ctx->pc = 0x19D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D620u, 0x14465Cu, 0x144664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144664u;
label_144664:
    // 0x144664: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x144664u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
    // 0x144668: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x144668u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14466c: 0x0  nop
    ctx->pc = 0x14466cu;
    // NOP
    // 0x144670: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x144670u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x144674: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x144674u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x144678: 0x8e031388  lw          $v1, 0x1388($s0)
    ctx->pc = 0x144678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5000)));
    // 0x14467c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14467cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x144680: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x144680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x144684: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x144684u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x144688u;
}
