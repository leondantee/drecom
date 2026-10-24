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

// Function: entry_001179c0
// Address: 0x1179c0 - 0x1179f8
void entry_001179c0_0x1179c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001179c0_0x1179c0");
#endif

    switch (ctx->pc) {
        case 0x1179e4u: goto label_1179e4;
        default: break;
    }

    ctx->pc = 0x1179c0u;

label_1179c0:
    // 0x1179c0: 0x8e300014  lw          $s0, 0x14($s1)
    ctx->pc = 0x1179c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1179c4:
    // 0x1179c4: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x1179c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_1179c8:
    // 0x1179c8: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_1179cc:
    if (ctx->pc == 0x1179CCu) {
        ctx->pc = 0x1179CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1179C8u;
        // 0x1179cc: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1179D0u;
        goto label_1179d0;
    }
    ctx->pc = 0x1179C8u;
    {
        const bool branch_taken_0x1179c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1179c8) {
            ctx->pc = 0x1179CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1179C8u;
            // 0x1179cc: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1179F8u;
            return;
        }
    }
    ctx->pc = 0x1179D0u;
label_1179d0:
    // 0x1179d0: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1179d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1179d4:
    // 0x1179d4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1179d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1179d8:
    // 0x1179d8: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x1179d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_1179dc:
    // 0x1179dc: 0x40f809  jalr        $v0
label_1179e0:
    if (ctx->pc == 0x1179E0u) {
        ctx->pc = 0x1179E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1179DCu;
        // 0x1179e0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1179E4u;
        goto label_1179e4;
    }
    ctx->pc = 0x1179DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1179E4u);
        ctx->pc = 0x1179E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1179DCu;
        // 0x1179e0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1179DCu, 0x1179E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1179E4u;
label_1179e4:
    // 0x1179e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1179e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1179e8:
    // 0x1179e8: 0x5a00006d  blezl       $s0, . + 4 + (0x6D << 2)
label_1179ec:
    if (ctx->pc == 0x1179ECu) {
        ctx->pc = 0x1179ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1179E8u;
        // 0x1179ec: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1179F0u;
        goto label_1179f0;
    }
    ctx->pc = 0x1179E8u;
    {
        const bool branch_taken_0x1179e8 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x1179e8) {
            ctx->pc = 0x1179ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1179E8u;
            // 0x1179ec: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x117BA0u;
            return;
        }
    }
    ctx->pc = 0x1179F0u;
label_1179f0:
    // 0x1179f0: 0x1000000c  b           . + 4 + (0xC << 2)
label_1179f4:
    if (ctx->pc == 0x1179F4u) {
        ctx->pc = 0x1179F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1179F0u;
        // 0x1179f4: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1179F8u;
        goto label_fallthrough_0x1179f0;
    }
    ctx->pc = 0x1179F0u;
    {
        const bool branch_taken_0x1179f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1179F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1179F0u;
        // 0x1179f4: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1179f0) {
            ctx->pc = 0x117A24u;
            return;
        }
    }
label_fallthrough_0x1179f0:
    ctx->pc = 0x1179F8u;
}
