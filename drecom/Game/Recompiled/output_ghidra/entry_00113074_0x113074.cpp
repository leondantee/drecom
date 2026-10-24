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

// Function: entry_00113074
// Address: 0x113074 - 0x1130b0
void entry_00113074_0x113074(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113074_0x113074");
#endif

    switch (ctx->pc) {
        case 0x11307cu: goto label_11307c;
        default: break;
    }

    ctx->pc = 0x113074u;

    // 0x113074: 0xc047c3a  jal         func_11F0E8
    ctx->pc = 0x113074u;
    SET_GPR_U32(ctx, 31, 0x11307Cu);
    ctx->pc = 0x113078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113074u;
    // 0x113078: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F0E8u, 0x113074u, 0x11307Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11307Cu;
label_11307c:
    // 0x11307c: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x11307Cu;
    {
        const bool branch_taken_0x11307c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x113080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11307Cu;
        // 0x113080: 0x8fa60248  lw          $a2, 0x248($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11307c) {
            ctx->pc = 0x1130D8u;
            return;
        }
    }
    ctx->pc = 0x113084u;
    // 0x113084: 0x8fa20248  lw          $v0, 0x248($sp)
    ctx->pc = 0x113084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x113088: 0x26f7ffff  addiu       $s7, $s7, -0x1
    ctx->pc = 0x113088u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
    // 0x11308c: 0x2442ffe8  addiu       $v0, $v0, -0x18
    ctx->pc = 0x11308cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967272));
    // 0x113090: 0xafa20248  sw          $v0, 0x248($sp)
    ctx->pc = 0x113090u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 2));
    // 0x113094: 0x171080  sll         $v0, $s7, 2
    ctx->pc = 0x113094u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x113098: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x113098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x11309c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x11309cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1130a0: 0x1480003e  bnez        $a0, . + 4 + (0x3E << 2)
    ctx->pc = 0x1130A0u;
    {
        const bool branch_taken_0x1130a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1130A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1130A0u;
        // 0x1130a4: 0x32730007  andi        $s3, $s3, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1130a0) {
            ctx->pc = 0x11319Cu;
            return;
        }
    }
    ctx->pc = 0x1130A8u;
    // 0x1130a8: 0xafb30258  sw          $s3, 0x258($sp)
    ctx->pc = 0x1130a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 600), GPR_U32(ctx, 19));
    // 0x1130ac: 0x8fa30248  lw          $v1, 0x248($sp)
    ctx->pc = 0x1130acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    ctx->pc = 0x1130b0u;
}
