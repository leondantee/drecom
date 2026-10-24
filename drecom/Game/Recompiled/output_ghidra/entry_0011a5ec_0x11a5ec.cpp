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

// Function: entry_0011a5ec
// Address: 0x11a5ec - 0x11a60c
void entry_0011a5ec_0x11a5ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a5ec_0x11a5ec");
#endif

    switch (ctx->pc) {
        case 0x11a604u: goto label_11a604;
        default: break;
    }

    ctx->pc = 0x11a5ecu;

label_11a5ec:
    // 0x11a5ec: 0x2d1102b  sltu        $v0, $s6, $s1
    ctx->pc = 0x11a5ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_11a5f0:
    // 0x11a5f0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_11a5f4:
    if (ctx->pc == 0x11A5F4u) {
        ctx->pc = 0x11A5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A5F0u;
        // 0x11a5f4: 0x2338023  subu        $s0, $s1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A5F8u;
        goto label_11a5f8;
    }
    ctx->pc = 0x11A5F0u;
    {
        const bool branch_taken_0x11a5f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A5F0u;
        // 0x11a5f4: 0x2338023  subu        $s0, $s1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a5f0) {
            ctx->pc = 0x11A60Cu;
            return;
        }
    }
    ctx->pc = 0x11A5F8u;
label_11a5f8:
    // 0x11a5f8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11a5f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11a5fc:
    // 0x11a5fc: 0x2e0f809  jalr        $s7
label_11a600:
    if (ctx->pc == 0x11A600u) {
        ctx->pc = 0x11A600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A5FCu;
        // 0x11a600: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A604u;
        goto label_11a604;
    }
    ctx->pc = 0x11A5FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x11A604u);
        ctx->pc = 0x11A600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A5FCu;
        // 0x11a600: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A5FCu, 0x11A604u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11A604u;
label_11a604:
    // 0x11a604: 0x1c40ffd6  bgtz        $v0, . + 4 + (-0x2A << 2)
label_11a608:
    if (ctx->pc == 0x11A608u) {
        ctx->pc = 0x11A60Cu;
        goto label_fallthrough_0x11a604;
    }
    ctx->pc = 0x11A604u;
    {
        const bool branch_taken_0x11a604 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x11a604) {
            ctx->pc = 0x11A560u;
            return;
        }
    }
label_fallthrough_0x11a604:
    ctx->pc = 0x11A60Cu;
}
