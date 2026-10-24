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

// Function: entry_00119fe4
// Address: 0x119fe4 - 0x11a010
void entry_00119fe4_0x119fe4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119fe4_0x119fe4");
#endif

    switch (ctx->pc) {
        case 0x119fecu: goto label_119fec;
        case 0x11a000u: goto label_11a000;
        default: break;
    }

    ctx->pc = 0x119fe4u;

label_119fe4:
    // 0x119fe4: 0x2e0f809  jalr        $s7
label_119fe8:
    if (ctx->pc == 0x119FE8u) {
        ctx->pc = 0x119FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119FE4u;
        // 0x119fe8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119FECu;
        goto label_119fec;
    }
    ctx->pc = 0x119FE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x119FECu);
        ctx->pc = 0x119FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119FE4u;
        // 0x119fe8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119FE4u, 0x119FECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x119FECu;
label_119fec:
    // 0x119fec: 0x5c400008  bgtzl       $v0, . + 4 + (0x8 << 2)
label_119ff0:
    if (ctx->pc == 0x119FF0u) {
        ctx->pc = 0x119FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119FECu;
        // 0x119ff0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119FF4u;
        goto label_119ff4;
    }
    ctx->pc = 0x119FECu;
    {
        const bool branch_taken_0x119fec = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x119fec) {
            ctx->pc = 0x119FF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x119FECu;
            // 0x119ff0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11A010u;
            return;
        }
    }
    ctx->pc = 0x119FF4u;
label_119ff4:
    // 0x119ff4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x119ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_119ff8:
    // 0x119ff8: 0x2e0f809  jalr        $s7
label_119ffc:
    if (ctx->pc == 0x119FFCu) {
        ctx->pc = 0x119FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119FF8u;
        // 0x119ffc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A000u;
        goto label_11a000;
    }
    ctx->pc = 0x119FF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x11A000u);
        ctx->pc = 0x119FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119FF8u;
        // 0x119ffc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119FF8u, 0x11A000u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11A000u;
label_11a000:
    // 0x11a000: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x11a000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_11a004:
    // 0x11a004: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x11a004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_11a008:
    // 0x11a008: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x11a008u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_11a00c:
    // 0x11a00c: 0x243200b  movn        $a0, $s2, $v1
    ctx->pc = 0x11a00cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 18));
    ctx->pc = 0x11a010u;
}
