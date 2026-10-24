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

// Function: Em02_R0_damage
// Address: 0x2a2fc0 - 0x2a3008
void Em02_R0_damage_0x2a2fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em02_R0_damage_0x2a2fc0");
#endif

    switch (ctx->pc) {
        case 0x2a2fc0u: goto label_2a2fc0;
        case 0x2a2fc4u: goto label_2a2fc4;
        case 0x2a2fc8u: goto label_2a2fc8;
        case 0x2a2fccu: goto label_2a2fcc;
        case 0x2a2fd0u: goto label_2a2fd0;
        case 0x2a2fd4u: goto label_2a2fd4;
        case 0x2a2fd8u: goto label_2a2fd8;
        case 0x2a2fdcu: goto label_2a2fdc;
        case 0x2a2fe0u: goto label_2a2fe0;
        case 0x2a2fe4u: goto label_2a2fe4;
        case 0x2a2fe8u: goto label_2a2fe8;
        case 0x2a2fecu: goto label_2a2fec;
        case 0x2a2ff0u: goto label_2a2ff0;
        case 0x2a2ff4u: goto label_2a2ff4;
        case 0x2a2ff8u: goto label_2a2ff8;
        case 0x2a2ffcu: goto label_2a2ffc;
        case 0x2a3000u: goto label_2a3000;
        case 0x2a3004u: goto label_2a3004;
        default: break;
    }

    ctx->pc = 0x2a2fc0u;

label_2a2fc0:
    // 0x2a2fc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a2fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2a2fc4:
    // 0x2a2fc4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2a2fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_2a2fc8:
    // 0x2a2fc8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2a2fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_2a2fcc:
    // 0x2a2fcc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2a2fccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2a2fd0:
    // 0x2a2fd0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2a2fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2a2fd4:
    // 0x2a2fd4: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x2a2fd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_2a2fd8:
    // 0x2a2fd8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a2fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2a2fdc:
    // 0x2a2fdc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2a2fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2a2fe0:
    // 0x2a2fe0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2a2fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_2a2fe4:
    // 0x2a2fe4: 0x24426ba0  addiu       $v0, $v0, 0x6BA0
    ctx->pc = 0x2a2fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27552));
label_2a2fe8:
    // 0x2a2fe8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a2fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2a2fec:
    // 0x2a2fec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2a2fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a2ff0:
    // 0x2a2ff0: 0x40f809  jalr        $v0
label_2a2ff4:
    if (ctx->pc == 0x2A2FF4u) {
        ctx->pc = 0x2A2FF8u;
        goto label_2a2ff8;
    }
    ctx->pc = 0x2A2FF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A2FF8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2FF0u, 0x2A2FF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A2FF8u;
label_2a2ff8:
    // 0x2a2ff8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2a2ff8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2a2ffc:
    // 0x2a2ffc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2a2ffcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2a3000:
    // 0x2a3000: 0x3e00008  jr          $ra
label_2a3004:
    if (ctx->pc == 0x2A3004u) {
        ctx->pc = 0x2A3008u;
        goto label_fallthrough_0x2a3000;
    }
    ctx->pc = 0x2A3000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2a3000:
    ctx->pc = 0x2A3008u;
}
