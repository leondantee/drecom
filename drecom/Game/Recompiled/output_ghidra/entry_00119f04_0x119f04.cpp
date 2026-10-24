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

// Function: entry_00119f04
// Address: 0x119f04 - 0x119f24
void entry_00119f04_0x119f04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119f04_0x119f04");
#endif

    switch (ctx->pc) {
        case 0x119f1cu: goto label_119f1c;
        default: break;
    }

    ctx->pc = 0x119f04u;

label_119f04:
    // 0x119f04: 0x2d1102b  sltu        $v0, $s6, $s1
    ctx->pc = 0x119f04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_119f08:
    // 0x119f08: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_119f0c:
    if (ctx->pc == 0x119F0Cu) {
        ctx->pc = 0x119F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119F08u;
        // 0x119f0c: 0x2338023  subu        $s0, $s1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119F10u;
        goto label_119f10;
    }
    ctx->pc = 0x119F08u;
    {
        const bool branch_taken_0x119f08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x119F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119F08u;
        // 0x119f0c: 0x2338023  subu        $s0, $s1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119f08) {
            ctx->pc = 0x119F24u;
            return;
        }
    }
    ctx->pc = 0x119F10u;
label_119f10:
    // 0x119f10: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x119f10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_119f14:
    // 0x119f14: 0x2e0f809  jalr        $s7
label_119f18:
    if (ctx->pc == 0x119F18u) {
        ctx->pc = 0x119F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119F14u;
        // 0x119f18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119F1Cu;
        goto label_119f1c;
    }
    ctx->pc = 0x119F14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x119F1Cu);
        ctx->pc = 0x119F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119F14u;
        // 0x119f18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119F14u, 0x119F1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x119F1Cu;
label_119f1c:
    // 0x119f1c: 0x1c40ffd6  bgtz        $v0, . + 4 + (-0x2A << 2)
label_119f20:
    if (ctx->pc == 0x119F20u) {
        ctx->pc = 0x119F24u;
        goto label_fallthrough_0x119f1c;
    }
    ctx->pc = 0x119F1Cu;
    {
        const bool branch_taken_0x119f1c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x119f1c) {
            ctx->pc = 0x119E78u;
            return;
        }
    }
label_fallthrough_0x119f1c:
    ctx->pc = 0x119F24u;
}
