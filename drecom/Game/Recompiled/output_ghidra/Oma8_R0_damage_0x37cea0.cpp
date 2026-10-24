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

// Function: Oma8_R0_damage
// Address: 0x37cea0 - 0x37cee8
void Oma8_R0_damage_0x37cea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Oma8_R0_damage_0x37cea0");
#endif

    switch (ctx->pc) {
        case 0x37cea0u: goto label_37cea0;
        case 0x37cea4u: goto label_37cea4;
        case 0x37cea8u: goto label_37cea8;
        case 0x37ceacu: goto label_37ceac;
        case 0x37ceb0u: goto label_37ceb0;
        case 0x37ceb4u: goto label_37ceb4;
        case 0x37ceb8u: goto label_37ceb8;
        case 0x37cebcu: goto label_37cebc;
        case 0x37cec0u: goto label_37cec0;
        case 0x37cec4u: goto label_37cec4;
        case 0x37cec8u: goto label_37cec8;
        case 0x37ceccu: goto label_37cecc;
        case 0x37ced0u: goto label_37ced0;
        case 0x37ced4u: goto label_37ced4;
        case 0x37ced8u: goto label_37ced8;
        case 0x37cedcu: goto label_37cedc;
        case 0x37cee0u: goto label_37cee0;
        case 0x37cee4u: goto label_37cee4;
        default: break;
    }

    ctx->pc = 0x37cea0u;

label_37cea0:
    // 0x37cea0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x37cea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_37cea4:
    // 0x37cea4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x37cea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_37cea8:
    // 0x37cea8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x37cea8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_37ceac:
    // 0x37ceac: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x37ceacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_37ceb0:
    // 0x37ceb0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x37ceb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_37ceb4:
    // 0x37ceb4: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x37ceb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_37ceb8:
    // 0x37ceb8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x37ceb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_37cebc:
    // 0x37cebc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x37cebcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_37cec0:
    // 0x37cec0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x37cec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_37cec4:
    // 0x37cec4: 0x2442ba98  addiu       $v0, $v0, -0x4568
    ctx->pc = 0x37cec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949528));
label_37cec8:
    // 0x37cec8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x37cec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_37cecc:
    // 0x37cecc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x37ceccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_37ced0:
    // 0x37ced0: 0x40f809  jalr        $v0
label_37ced4:
    if (ctx->pc == 0x37CED4u) {
        ctx->pc = 0x37CED8u;
        goto label_37ced8;
    }
    ctx->pc = 0x37CED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x37CED8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37CED0u, 0x37CED8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x37CED8u;
label_37ced8:
    // 0x37ced8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x37ced8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_37cedc:
    // 0x37cedc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x37cedcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_37cee0:
    // 0x37cee0: 0x3e00008  jr          $ra
label_37cee4:
    if (ctx->pc == 0x37CEE4u) {
        ctx->pc = 0x37CEE8u;
        goto label_fallthrough_0x37cee0;
    }
    ctx->pc = 0x37CEE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37CEE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x37cee0:
    ctx->pc = 0x37CEE8u;
}
