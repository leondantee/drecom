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

// Function: _fpadd_parts
// Address: 0x11e8c0 - 0x11eb00
void _fpadd_parts_0x11e8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_fpadd_parts_0x11e8c0");
#endif

    switch (ctx->pc) {
        case 0x11e8d4u: goto label_11e8d4;
        case 0x11e8e8u: goto label_11e8e8;
        case 0x11e9a0u: goto label_11e9a0;
        case 0x11e9d8u: goto label_11e9d8;
        case 0x11ea88u: goto label_11ea88;
        default: break;
    }

    ctx->pc = 0x11e8c0u;

    // 0x11e8c0: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x11e8c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e8c4: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x11e8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x11e8c8: 0x2c820002  sltiu       $v0, $a0, 0x2
    ctx->pc = 0x11e8c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x11e8cc: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E8CCu;
    {
        const bool branch_taken_0x11e8cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e8cc) {
            ctx->pc = 0x11E8D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E8CCu;
            // 0x11e8d0: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E8DCu;
            goto label_11e8dc;
        }
    }
    ctx->pc = 0x11E8D4u;
label_11e8d4:
    // 0x11e8d4: 0x3e00008  jr          $ra
    ctx->pc = 0x11E8D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E8D4u;
        // 0x11e8d8: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E8D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11E8DCu;
label_11e8dc:
    // 0x11e8dc: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x11e8dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x11e8e0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E8E0u;
    {
        const bool branch_taken_0x11e8e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E8E0u;
        // 0x11e8e4: 0x38820004  xori        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e8e0) {
            ctx->pc = 0x11E8F0u;
            goto label_11e8f0;
        }
    }
    ctx->pc = 0x11E8E8u;
label_11e8e8:
    // 0x11e8e8: 0x3e00008  jr          $ra
    ctx->pc = 0x11E8E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E8E8u;
        // 0x11e8ec: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E8E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11E8F0u;
label_11e8f0:
    // 0x11e8f0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11E8F0u;
    {
        const bool branch_taken_0x11e8f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E8F0u;
        // 0x11e8f4: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e8f0) {
            ctx->pc = 0x11E918u;
            goto label_11e918;
        }
    }
    ctx->pc = 0x11E8F8u;
    // 0x11e8f8: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x11E8F8u;
    {
        const bool branch_taken_0x11e8f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11e8f8) {
            ctx->pc = 0x11E8D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11e8d4;
        }
    }
    ctx->pc = 0x11E900u;
    // 0x11e900: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x11e900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x11e904: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x11e904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x11e908: 0x1043fff2  beq         $v0, $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x11E908u;
    {
        const bool branch_taken_0x11e908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x11E90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E908u;
        // 0x11e90c: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e908) {
            ctx->pc = 0x11E8D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11e8d4;
        }
    }
    ctx->pc = 0x11E910u;
    // 0x11e910: 0x3e00008  jr          $ra
    ctx->pc = 0x11E910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E910u;
        // 0x11e914: 0x24426800  addiu       $v0, $v0, 0x6800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26624));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11E918u;
label_11e918:
    // 0x11e918: 0x1040fff3  beqz        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x11E918u;
    {
        const bool branch_taken_0x11e918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E918u;
        // 0x11e91c: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e918) {
            ctx->pc = 0x11E8E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11e8e8;
        }
    }
    ctx->pc = 0x11E920u;
    // 0x11e920: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x11E920u;
    {
        const bool branch_taken_0x11e920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E920u;
        // 0x11e924: 0x38820002  xori        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e920) {
            ctx->pc = 0x11E95Cu;
            goto label_11e95c;
        }
    }
    ctx->pc = 0x11E928u;
    // 0x11e928: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x11E928u;
    {
        const bool branch_taken_0x11e928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E928u;
        // 0x11e92c: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e928) {
            ctx->pc = 0x11E8D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11e8d4;
        }
    }
    ctx->pc = 0x11E930u;
    // 0x11e930: 0xdd040000  ld          $a0, 0x0($t0)
    ctx->pc = 0x11e930u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x11e934: 0xfcc40000  sd          $a0, 0x0($a2)
    ctx->pc = 0x11e934u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
    // 0x11e938: 0xdd030008  ld          $v1, 0x8($t0)
    ctx->pc = 0x11e938u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x11e93c: 0xfcc30008  sd          $v1, 0x8($a2)
    ctx->pc = 0x11e93cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
    // 0x11e940: 0xdd040010  ld          $a0, 0x10($t0)
    ctx->pc = 0x11e940u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x11e944: 0xfcc40010  sd          $a0, 0x10($a2)
    ctx->pc = 0x11e944u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 4));
    // 0x11e948: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x11e948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x11e94c: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x11e94cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x11e950: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x11e950u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x11e954: 0x3e00008  jr          $ra
    ctx->pc = 0x11E954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E954u;
        // 0x11e958: 0xacc30004  sw          $v1, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11E95Cu;
label_11e95c:
    // 0x11e95c: 0x1040ffe2  beqz        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x11E95Cu;
    {
        const bool branch_taken_0x11e95c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E95Cu;
        // 0x11e960: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e95c) {
            ctx->pc = 0x11E8E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11e8e8;
        }
    }
    ctx->pc = 0x11E964u;
    // 0x11e964: 0x8d070008  lw          $a3, 0x8($t0)
    ctx->pc = 0x11e964u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x11e968: 0x8ca90008  lw          $t1, 0x8($a1)
    ctx->pc = 0x11e968u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x11e96c: 0xdd0b0010  ld          $t3, 0x10($t0)
    ctx->pc = 0x11e96cu;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x11e970: 0xe91823  subu        $v1, $a3, $t1
    ctx->pc = 0x11e970u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x11e974: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x11e974u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x11e978: 0x32023  negu        $a0, $v1
    ctx->pc = 0x11e978u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x11e97c: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x11e97cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x11e980: 0x28630040  slti        $v1, $v1, 0x40
    ctx->pc = 0x11e980u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x11e984: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x11E984u;
    {
        const bool branch_taken_0x11e984 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E984u;
        // 0x11e988: 0xdcaa0010  ld          $t2, 0x10($a1) (Delay Slot)
        SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e984) {
            ctx->pc = 0x11E9FCu;
            goto label_11e9fc;
        }
    }
    ctx->pc = 0x11E98Cu;
    // 0x11e98c: 0x127102a  slt         $v0, $t1, $a3
    ctx->pc = 0x11e98cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x11e990: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x11E990u;
    {
        const bool branch_taken_0x11e990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E990u;
        // 0x11e994: 0x8d080004  lw          $t0, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e990) {
            ctx->pc = 0x11E9C4u;
            goto label_11e9c4;
        }
    }
    ctx->pc = 0x11E998u;
    // 0x11e998: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x11e998u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x11e99c: 0x0  nop
    ctx->pc = 0x11e99cu;
    // NOP
label_11e9a0:
    // 0x11e9a0: 0xa107a  dsrl        $v0, $t2, 1
    ctx->pc = 0x11e9a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) >> 1);
    // 0x11e9a4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x11e9a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x11e9a8: 0x31430001  andi        $v1, $t2, 0x1
    ctx->pc = 0x11e9a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x11e9ac: 0x127202a  slt         $a0, $t1, $a3
    ctx->pc = 0x11e9acu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x11e9b0: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x11e9b0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x11e9b4: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11E9B4u;
    {
        const bool branch_taken_0x11e9b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x11e9b4) {
            ctx->pc = 0x11E9A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11e9a0;
        }
    }
    ctx->pc = 0x11E9BCu;
    // 0x11e9bc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11E9BCu;
    {
        const bool branch_taken_0x11e9bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E9BCu;
        // 0x11e9c0: 0xe9102a  slt         $v0, $a3, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e9bc) {
            ctx->pc = 0x11E9CCu;
            goto label_11e9cc;
        }
    }
    ctx->pc = 0x11E9C4u;
label_11e9c4:
    // 0x11e9c4: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x11e9c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x11e9c8: 0xe9102a  slt         $v0, $a3, $t1
    ctx->pc = 0x11e9c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_11e9cc:
    // 0x11e9cc: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x11E9CCu;
    {
        const bool branch_taken_0x11e9cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e9cc) {
            ctx->pc = 0x11EA20u;
            goto label_11ea20;
        }
    }
    ctx->pc = 0x11E9D4u;
    // 0x11e9d4: 0x1273823  subu        $a3, $t1, $a3
    ctx->pc = 0x11e9d4u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
label_11e9d8:
    // 0x11e9d8: 0xb187a  dsrl        $v1, $t3, 1
    ctx->pc = 0x11e9d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) >> 1);
    // 0x11e9dc: 0x31620001  andi        $v0, $t3, 0x1
    ctx->pc = 0x11e9dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x11e9e0: 0x435825  or          $t3, $v0, $v1
    ctx->pc = 0x11e9e0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x11e9e4: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x11e9e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x11e9e8: 0x0  nop
    ctx->pc = 0x11e9e8u;
    // NOP
    // 0x11e9ec: 0x14e0fffa  bnez        $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11E9ECu;
    {
        const bool branch_taken_0x11e9ec = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x11e9ec) {
            ctx->pc = 0x11E9D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11e9d8;
        }
    }
    ctx->pc = 0x11E9F4u;
    // 0x11e9f4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x11E9F4u;
    {
        const bool branch_taken_0x11e9f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E9F4u;
        // 0x11e9f8: 0x120382d  daddu       $a3, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e9f4) {
            ctx->pc = 0x11EA20u;
            goto label_11ea20;
        }
    }
    ctx->pc = 0x11E9FCu;
label_11e9fc:
    // 0x11e9fc: 0x127102a  slt         $v0, $t1, $a3
    ctx->pc = 0x11e9fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x11ea00: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11EA00u;
    {
        const bool branch_taken_0x11ea00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EA00u;
        // 0x11ea04: 0x8d080004  lw          $t0, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ea00) {
            ctx->pc = 0x11EA14u;
            goto label_11ea14;
        }
    }
    ctx->pc = 0x11EA08u;
    // 0x11ea08: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x11ea08u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ea0c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11EA0Cu;
    {
        const bool branch_taken_0x11ea0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EA0Cu;
        // 0x11ea10: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ea0c) {
            ctx->pc = 0x11EA20u;
            goto label_11ea20;
        }
    }
    ctx->pc = 0x11EA14u;
label_11ea14:
    // 0x11ea14: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x11ea14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ea18: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x11ea18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x11ea1c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x11ea1cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11ea20:
    // 0x11ea20: 0x11050024  beq         $t0, $a1, . + 4 + (0x24 << 2)
    ctx->pc = 0x11EA20u;
    {
        const bool branch_taken_0x11ea20 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 5));
        ctx->pc = 0x11EA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EA20u;
        // 0x11ea24: 0x16a102d  daddu       $v0, $t3, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ea20) {
            ctx->pc = 0x11EAB4u;
            goto label_11eab4;
        }
    }
    ctx->pc = 0x11EA28u;
    // 0x11ea28: 0x15000002  bnez        $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x11EA28u;
    {
        const bool branch_taken_0x11ea28 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x11EA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EA28u;
        // 0x11ea2c: 0x14b102f  dsubu       $v0, $t2, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) - GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ea28) {
            ctx->pc = 0x11EA34u;
            goto label_11ea34;
        }
    }
    ctx->pc = 0x11EA30u;
    // 0x11ea30: 0x16a102f  dsubu       $v0, $t3, $t2
    ctx->pc = 0x11ea30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) - GPR_U64(ctx, 10));
label_11ea34:
    // 0x11ea34: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11EA34u;
    {
        const bool branch_taken_0x11ea34 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x11EA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EA34u;
        // 0x11ea38: 0x2182f  dsubu       $v1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ea34) {
            ctx->pc = 0x11EA4Cu;
            goto label_11ea4c;
        }
    }
    ctx->pc = 0x11EA3Cu;
    // 0x11ea3c: 0xacc70008  sw          $a3, 0x8($a2)
    ctx->pc = 0x11ea3cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x11ea40: 0xfcc20010  sd          $v0, 0x10($a2)
    ctx->pc = 0x11ea40u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 2));
    // 0x11ea44: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x11EA44u;
    {
        const bool branch_taken_0x11ea44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EA44u;
        // 0x11ea48: 0xacc00004  sw          $zero, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ea44) {
            ctx->pc = 0x11EA5Cu;
            goto label_11ea5c;
        }
    }
    ctx->pc = 0x11EA4Cu;
label_11ea4c:
    // 0x11ea4c: 0xacc70008  sw          $a3, 0x8($a2)
    ctx->pc = 0x11ea4cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x11ea50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11ea50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11ea54: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x11ea54u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x11ea58: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x11ea58u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_11ea5c:
    // 0x11ea5c: 0xdcc50010  ld          $a1, 0x10($a2)
    ctx->pc = 0x11ea5cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x11ea60: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x11ea60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11ea64: 0x21178  dsll        $v0, $v0, 5
    ctx->pc = 0x11ea64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 5);
    // 0x11ea68: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x11ea68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x11ea6c: 0x64a3ffff  daddiu      $v1, $a1, -0x1
    ctx->pc = 0x11ea6cu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
    // 0x11ea70: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x11ea70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x11ea74: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x11EA74u;
    {
        const bool branch_taken_0x11ea74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11EA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EA74u;
        // 0x11ea78: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ea74) {
            ctx->pc = 0x11EAC4u;
            goto label_11eac4;
        }
    }
    ctx->pc = 0x11EA7Cu;
    // 0x11ea7c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x11ea7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11ea80: 0x52978  dsll        $a1, $a1, 5
    ctx->pc = 0x11ea80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 5);
    // 0x11ea84: 0x5293a  dsrl        $a1, $a1, 4
    ctx->pc = 0x11ea84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 4);
label_11ea88:
    // 0x11ea88: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x11ea88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x11ea8c: 0x72078  dsll        $a0, $a3, 1
    ctx->pc = 0x11ea8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << 1);
    // 0x11ea90: 0x6483ffff  daddiu      $v1, $a0, -0x1
    ctx->pc = 0x11ea90u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)4294967295);
    // 0x11ea94: 0xfcc40010  sd          $a0, 0x10($a2)
    ctx->pc = 0x11ea94u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 4));
    // 0x11ea98: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x11ea98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x11ea9c: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x11ea9cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x11eaa0: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x11eaa0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x11eaa4: 0x1060fff8  beqz        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x11EAA4u;
    {
        const bool branch_taken_0x11eaa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EAA4u;
        // 0x11eaa8: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eaa4) {
            ctx->pc = 0x11EA88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11ea88;
        }
    }
    ctx->pc = 0x11EAACu;
    // 0x11eaac: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x11EAACu;
    {
        const bool branch_taken_0x11eaac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EAACu;
        // 0x11eab0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eaac) {
            ctx->pc = 0x11EAC4u;
            goto label_11eac4;
        }
    }
    ctx->pc = 0x11EAB4u;
label_11eab4:
    // 0x11eab4: 0xacc80004  sw          $t0, 0x4($a2)
    ctx->pc = 0x11eab4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 8));
    // 0x11eab8: 0xacc70008  sw          $a3, 0x8($a2)
    ctx->pc = 0x11eab8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x11eabc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11eabcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11eac0: 0xfcc20010  sd          $v0, 0x10($a2)
    ctx->pc = 0x11eac0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 2));
label_11eac4:
    // 0x11eac4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x11eac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11eac8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x11eac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11eacc: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x11eaccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x11ead0: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x11ead0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x11ead4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11EAD4u;
    {
        const bool branch_taken_0x11ead4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EAD4u;
        // 0x11ead8: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ead4) {
            ctx->pc = 0x11EAF8u;
            goto label_11eaf8;
        }
    }
    ctx->pc = 0x11EADCu;
    // 0x11eadc: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x11eadcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x11eae0: 0x5207a  dsrl        $a0, $a1, 1
    ctx->pc = 0x11eae0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) >> 1);
    // 0x11eae4: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x11eae4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x11eae8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x11eae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x11eaec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11eaecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11eaf0: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x11eaf0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x11eaf4: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x11eaf4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
label_11eaf8:
    // 0x11eaf8: 0x3e00008  jr          $ra
    ctx->pc = 0x11EAF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11EAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EAF8u;
        // 0x11eafc: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11EAF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11EB00u;
}
