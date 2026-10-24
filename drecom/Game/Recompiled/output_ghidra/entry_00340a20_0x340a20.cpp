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

// Function: entry_00340a20
// Address: 0x340a20 - 0x340a70
void entry_00340a20_0x340a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00340a20_0x340a20");
#endif

    switch (ctx->pc) {
        case 0x340a68u: goto label_340a68;
        default: break;
    }

    ctx->pc = 0x340a20u;

label_340a20:
    // 0x340a20: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x340a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_340a24:
    // 0x340a24: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x340a24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_340a28:
    // 0x340a28: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x340a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_340a2c:
    // 0x340a2c: 0x9463000e  lhu         $v1, 0xE($v1)
    ctx->pc = 0x340a2cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
label_340a30:
    // 0x340a30: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x340a30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_340a34:
    // 0x340a34: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
label_340a38:
    if (ctx->pc == 0x340A38u) {
        ctx->pc = 0x340A3Cu;
        goto label_340a3c;
    }
    ctx->pc = 0x340A34u;
    {
        const bool branch_taken_0x340a34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x340a34) {
            ctx->pc = 0x340A70u;
            return;
        }
    }
    ctx->pc = 0x340A3Cu;
label_340a3c:
    // 0x340a3c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x340a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_340a40:
    // 0x340a40: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x340a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_340a44:
    // 0x340a44: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x340a44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_340a48:
    // 0x340a48: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x340a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_340a4c:
    // 0x340a4c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x340a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_340a50:
    // 0x340a50: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x340a50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_340a54:
    // 0x340a54: 0x2442a230  addiu       $v0, $v0, -0x5DD0
    ctx->pc = 0x340a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943280));
label_340a58:
    // 0x340a58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x340a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_340a5c:
    // 0x340a5c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x340a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_340a60:
    // 0x340a60: 0x40f809  jalr        $v0
label_340a64:
    if (ctx->pc == 0x340A64u) {
        ctx->pc = 0x340A68u;
        goto label_340a68;
    }
    ctx->pc = 0x340A60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x340A68u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x340A60u, 0x340A68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x340A68u;
label_340a68:
    // 0x340a68: 0x10000006  b           . + 4 + (0x6 << 2)
label_340a6c:
    if (ctx->pc == 0x340A6Cu) {
        ctx->pc = 0x340A70u;
        goto label_fallthrough_0x340a68;
    }
    ctx->pc = 0x340A68u;
    {
        const bool branch_taken_0x340a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x340a68) {
            ctx->pc = 0x340A84u;
            return;
        }
    }
label_fallthrough_0x340a68:
    ctx->pc = 0x340A70u;
}
