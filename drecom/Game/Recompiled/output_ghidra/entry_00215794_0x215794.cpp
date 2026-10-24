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

// Function: entry_00215794
// Address: 0x215794 - 0x215820
void entry_00215794_0x215794(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00215794_0x215794");
#endif

    switch (ctx->pc) {
        case 0x2157c0u: goto label_2157c0;
        case 0x215808u: goto label_215808;
        case 0x215818u: goto label_215818;
        default: break;
    }

    ctx->pc = 0x215794u;

    // 0x215794: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x215794u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x215798: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x215798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x21579c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x21579cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2157a0: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2157a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2157a4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2157a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2157a8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2157a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2157ac: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x2157acu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2157b0: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2157b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2157b4: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x2157b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2157b8: 0xc08554c  jal         func_215530
    ctx->pc = 0x2157B8u;
    SET_GPR_U32(ctx, 31, 0x2157C0u);
    ctx->pc = 0x2157BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2157B8u;
    // 0x2157bc: 0x2484bc00  addiu       $a0, $a0, -0x4400 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215530u, 0x2157B8u, 0x2157C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2157C0u;
label_2157c0:
    // 0x2157c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2157c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2157c4: 0x1200003b  beqz        $s0, . + 4 + (0x3B << 2)
    ctx->pc = 0x2157C4u;
    {
        const bool branch_taken_0x2157c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2157C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2157C4u;
        // 0x2157c8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2157c4) {
            ctx->pc = 0x2158B4u;
            return;
        }
    }
    ctx->pc = 0x2157CCu;
    // 0x2157cc: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x2157ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2157d0: 0x32430001  andi        $v1, $s2, 0x1
    ctx->pc = 0x2157d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x2157d4: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x2157d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x2157d8: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2157d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x2157dc: 0xae130020  sw          $s3, 0x20($s0)
    ctx->pc = 0x2157dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 19));
    // 0x2157e0: 0xae140024  sw          $s4, 0x24($s0)
    ctx->pc = 0x2157e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 20));
    // 0x2157e4: 0xae150028  sw          $s5, 0x28($s0)
    ctx->pc = 0x2157e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 21));
    // 0x2157e8: 0xae100014  sw          $s0, 0x14($s0)
    ctx->pc = 0x2157e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 16));
    // 0x2157ec: 0x14600022  bnez        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x2157ECu;
    {
        const bool branch_taken_0x2157ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2157F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2157ECu;
        // 0x2157f0: 0xae11001c  sw          $s1, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2157ec) {
            ctx->pc = 0x215878u;
            return;
        }
    }
    ctx->pc = 0x2157F4u;
    // 0x2157f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2157f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2157f8: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2157f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x2157fc: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2157fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x215800: 0xc084a88  jal         func_212A20
    ctx->pc = 0x215800u;
    SET_GPR_U32(ctx, 31, 0x215808u);
    ctx->pc = 0x215804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215800u;
    // 0x215804: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212A20u;
    {
        ctx->pc = 0x215808u;
        ps2_syscalls::CreateSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x215808u) { return; }
    ctx->pc = 0x215808u;
label_215808:
    // 0x215808: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x215808u;
    {
        const bool branch_taken_0x215808 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x21580Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215808u;
        // 0x21580c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215808) {
            ctx->pc = 0x215820u;
            return;
        }
    }
    ctx->pc = 0x215810u;
    // 0x215810: 0xc085576  jal         func_2155D8
    ctx->pc = 0x215810u;
    SET_GPR_U32(ctx, 31, 0x215818u);
    ctx->pc = 0x215814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215810u;
    // 0x215814: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2155D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2155D8u, 0x215810u, 0x215818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215818u;
label_215818:
    // 0x215818: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x215818u;
    {
        const bool branch_taken_0x215818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21581Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215818u;
        // 0x21581c: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215818) {
            ctx->pc = 0x2158B4u;
            return;
        }
    }
    ctx->pc = 0x215820u;
}
