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

// Function: Om8b_R0_move
// Address: 0x3409f0 - 0x340a94
void Om8b_R0_move_0x3409f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om8b_R0_move_0x3409f0");
#endif

    switch (ctx->pc) {
        case 0x3409f0u: goto label_3409f0;
        case 0x3409f4u: goto label_3409f4;
        case 0x3409f8u: goto label_3409f8;
        case 0x3409fcu: goto label_3409fc;
        case 0x340a00u: goto label_340a00;
        case 0x340a04u: goto label_340a04;
        case 0x340a08u: goto label_340a08;
        case 0x340a0cu: goto label_340a0c;
        case 0x340a10u: goto label_340a10;
        case 0x340a14u: goto label_340a14;
        case 0x340a18u: goto label_340a18;
        case 0x340a1cu: goto label_340a1c;
        case 0x340a20u: goto label_340a20;
        case 0x340a24u: goto label_340a24;
        case 0x340a28u: goto label_340a28;
        case 0x340a2cu: goto label_340a2c;
        case 0x340a30u: goto label_340a30;
        case 0x340a34u: goto label_340a34;
        case 0x340a38u: goto label_340a38;
        case 0x340a3cu: goto label_340a3c;
        case 0x340a40u: goto label_340a40;
        case 0x340a44u: goto label_340a44;
        case 0x340a48u: goto label_340a48;
        case 0x340a4cu: goto label_340a4c;
        case 0x340a50u: goto label_340a50;
        case 0x340a54u: goto label_340a54;
        case 0x340a58u: goto label_340a58;
        case 0x340a5cu: goto label_340a5c;
        case 0x340a60u: goto label_340a60;
        case 0x340a64u: goto label_340a64;
        case 0x340a68u: goto label_340a68;
        case 0x340a6cu: goto label_340a6c;
        case 0x340a70u: goto label_340a70;
        case 0x340a74u: goto label_340a74;
        case 0x340a78u: goto label_340a78;
        case 0x340a7cu: goto label_340a7c;
        case 0x340a80u: goto label_340a80;
        case 0x340a84u: goto label_340a84;
        case 0x340a88u: goto label_340a88;
        case 0x340a8cu: goto label_340a8c;
        case 0x340a90u: goto label_340a90;
        default: break;
    }

    ctx->pc = 0x3409f0u;

label_3409f0:
    // 0x3409f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3409f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3409f4:
    // 0x3409f4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x3409f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_3409f8:
    // 0x3409f8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x3409f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_3409fc:
    // 0x3409fc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3409fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_340a00:
    // 0x340a00: 0x906310a8  lbu         $v1, 0x10A8($v1)
    ctx->pc = 0x340a00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4264)));
label_340a04:
    // 0x340a04: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x340a04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_340a08:
    // 0x340a08: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
label_340a0c:
    if (ctx->pc == 0x340A0Cu) {
        ctx->pc = 0x340A10u;
        goto label_340a10;
    }
    ctx->pc = 0x340A08u;
    {
        const bool branch_taken_0x340a08 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x340a08) {
            ctx->pc = 0x340A20u;
            goto label_340a20;
        }
    }
    ctx->pc = 0x340A10u;
label_340a10:
    // 0x340a10: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x340a10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_340a14:
    // 0x340a14: 0x908310a8  lbu         $v1, 0x10A8($a0)
    ctx->pc = 0x340a14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4264)));
label_340a18:
    // 0x340a18: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x340a18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_340a1c:
    // 0x340a1c: 0xa08310a8  sb          $v1, 0x10A8($a0)
    ctx->pc = 0x340a1cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4264), (uint8_t)GPR_U32(ctx, 3));
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
            goto label_340a70;
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
        goto label_340a70;
    }
    ctx->pc = 0x340A68u;
    {
        const bool branch_taken_0x340a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x340a68) {
            ctx->pc = 0x340A84u;
            goto label_340a84;
        }
    }
    ctx->pc = 0x340A70u;
label_340a70:
    // 0x340a70: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x340a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_340a74:
    // 0x340a74: 0x9463000e  lhu         $v1, 0xE($v1)
    ctx->pc = 0x340a74u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
label_340a78:
    // 0x340a78: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x340a78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_340a7c:
    // 0x340a7c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x340a7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_340a80:
    // 0x340a80: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x340a80u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_340a84:
    // 0x340a84: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x340a84u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_340a88:
    // 0x340a88: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x340a88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_340a8c:
    // 0x340a8c: 0x3e00008  jr          $ra
label_340a90:
    if (ctx->pc == 0x340A90u) {
        ctx->pc = 0x340A94u;
        goto label_fallthrough_0x340a8c;
    }
    ctx->pc = 0x340A8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x340A8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x340a8c:
    ctx->pc = 0x340A94u;
}
