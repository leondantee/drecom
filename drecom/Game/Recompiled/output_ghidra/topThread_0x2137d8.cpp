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

// Function: topThread
// Address: 0x2137d8 - 0x213884
void topThread_0x2137d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("topThread_0x2137d8");
#endif

    switch (ctx->pc) {
        case 0x213808u: goto label_213808;
        case 0x213810u: goto label_213810;
        case 0x21384cu: goto label_21384c;
        case 0x21385cu: goto label_21385c;
        case 0x21386cu: goto label_21386c;
        case 0x21387cu: goto label_21387c;
        default: break;
    }

    ctx->pc = 0x2137d8u;

    // 0x2137d8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2137d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2137dc: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2137dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2137e0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2137e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2137e4: 0x3c140062  lui         $s4, 0x62
    ctx->pc = 0x2137e4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)98 << 16));
    // 0x2137e8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2137e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2137ec: 0x3c13003b  lui         $s3, 0x3B
    ctx->pc = 0x2137ecu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)59 << 16));
    // 0x2137f0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2137f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2137f4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2137f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2137f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2137f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2137fc: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x2137fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x213800: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x213800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x213804: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x213804u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_213808:
    // 0x213808: 0xc084a98  jal         func_212A60
    ctx->pc = 0x213808u;
    SET_GPR_U32(ctx, 31, 0x213810u);
    ctx->pc = 0x21380Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213808u;
    // 0x21380c: 0x8e849ce8  lw          $a0, -0x6318($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294941928)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212A60u;
    {
        ctx->pc = 0x213810u;
        ps2_syscalls::WaitSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x213810u) { return; }
    ctx->pc = 0x213810u;
label_213810:
    // 0x213810: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x213810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x213814: 0x1052000f  beq         $v0, $s2, . + 4 + (0xF << 2)
    ctx->pc = 0x213814u;
    {
        const bool branch_taken_0x213814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x213818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213814u;
        // 0x213818: 0x28430002  slti        $v1, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x213814) {
            ctx->pc = 0x213854u;
            goto label_213854;
        }
    }
    ctx->pc = 0x21381Cu;
    // 0x21381c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x21381Cu;
    {
        const bool branch_taken_0x21381c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x213820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21381Cu;
        // 0x213820: 0x26640ea8  addiu       $a0, $s3, 0xEA8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 3752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21381c) {
            ctx->pc = 0x213834u;
            goto label_213834;
        }
    }
    ctx->pc = 0x213824u;
    // 0x213824: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x213824u;
    {
        const bool branch_taken_0x213824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x213824) {
            ctx->pc = 0x213844u;
            goto label_213844;
        }
    }
    ctx->pc = 0x21382Cu;
    // 0x21382c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x21382Cu;
    {
        const bool branch_taken_0x21382c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21382c) {
            ctx->pc = 0x213874u;
            goto label_213874;
        }
    }
    ctx->pc = 0x213834u;
label_213834:
    // 0x213834: 0x1051000b  beq         $v0, $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x213834u;
    {
        const bool branch_taken_0x213834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x213834) {
            ctx->pc = 0x213864u;
            goto label_213864;
        }
    }
    ctx->pc = 0x21383Cu;
    // 0x21383c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x21383Cu;
    {
        const bool branch_taken_0x21383c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21383c) {
            ctx->pc = 0x213874u;
            goto label_213874;
        }
    }
    ctx->pc = 0x213844u;
label_213844:
    // 0x213844: 0xc084a54  jal         func_212950
    ctx->pc = 0x213844u;
    SET_GPR_U32(ctx, 31, 0x21384Cu);
    ctx->pc = 0x213848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213844u;
    // 0x213848: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212950u;
    {
        ctx->pc = 0x21384Cu;
        ps2_syscalls::WakeupThread(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x21384Cu) { return; }
    ctx->pc = 0x21384Cu;
label_21384c:
    // 0x21384c: 0x1000ffee  b           . + 4 + (-0x12 << 2)
    ctx->pc = 0x21384Cu;
    {
        const bool branch_taken_0x21384c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21384c) {
            ctx->pc = 0x213808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_213808;
        }
    }
    ctx->pc = 0x213854u;
label_213854:
    // 0x213854: 0xc084a34  jal         func_2128D0
    ctx->pc = 0x213854u;
    SET_GPR_U32(ctx, 31, 0x21385Cu);
    ctx->pc = 0x213858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213854u;
    // 0x213858: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2128D0u;
    {
        ctx->pc = 0x21385Cu;
        ps2_syscalls::RotateThreadReadyQueue(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x21385Cu) { return; }
    ctx->pc = 0x21385Cu;
label_21385c:
    // 0x21385c: 0x1000ffea  b           . + 4 + (-0x16 << 2)
    ctx->pc = 0x21385Cu;
    {
        const bool branch_taken_0x21385c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21385c) {
            ctx->pc = 0x213808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_213808;
        }
    }
    ctx->pc = 0x213864u;
label_213864:
    // 0x213864: 0xc084a64  jal         func_212990
    ctx->pc = 0x213864u;
    SET_GPR_U32(ctx, 31, 0x21386Cu);
    ctx->pc = 0x213868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213864u;
    // 0x213868: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212990u;
    {
        ctx->pc = 0x21386Cu;
        ps2_syscalls::SuspendThread(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x21386Cu) { return; }
    ctx->pc = 0x21386Cu;
label_21386c:
    // 0x21386c: 0x1000ffe6  b           . + 4 + (-0x1A << 2)
    ctx->pc = 0x21386Cu;
    {
        const bool branch_taken_0x21386c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21386c) {
            ctx->pc = 0x213808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_213808;
        }
    }
    ctx->pc = 0x213874u;
label_213874:
    // 0x213874: 0xc0852d4  jal         func_214B50
    ctx->pc = 0x213874u;
    SET_GPR_U32(ctx, 31, 0x21387Cu);
    ctx->pc = 0x214B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214B50u, 0x213874u, 0x21387Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21387Cu;
label_21387c:
    // 0x21387c: 0x1000ffe2  b           . + 4 + (-0x1E << 2)
    ctx->pc = 0x21387Cu;
    {
        const bool branch_taken_0x21387c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21387c) {
            ctx->pc = 0x213808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_213808;
        }
    }
    ctx->pc = 0x213884u;
}
