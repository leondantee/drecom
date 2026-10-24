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

// Function: entry_0018cae4
// Address: 0x18cae4 - 0x18cb68
void entry_0018cae4_0x18cae4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018cae4_0x18cae4");
#endif

    switch (ctx->pc) {
        case 0x18cb54u: goto label_18cb54;
        default: break;
    }

    ctx->pc = 0x18cae4u;

label_18cae4:
    // 0x18cae4: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x18cae4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_18cae8:
    // 0x18cae8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x18cae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_18caec:
    // 0x18caec: 0x24427f10  addiu       $v0, $v0, 0x7F10
    ctx->pc = 0x18caecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32528));
label_18caf0:
    // 0x18caf0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18caf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18caf4:
    // 0x18caf4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18caf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18caf8:
    // 0x18caf8: 0x1040005c  beqz        $v0, . + 4 + (0x5C << 2)
label_18cafc:
    if (ctx->pc == 0x18CAFCu) {
        ctx->pc = 0x18CB00u;
        goto label_18cb00;
    }
    ctx->pc = 0x18CAF8u;
    {
        const bool branch_taken_0x18caf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18caf8) {
            ctx->pc = 0x18CC6Cu;
            return;
        }
    }
    ctx->pc = 0x18CB00u;
label_18cb00:
    // 0x18cb00: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x18cb00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_18cb04:
    // 0x18cb04: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x18cb04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_18cb08:
    // 0x18cb08: 0x24427f10  addiu       $v0, $v0, 0x7F10
    ctx->pc = 0x18cb08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32528));
label_18cb0c:
    // 0x18cb0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18cb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18cb10:
    // 0x18cb10: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x18cb10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_18cb14:
    // 0x18cb14: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18cb14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18cb18:
    // 0x18cb18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18cb18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18cb1c:
    // 0x18cb1c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18cb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18cb20:
    // 0x18cb20: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
label_18cb24:
    if (ctx->pc == 0x18CB24u) {
        ctx->pc = 0x18CB28u;
        goto label_18cb28;
    }
    ctx->pc = 0x18CB20u;
    {
        const bool branch_taken_0x18cb20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18cb20) {
            ctx->pc = 0x18CC6Cu;
            return;
        }
    }
    ctx->pc = 0x18CB28u;
label_18cb28:
    // 0x18cb28: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x18cb28u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_18cb2c:
    // 0x18cb2c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x18cb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_18cb30:
    // 0x18cb30: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x18cb30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_18cb34:
    // 0x18cb34: 0x24427f10  addiu       $v0, $v0, 0x7F10
    ctx->pc = 0x18cb34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32528));
label_18cb38:
    // 0x18cb38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18cb38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18cb3c:
    // 0x18cb3c: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x18cb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_18cb40:
    // 0x18cb40: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18cb40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18cb44:
    // 0x18cb44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18cb44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18cb48:
    // 0x18cb48: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18cb48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18cb4c:
    // 0x18cb4c: 0x40f809  jalr        $v0
label_18cb50:
    if (ctx->pc == 0x18CB50u) {
        ctx->pc = 0x18CB54u;
        goto label_18cb54;
    }
    ctx->pc = 0x18CB4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18CB54u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18CB4Cu, 0x18CB54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18CB54u;
label_18cb54:
    // 0x18cb54: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
label_18cb58:
    if (ctx->pc == 0x18CB58u) {
        ctx->pc = 0x18CB5Cu;
        goto label_18cb5c;
    }
    ctx->pc = 0x18CB54u;
    {
        const bool branch_taken_0x18cb54 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x18cb54) {
            ctx->pc = 0x18CB68u;
            return;
        }
    }
    ctx->pc = 0x18CB5Cu;
label_18cb5c:
    // 0x18cb5c: 0x96020340  lhu         $v0, 0x340($s0)
    ctx->pc = 0x18cb5cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 832)));
label_18cb60:
    // 0x18cb60: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x18cb60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_18cb64:
    // 0x18cb64: 0xa6020340  sh          $v0, 0x340($s0)
    ctx->pc = 0x18cb64u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 832), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x18cb68u;
}
