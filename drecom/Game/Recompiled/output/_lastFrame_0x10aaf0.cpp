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

// Function: _lastFrame
// Address: 0x10aaf0 - 0x10ab74
void _lastFrame_0x10aaf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_lastFrame_0x10aaf0");
#endif

    switch (ctx->pc) {
        case 0x10ab18u: goto label_10ab18;
        case 0x10ab44u: goto label_10ab44;
        case 0x10ab60u: goto label_10ab60;
        default: break;
    }

    ctx->pc = 0x10aaf0u;

    // 0x10aaf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10aaf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10aaf4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10aaf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10aaf8: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x10aaf8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x10aafc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10aafcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10ab00: 0x8e023d1c  lw          $v0, 0x3D1C($s0)
    ctx->pc = 0x10ab00u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x383D1Cu));
    // 0x10ab04: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10AB04u;
    {
        const bool branch_taken_0x10ab04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AB04u;
        // 0x10ab08: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ab04) {
            ctx->pc = 0x10AB20u;
            goto label_10ab20;
        }
    }
    ctx->pc = 0x10AB0Cu;
    // 0x10ab0c: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x10ab0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x10ab10: 0xc042b36  jal         func_10ACD8
    ctx->pc = 0x10AB10u;
    SET_GPR_U32(ctx, 31, 0x10AB18u);
    ctx->pc = 0x10AB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AB10u;
    // 0x10ab14: 0x2484c948  addiu       $a0, $a0, -0x36B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10ACD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10ACD8u, 0x10AB10u, 0x10AB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AB18u;
label_10ab18:
    // 0x10ab18: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x10AB18u;
    {
        const bool branch_taken_0x10ab18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AB18u;
        // 0x10ab1c: 0xae003d1c  sw          $zero, 0x3D1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 15644), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ab18) {
            ctx->pc = 0x10AB64u;
            goto label_10ab64;
        }
    }
    ctx->pc = 0x10AB20u;
label_10ab20:
    // 0x10ab20: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x10ab20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x10ab24: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x10ab24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10ab28: 0x8c433dac  lw          $v1, 0x3DAC($v0)
    ctx->pc = 0x10ab28u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x383DACu));
    // 0x10ab2c: 0x14640007  bne         $v1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10AB2Cu;
    {
        const bool branch_taken_0x10ab2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x10AB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AB2Cu;
        // 0x10ab30: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ab2c) {
            ctx->pc = 0x10AB4Cu;
            goto label_10ab4c;
        }
    }
    ctx->pc = 0x10AB34u;
    // 0x10ab34: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x10ab34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x10ab38: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x10ab38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x10ab3c: 0xc0421ee  jal         func_1087B8
    ctx->pc = 0x10AB3Cu;
    SET_GPR_U32(ctx, 31, 0x10AB44u);
    ctx->pc = 0x10AB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AB3Cu;
    // 0x10ab40: 0x8c443c04  lw          $a0, 0x3C04($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15364)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1087B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1087B8u, 0x10AB3Cu, 0x10AB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AB44u;
label_10ab44:
    // 0x10ab44: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x10AB44u;
    {
        const bool branch_taken_0x10ab44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AB44u;
        // 0x10ab48: 0xae003d1c  sw          $zero, 0x3D1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 15644), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ab44) {
            ctx->pc = 0x10AB64u;
            goto label_10ab64;
        }
    }
    ctx->pc = 0x10AB4Cu;
label_10ab4c:
    // 0x10ab4c: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x10ab4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x10ab50: 0x24a6ffff  addiu       $a2, $a1, -0x1
    ctx->pc = 0x10ab50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x10ab54: 0x8c443c10  lw          $a0, 0x3C10($v0)
    ctx->pc = 0x10ab54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15376)));
    // 0x10ab58: 0xc042234  jal         func_1088D0
    ctx->pc = 0x10AB58u;
    SET_GPR_U32(ctx, 31, 0x10AB60u);
    ctx->pc = 0x10AB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AB58u;
    // 0x10ab5c: 0x8c653c1c  lw          $a1, 0x3C1C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1088D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1088D0u, 0x10AB58u, 0x10AB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AB60u;
label_10ab60:
    // 0x10ab60: 0xae003d1c  sw          $zero, 0x3D1C($s0)
    ctx->pc = 0x10ab60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 15644), GPR_U32(ctx, 0));
label_10ab64:
    // 0x10ab64: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10ab64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10ab68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10ab68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ab6c: 0x3e00008  jr          $ra
    ctx->pc = 0x10AB6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10AB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AB6Cu;
        // 0x10ab70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10AB6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10AB74u;
}
