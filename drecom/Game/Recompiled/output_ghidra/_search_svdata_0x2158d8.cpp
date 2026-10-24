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

// Function: _search_svdata
// Address: 0x2158d8 - 0x215924
void _search_svdata_0x2158d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_search_svdata_0x2158d8");
#endif

    switch (ctx->pc) {
        case 0x2158e8u: goto label_2158e8;
        case 0x2158f8u: goto label_2158f8;
        default: break;
    }

    ctx->pc = 0x2158d8u;

    // 0x2158d8: 0x8ca50028  lw          $a1, 0x28($a1)
    ctx->pc = 0x2158d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x2158dc: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x2158DCu;
    {
        const bool branch_taken_0x2158dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2158dc) {
            ctx->pc = 0x21591Cu;
            goto label_21591c;
        }
    }
    ctx->pc = 0x2158E4u;
    // 0x2158e4: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2158e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_2158e8:
    // 0x2158e8: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2158E8u;
    {
        const bool branch_taken_0x2158e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2158e8) {
            ctx->pc = 0x2158ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2158E8u;
            // 0x2158ec: 0x8ca50014  lw          $a1, 0x14($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x215914u;
            goto label_215914;
        }
    }
    ctx->pc = 0x2158F0u;
    // 0x2158f0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2158f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2158f4: 0x0  nop
    ctx->pc = 0x2158f4u;
    // NOP
label_2158f8:
    // 0x2158f8: 0x54440003  bnel        $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2158F8u;
    {
        const bool branch_taken_0x2158f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x2158f8) {
            ctx->pc = 0x2158FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2158F8u;
            // 0x2158fc: 0x8c630038  lw          $v1, 0x38($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x215908u;
            goto label_215908;
        }
    }
    ctx->pc = 0x215900u;
    // 0x215900: 0x3e00008  jr          $ra
    ctx->pc = 0x215900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215900u;
        // 0x215904: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x215908u;
label_215908:
    // 0x215908: 0x5460fffb  bnel        $v1, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x215908u;
    {
        const bool branch_taken_0x215908 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x215908) {
            ctx->pc = 0x21590Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x215908u;
            // 0x21590c: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2158F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2158f8;
        }
    }
    ctx->pc = 0x215910u;
    // 0x215910: 0x8ca50014  lw          $a1, 0x14($a1)
    ctx->pc = 0x215910u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_215914:
    // 0x215914: 0x54a0fff4  bnel        $a1, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x215914u;
    {
        const bool branch_taken_0x215914 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x215914) {
            ctx->pc = 0x215918u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x215914u;
            // 0x215918: 0x8ca30008  lw          $v1, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2158E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2158e8;
        }
    }
    ctx->pc = 0x21591Cu;
label_21591c:
    // 0x21591c: 0x3e00008  jr          $ra
    ctx->pc = 0x21591Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21591Cu;
        // 0x215920: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21591Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x215924u;
}
