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

// Function: Check_step_aside
// Address: 0x15ed50 - 0x15edd8
void Check_step_aside_0x15ed50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Check_step_aside_0x15ed50");
#endif

    switch (ctx->pc) {
        case 0x15eda0u: goto label_15eda0;
        default: break;
    }

    ctx->pc = 0x15ed50u;

    // 0x15ed50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15ed50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15ed54: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x15ed54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x15ed58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15ed58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15ed5c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x15ed5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x15ed60: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x15ed60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x15ed64: 0x2450dbc0  addiu       $s0, $v0, -0x2440
    ctx->pc = 0x15ed64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x15ed68: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x15ed68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x15ed6c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x15ed6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x15ed70: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x15ed70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x15ed74: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15ED74u;
    {
        const bool branch_taken_0x15ed74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15ed74) {
            ctx->pc = 0x15ED88u;
            goto label_15ed88;
        }
    }
    ctx->pc = 0x15ED7Cu;
    // 0x15ed7c: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x15ed7cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15ed80: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x15ED80u;
    {
        const bool branch_taken_0x15ed80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ed80) {
            ctx->pc = 0x15EDC4u;
            goto label_15edc4;
        }
    }
    ctx->pc = 0x15ED88u;
label_15ed88:
    // 0x15ed88: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x15ed88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x15ed8c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x15ed8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x15ed90: 0xc46c0010  lwc1        $f12, 0x10($v1)
    ctx->pc = 0x15ed90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15ed94: 0xc44d0018  lwc1        $f13, 0x18($v0)
    ctx->pc = 0x15ed94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x15ed98: 0xc0455e6  jal         func_115798
    ctx->pc = 0x15ED98u;
    SET_GPR_U32(ctx, 31, 0x15EDA0u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x15ED98u, 0x15EDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EDA0u;
label_15eda0:
    // 0x15eda0: 0xe6001290  swc1        $f0, 0x1290($s0)
    ctx->pc = 0x15eda0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4752), bits); }
    // 0x15eda4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15eda4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15eda8: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x15eda8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x15edac: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x15edacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x15edb0: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x15edb0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x15edb4: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x15edb4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x15edb8: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x15edb8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x15edbc: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x15edbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x15edc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15edc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15edc4:
    // 0x15edc4: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x15edc4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15edc8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15edc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15edcc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x15edccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15edd0: 0x3e00008  jr          $ra
    ctx->pc = 0x15EDD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15EDD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15EDD8u;
}
