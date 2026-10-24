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

// Function: entry_0035ce24
// Address: 0x35ce24 - 0x35cebc
void entry_0035ce24_0x35ce24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035ce24_0x35ce24");
#endif

    switch (ctx->pc) {
        case 0x35ce48u: goto label_35ce48;
        case 0x35cea4u: goto label_35cea4;
        default: break;
    }

    ctx->pc = 0x35ce24u;

label_35ce24:
    // 0x35ce24: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35ce24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35ce28: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x35ce28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x35ce2c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x35ce2cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u));
    // 0x35ce30: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x35ce30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x35ce34: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x35CE34u;
    {
        const bool branch_taken_0x35ce34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35ce34) {
            ctx->pc = 0x35CE24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35ce24;
        }
    }
    ctx->pc = 0x35CE3Cu;
    // 0x35ce3c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x35ce3cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35ce40: 0xc0d7300  jal         func_35CC00
    ctx->pc = 0x35CE40u;
    SET_GPR_U32(ctx, 31, 0x35CE48u);
    ctx->pc = 0x35CC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CC00u, 0x35CE40u, 0x35CE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CE48u;
label_35ce48:
    // 0x35ce48: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35ce48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35ce4c: 0x3442b010  ori         $v0, $v0, 0xB010
    ctx->pc = 0x35ce4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45072);
    // 0x35ce50: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x35ce50u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x1000B010u));
    // 0x35ce54: 0xae020290  sw          $v0, 0x290($s0)
    ctx->pc = 0x35ce54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 656), GPR_U32(ctx, 2));
    // 0x35ce58: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35ce58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35ce5c: 0x3442b020  ori         $v0, $v0, 0xB020
    ctx->pc = 0x35ce5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45088);
    // 0x35ce60: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x35ce60u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x1000B020u));
    // 0x35ce64: 0xae020294  sw          $v0, 0x294($s0)
    ctx->pc = 0x35ce64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 660), GPR_U32(ctx, 2));
    // 0x35ce68: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35ce68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35ce6c: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x35ce6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
    // 0x35ce70: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x35ce70u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x1000B000u));
    // 0x35ce74: 0xae020298  sw          $v0, 0x298($s0)
    ctx->pc = 0x35ce74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 664), GPR_U32(ctx, 2));
    // 0x35ce78: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35ce78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35ce7c: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x35ce7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x35ce80: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x35ce80u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10002020u));
    // 0x35ce84: 0xae02029c  sw          $v0, 0x29C($s0)
    ctx->pc = 0x35ce84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 668), GPR_U32(ctx, 2));
    // 0x35ce88: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35ce88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35ce8c: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x35ce8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x35ce90: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x35ce90u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u));
    // 0x35ce94: 0xae0202a0  sw          $v0, 0x2A0($s0)
    ctx->pc = 0x35ce94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 672), GPR_U32(ctx, 2));
    // 0x35ce98: 0x8e0402a4  lw          $a0, 0x2A4($s0)
    ctx->pc = 0x35ce98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 676)));
    // 0x35ce9c: 0xc084a90  jal         func_212A40
    ctx->pc = 0x35CE9Cu;
    SET_GPR_U32(ctx, 31, 0x35CEA4u);
    ctx->pc = 0x212A40u;
    {
        ctx->pc = 0x35CEA4u;
        ps2_syscalls::SignalSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x35CEA4u) { return; }
    ctx->pc = 0x35CEA4u;
label_35cea4:
    // 0x35cea4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35cea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35cea8: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x35cea8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35ceac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35ceacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35ceb0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x35ceb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x35ceb4: 0x3e00008  jr          $ra
    ctx->pc = 0x35CEB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35CEB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35CEBCu;
}
