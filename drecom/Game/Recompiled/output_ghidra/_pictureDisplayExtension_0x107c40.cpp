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

// Function: _pictureDisplayExtension
// Address: 0x107c40 - 0x107d30
void _pictureDisplayExtension_0x107c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_pictureDisplayExtension_0x107c40");
#endif

    switch (ctx->pc) {
        case 0x107cc8u: goto label_107cc8;
        case 0x107cd0u: goto label_107cd0;
        case 0x107ce8u: goto label_107ce8;
        case 0x107cf0u: goto label_107cf0;
        case 0x107d04u: goto label_107d04;
        default: break;
    }

    ctx->pc = 0x107c40u;

    // 0x107c40: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x107c40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x107c44: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x107c44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x107c48: 0x8c433d48  lw          $v1, 0x3D48($v0)
    ctx->pc = 0x107c48u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x383D48u));
    // 0x107c4c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x107c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x107c50: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x107c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x107c54: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x107c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x107c58: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x107c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x107c5c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x107c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x107c60: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x107C60u;
    {
        const bool branch_taken_0x107c60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x107C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107C60u;
        // 0x107c64: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107c60) {
            ctx->pc = 0x107C8Cu;
            goto label_107c8c;
        }
    }
    ctx->pc = 0x107C68u;
    // 0x107c68: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x107c68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x107c6c: 0x8c433dc0  lw          $v1, 0x3DC0($v0)
    ctx->pc = 0x107c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x383DC0u));
    // 0x107c70: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x107C70u;
    {
        const bool branch_taken_0x107c70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x107C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107C70u;
        // 0x107c74: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107c70) {
            ctx->pc = 0x107CA0u;
            goto label_107ca0;
        }
    }
    ctx->pc = 0x107C78u;
    // 0x107c78: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x107c78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x107c7c: 0x8c443db0  lw          $a0, 0x3DB0($v0)
    ctx->pc = 0x107c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15792)));
    // 0x107c80: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x107c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x107c84: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x107C84u;
    {
        const bool branch_taken_0x107c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107C84u;
        // 0x107c88: 0x64900b  movn        $s2, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107c84) {
            ctx->pc = 0x107CB4u;
            goto label_107cb4;
        }
    }
    ctx->pc = 0x107C8Cu;
label_107c8c:
    // 0x107c8c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x107c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x107c90: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x107c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x107c94: 0x8c443dac  lw          $a0, 0x3DAC($v0)
    ctx->pc = 0x107c94u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x383DACu));
    // 0x107c98: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x107C98u;
    {
        const bool branch_taken_0x107c98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x107C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107C98u;
        // 0x107c9c: 0x3c030038  lui         $v1, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107c98) {
            ctx->pc = 0x107CA8u;
            goto label_107ca8;
        }
    }
    ctx->pc = 0x107CA0u;
label_107ca0:
    // 0x107ca0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x107CA0u;
    {
        const bool branch_taken_0x107ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107CA0u;
        // 0x107ca4: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107ca0) {
            ctx->pc = 0x107CB4u;
            goto label_107cb4;
        }
    }
    ctx->pc = 0x107CA8u;
label_107ca8:
    // 0x107ca8: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x107ca8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x107cac: 0x8c623dc0  lw          $v0, 0x3DC0($v1)
    ctx->pc = 0x107cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15808)));
    // 0x107cb0: 0x82900b  movn        $s2, $a0, $v0
    ctx->pc = 0x107cb0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 4));
label_107cb4:
    // 0x107cb4: 0x1a400016  blez        $s2, . + 4 + (0x16 << 2)
    ctx->pc = 0x107CB4u;
    {
        const bool branch_taken_0x107cb4 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x107CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107CB4u;
        // 0x107cb8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107cb4) {
            ctx->pc = 0x107D10u;
            goto label_107d10;
        }
    }
    ctx->pc = 0x107CBCu;
    // 0x107cbc: 0x3c140038  lui         $s4, 0x38
    ctx->pc = 0x107cbcu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)56 << 16));
    // 0x107cc0: 0x3c130038  lui         $s3, 0x38
    ctx->pc = 0x107cc0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)56 << 16));
    // 0x107cc4: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x107cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_107cc8:
    // 0x107cc8: 0xc041c9e  jal         func_107278
    ctx->pc = 0x107CC8u;
    SET_GPR_U32(ctx, 31, 0x107CD0u);
    ctx->pc = 0x107CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107CC8u;
    // 0x107ccc: 0x118080  sll         $s0, $s1, 2 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x107CC8u, 0x107CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107CD0u;
label_107cd0:
    // 0x107cd0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x107cd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x107cd4: 0x26833de8  addiu       $v1, $s4, 0x3DE8
    ctx->pc = 0x107cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 15848));
    // 0x107cd8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x107cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x107cdc: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x107cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x107ce0: 0xc041c9e  jal         func_107278
    ctx->pc = 0x107CE0u;
    SET_GPR_U32(ctx, 31, 0x107CE8u);
    ctx->pc = 0x107CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107CE0u;
    // 0x107ce4: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x107CE0u, 0x107CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107CE8u;
label_107ce8:
    // 0x107ce8: 0xc041c9e  jal         func_107278
    ctx->pc = 0x107CE8u;
    SET_GPR_U32(ctx, 31, 0x107CF0u);
    ctx->pc = 0x107CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107CE8u;
    // 0x107cec: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x107CE8u, 0x107CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107CF0u;
label_107cf0:
    // 0x107cf0: 0x26633df8  addiu       $v1, $s3, 0x3DF8
    ctx->pc = 0x107cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 15864));
    // 0x107cf4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x107cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x107cf8: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x107cf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x107cfc: 0xc041c9e  jal         func_107278
    ctx->pc = 0x107CFCu;
    SET_GPR_U32(ctx, 31, 0x107D04u);
    ctx->pc = 0x107D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107CFCu;
    // 0x107d00: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x107CFCu, 0x107D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107D04u;
label_107d04:
    // 0x107d04: 0x232182a  slt         $v1, $s1, $s2
    ctx->pc = 0x107d04u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x107d08: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x107D08u;
    {
        const bool branch_taken_0x107d08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x107D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107D08u;
        // 0x107d0c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107d08) {
            ctx->pc = 0x107CC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_107cc8;
        }
    }
    ctx->pc = 0x107D10u;
label_107d10:
    // 0x107d10: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x107d10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x107d14: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x107d14u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x107d18: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x107d18u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x107d1c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x107d1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x107d20: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x107d20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x107d24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x107d24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x107d28: 0x3e00008  jr          $ra
    ctx->pc = 0x107D28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107D28u;
        // 0x107d2c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107D28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x107D30u;
}
