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

// Function: sdr_initDev
// Address: 0x338a10 - 0x338ac0
void sdr_initDev_0x338a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sdr_initDev_0x338a10");
#endif

    switch (ctx->pc) {
        case 0x338a30u: goto label_338a30;
        case 0x338a44u: goto label_338a44;
        case 0x338a78u: goto label_338a78;
        case 0x338a84u: goto label_338a84;
        default: break;
    }

    ctx->pc = 0x338a10u;

    // 0x338a10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x338a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x338a14: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x338a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x338a18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x338a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x338a1c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x338a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x338a20: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x338a20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
    // 0x338a24: 0x24100400  addiu       $s0, $zero, 0x400
    ctx->pc = 0x338a24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x338a28: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x338A28u;
    {
        const bool branch_taken_0x338a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x338a28) {
            ctx->pc = 0x338AA0u;
            goto label_338aa0;
        }
    }
    ctx->pc = 0x338A30u;
label_338a30:
    // 0x338a30: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x338a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x338a34: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x338a34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x338a38: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x338a38u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x338a3c: 0xc085676  jal         func_2159D8
    ctx->pc = 0x338A3Cu;
    SET_GPR_U32(ctx, 31, 0x338A44u);
    ctx->pc = 0x2159D8u;
    {
        ctx->pc = 0x338A44u;
        ps2_stubs::sceSifBindRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x338A44u) { return; }
    ctx->pc = 0x338A44u;
label_338a44:
    // 0x338a44: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x338A44u;
    {
        const bool branch_taken_0x338a44 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x338a44) {
            ctx->pc = 0x338A58u;
            goto label_338a58;
        }
    }
    ctx->pc = 0x338A4Cu;
    // 0x338a4c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x338a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x338a50: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x338A50u;
    {
        const bool branch_taken_0x338a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x338a50) {
            ctx->pc = 0x338AACu;
            goto label_338aac;
        }
    }
    ctx->pc = 0x338A58u;
label_338a58:
    // 0x338a58: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x338a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x338a5c: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x338a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x338a60: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x338A60u;
    {
        const bool branch_taken_0x338a60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x338a60) {
            ctx->pc = 0x338AA8u;
            goto label_338aa8;
        }
    }
    ctx->pc = 0x338A68u;
    // 0x338a68: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x338a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x338a6c: 0x24442210  addiu       $a0, $v0, 0x2210
    ctx->pc = 0x338a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
    // 0x338a70: 0xc046760  jal         func_119D80
    ctx->pc = 0x338A70u;
    SET_GPR_U32(ctx, 31, 0x338A78u);
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x338A78u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x338A78u) { return; }
    ctx->pc = 0x338A78u;
label_338a78:
    // 0x338a78: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x338a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x338a7c: 0xc0ce234  jal         func_3388D0
    ctx->pc = 0x338A7Cu;
    SET_GPR_U32(ctx, 31, 0x338A84u);
    ctx->pc = 0x3388D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3388D0u, 0x338A7Cu, 0x338A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338A84u;
label_338a84:
    // 0x338a84: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x338A84u;
    {
        const bool branch_taken_0x338a84 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x338a84) {
            ctx->pc = 0x338A98u;
            goto label_338a98;
        }
    }
    ctx->pc = 0x338A8Cu;
    // 0x338a8c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x338a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x338a90: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x338A90u;
    {
        const bool branch_taken_0x338a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x338a90) {
            ctx->pc = 0x338AACu;
            goto label_338aac;
        }
    }
    ctx->pc = 0x338A98u;
label_338a98:
    // 0x338a98: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x338a98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x338a9c: 0x0  nop
    ctx->pc = 0x338a9cu;
    // NOP
label_338aa0:
    // 0x338aa0: 0x1e00ffe3  bgtz        $s0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x338AA0u;
    {
        const bool branch_taken_0x338aa0 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x338aa0) {
            ctx->pc = 0x338A30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_338a30;
        }
    }
    ctx->pc = 0x338AA8u;
label_338aa8:
    // 0x338aa8: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x338aa8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_338aac:
    // 0x338aac: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x338aacu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x338ab0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x338ab0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x338ab4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x338ab4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x338ab8: 0x3e00008  jr          $ra
    ctx->pc = 0x338AB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338AB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x338AC0u;
}
