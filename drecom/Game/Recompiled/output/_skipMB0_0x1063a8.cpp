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

// Function: _skipMB0
// Address: 0x1063a8 - 0x106474
void _skipMB0_0x1063a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_skipMB0_0x1063a8");
#endif

    switch (ctx->pc) {
        case 0x10644cu: goto label_10644c;
        default: break;
    }

    ctx->pc = 0x1063a8u;

    // 0x1063a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1063a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1063ac: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1063acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1063b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1063b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1063b4: 0x244241f8  addiu       $v0, $v0, 0x41F8
    ctx->pc = 0x1063b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16888));
    // 0x1063b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1063b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1063bc: 0x24080140  addiu       $t0, $zero, 0x140
    ctx->pc = 0x1063bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x1063c0: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x1063c0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1063c4: 0x3c0c0038  lui         $t4, 0x38
    ctx->pc = 0x1063c4u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)56 << 16));
    // 0x1063c8: 0x8c430280  lw          $v1, 0x280($v0)
    ctx->pc = 0x1063c8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x384478u));
    // 0x1063cc: 0x3c090038  lui         $t1, 0x38
    ctx->pc = 0x1063ccu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)56 << 16));
    // 0x1063d0: 0x8d8a3d7c  lw          $t2, 0x3D7C($t4)
    ctx->pc = 0x1063d0u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x383D7Cu));
    // 0x1063d4: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1063d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1063d8: 0x686818  mult        $t5, $v1, $t0
    ctx->pc = 0x1063d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1063dc: 0xad2b3e3c  sw          $t3, 0x3E3C($t1)
    ctx->pc = 0x1063dcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 15932), GPR_U32(ctx, 11));
    // 0x1063e0: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1063e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1063e4: 0x1a21821  addu        $v1, $t5, $v0
    ctx->pc = 0x1063e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x1063e8: 0x15470005  bne         $t2, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1063E8u;
    {
        const bool branch_taken_0x1063e8 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 7));
        ctx->pc = 0x1063ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1063E8u;
        // 0x1063ec: 0xac6b013c  sw          $t3, 0x13C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 316), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1063e8) {
            ctx->pc = 0x106400u;
            goto label_106400;
        }
    }
    ctx->pc = 0x1063F0u;
    // 0x1063f0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1063f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1063f4: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x1063f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x1063f8: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x1063f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x1063fc: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1063fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_106400:
    // 0x106400: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x106400u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x106404: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x106404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x106408: 0x8c823dac  lw          $v0, 0x3DAC($a0)
    ctx->pc = 0x106408u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x383DACu));
    // 0x10640c: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10640Cu;
    {
        const bool branch_taken_0x10640c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x10640c) {
            ctx->pc = 0x106410u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10640Cu;
            // 0x106410: 0xacab0000  sw          $t3, 0x0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10641Cu;
            goto label_10641c;
        }
    }
    ctx->pc = 0x106414u;
    // 0x106414: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x106414u;
    {
        const bool branch_taken_0x106414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106414u;
        // 0x106418: 0xaca70000  sw          $a3, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106414) {
            ctx->pc = 0x106430u;
            goto label_106430;
        }
    }
    ctx->pc = 0x10641Cu;
label_10641c:
    // 0x10641c: 0x8c823dac  lw          $v0, 0x3DAC($a0)
    ctx->pc = 0x10641cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 15788)));
    // 0x106420: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x106420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x106424: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x106424u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x106428: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x106428u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x10642c: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x10642cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_106430:
    // 0x106430: 0x8d833d7c  lw          $v1, 0x3D7C($t4)
    ctx->pc = 0x106430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 15740)));
    // 0x106434: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x106434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x106438: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x106438u;
    {
        const bool branch_taken_0x106438 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x106438) {
            ctx->pc = 0x10643Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x106438u;
            // 0x10643c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x106454u;
            goto label_106454;
        }
    }
    ctx->pc = 0x106440u;
    // 0x106440: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x106440u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x106444: 0xc042b36  jal         func_10ACD8
    ctx->pc = 0x106444u;
    SET_GPR_U32(ctx, 31, 0x10644Cu);
    ctx->pc = 0x106448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106444u;
    // 0x106448: 0x2484c740  addiu       $a0, $a0, -0x38C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10ACD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10ACD8u, 0x106444u, 0x10644Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10644Cu;
label_10644c:
    // 0x10644c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x10644cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106450: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x106450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_106454:
    // 0x106454: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x106454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x106458: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x106458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10645c: 0x160102d  daddu       $v0, $t3, $zero
    ctx->pc = 0x10645cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106460: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x106460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x106464: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x106464u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x106468: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x106468u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10646c: 0x3e00008  jr          $ra
    ctx->pc = 0x10646Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10646Cu;
        // 0x106470: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10646Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106474u;
}
