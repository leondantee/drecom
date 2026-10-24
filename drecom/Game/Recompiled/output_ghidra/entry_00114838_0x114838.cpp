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

// Function: entry_00114838
// Address: 0x114838 - 0x114888
void entry_00114838_0x114838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114838_0x114838");
#endif

    switch (ctx->pc) {
        case 0x11485cu: goto label_11485c;
        case 0x114868u: goto label_114868;
        default: break;
    }

    ctx->pc = 0x114838u;

    // 0x114838: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x114838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11483c: 0x2229807  srav        $s3, $v0, $s1
    ctx->pc = 0x11483cu;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
    // 0x114840: 0x2131824  and         $v1, $s0, $s3
    ctx->pc = 0x114840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 19));
    // 0x114844: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x114844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x114848: 0x1060003e  beqz        $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x114848u;
    {
        const bool branch_taken_0x114848 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11484Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114848u;
        // 0x11484c: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114848) {
            ctx->pc = 0x114944u;
            return;
        }
    }
    ctx->pc = 0x114850u;
    // 0x114850: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x114850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114854: 0xc047ac0  jal         func_11EB00
    ctx->pc = 0x114854u;
    SET_GPR_U32(ctx, 31, 0x11485Cu);
    ctx->pc = 0x114858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114854u;
    // 0x114858: 0xdc45d880  ld          $a1, -0x2780($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294957184)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB00u, 0x114854u, 0x11485Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11485Cu;
label_11485c:
    // 0x11485c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11485cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114860: 0xc047c3a  jal         func_11F0E8
    ctx->pc = 0x114860u;
    SET_GPR_U32(ctx, 31, 0x114868u);
    ctx->pc = 0x114864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114860u;
    // 0x114864: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F0E8u, 0x114860u, 0x114868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114868u;
label_114868:
    // 0x114868: 0x18400033  blez        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x114868u;
    {
        const bool branch_taken_0x114868 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x11486Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114868u;
        // 0x11486c: 0x12103c  dsll32      $v0, $s2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114868) {
            ctx->pc = 0x114938u;
            return;
        }
    }
    ctx->pc = 0x114870u;
    // 0x114870: 0x6010005  bgez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x114870u;
    {
        const bool branch_taken_0x114870 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x114874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114870u;
        // 0x114874: 0x131027  nor         $v0, $zero, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114870) {
            ctx->pc = 0x114888u;
            return;
        }
    }
    ctx->pc = 0x114878u;
    // 0x114878: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x114878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x11487c: 0x2221007  srav        $v0, $v0, $s1
    ctx->pc = 0x11487cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
    // 0x114880: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x114880u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x114884: 0x131027  nor         $v0, $zero, $s3
    ctx->pc = 0x114884u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 19)));
    ctx->pc = 0x114888u;
}
