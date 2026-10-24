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

// Function: _outputFrame
// Address: 0x107ec0 - 0x107f78
void _outputFrame_0x107ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_outputFrame_0x107ec0");
#endif

    switch (ctx->pc) {
        case 0x107f18u: goto label_107f18;
        case 0x107f54u: goto label_107f54;
        default: break;
    }

    ctx->pc = 0x107ec0u;

    // 0x107ec0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x107ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x107ec4: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x107ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x107ec8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x107ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x107ecc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x107eccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107ed0: 0x8c623bf4  lw          $v0, 0x3BF4($v1)
    ctx->pc = 0x107ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x383BF4u));
    // 0x107ed4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x107ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x107ed8: 0x10a0001e  beqz        $a1, . + 4 + (0x1E << 2)
    ctx->pc = 0x107ED8u;
    {
        const bool branch_taken_0x107ed8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x107EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107ED8u;
        // 0x107edc: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107ed8) {
            ctx->pc = 0x107F54u;
            goto label_107f54;
        }
    }
    ctx->pc = 0x107EE0u;
    // 0x107ee0: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x107ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x107ee4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x107ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x107ee8: 0x8c623dac  lw          $v0, 0x3DAC($v1)
    ctx->pc = 0x107ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x383DACu));
    // 0x107eec: 0x1444000c  bne         $v0, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x107EECu;
    {
        const bool branch_taken_0x107eec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x107EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107EECu;
        // 0x107ef0: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107eec) {
            ctx->pc = 0x107F20u;
            goto label_107f20;
        }
    }
    ctx->pc = 0x107EF4u;
    // 0x107ef4: 0x8c433d7c  lw          $v1, 0x3D7C($v0)
    ctx->pc = 0x107ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15740)));
    // 0x107ef8: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x107EF8u;
    {
        const bool branch_taken_0x107ef8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x107EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107EF8u;
        // 0x107efc: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107ef8) {
            ctx->pc = 0x107F0Cu;
            goto label_107f0c;
        }
    }
    ctx->pc = 0x107F00u;
    // 0x107f00: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x107f00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x107f04: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x107F04u;
    {
        const bool branch_taken_0x107f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107F04u;
        // 0x107f08: 0x8c443c08  lw          $a0, 0x3C08($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107f04) {
            ctx->pc = 0x107F10u;
            goto label_107f10;
        }
    }
    ctx->pc = 0x107F0Cu;
label_107f0c:
    // 0x107f0c: 0x8c443c00  lw          $a0, 0x3C00($v0)
    ctx->pc = 0x107f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15360)));
label_107f10:
    // 0x107f10: 0xc0421ee  jal         func_1087B8
    ctx->pc = 0x107F10u;
    SET_GPR_U32(ctx, 31, 0x107F18u);
    ctx->pc = 0x107F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107F10u;
    // 0x107f14: 0x24c5ffff  addiu       $a1, $a2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1087B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1087B8u, 0x107F10u, 0x107F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107F18u;
label_107f18:
    // 0x107f18: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x107F18u;
    {
        const bool branch_taken_0x107f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107F18u;
        // 0x107f1c: 0x8e0300f8  lw          $v1, 0xF8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107f18) {
            ctx->pc = 0x107F58u;
            goto label_107f58;
        }
    }
    ctx->pc = 0x107F20u;
label_107f20:
    // 0x107f20: 0x8c433d7c  lw          $v1, 0x3D7C($v0)
    ctx->pc = 0x107f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15740)));
    // 0x107f24: 0x14640006  bne         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x107F24u;
    {
        const bool branch_taken_0x107f24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x107F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107F24u;
        // 0x107f28: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107f24) {
            ctx->pc = 0x107F40u;
            goto label_107f40;
        }
    }
    ctx->pc = 0x107F2Cu;
    // 0x107f2c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x107f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x107f30: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x107f30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x107f34: 0x8c443c14  lw          $a0, 0x3C14($v0)
    ctx->pc = 0x107f34u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x383C14u));
    // 0x107f38: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x107F38u;
    {
        const bool branch_taken_0x107f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107F38u;
        // 0x107f3c: 0x8c653c20  lw          $a1, 0x3C20($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15392)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107f38) {
            ctx->pc = 0x107F4Cu;
            goto label_107f4c;
        }
    }
    ctx->pc = 0x107F40u;
label_107f40:
    // 0x107f40: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x107f40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x107f44: 0x8c443c0c  lw          $a0, 0x3C0C($v0)
    ctx->pc = 0x107f44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15372)));
    // 0x107f48: 0x8c653c18  lw          $a1, 0x3C18($v1)
    ctx->pc = 0x107f48u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x383C18u));
label_107f4c:
    // 0x107f4c: 0xc042234  jal         func_1088D0
    ctx->pc = 0x107F4Cu;
    SET_GPR_U32(ctx, 31, 0x107F54u);
    ctx->pc = 0x107F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107F4Cu;
    // 0x107f50: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1088D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1088D0u, 0x107F4Cu, 0x107F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107F54u;
label_107f54:
    // 0x107f54: 0x8e0300f8  lw          $v1, 0xF8($s0)
    ctx->pc = 0x107f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
label_107f58:
    // 0x107f58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x107f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x107f5c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x107F5Cu;
    {
        const bool branch_taken_0x107f5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x107F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107F5Cu;
        // 0x107f60: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107f5c) {
            ctx->pc = 0x107F6Cu;
            goto label_107f6c;
        }
    }
    ctx->pc = 0x107F64u;
    // 0x107f64: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x107f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x107f68: 0xae0200f8  sw          $v0, 0xF8($s0)
    ctx->pc = 0x107f68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 2));
label_107f6c:
    // 0x107f6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x107f6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x107f70: 0x3e00008  jr          $ra
    ctx->pc = 0x107F70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107F70u;
        // 0x107f74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107F70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x107F78u;
}
