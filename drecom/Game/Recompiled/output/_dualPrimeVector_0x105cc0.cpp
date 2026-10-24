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

// Function: _dualPrimeVector
// Address: 0x105cc0 - 0x105e48
void _dualPrimeVector_0x105cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_dualPrimeVector_0x105cc0");
#endif

    switch (ctx->pc) {
        case 0x105d58u: goto label_105d58;
        case 0x105d5cu: goto label_105d5c;
        default: break;
    }

    ctx->pc = 0x105cc0u;

    // 0x105cc0: 0x3c080038  lui         $t0, 0x38
    ctx->pc = 0x105cc0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)56 << 16));
    // 0x105cc4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x105cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x105cc8: 0x8d033dac  lw          $v1, 0x3DAC($t0)
    ctx->pc = 0x105cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x383DACu));
    // 0x105ccc: 0x14620045  bne         $v1, $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x105CCCu;
    {
        const bool branch_taken_0x105ccc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x105CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105CCCu;
        // 0x105cd0: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105ccc) {
            ctx->pc = 0x105DE4u;
            goto label_105de4;
        }
    }
    ctx->pc = 0x105CD4u;
    // 0x105cd4: 0x8c433db0  lw          $v1, 0x3DB0($v0)
    ctx->pc = 0x105cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15792)));
    // 0x105cd8: 0x50600024  beql        $v1, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x105CD8u;
    {
        const bool branch_taken_0x105cd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x105cd8) {
            ctx->pc = 0x105CDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x105CD8u;
            // 0x105cdc: 0x61040  sll         $v0, $a2, 1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x105D6Cu;
            goto label_105d6c;
        }
    }
    ctx->pc = 0x105CE0u;
    // 0x105ce0: 0x18c00004  blez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x105CE0u;
    {
        const bool branch_taken_0x105ce0 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x105CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105CE0u;
        // 0x105ce4: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105ce0) {
            ctx->pc = 0x105CF4u;
            goto label_105cf4;
        }
    }
    ctx->pc = 0x105CE8u;
    // 0x105ce8: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x105ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x105cec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x105CECu;
    {
        const bool branch_taken_0x105cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105CECu;
        // 0x105cf0: 0x21043  sra         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105cec) {
            ctx->pc = 0x105CF8u;
            goto label_105cf8;
        }
    }
    ctx->pc = 0x105CF4u;
label_105cf4:
    // 0x105cf4: 0x61043  sra         $v0, $a2, 1
    ctx->pc = 0x105cf4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 1));
label_105cf8:
    // 0x105cf8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x105cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x105cfc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x105cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x105d00: 0x18e00004  blez        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x105D00u;
    {
        const bool branch_taken_0x105d00 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x105D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105D00u;
        // 0x105d04: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105d00) {
            ctx->pc = 0x105D14u;
            goto label_105d14;
        }
    }
    ctx->pc = 0x105D08u;
    // 0x105d08: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x105d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x105d0c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x105D0Cu;
    {
        const bool branch_taken_0x105d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105D0Cu;
        // 0x105d10: 0x21043  sra         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105d0c) {
            ctx->pc = 0x105D18u;
            goto label_105d18;
        }
    }
    ctx->pc = 0x105D14u;
label_105d14:
    // 0x105d14: 0x71043  sra         $v0, $a3, 1
    ctx->pc = 0x105d14u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 1));
label_105d18:
    // 0x105d18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x105d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x105d1c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x105d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x105d20: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x105d20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x105d24: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x105d24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x105d28: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x105d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x105d2c: 0x18c00002  blez        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x105D2Cu;
    {
        const bool branch_taken_0x105d2c = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x105D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105D2Cu;
        // 0x105d30: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105d2c) {
            ctx->pc = 0x105D38u;
            goto label_105d38;
        }
    }
    ctx->pc = 0x105D34u;
    // 0x105d34: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x105d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_105d38:
    // 0x105d38: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x105d38u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x105d3c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x105d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x105d40: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x105d40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x105d44: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x105d44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x105d48: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x105d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x105d4c: 0x18e00002  blez        $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x105D4Cu;
    {
        const bool branch_taken_0x105d4c = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x105D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105D4Cu;
        // 0x105d50: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105d4c) {
            ctx->pc = 0x105D58u;
            goto label_105d58;
        }
    }
    ctx->pc = 0x105D54u;
    // 0x105d54: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x105d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_105d58:
    // 0x105d58: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x105d58u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_105d5c:
    // 0x105d5c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x105d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x105d60: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x105d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x105d64: 0x3e00008  jr          $ra
    ctx->pc = 0x105D64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105D64u;
        // 0x105d68: 0xac82000c  sw          $v0, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105D64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x105D6Cu;
label_105d6c:
    // 0x105d6c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x105d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x105d70: 0x18c00002  blez        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x105D70u;
    {
        const bool branch_taken_0x105d70 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x105D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105D70u;
        // 0x105d74: 0x461021  addu        $v0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105d70) {
            ctx->pc = 0x105D7Cu;
            goto label_105d7c;
        }
    }
    ctx->pc = 0x105D78u;
    // 0x105d78: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x105d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_105d7c:
    // 0x105d7c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x105d7cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x105d80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x105d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x105d84: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x105d84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x105d88: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x105d88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x105d8c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x105d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x105d90: 0x18e00002  blez        $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x105D90u;
    {
        const bool branch_taken_0x105d90 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x105D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105D90u;
        // 0x105d94: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105d90) {
            ctx->pc = 0x105D9Cu;
            goto label_105d9c;
        }
    }
    ctx->pc = 0x105D98u;
    // 0x105d98: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x105d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_105d9c:
    // 0x105d9c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x105d9cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x105da0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x105da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x105da4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x105da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x105da8: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x105da8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x105dac: 0x18c00004  blez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x105DACu;
    {
        const bool branch_taken_0x105dac = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x105DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105DACu;
        // 0x105db0: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105dac) {
            ctx->pc = 0x105DC0u;
            goto label_105dc0;
        }
    }
    ctx->pc = 0x105DB4u;
    // 0x105db4: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x105db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x105db8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x105DB8u;
    {
        const bool branch_taken_0x105db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105DB8u;
        // 0x105dbc: 0x21043  sra         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105db8) {
            ctx->pc = 0x105DC4u;
            goto label_105dc4;
        }
    }
    ctx->pc = 0x105DC0u;
label_105dc0:
    // 0x105dc0: 0x61043  sra         $v0, $a2, 1
    ctx->pc = 0x105dc0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 1));
label_105dc4:
    // 0x105dc4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x105dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x105dc8: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x105dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x105dcc: 0x18e00003  blez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x105DCCu;
    {
        const bool branch_taken_0x105dcc = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x105DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105DCCu;
        // 0x105dd0: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105dcc) {
            ctx->pc = 0x105DDCu;
            goto label_105ddc;
        }
    }
    ctx->pc = 0x105DD4u;
    // 0x105dd4: 0x1000ffe0  b           . + 4 + (-0x20 << 2)
    ctx->pc = 0x105DD4u;
    {
        const bool branch_taken_0x105dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105DD4u;
        // 0x105dd8: 0x24e20001  addiu       $v0, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105dd4) {
            ctx->pc = 0x105D58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_105d58;
        }
    }
    ctx->pc = 0x105DDCu;
label_105ddc:
    // 0x105ddc: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x105DDCu;
    {
        const bool branch_taken_0x105ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105DDCu;
        // 0x105de0: 0x71043  sra         $v0, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105ddc) {
            ctx->pc = 0x105D5Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_105d5c;
        }
    }
    ctx->pc = 0x105DE4u;
label_105de4:
    // 0x105de4: 0x18c00004  blez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x105DE4u;
    {
        const bool branch_taken_0x105de4 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x105DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105DE4u;
        // 0x105de8: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105de4) {
            ctx->pc = 0x105DF8u;
            goto label_105df8;
        }
    }
    ctx->pc = 0x105DECu;
    // 0x105dec: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x105decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x105df0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x105DF0u;
    {
        const bool branch_taken_0x105df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105DF0u;
        // 0x105df4: 0x21043  sra         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105df0) {
            ctx->pc = 0x105DFCu;
            goto label_105dfc;
        }
    }
    ctx->pc = 0x105DF8u;
label_105df8:
    // 0x105df8: 0x61043  sra         $v0, $a2, 1
    ctx->pc = 0x105df8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 1));
label_105dfc:
    // 0x105dfc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x105dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x105e00: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x105e00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x105e04: 0x18e00004  blez        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x105E04u;
    {
        const bool branch_taken_0x105e04 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x105E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105E04u;
        // 0x105e08: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105e04) {
            ctx->pc = 0x105E18u;
            goto label_105e18;
        }
    }
    ctx->pc = 0x105E0Cu;
    // 0x105e0c: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x105e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x105e10: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x105E10u;
    {
        const bool branch_taken_0x105e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105E10u;
        // 0x105e14: 0x21043  sra         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105e10) {
            ctx->pc = 0x105E1Cu;
            goto label_105e1c;
        }
    }
    ctx->pc = 0x105E18u;
label_105e18:
    // 0x105e18: 0x71043  sra         $v0, $a3, 1
    ctx->pc = 0x105e18u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 1));
label_105e1c:
    // 0x105e1c: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x105e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x105e20: 0x8d033dac  lw          $v1, 0x3DAC($t0)
    ctx->pc = 0x105e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 15788)));
    // 0x105e24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x105e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x105e28: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x105E28u;
    {
        const bool branch_taken_0x105e28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x105E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105E28u;
        // 0x105e2c: 0xac850004  sw          $a1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105e28) {
            ctx->pc = 0x105E3Cu;
            goto label_105e3c;
        }
    }
    ctx->pc = 0x105E30u;
    // 0x105e30: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x105e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x105e34: 0x3e00008  jr          $ra
    ctx->pc = 0x105E34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105E34u;
        // 0x105e38: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105E34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x105E3Cu;
label_105e3c:
    // 0x105e3c: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x105e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x105e40: 0x3e00008  jr          $ra
    ctx->pc = 0x105E40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105E40u;
        // 0x105e44: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105E40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x105E48u;
}
