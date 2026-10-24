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

// Function: Em1c_R1_move_type00
// Address: 0x36dfe0 - 0x36e054
void Em1c_R1_move_type00_0x36dfe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em1c_R1_move_type00_0x36dfe0");
#endif

    switch (ctx->pc) {
        case 0x36dfe0u: goto label_36dfe0;
        case 0x36dfe4u: goto label_36dfe4;
        case 0x36dfe8u: goto label_36dfe8;
        case 0x36dfecu: goto label_36dfec;
        case 0x36dff0u: goto label_36dff0;
        case 0x36dff4u: goto label_36dff4;
        case 0x36dff8u: goto label_36dff8;
        case 0x36dffcu: goto label_36dffc;
        case 0x36e000u: goto label_36e000;
        case 0x36e004u: goto label_36e004;
        case 0x36e008u: goto label_36e008;
        case 0x36e00cu: goto label_36e00c;
        case 0x36e010u: goto label_36e010;
        case 0x36e014u: goto label_36e014;
        case 0x36e018u: goto label_36e018;
        case 0x36e01cu: goto label_36e01c;
        case 0x36e020u: goto label_36e020;
        case 0x36e024u: goto label_36e024;
        case 0x36e028u: goto label_36e028;
        case 0x36e02cu: goto label_36e02c;
        case 0x36e030u: goto label_36e030;
        case 0x36e034u: goto label_36e034;
        case 0x36e038u: goto label_36e038;
        case 0x36e03cu: goto label_36e03c;
        case 0x36e040u: goto label_36e040;
        case 0x36e044u: goto label_36e044;
        case 0x36e048u: goto label_36e048;
        case 0x36e04cu: goto label_36e04c;
        case 0x36e050u: goto label_36e050;
        default: break;
    }

    ctx->pc = 0x36dfe0u;

label_36dfe0:
    // 0x36dfe0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36dfe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_36dfe4:
    // 0x36dfe4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x36dfe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_36dfe8:
    // 0x36dfe8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x36dfe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_36dfec:
    // 0x36dfec: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36dfecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_36dff0:
    // 0x36dff0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36dff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_36dff4:
    // 0x36dff4: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x36dff4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_36dff8:
    // 0x36dff8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36dff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_36dffc:
    // 0x36dffc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x36dffcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_36e000:
    // 0x36e000: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x36e000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_36e004:
    // 0x36e004: 0x2442b330  addiu       $v0, $v0, -0x4CD0
    ctx->pc = 0x36e004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947632));
label_36e008:
    // 0x36e008: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36e008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_36e00c:
    // 0x36e00c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x36e00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_36e010:
    // 0x36e010: 0x40f809  jalr        $v0
label_36e014:
    if (ctx->pc == 0x36E014u) {
        ctx->pc = 0x36E018u;
        goto label_36e018;
    }
    ctx->pc = 0x36E010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x36E018u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E010u, 0x36E018u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36E018u;
label_36e018:
    // 0x36e018: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36e018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_36e01c:
    // 0x36e01c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36e01cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_36e020:
    // 0x36e020: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x36e020u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_36e024:
    // 0x36e024: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36e024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_36e028:
    // 0x36e028: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x36e028u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_36e02c:
    // 0x36e02c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x36e02cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_36e030:
    // 0x36e030: 0x2442b350  addiu       $v0, $v0, -0x4CB0
    ctx->pc = 0x36e030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947664));
label_36e034:
    // 0x36e034: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36e034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_36e038:
    // 0x36e038: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x36e038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_36e03c:
    // 0x36e03c: 0x40f809  jalr        $v0
label_36e040:
    if (ctx->pc == 0x36E040u) {
        ctx->pc = 0x36E044u;
        goto label_36e044;
    }
    ctx->pc = 0x36E03Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x36E044u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E03Cu, 0x36E044u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36E044u;
label_36e044:
    // 0x36e044: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x36e044u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_36e048:
    // 0x36e048: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x36e048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_36e04c:
    // 0x36e04c: 0x3e00008  jr          $ra
label_36e050:
    if (ctx->pc == 0x36E050u) {
        ctx->pc = 0x36E054u;
        goto label_fallthrough_0x36e04c;
    }
    ctx->pc = 0x36E04Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E04Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x36e04c:
    ctx->pc = 0x36E054u;
}
