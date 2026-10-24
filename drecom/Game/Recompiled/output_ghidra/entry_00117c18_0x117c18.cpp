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

// Function: entry_00117c18
// Address: 0x117c18 - 0x117c34
void entry_00117c18_0x117c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117c18_0x117c18");
#endif

    switch (ctx->pc) {
        case 0x117c2cu: goto label_117c2c;
        default: break;
    }

    ctx->pc = 0x117c18u;

label_117c18:
    // 0x117c18: 0x8622000c  lh          $v0, 0xC($s1)
    ctx->pc = 0x117c18u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_117c1c:
    // 0x117c1c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_117c20:
    if (ctx->pc == 0x117C20u) {
        ctx->pc = 0x117C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117C1Cu;
        // 0x117c20: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117C24u;
        goto label_117c24;
    }
    ctx->pc = 0x117C1Cu;
    {
        const bool branch_taken_0x117c1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x117c1c) {
            ctx->pc = 0x117C20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x117C1Cu;
            // 0x117c20: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x117C34u;
            return;
        }
    }
    ctx->pc = 0x117C24u;
label_117c24:
    // 0x117c24: 0x280f809  jalr        $s4
label_117c28:
    if (ctx->pc == 0x117C28u) {
        ctx->pc = 0x117C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117C24u;
        // 0x117c28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117C2Cu;
        goto label_117c2c;
    }
    ctx->pc = 0x117C24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x117C2Cu);
        ctx->pc = 0x117C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117C24u;
        // 0x117c28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117C24u, 0x117C2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x117C2Cu;
label_117c2c:
    // 0x117c2c: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x117c2cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
label_117c30:
    // 0x117c30: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x117c30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->pc = 0x117c34u;
}
