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

// Function: cvt
// Address: 0x11c8a0 - 0x11ca50
void cvt_0x11c8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cvt_0x11c8a0");
#endif

    switch (ctx->pc) {
        case 0x11c934u: goto label_11c934;
        case 0x11c960u: goto label_11c960;
        case 0x11c9a8u: goto label_11c9a8;
        case 0x11c9ccu: goto label_11c9cc;
        case 0x11c9e8u: goto label_11c9e8;
        default: break;
    }

    ctx->pc = 0x11c8a0u;

    // 0x11c8a0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x11c8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x11c8a4: 0x24020066  addiu       $v0, $zero, 0x66
    ctx->pc = 0x11c8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x11c8a8: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x11c8a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x11c8ac: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x11c8acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x11c8b0: 0x160f02d  daddu       $fp, $t3, $zero
    ctx->pc = 0x11c8b0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c8b4: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x11c8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x11c8b8: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x11c8b8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c8bc: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x11c8bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x11c8c0: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x11c8c0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c8c4: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x11c8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x11c8c8: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x11c8c8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c8cc: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x11c8ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x11c8d0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x11c8d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c8d4: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x11c8d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x11c8d8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x11c8d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c8dc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x11c8dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x11c8e0: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x11c8e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c8e4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x11c8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x11c8e8: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x11c8e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c8ec: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11C8ECu;
    {
        const bool branch_taken_0x11c8ec = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x11C8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C8ECu;
        // 0x11c8f0: 0xffb30040  sd          $s3, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c8ec) {
            ctx->pc = 0x11C8FCu;
            goto label_11c8fc;
        }
    }
    ctx->pc = 0x11C8F4u;
    // 0x11c8f4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x11C8F4u;
    {
        const bool branch_taken_0x11c8f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C8F4u;
        // 0x11c8f8: 0x24130003  addiu       $s3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c8f4) {
            ctx->pc = 0x11C918u;
            goto label_11c918;
        }
    }
    ctx->pc = 0x11C8FCu;
label_11c8fc:
    // 0x11c8fc: 0x24020065  addiu       $v0, $zero, 0x65
    ctx->pc = 0x11c8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x11c900: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11C900u;
    {
        const bool branch_taken_0x11c900 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x11C904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C900u;
        // 0x11c904: 0x24020045  addiu       $v0, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c900) {
            ctx->pc = 0x11C910u;
            goto label_11c910;
        }
    }
    ctx->pc = 0x11C908u;
    // 0x11c908: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11C908u;
    {
        const bool branch_taken_0x11c908 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x11C90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C908u;
        // 0x11c90c: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c908) {
            ctx->pc = 0x11C918u;
            goto label_11c918;
        }
    }
    ctx->pc = 0x11C910u;
label_11c910:
    // 0x11c910: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x11c910u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x11c914: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x11c914u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_11c918:
    // 0x11c918: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x11c918u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c91c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x11c91cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x11c920: 0x4430007  bgezl       $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11C920u;
    {
        const bool branch_taken_0x11c920 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x11c920) {
            ctx->pc = 0x11C924u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11C920u;
            // 0x11c924: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11C940u;
            goto label_11c940;
        }
    }
    ctx->pc = 0x11C928u;
    // 0x11c928: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11c928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c92c: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x11C92Cu;
    SET_GPR_U32(ctx, 31, 0x11C934u);
    ctx->pc = 0x11C930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C92Cu;
    // 0x11c930: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x11C92Cu, 0x11C934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C934u;
label_11c934:
    // 0x11c934: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x11c934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x11c938: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x11c938u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c93c: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x11c93cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
label_11c940:
    // 0x11c940: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x11c940u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c944: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x11c944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c948: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11c948u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c94c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x11c94cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c950: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x11c950u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c954: 0x3a0482d  daddu       $t1, $sp, $zero
    ctx->pc = 0x11c954u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c958: 0xc045748  jal         func_115D20
    ctx->pc = 0x11C958u;
    SET_GPR_U32(ctx, 31, 0x11C960u);
    ctx->pc = 0x11C95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C958u;
    // 0x11c95c: 0x37aa0004  ori         $t2, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x115D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115D20u, 0x11C958u, 0x11C960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C960u;
label_11c960:
    // 0x11c960: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x11c960u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c964: 0x24020067  addiu       $v0, $zero, 0x67
    ctx->pc = 0x11c964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
    // 0x11c968: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11C968u;
    {
        const bool branch_taken_0x11c968 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x11C96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C968u;
        // 0x11c96c: 0x24020047  addiu       $v0, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c968) {
            ctx->pc = 0x11C978u;
            goto label_11c978;
        }
    }
    ctx->pc = 0x11C970u;
    // 0x11c970: 0x16220004  bne         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11C970u;
    {
        const bool branch_taken_0x11c970 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x11C974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C970u;
        // 0x11c974: 0x24020066  addiu       $v0, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c970) {
            ctx->pc = 0x11C984u;
            goto label_11c984;
        }
    }
    ctx->pc = 0x11C978u;
label_11c978:
    // 0x11c978: 0x32e20001  andi        $v0, $s7, 0x1
    ctx->pc = 0x11c978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
    // 0x11c97c: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x11C97Cu;
    {
        const bool branch_taken_0x11c97c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C97Cu;
        // 0x11c980: 0x24020066  addiu       $v0, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c97c) {
            ctx->pc = 0x11CA10u;
            goto label_11ca10;
        }
    }
    ctx->pc = 0x11C984u;
label_11c984:
    // 0x11c984: 0x1622000e  bne         $s1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x11C984u;
    {
        const bool branch_taken_0x11c984 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x11C988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C984u;
        // 0x11c988: 0x2748021  addu        $s0, $s3, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c984) {
            ctx->pc = 0x11C9C0u;
            goto label_11c9c0;
        }
    }
    ctx->pc = 0x11C98Cu;
    // 0x11c98c: 0x82630000  lb          $v1, 0x0($s3)
    ctx->pc = 0x11c98cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x11c990: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x11c990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x11c994: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11C994u;
    {
        const bool branch_taken_0x11c994 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x11c994) {
            ctx->pc = 0x11C998u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11C994u;
            // 0x11c998: 0x8ea20000  lw          $v0, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11C9BCu;
            goto label_11c9bc;
        }
    }
    ctx->pc = 0x11C99Cu;
    // 0x11c99c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11c99cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c9a0: 0xc047c3a  jal         func_11F0E8
    ctx->pc = 0x11C9A0u;
    SET_GPR_U32(ctx, 31, 0x11C9A8u);
    ctx->pc = 0x11C9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C9A0u;
    // 0x11c9a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F0E8u, 0x11C9A0u, 0x11C9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C9A8u;
label_11c9a8:
    // 0x11c9a8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11C9A8u;
    {
        const bool branch_taken_0x11c9a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C9A8u;
        // 0x11c9ac: 0x141023  negu        $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c9a8) {
            ctx->pc = 0x11C9B8u;
            goto label_11c9b8;
        }
    }
    ctx->pc = 0x11C9B0u;
    // 0x11c9b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11c9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11c9b4: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x11c9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_11c9b8:
    // 0x11c9b8: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x11c9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_11c9bc:
    // 0x11c9bc: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x11c9bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_11c9c0:
    // 0x11c9c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11c9c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c9c4: 0xc047c3a  jal         func_11F0E8
    ctx->pc = 0x11C9C4u;
    SET_GPR_U32(ctx, 31, 0x11C9CCu);
    ctx->pc = 0x11C9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C9C4u;
    // 0x11c9c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F0E8u, 0x11C9C4u, 0x11C9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C9CCu;
label_11c9cc:
    // 0x11c9cc: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x11C9CCu;
    {
        const bool branch_taken_0x11c9cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c9cc) {
            ctx->pc = 0x11C9D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11C9CCu;
            // 0x11c9d0: 0xafb00004  sw          $s0, 0x4($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11C9D4u;
            goto label_11c9d4;
        }
    }
    ctx->pc = 0x11C9D4u;
label_11c9d4:
    // 0x11c9d4: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x11c9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x11c9d8: 0x70102b  sltu        $v0, $v1, $s0
    ctx->pc = 0x11c9d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x11c9dc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x11C9DCu;
    {
        const bool branch_taken_0x11c9dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C9DCu;
        // 0x11c9e0: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c9dc) {
            ctx->pc = 0x11CA14u;
            goto label_11ca14;
        }
    }
    ctx->pc = 0x11C9E4u;
    // 0x11c9e4: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x11c9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_11c9e8:
    // 0x11c9e8: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x11c9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x11c9ec: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x11c9ecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x11c9f0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x11c9f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c9f4: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x11c9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x11c9f8: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x11c9f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c9fc: 0x70102b  sltu        $v0, $v1, $s0
    ctx->pc = 0x11c9fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x11ca00: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x11CA00u;
    {
        const bool branch_taken_0x11ca00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11ca00) {
            ctx->pc = 0x11C9E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11c9e8;
        }
    }
    ctx->pc = 0x11CA08u;
    // 0x11ca08: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11CA08u;
    {
        const bool branch_taken_0x11ca08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CA08u;
        // 0x11ca0c: 0x731823  subu        $v1, $v1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ca08) {
            ctx->pc = 0x11CA18u;
            goto label_11ca18;
        }
    }
    ctx->pc = 0x11CA10u;
label_11ca10:
    // 0x11ca10: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x11ca10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_11ca14:
    // 0x11ca14: 0x731823  subu        $v1, $v1, $s3
    ctx->pc = 0x11ca14u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_11ca18:
    // 0x11ca18: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x11ca18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ca1c: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x11ca1cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
    // 0x11ca20: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x11ca20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x11ca24: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x11ca24u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x11ca28: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x11ca28u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x11ca2c: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x11ca2cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11ca30: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x11ca30u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11ca34: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x11ca34u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11ca38: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x11ca38u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11ca3c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x11ca3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11ca40: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x11ca40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11ca44: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x11ca44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11ca48: 0x3e00008  jr          $ra
    ctx->pc = 0x11CA48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11CA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CA48u;
        // 0x11ca4c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11CA48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11CA50u;
}
