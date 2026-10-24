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

// Function: entry_001178b0
// Address: 0x1178b0 - 0x1178ec
void entry_001178b0_0x1178b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001178b0_0x1178b0");
#endif

    switch (ctx->pc) {
        case 0x1178c4u: goto label_1178c4;
        default: break;
    }

    ctx->pc = 0x1178b0u;

label_1178b0:
    // 0x1178b0: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x1178b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_1178b4:
    // 0x1178b4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1178b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1178b8:
    // 0x1178b8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1178b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1178bc:
    // 0x1178bc: 0x60f809  jalr        $v1
label_1178c0:
    if (ctx->pc == 0x1178C0u) {
        ctx->pc = 0x1178C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1178BCu;
        // 0x1178c0: 0x242300b  movn        $a2, $s2, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1178C4u;
        goto label_1178c4;
    }
    ctx->pc = 0x1178BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1178C4u);
        ctx->pc = 0x1178C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1178BCu;
        // 0x1178c0: 0x242300b  movn        $a2, $s2, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1178BCu, 0x1178C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1178C4u;
label_1178c4:
    // 0x1178c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1178c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1178c8:
    // 0x1178c8: 0x1a0000b4  blez        $s0, . + 4 + (0xB4 << 2)
label_1178cc:
    if (ctx->pc == 0x1178CCu) {
        ctx->pc = 0x1178CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1178C8u;
        // 0x1178cc: 0x2709821  addu        $s3, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1178D0u;
        goto label_1178d0;
    }
    ctx->pc = 0x1178C8u;
    {
        const bool branch_taken_0x1178c8 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x1178CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1178C8u;
        // 0x1178cc: 0x2709821  addu        $s3, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1178c8) {
            ctx->pc = 0x117B9Cu;
            return;
        }
    }
    ctx->pc = 0x1178D0u;
label_1178d0:
    // 0x1178d0: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x1178d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_1178d4:
    // 0x1178d4: 0x2509023  subu        $s2, $s2, $s0
    ctx->pc = 0x1178d4u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_1178d8:
    // 0x1178d8: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1178d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1178dc:
    // 0x1178dc: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
label_1178e0:
    if (ctx->pc == 0x1178E0u) {
        ctx->pc = 0x1178E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1178DCu;
        // 0x1178e0: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1178E4u;
        goto label_1178e4;
    }
    ctx->pc = 0x1178DCu;
    {
        const bool branch_taken_0x1178dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1178E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1178DCu;
        // 0x1178e0: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1178dc) {
            ctx->pc = 0x117880u;
            return;
        }
    }
    ctx->pc = 0x1178E4u;
label_1178e4:
    // 0x1178e4: 0x100000b1  b           . + 4 + (0xB1 << 2)
label_1178e8:
    if (ctx->pc == 0x1178E8u) {
        ctx->pc = 0x1178E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1178E4u;
        // 0x1178e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1178ECu;
        goto label_fallthrough_0x1178e4;
    }
    ctx->pc = 0x1178E4u;
    {
        const bool branch_taken_0x1178e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1178E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1178E4u;
        // 0x1178e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1178e4) {
            ctx->pc = 0x117BACu;
            return;
        }
    }
label_fallthrough_0x1178e4:
    ctx->pc = 0x1178ECu;
}
