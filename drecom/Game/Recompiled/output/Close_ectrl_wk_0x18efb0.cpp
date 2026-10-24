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

// Function: Close_ectrl_wk
// Address: 0x18efb0 - 0x18f0b8
void Close_ectrl_wk_0x18efb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Close_ectrl_wk_0x18efb0");
#endif

    ctx->pc = 0x18efb0u;

    // 0x18efb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18efb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18efb4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18efb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18efb8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x18efb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x18efbc: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x18efbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x18efc0: 0x2450a630  addiu       $s0, $v0, -0x59D0
    ctx->pc = 0x18efc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944304));
    // 0x18efc4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18efc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18efc8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x18efc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x18efcc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18efccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18efd0: 0x8c4200e4  lw          $v0, 0xE4($v0)
    ctx->pc = 0x18efd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 228)));
    // 0x18efd4: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x18EFD4u;
    {
        const bool branch_taken_0x18efd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18efd4) {
            ctx->pc = 0x18F010u;
            goto label_18f010;
        }
    }
    ctx->pc = 0x18EFDCu;
    // 0x18efdc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18efdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18efe0: 0x8c4200e8  lw          $v0, 0xE8($v0)
    ctx->pc = 0x18efe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 232)));
    // 0x18efe4: 0xae020078  sw          $v0, 0x78($s0)
    ctx->pc = 0x18efe4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 2));
    // 0x18efe8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18EFE8u;
    {
        const bool branch_taken_0x18efe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18efe8) {
            ctx->pc = 0x18EFFCu;
            goto label_18effc;
        }
    }
    ctx->pc = 0x18EFF0u;
    // 0x18eff0: 0xae00007c  sw          $zero, 0x7C($s0)
    ctx->pc = 0x18eff0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
    // 0x18eff4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x18EFF4u;
    {
        const bool branch_taken_0x18eff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18eff4) {
            ctx->pc = 0x18F054u;
            goto label_18f054;
        }
    }
    ctx->pc = 0x18EFFCu;
label_18effc:
    // 0x18effc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18effcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18f000: 0x8c4200e8  lw          $v0, 0xE8($v0)
    ctx->pc = 0x18f000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 232)));
    // 0x18f004: 0xac4000e4  sw          $zero, 0xE4($v0)
    ctx->pc = 0x18f004u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 228), GPR_U32(ctx, 0));
    // 0x18f008: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x18F008u;
    {
        const bool branch_taken_0x18f008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f008) {
            ctx->pc = 0x18F054u;
            goto label_18f054;
        }
    }
    ctx->pc = 0x18F010u;
label_18f010:
    // 0x18f010: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18f010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18f014: 0x8c4300e8  lw          $v1, 0xE8($v0)
    ctx->pc = 0x18f014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 232)));
    // 0x18f018: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18f018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18f01c: 0x8c4200e4  lw          $v0, 0xE4($v0)
    ctx->pc = 0x18f01cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 228)));
    // 0x18f020: 0xac4300e8  sw          $v1, 0xE8($v0)
    ctx->pc = 0x18f020u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 232), GPR_U32(ctx, 3));
    // 0x18f024: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x18F024u;
    {
        const bool branch_taken_0x18f024 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18f024) {
            ctx->pc = 0x18F040u;
            goto label_18f040;
        }
    }
    ctx->pc = 0x18F02Cu;
    // 0x18f02c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18f02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18f030: 0x8c4200e4  lw          $v0, 0xE4($v0)
    ctx->pc = 0x18f030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 228)));
    // 0x18f034: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x18f034u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
    // 0x18f038: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x18F038u;
    {
        const bool branch_taken_0x18f038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f038) {
            ctx->pc = 0x18F054u;
            goto label_18f054;
        }
    }
    ctx->pc = 0x18F040u;
label_18f040:
    // 0x18f040: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18f040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18f044: 0x8c4300e4  lw          $v1, 0xE4($v0)
    ctx->pc = 0x18f044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 228)));
    // 0x18f048: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18f048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18f04c: 0x8c4200e8  lw          $v0, 0xE8($v0)
    ctx->pc = 0x18f04cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 232)));
    // 0x18f050: 0xac4300e4  sw          $v1, 0xE4($v0)
    ctx->pc = 0x18f050u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 228), GPR_U32(ctx, 3));
label_18f054:
    // 0x18f054: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18f054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18f058: 0xac4000f0  sw          $zero, 0xF0($v0)
    ctx->pc = 0x18f058u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 240), GPR_U32(ctx, 0));
    // 0x18f05c: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x18f05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x18f060: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18F060u;
    {
        const bool branch_taken_0x18f060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18f060) {
            ctx->pc = 0x18F080u;
            goto label_18f080;
        }
    }
    ctx->pc = 0x18F068u;
    // 0x18f068: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18f068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18f06c: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x18f06cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
    // 0x18f070: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18f070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18f074: 0xac4000ec  sw          $zero, 0xEC($v0)
    ctx->pc = 0x18f074u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 236), GPR_U32(ctx, 0));
    // 0x18f078: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18F078u;
    {
        const bool branch_taken_0x18f078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f078) {
            ctx->pc = 0x18F098u;
            goto label_18f098;
        }
    }
    ctx->pc = 0x18F080u;
label_18f080:
    // 0x18f080: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x18f080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x18f084: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18f084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18f088: 0xac4300ec  sw          $v1, 0xEC($v0)
    ctx->pc = 0x18f088u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 236), GPR_U32(ctx, 3));
    // 0x18f08c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x18f08cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18f090: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x18f090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x18f094: 0xac4300f0  sw          $v1, 0xF0($v0)
    ctx->pc = 0x18f094u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 240), GPR_U32(ctx, 3));
label_18f098:
    // 0x18f098: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18f098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18f09c: 0xae020084  sw          $v0, 0x84($s0)
    ctx->pc = 0x18f09cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 2));
    // 0x18f0a0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18f0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18f0a4: 0x8c4200e8  lw          $v0, 0xE8($v0)
    ctx->pc = 0x18f0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 232)));
    // 0x18f0a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18f0a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18f0ac: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x18f0acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x18f0b0: 0x3e00008  jr          $ra
    ctx->pc = 0x18F0B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F0B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18F0B8u;
}
