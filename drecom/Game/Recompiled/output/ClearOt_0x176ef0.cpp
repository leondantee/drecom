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

// Function: ClearOt
// Address: 0x176ef0 - 0x176f58
void ClearOt_0x176ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ClearOt_0x176ef0");
#endif

    switch (ctx->pc) {
        case 0x176f28u: goto label_176f28;
        default: break;
    }

    ctx->pc = 0x176ef0u;

    // 0x176ef0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x176ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x176ef4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x176ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x176ef8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x176ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x176efc: 0xafa50018  sw          $a1, 0x18($sp)
    ctx->pc = 0x176efcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 5));
    // 0x176f00: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x176f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x176f04: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x176F04u;
    {
        const bool branch_taken_0x176f04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x176f04) {
            ctx->pc = 0x176F48u;
            goto label_176f48;
        }
    }
    ctx->pc = 0x176F0Cu;
    // 0x176f0c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x176f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x176f10: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x176f10u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x176f14: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x176f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x176f18: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x176f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x176f1c: 0x2470fffc  addiu       $s0, $v1, -0x4
    ctx->pc = 0x176f1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x176f20: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x176F20u;
    {
        const bool branch_taken_0x176f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x176f20) {
            ctx->pc = 0x176F38u;
            goto label_176f38;
        }
    }
    ctx->pc = 0x176F28u;
label_176f28:
    // 0x176f28: 0x2603fffc  addiu       $v1, $s0, -0x4
    ctx->pc = 0x176f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
    // 0x176f2c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x176f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x176f30: 0x2610fffc  addiu       $s0, $s0, -0x4
    ctx->pc = 0x176f30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
    // 0x176f34: 0x0  nop
    ctx->pc = 0x176f34u;
    // NOP
label_176f38:
    // 0x176f38: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x176f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x176f3c: 0x1603fffa  bne         $s0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x176F3Cu;
    {
        const bool branch_taken_0x176f3c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x176f3c) {
            ctx->pc = 0x176F28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_176f28;
        }
    }
    ctx->pc = 0x176F44u;
    // 0x176f44: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x176f44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_176f48:
    // 0x176f48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x176f48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176f4c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x176f4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x176f50: 0x3e00008  jr          $ra
    ctx->pc = 0x176F50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x176F50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x176F58u;
}
