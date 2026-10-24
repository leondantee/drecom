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

// Function: entry_00214a2c
// Address: 0x214a2c - 0x214a98
void entry_00214a2c_0x214a2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00214a2c_0x214a2c");
#endif

    switch (ctx->pc) {
        case 0x214a2cu: goto label_214a2c;
        case 0x214a30u: goto label_214a30;
        case 0x214a34u: goto label_214a34;
        case 0x214a38u: goto label_214a38;
        case 0x214a3cu: goto label_214a3c;
        case 0x214a40u: goto label_214a40;
        case 0x214a44u: goto label_214a44;
        case 0x214a48u: goto label_214a48;
        case 0x214a4cu: goto label_214a4c;
        case 0x214a50u: goto label_214a50;
        case 0x214a54u: goto label_214a54;
        case 0x214a58u: goto label_214a58;
        case 0x214a5cu: goto label_214a5c;
        case 0x214a60u: goto label_214a60;
        case 0x214a64u: goto label_214a64;
        case 0x214a68u: goto label_214a68;
        case 0x214a6cu: goto label_214a6c;
        case 0x214a70u: goto label_214a70;
        case 0x214a74u: goto label_214a74;
        case 0x214a78u: goto label_214a78;
        case 0x214a7cu: goto label_214a7c;
        case 0x214a80u: goto label_214a80;
        case 0x214a84u: goto label_214a84;
        case 0x214a88u: goto label_214a88;
        case 0x214a8cu: goto label_214a8c;
        case 0x214a90u: goto label_214a90;
        case 0x214a94u: goto label_214a94;
        default: break;
    }

    ctx->pc = 0x214a2cu;

label_214a2c:
    // 0x214a2c: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x214a2cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_214a30:
    // 0x214a30: 0x8e63fff8  lw          $v1, -0x8($s3)
    ctx->pc = 0x214a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
label_214a34:
    // 0x214a34: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x214a34u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_214a38:
    // 0x214a38: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
label_214a3c:
    if (ctx->pc == 0x214A3Cu) {
        ctx->pc = 0x214A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214A38u;
        // 0x214a3c: 0x90640000  lbu         $a0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214A40u;
        goto label_214a40;
    }
    ctx->pc = 0x214A38u;
    {
        const bool branch_taken_0x214a38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x214A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214A38u;
        // 0x214a3c: 0x90640000  lbu         $a0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214a38) {
            ctx->pc = 0x214A98u;
            return;
        }
    }
    ctx->pc = 0x214A40u;
label_214a40:
    // 0x214a40: 0x3c150039  lui         $s5, 0x39
    ctx->pc = 0x214a40u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)57 << 16));
label_214a44:
    // 0x214a44: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x214a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_214a48:
    // 0x214a48: 0x8ea2aad4  lw          $v0, -0x552C($s5)
    ctx->pc = 0x214a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294945492)));
label_214a4c:
    // 0x214a4c: 0x40f809  jalr        $v0
label_214a50:
    if (ctx->pc == 0x214A50u) {
        ctx->pc = 0x214A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214A4Cu;
        // 0x214a50: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214A54u;
        goto label_214a54;
    }
    ctx->pc = 0x214A4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x214A54u);
        ctx->pc = 0x214A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214A4Cu;
        // 0x214a50: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214A4Cu, 0x214A54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x214A54u;
label_214a54:
    // 0x214a54: 0x8ea3aad4  lw          $v1, -0x552C($s5)
    ctx->pc = 0x214a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294945492)));
label_214a58:
    // 0x214a58: 0x60f809  jalr        $v1
label_214a5c:
    if (ctx->pc == 0x214A5Cu) {
        ctx->pc = 0x214A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214A58u;
        // 0x214a5c: 0x2404006e  addiu       $a0, $zero, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214A60u;
        goto label_214a60;
    }
    ctx->pc = 0x214A58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x214A60u);
        ctx->pc = 0x214A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214A58u;
        // 0x214a5c: 0x2404006e  addiu       $a0, $zero, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214A58u, 0x214A60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x214A60u;
label_214a60:
    // 0x214a60: 0x8ea2aad4  lw          $v0, -0x552C($s5)
    ctx->pc = 0x214a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294945492)));
label_214a64:
    // 0x214a64: 0x40f809  jalr        $v0
label_214a68:
    if (ctx->pc == 0x214A68u) {
        ctx->pc = 0x214A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214A64u;
        // 0x214a68: 0x24040075  addiu       $a0, $zero, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214A6Cu;
        goto label_214a6c;
    }
    ctx->pc = 0x214A64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x214A6Cu);
        ctx->pc = 0x214A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214A64u;
        // 0x214a68: 0x24040075  addiu       $a0, $zero, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214A64u, 0x214A6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x214A6Cu;
label_214a6c:
    // 0x214a6c: 0x8ea3aad4  lw          $v1, -0x552C($s5)
    ctx->pc = 0x214a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294945492)));
label_214a70:
    // 0x214a70: 0x60f809  jalr        $v1
label_214a74:
    if (ctx->pc == 0x214A74u) {
        ctx->pc = 0x214A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214A70u;
        // 0x214a74: 0x2404006c  addiu       $a0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214A78u;
        goto label_214a78;
    }
    ctx->pc = 0x214A70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x214A78u);
        ctx->pc = 0x214A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214A70u;
        // 0x214a74: 0x2404006c  addiu       $a0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214A70u, 0x214A78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x214A78u;
label_214a78:
    // 0x214a78: 0x8ea2aad4  lw          $v0, -0x552C($s5)
    ctx->pc = 0x214a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294945492)));
label_214a7c:
    // 0x214a7c: 0x40f809  jalr        $v0
label_214a80:
    if (ctx->pc == 0x214A80u) {
        ctx->pc = 0x214A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214A7Cu;
        // 0x214a80: 0x2404006c  addiu       $a0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214A84u;
        goto label_214a84;
    }
    ctx->pc = 0x214A7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x214A84u);
        ctx->pc = 0x214A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214A7Cu;
        // 0x214a80: 0x2404006c  addiu       $a0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214A7Cu, 0x214A84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x214A84u;
label_214a84:
    // 0x214a84: 0x8ea3aad4  lw          $v1, -0x552C($s5)
    ctx->pc = 0x214a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294945492)));
label_214a88:
    // 0x214a88: 0x60f809  jalr        $v1
label_214a8c:
    if (ctx->pc == 0x214A8Cu) {
        ctx->pc = 0x214A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214A88u;
        // 0x214a8c: 0x24040029  addiu       $a0, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214A90u;
        goto label_214a90;
    }
    ctx->pc = 0x214A88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x214A90u);
        ctx->pc = 0x214A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214A88u;
        // 0x214a8c: 0x24040029  addiu       $a0, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214A88u, 0x214A90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x214A90u;
label_214a90:
    // 0x214a90: 0x10000023  b           . + 4 + (0x23 << 2)
label_214a94:
    if (ctx->pc == 0x214A94u) {
        ctx->pc = 0x214A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214A90u;
        // 0x214a94: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214A98u;
        goto label_fallthrough_0x214a90;
    }
    ctx->pc = 0x214A90u;
    {
        const bool branch_taken_0x214a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214A90u;
        // 0x214a94: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214a90) {
            ctx->pc = 0x214B20u;
            return;
        }
    }
label_fallthrough_0x214a90:
    ctx->pc = 0x214A98u;
}
