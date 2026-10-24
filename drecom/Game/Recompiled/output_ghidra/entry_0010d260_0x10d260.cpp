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

// Function: entry_0010d260
// Address: 0x10d260 - 0x10d280
void entry_0010d260_0x10d260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d260_0x10d260");
#endif

    ctx->pc = 0x10d260u;

label_10d260:
    // 0x10d260: 0x8e2345f4  lw          $v1, 0x45F4($s1)
    ctx->pc = 0x10d260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 17908)));
label_10d264:
    // 0x10d264: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_10d268:
    if (ctx->pc == 0x10D268u) {
        ctx->pc = 0x10D26Cu;
        goto label_10d26c;
    }
    ctx->pc = 0x10D264u;
    {
        const bool branch_taken_0x10d264 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x10d264) {
            ctx->pc = 0x10D280u;
            return;
        }
    }
    ctx->pc = 0x10D26Cu;
label_10d26c:
    // 0x10d26c: 0x8e0245fc  lw          $v0, 0x45FC($s0)
    ctx->pc = 0x10d26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17916)));
label_10d270:
    // 0x10d270: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_10d274:
    if (ctx->pc == 0x10D274u) {
        ctx->pc = 0x10D278u;
        goto label_10d278;
    }
    ctx->pc = 0x10D270u;
    {
        const bool branch_taken_0x10d270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10d270) {
            ctx->pc = 0x10D280u;
            return;
        }
    }
    ctx->pc = 0x10D278u;
label_10d278:
    // 0x10d278: 0x60f809  jalr        $v1
label_10d27c:
    if (ctx->pc == 0x10D27Cu) {
        ctx->pc = 0x10D27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D278u;
        // 0x10d27c: 0x8e0445fc  lw          $a0, 0x45FC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17916)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10D280u;
        goto label_fallthrough_0x10d278;
    }
    ctx->pc = 0x10D278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10D280u);
        ctx->pc = 0x10D27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D278u;
        // 0x10d27c: 0x8e0445fc  lw          $a0, 0x45FC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17916)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D278u, 0x10D280u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x10d278:
    ctx->pc = 0x10D280u;
}
