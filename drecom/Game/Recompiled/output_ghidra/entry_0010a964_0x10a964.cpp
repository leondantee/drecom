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

// Function: entry_0010a964
// Address: 0x10a964 - 0x10a990
void entry_0010a964_0x10a964(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010a964_0x10a964");
#endif

    switch (ctx->pc) {
        case 0x10a96cu: goto label_10a96c;
        case 0x10a98cu: goto label_10a98c;
        default: break;
    }

    ctx->pc = 0x10a964u;

    // 0x10a964: 0xc041fde  jal         func_107F78
    ctx->pc = 0x10A964u;
    SET_GPR_U32(ctx, 31, 0x10A96Cu);
    ctx->pc = 0x10A968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A964u;
    // 0x10a968: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107F78u, 0x10A964u, 0x10A96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A96Cu;
label_10a96c:
    // 0x10a96c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x10A96Cu;
    {
        const bool branch_taken_0x10a96c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A96Cu;
        // 0x10a970: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a96c) {
            ctx->pc = 0x10A990u;
            return;
        }
    }
    ctx->pc = 0x10A974u;
    // 0x10a974: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x10A974u;
    {
        const bool branch_taken_0x10a974 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a974) {
            ctx->pc = 0x10A990u;
            return;
        }
    }
    ctx->pc = 0x10A97Cu;
    // 0x10a97c: 0x3c140038  lui         $s4, 0x38
    ctx->pc = 0x10a97cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)56 << 16));
    // 0x10a980: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x10a980u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x10a984: 0xc041f78  jal         func_107DE0
    ctx->pc = 0x10A984u;
    SET_GPR_U32(ctx, 31, 0x10A98Cu);
    ctx->pc = 0x10A988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A984u;
    // 0x10a988: 0x8e843d04  lw          $a0, 0x3D04($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 15620)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107DE0u, 0x10A984u, 0x10A98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A98Cu;
label_10a98c:
    // 0x10a98c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x10a98cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x10a990u;
}
