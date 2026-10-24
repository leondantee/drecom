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

// Function: Em0a_R0_damage
// Address: 0x3670e0 - 0x367154
void Em0a_R0_damage_0x3670e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0a_R0_damage_0x3670e0");
#endif

    switch (ctx->pc) {
        case 0x3670e0u: goto label_3670e0;
        case 0x3670e4u: goto label_3670e4;
        case 0x3670e8u: goto label_3670e8;
        case 0x3670ecu: goto label_3670ec;
        case 0x3670f0u: goto label_3670f0;
        case 0x3670f4u: goto label_3670f4;
        case 0x3670f8u: goto label_3670f8;
        case 0x3670fcu: goto label_3670fc;
        case 0x367100u: goto label_367100;
        case 0x367104u: goto label_367104;
        case 0x367108u: goto label_367108;
        case 0x36710cu: goto label_36710c;
        case 0x367110u: goto label_367110;
        case 0x367114u: goto label_367114;
        case 0x367118u: goto label_367118;
        case 0x36711cu: goto label_36711c;
        case 0x367120u: goto label_367120;
        case 0x367124u: goto label_367124;
        case 0x367128u: goto label_367128;
        case 0x36712cu: goto label_36712c;
        case 0x367130u: goto label_367130;
        case 0x367134u: goto label_367134;
        case 0x367138u: goto label_367138;
        case 0x36713cu: goto label_36713c;
        case 0x367140u: goto label_367140;
        case 0x367144u: goto label_367144;
        case 0x367148u: goto label_367148;
        case 0x36714cu: goto label_36714c;
        case 0x367150u: goto label_367150;
        default: break;
    }

    ctx->pc = 0x3670e0u;

label_3670e0:
    // 0x3670e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3670e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3670e4:
    // 0x3670e4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x3670e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_3670e8:
    // 0x3670e8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x3670e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_3670ec:
    // 0x3670ec: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3670ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3670f0:
    // 0x3670f0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3670f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3670f4:
    // 0x3670f4: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x3670f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_3670f8:
    // 0x3670f8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3670f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3670fc:
    // 0x3670fc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x3670fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_367100:
    // 0x367100: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x367100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_367104:
    // 0x367104: 0x2442b038  addiu       $v0, $v0, -0x4FC8
    ctx->pc = 0x367104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946872));
label_367108:
    // 0x367108: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x367108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_36710c:
    // 0x36710c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x36710cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_367110:
    // 0x367110: 0x40f809  jalr        $v0
label_367114:
    if (ctx->pc == 0x367114u) {
        ctx->pc = 0x367118u;
        goto label_367118;
    }
    ctx->pc = 0x367110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x367118u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x367110u, 0x367118u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x367118u;
label_367118:
    // 0x367118: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x367118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_36711c:
    // 0x36711c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36711cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_367120:
    // 0x367120: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x367120u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_367124:
    // 0x367124: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x367124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_367128:
    // 0x367128: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x367128u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_36712c:
    // 0x36712c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x36712cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_367130:
    // 0x367130: 0x2442b048  addiu       $v0, $v0, -0x4FB8
    ctx->pc = 0x367130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946888));
label_367134:
    // 0x367134: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x367134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_367138:
    // 0x367138: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x367138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_36713c:
    // 0x36713c: 0x40f809  jalr        $v0
label_367140:
    if (ctx->pc == 0x367140u) {
        ctx->pc = 0x367144u;
        goto label_367144;
    }
    ctx->pc = 0x36713Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x367144u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36713Cu, 0x367144u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x367144u;
label_367144:
    // 0x367144: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x367144u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_367148:
    // 0x367148: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x367148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_36714c:
    // 0x36714c: 0x3e00008  jr          $ra
label_367150:
    if (ctx->pc == 0x367150u) {
        ctx->pc = 0x367154u;
        goto label_fallthrough_0x36714c;
    }
    ctx->pc = 0x36714Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36714Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x36714c:
    ctx->pc = 0x367154u;
}
