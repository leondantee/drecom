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

// Function: entry_0025cb08
// Address: 0x25cb08 - 0x25cb60
void entry_0025cb08_0x25cb08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025cb08_0x25cb08");
#endif

    ctx->pc = 0x25cb08u;

label_25cb08:
    // 0x25cb08: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x25cb08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_25cb0c:
    // 0x25cb0c: 0x12c3014e  beq         $s6, $v1, . + 4 + (0x14E << 2)
label_25cb10:
    if (ctx->pc == 0x25CB10u) {
        ctx->pc = 0x25CB14u;
        goto label_25cb14;
    }
    ctx->pc = 0x25CB0Cu;
    {
        const bool branch_taken_0x25cb0c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 3));
        if (branch_taken_0x25cb0c) {
            ctx->pc = 0x25D048u;
            return;
        }
    }
    ctx->pc = 0x25CB14u;
label_25cb14:
    // 0x25cb14: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x25cb14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_25cb18:
    // 0x25cb18: 0x12c3014b  beq         $s6, $v1, . + 4 + (0x14B << 2)
label_25cb1c:
    if (ctx->pc == 0x25CB1Cu) {
        ctx->pc = 0x25CB20u;
        goto label_25cb20;
    }
    ctx->pc = 0x25CB18u;
    {
        const bool branch_taken_0x25cb18 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 3));
        if (branch_taken_0x25cb18) {
            ctx->pc = 0x25D048u;
            return;
        }
    }
    ctx->pc = 0x25CB20u;
label_25cb20:
    // 0x25cb20: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x25cb20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_25cb24:
    // 0x25cb24: 0x8c63034c  lw          $v1, 0x34C($v1)
    ctx->pc = 0x25cb24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 844)));
label_25cb28:
    // 0x25cb28: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x25cb28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_25cb2c:
    // 0x25cb2c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x25cb2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_25cb30:
    // 0x25cb30: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x25cb30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_25cb34:
    // 0x25cb34: 0x2065fffd  addi        $a1, $v1, -0x3
    ctx->pc = 0x25cb34u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)4294967293, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_25cb38:
    // 0x25cb38: 0x2ca10010  sltiu       $at, $a1, 0x10
    ctx->pc = 0x25cb38u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_25cb3c:
    // 0x25cb3c: 0x10200142  beqz        $at, . + 4 + (0x142 << 2)
label_25cb40:
    if (ctx->pc == 0x25CB40u) {
        ctx->pc = 0x25CB44u;
        goto label_25cb44;
    }
    ctx->pc = 0x25CB3Cu;
    {
        const bool branch_taken_0x25cb3c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x25cb3c) {
            ctx->pc = 0x25D048u;
            return;
        }
    }
    ctx->pc = 0x25CB44u;
label_25cb44:
    // 0x25cb44: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x25cb44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_25cb48:
    // 0x25cb48: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x25cb48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_25cb4c:
    // 0x25cb4c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x25cb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_25cb50:
    // 0x25cb50: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25cb50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_25cb54:
    // 0x25cb54: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x25cb54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_25cb58:
    // 0x25cb58: 0x800008  jr          $a0
label_25cb5c:
    if (ctx->pc == 0x25CB5Cu) {
        ctx->pc = 0x25CB60u;
        goto label_fallthrough_0x25cb58;
    }
    ctx->pc = 0x25CB58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25CB58u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x25cb58:
    ctx->pc = 0x25CB60u;
}
