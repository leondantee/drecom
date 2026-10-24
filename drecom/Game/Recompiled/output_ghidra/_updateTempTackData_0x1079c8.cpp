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

// Function: _updateTempTackData
// Address: 0x1079c8 - 0x107aa8
void _updateTempTackData_0x1079c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_updateTempTackData_0x1079c8");
#endif

    ctx->pc = 0x1079c8u;

    // 0x1079c8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1079c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1079cc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1079ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1079d0: 0x8c433d7c  lw          $v1, 0x3D7C($v0)
    ctx->pc = 0x1079d0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x383D7Cu));
    // 0x1079d4: 0x1064001d  beq         $v1, $a0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1079D4u;
    {
        const bool branch_taken_0x1079d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1079D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1079D4u;
        // 0x1079d8: 0x3c050038  lui         $a1, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1079d4) {
            ctx->pc = 0x107A4Cu;
            goto label_107a4c;
        }
    }
    ctx->pc = 0x1079DCu;
    // 0x1079dc: 0x3c070038  lui         $a3, 0x38
    ctx->pc = 0x1079dcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)56 << 16));
    // 0x1079e0: 0x8ca43d78  lw          $a0, 0x3D78($a1)
    ctx->pc = 0x1079e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 15736)));
    // 0x1079e4: 0x8ce33ad8  lw          $v1, 0x3AD8($a3)
    ctx->pc = 0x1079e4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x383AD8u));
    // 0x1079e8: 0x10830018  beq         $a0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1079E8u;
    {
        const bool branch_taken_0x1079e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1079ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1079E8u;
        // 0x1079ec: 0xa0482d  daddu       $t1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1079e8) {
            ctx->pc = 0x107A4Cu;
            goto label_107a4c;
        }
    }
    ctx->pc = 0x1079F0u;
    // 0x1079f0: 0x3c080038  lui         $t0, 0x38
    ctx->pc = 0x1079f0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)56 << 16));
    // 0x1079f4: 0x8d023ad4  lw          $v0, 0x3AD4($t0)
    ctx->pc = 0x1079f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x383AD4u));
    // 0x1079f8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1079F8u;
    {
        const bool branch_taken_0x1079f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1079FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1079F8u;
        // 0x1079fc: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1079f8) {
            ctx->pc = 0x107A18u;
            goto label_107a18;
        }
    }
    ctx->pc = 0x107A00u;
    // 0x107a00: 0x3c0a0038  lui         $t2, 0x38
    ctx->pc = 0x107a00u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)56 << 16));
    // 0x107a04: 0xad003ad4  sw          $zero, 0x3AD4($t0)
    ctx->pc = 0x107a04u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 15060), GPR_U32(ctx, 0));
    // 0x107a08: 0x8d423a98  lw          $v0, 0x3A98($t2)
    ctx->pc = 0x107a08u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x383A98u));
    // 0x107a0c: 0x24420400  addiu       $v0, $v0, 0x400
    ctx->pc = 0x107a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x107a10: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x107A10u;
    {
        const bool branch_taken_0x107a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107A10u;
        // 0x107a14: 0xad423a98  sw          $v0, 0x3A98($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 15000), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107a10) {
            ctx->pc = 0x107A1Cu;
            goto label_107a1c;
        }
    }
    ctx->pc = 0x107A18u;
label_107a18:
    // 0x107a18: 0x3c0a0038  lui         $t2, 0x38
    ctx->pc = 0x107a18u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)56 << 16));
label_107a1c:
    // 0x107a1c: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x107a1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x107a20: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x107A20u;
    {
        const bool branch_taken_0x107a20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x107A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107A20u;
        // 0x107a24: 0x3c030038  lui         $v1, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107a20) {
            ctx->pc = 0x107A3Cu;
            goto label_107a3c;
        }
    }
    ctx->pc = 0x107A28u;
    // 0x107a28: 0x8c623aa0  lw          $v0, 0x3AA0($v1)
    ctx->pc = 0x107a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15008)));
    // 0x107a2c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x107A2Cu;
    {
        const bool branch_taken_0x107a2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x107A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107A2Cu;
        // 0x107a30: 0x8d223d78  lw          $v0, 0x3D78($t1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 15736)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107a2c) {
            ctx->pc = 0x107A40u;
            goto label_107a40;
        }
    }
    ctx->pc = 0x107A34u;
    // 0x107a34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x107a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x107a38: 0xacc23ad4  sw          $v0, 0x3AD4($a2)
    ctx->pc = 0x107a38u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 15060), GPR_U32(ctx, 2));
label_107a3c:
    // 0x107a3c: 0x8d223d78  lw          $v0, 0x3D78($t1)
    ctx->pc = 0x107a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 15736)));
label_107a40:
    // 0x107a40: 0xac603aa0  sw          $zero, 0x3AA0($v1)
    ctx->pc = 0x107a40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 15008), GPR_U32(ctx, 0));
    // 0x107a44: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x107A44u;
    {
        const bool branch_taken_0x107a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107A44u;
        // 0x107a48: 0xace23ad8  sw          $v0, 0x3AD8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 15064), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107a44) {
            ctx->pc = 0x107A54u;
            goto label_107a54;
        }
    }
    ctx->pc = 0x107A4Cu;
label_107a4c:
    // 0x107a4c: 0x3c080038  lui         $t0, 0x38
    ctx->pc = 0x107a4cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)56 << 16));
    // 0x107a50: 0x3c0a0038  lui         $t2, 0x38
    ctx->pc = 0x107a50u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)56 << 16));
label_107a54:
    // 0x107a54: 0x8d433a98  lw          $v1, 0x3A98($t2)
    ctx->pc = 0x107a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 15000)));
    // 0x107a58: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x107a58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
    // 0x107a5c: 0x8ca43d78  lw          $a0, 0x3D78($a1)
    ctx->pc = 0x107a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 15736)));
    // 0x107a60: 0x8d023ad4  lw          $v0, 0x3AD4($t0)
    ctx->pc = 0x107a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 15060)));
    // 0x107a64: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x107a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x107a68: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x107A68u;
    {
        const bool branch_taken_0x107a68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x107A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107A68u;
        // 0x107a6c: 0xacc53e38  sw          $a1, 0x3E38($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 15928), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107a68) {
            ctx->pc = 0x107A8Cu;
            goto label_107a8c;
        }
    }
    ctx->pc = 0x107A70u;
    // 0x107a70: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x107a70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x107a74: 0x8c623ad8  lw          $v0, 0x3AD8($v1)
    ctx->pc = 0x107a74u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x383AD8u));
    // 0x107a78: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x107a78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x107a7c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x107A7Cu;
    {
        const bool branch_taken_0x107a7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x107a7c) {
            ctx->pc = 0x107A80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107A7Cu;
            // 0x107a80: 0x3c050038  lui         $a1, 0x38 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107A90u;
            goto label_107a90;
        }
    }
    ctx->pc = 0x107A84u;
    // 0x107a84: 0x24a20400  addiu       $v0, $a1, 0x400
    ctx->pc = 0x107a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1024));
    // 0x107a88: 0xacc23e38  sw          $v0, 0x3E38($a2)
    ctx->pc = 0x107a88u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 15928), GPR_U32(ctx, 2));
label_107a8c:
    // 0x107a8c: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x107a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
label_107a90:
    // 0x107a90: 0x8cc43e38  lw          $a0, 0x3E38($a2)
    ctx->pc = 0x107a90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 15928)));
    // 0x107a94: 0x8ca23a9c  lw          $v0, 0x3A9C($a1)
    ctx->pc = 0x107a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 15004)));
    // 0x107a98: 0x44182a  slt         $v1, $v0, $a0
    ctx->pc = 0x107a98u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x107a9c: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x107a9cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x107aa0: 0x3e00008  jr          $ra
    ctx->pc = 0x107AA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107AA0u;
        // 0x107aa4: 0xaca23a9c  sw          $v0, 0x3A9C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 15004), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107AA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x107AA8u;
}
