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

// Function: entry_00112eac
// Address: 0x112eac - 0x112eec
void entry_00112eac_0x112eac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112eac_0x112eac");
#endif

    switch (ctx->pc) {
        case 0x112ec8u: goto label_112ec8;
        case 0x112edcu: goto label_112edc;
        case 0x112ee8u: goto label_112ee8;
        default: break;
    }

    ctx->pc = 0x112eacu;

    // 0x112eac: 0x14c20010  bne         $a2, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x112EACu;
    {
        const bool branch_taken_0x112eac = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x112EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112EACu;
        // 0x112eb0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112eac) {
            ctx->pc = 0x112EF0u;
            return;
        }
    }
    ctx->pc = 0x112EB4u;
    // 0x112eb4: 0x3410ffc0  ori         $s0, $zero, 0xFFC0
    ctx->pc = 0x112eb4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x112eb8: 0x1083bc  dsll32      $s0, $s0, 14
    ctx->pc = 0x112eb8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 14));
    // 0x112ebc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x112ebcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112ec0: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x112EC0u;
    SET_GPR_U32(ctx, 31, 0x112EC8u);
    ctx->pc = 0x112EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112EC0u;
    // 0x112ec4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x112EC0u, 0x112EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112EC8u;
label_112ec8:
    // 0x112ec8: 0x12a00008  beqz        $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x112EC8u;
    {
        const bool branch_taken_0x112ec8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x112ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112EC8u;
        // 0x112ecc: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112ec8) {
            ctx->pc = 0x112EECu;
            return;
        }
    }
    ctx->pc = 0x112ED0u;
    // 0x112ed0: 0x8fa50248  lw          $a1, 0x248($sp)
    ctx->pc = 0x112ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x112ed4: 0xc045284  jal         func_114A10
    ctx->pc = 0x112ED4u;
    SET_GPR_U32(ctx, 31, 0x112EDCu);
    ctx->pc = 0x112ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112ED4u;
    // 0x112ed8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114A10u, 0x112ED4u, 0x112EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112EDCu;
label_112edc:
    // 0x112edc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x112edcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112ee0: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x112EE0u;
    SET_GPR_U32(ctx, 31, 0x112EE8u);
    ctx->pc = 0x112EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112EE0u;
    // 0x112ee4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x112EE0u, 0x112EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112EE8u;
label_112ee8:
    // 0x112ee8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x112ee8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x112eecu;
}
