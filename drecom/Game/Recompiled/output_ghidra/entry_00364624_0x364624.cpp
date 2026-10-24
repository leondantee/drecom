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

// Function: entry_00364624
// Address: 0x364624 - 0x3646a8
void entry_00364624_0x364624(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00364624_0x364624");
#endif

    switch (ctx->pc) {
        case 0x36466cu: goto label_36466c;
        default: break;
    }

    ctx->pc = 0x364624u;

    // 0x364624: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x364624u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x364628: 0x8c24dbc8  lw          $a0, -0x2438($at)
    ctx->pc = 0x364628u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3EDBC8u));
    // 0x36462c: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x36462cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x364630: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x364630u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x364634: 0x10600046  beqz        $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x364634u;
    {
        const bool branch_taken_0x364634 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x364634) {
            ctx->pc = 0x364750u;
            return;
        }
    }
    ctx->pc = 0x36463Cu;
    // 0x36463c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x36463cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364640: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x364640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x364644: 0x3c034576  lui         $v1, 0x4576
    ctx->pc = 0x364644u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17782 << 16));
    // 0x364648: 0x3463e000  ori         $v1, $v1, 0xE000
    ctx->pc = 0x364648u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57344);
    // 0x36464c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x36464cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x364650: 0x0  nop
    ctx->pc = 0x364650u;
    // NOP
    // 0x364654: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x364654u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x364658: 0x0  nop
    ctx->pc = 0x364658u;
    // NOP
    // 0x36465c: 0x4500003c  bc1f        . + 4 + (0x3C << 2)
    ctx->pc = 0x36465Cu;
    {
        const bool branch_taken_0x36465c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x36465c) {
            ctx->pc = 0x364750u;
            return;
        }
    }
    ctx->pc = 0x364664u;
    // 0x364664: 0xc067694  jal         func_19DA50
    ctx->pc = 0x364664u;
    SET_GPR_U32(ctx, 31, 0x36466Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x364664u, 0x36466Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36466Cu;
label_36466c:
    // 0x36466c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x36466cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x364670: 0x30640003  andi        $a0, $v1, 0x3
    ctx->pc = 0x364670u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x364674: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x364674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x364678: 0x10830027  beq         $a0, $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x364678u;
    {
        const bool branch_taken_0x364678 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x364678) {
            ctx->pc = 0x364718u;
            return;
        }
    }
    ctx->pc = 0x364680u;
    // 0x364680: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x364680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x364684: 0x10830016  beq         $a0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x364684u;
    {
        const bool branch_taken_0x364684 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x364684) {
            ctx->pc = 0x3646E0u;
            return;
        }
    }
    ctx->pc = 0x36468Cu;
    // 0x36468c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x36468cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x364690: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x364690u;
    {
        const bool branch_taken_0x364690 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x364690) {
            ctx->pc = 0x3646A8u;
            return;
        }
    }
    ctx->pc = 0x364698u;
    // 0x364698: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x364698u;
    {
        const bool branch_taken_0x364698 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x364698) {
            ctx->pc = 0x3646A8u;
            return;
        }
    }
    ctx->pc = 0x3646A0u;
    // 0x3646a0: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x3646A0u;
    {
        const bool branch_taken_0x3646a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3646a0) {
            ctx->pc = 0x364750u;
            return;
        }
    }
    ctx->pc = 0x3646A8u;
}
