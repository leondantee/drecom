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

// Function: itof
// Address: 0x214358 - 0x214420
void itof_0x214358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("itof_0x214358");
#endif

    switch (ctx->pc) {
        case 0x214398u: goto label_214398;
        case 0x2143f4u: goto label_2143f4;
        case 0x214408u: goto label_214408;
        case 0x214414u: goto label_214414;
        default: break;
    }

    ctx->pc = 0x214358u;

    // 0x214358: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x214358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21435c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21435cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214360: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x214360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x214364: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x214364u;
    {
        const bool branch_taken_0x214364 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x214368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214364u;
        // 0x214368: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214364) {
            ctx->pc = 0x214374u;
            goto label_214374;
        }
    }
    ctx->pc = 0x21436Cu;
    // 0x21436c: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x21436Cu;
    {
        const bool branch_taken_0x21436c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21436Cu;
        // 0x214370: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21436c) {
            ctx->pc = 0x214414u;
            goto label_214414;
        }
    }
    ctx->pc = 0x214374u;
label_214374:
    // 0x214374: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x214374u;
    {
        const bool branch_taken_0x214374 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x214378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214374u;
        // 0x214378: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214374) {
            ctx->pc = 0x214388u;
            goto label_214388;
        }
    }
    ctx->pc = 0x21437Cu;
    // 0x21437c: 0x4182f  dsubu       $v1, $zero, $a0
    ctx->pc = 0x21437cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) - GPR_U64(ctx, 4));
    // 0x214380: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x214380u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x214384: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x214384u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
label_214388:
    // 0x214388: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x214388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21438c: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x21438Cu;
    {
        const bool branch_taken_0x21438c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x21438c) {
            ctx->pc = 0x214390u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21438Cu;
            // 0x214390: 0x28a20035  slti        $v0, $a1, 0x35 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)53) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2143B8u;
            goto label_2143b8;
        }
    }
    ctx->pc = 0x214394u;
    // 0x214394: 0x0  nop
    ctx->pc = 0x214394u;
    // NOP
label_214398:
    // 0x214398: 0x64a50001  daddiu      $a1, $a1, 0x1
    ctx->pc = 0x214398u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
    // 0x21439c: 0x3187b  dsra        $v1, $v1, 1
    ctx->pc = 0x21439cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> 1);
    // 0x2143a0: 0x0  nop
    ctx->pc = 0x2143a0u;
    // NOP
    // 0x2143a4: 0x0  nop
    ctx->pc = 0x2143a4u;
    // NOP
    // 0x2143a8: 0x0  nop
    ctx->pc = 0x2143a8u;
    // NOP
    // 0x2143ac: 0x1462fffa  bne         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2143ACu;
    {
        const bool branch_taken_0x2143ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2143ac) {
            ctx->pc = 0x214398u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_214398;
        }
    }
    ctx->pc = 0x2143B4u;
    // 0x2143b4: 0x28a20035  slti        $v0, $a1, 0x35
    ctx->pc = 0x2143b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)53) ? 1 : 0);
label_2143b8:
    // 0x2143b8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2143B8u;
    {
        const bool branch_taken_0x2143b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2143BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2143B8u;
        // 0x2143bc: 0x64a303ff  daddiu      $v1, $a1, 0x3FF (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1023);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2143b8) {
            ctx->pc = 0x2143D8u;
            goto label_2143d8;
        }
    }
    ctx->pc = 0x2143C0u;
    // 0x2143c0: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x2143c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2143c4: 0x45102f  dsubu       $v0, $v0, $a1
    ctx->pc = 0x2143c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 5));
    // 0x2143c8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2143c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2143cc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2143ccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2143d0: 0x442014  dsllv       $a0, $a0, $v0
    ctx->pc = 0x2143d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x2143d4: 0x4233b  dsra        $a0, $a0, 12
    ctx->pc = 0x2143d4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> 12);
label_2143d8:
    // 0x2143d8: 0x3153c  dsll32      $v0, $v1, 20
    ctx->pc = 0x2143d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 20));
    // 0x2143dc: 0xc21025  or          $v0, $a2, $v0
    ctx->pc = 0x2143dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2143e0: 0x442025  or          $a0, $v0, $a0
    ctx->pc = 0x2143e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2143e4: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2143E4u;
    {
        const bool branch_taken_0x2143e4 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2143E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2143E4u;
        // 0x2143e8: 0x4107a  dsrl        $v0, $a0, 1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) >> 1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2143e4) {
            ctx->pc = 0x2143FCu;
            goto label_2143fc;
        }
    }
    ctx->pc = 0x2143ECu;
    // 0x2143ec: 0xc047520  jal         func_11D480
    ctx->pc = 0x2143ECu;
    SET_GPR_U32(ctx, 31, 0x2143F4u);
    ctx->pc = 0x11D480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D480u, 0x2143ECu, 0x2143F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2143F4u;
label_2143f4:
    // 0x2143f4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2143F4u;
    {
        const bool branch_taken_0x2143f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2143F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2143F4u;
        // 0x2143f8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2143f4) {
            ctx->pc = 0x214418u;
            goto label_214418;
        }
    }
    ctx->pc = 0x2143FCu;
label_2143fc:
    // 0x2143fc: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x2143fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x214400: 0xc047520  jal         func_11D480
    ctx->pc = 0x214400u;
    SET_GPR_U32(ctx, 31, 0x214408u);
    ctx->pc = 0x214404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214400u;
    // 0x214404: 0x822025  or          $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D480u, 0x214400u, 0x214408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214408u;
label_214408:
    // 0x214408: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x214408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21440c: 0xc047ac0  jal         func_11EB00
    ctx->pc = 0x21440Cu;
    SET_GPR_U32(ctx, 31, 0x214414u);
    ctx->pc = 0x214410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21440Cu;
    // 0x214410: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB00u, 0x21440Cu, 0x214414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214414u;
label_214414:
    // 0x214414: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x214414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_214418:
    // 0x214418: 0x3e00008  jr          $ra
    ctx->pc = 0x214418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21441Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214418u;
        // 0x21441c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214420u;
}
