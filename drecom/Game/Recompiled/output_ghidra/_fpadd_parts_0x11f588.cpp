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

// Function: _fpadd_parts
// Address: 0x11f588 - 0x11f7bc
void _fpadd_parts_0x11f588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_fpadd_parts_0x11f588");
#endif

    switch (ctx->pc) {
        case 0x11f59cu: goto label_11f59c;
        case 0x11f5b0u: goto label_11f5b0;
        case 0x11f604u: goto label_11f604;
        case 0x11f670u: goto label_11f670;
        case 0x11f6a8u: goto label_11f6a8;
        case 0x11f750u: goto label_11f750;
        default: break;
    }

    ctx->pc = 0x11f588u;

    // 0x11f588: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x11f588u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f58c: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x11f58cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x11f590: 0x2c820002  sltiu       $v0, $a0, 0x2
    ctx->pc = 0x11f590u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x11f594: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x11F594u;
    {
        const bool branch_taken_0x11f594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f594) {
            ctx->pc = 0x11F598u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11F594u;
            // 0x11f598: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11F5A4u;
            goto label_11f5a4;
        }
    }
    ctx->pc = 0x11F59Cu;
label_11f59c:
    // 0x11f59c: 0x3e00008  jr          $ra
    ctx->pc = 0x11F59Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F59Cu;
        // 0x11f5a0: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F59Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11F5A4u;
label_11f5a4:
    // 0x11f5a4: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x11f5a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x11f5a8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11F5A8u;
    {
        const bool branch_taken_0x11f5a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F5A8u;
        // 0x11f5ac: 0x38820004  xori        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f5a8) {
            ctx->pc = 0x11F5B8u;
            goto label_11f5b8;
        }
    }
    ctx->pc = 0x11F5B0u;
label_11f5b0:
    // 0x11f5b0: 0x3e00008  jr          $ra
    ctx->pc = 0x11F5B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F5B0u;
        // 0x11f5b4: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F5B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11F5B8u;
label_11f5b8:
    // 0x11f5b8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11F5B8u;
    {
        const bool branch_taken_0x11f5b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F5B8u;
        // 0x11f5bc: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f5b8) {
            ctx->pc = 0x11F5E0u;
            goto label_11f5e0;
        }
    }
    ctx->pc = 0x11F5C0u;
    // 0x11f5c0: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x11F5C0u;
    {
        const bool branch_taken_0x11f5c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11f5c0) {
            ctx->pc = 0x11F59Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11f59c;
        }
    }
    ctx->pc = 0x11F5C8u;
    // 0x11f5c8: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x11f5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x11f5cc: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x11f5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x11f5d0: 0x1043fff2  beq         $v0, $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x11F5D0u;
    {
        const bool branch_taken_0x11f5d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x11F5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F5D0u;
        // 0x11f5d4: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f5d0) {
            ctx->pc = 0x11F59Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11f59c;
        }
    }
    ctx->pc = 0x11F5D8u;
    // 0x11f5d8: 0x3e00008  jr          $ra
    ctx->pc = 0x11F5D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F5D8u;
        // 0x11f5dc: 0x24426818  addiu       $v0, $v0, 0x6818 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26648));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F5D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11F5E0u;
label_11f5e0:
    // 0x11f5e0: 0x1040fff3  beqz        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x11F5E0u;
    {
        const bool branch_taken_0x11f5e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F5E0u;
        // 0x11f5e4: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f5e0) {
            ctx->pc = 0x11F5B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11f5b0;
        }
    }
    ctx->pc = 0x11F5E8u;
    // 0x11f5e8: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x11F5E8u;
    {
        const bool branch_taken_0x11f5e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F5E8u;
        // 0x11f5ec: 0x38820002  xori        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f5e8) {
            ctx->pc = 0x11F630u;
            goto label_11f630;
        }
    }
    ctx->pc = 0x11F5F0u;
    // 0x11f5f0: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x11F5F0u;
    {
        const bool branch_taken_0x11f5f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11f5f0) {
            ctx->pc = 0x11F59Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11f59c;
        }
    }
    ctx->pc = 0x11F5F8u;
    // 0x11f5f8: 0x69220007  ldl         $v0, 0x7($t1)
    ctx->pc = 0x11f5f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x11f5fc: 0x6d220000  ldr         $v0, 0x0($t1)
    ctx->pc = 0x11f5fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x11f600: 0x6923000f  ldl         $v1, 0xF($t1)
    ctx->pc = 0x11f600u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_11f604:
    // 0x11f604: 0x6d230008  ldr         $v1, 0x8($t1)
    ctx->pc = 0x11f604u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x11f608: 0xb0c20007  sdl         $v0, 0x7($a2)
    ctx->pc = 0x11f608u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11f60c: 0xb4c20000  sdr         $v0, 0x0($a2)
    ctx->pc = 0x11f60cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11f610: 0xb0c3000f  sdl         $v1, 0xF($a2)
    ctx->pc = 0x11f610u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11f614: 0xb4c30008  sdr         $v1, 0x8($a2)
    ctx->pc = 0x11f614u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11f618: 0x8d230004  lw          $v1, 0x4($t1)
    ctx->pc = 0x11f618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x11f61c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x11f61cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f620: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x11f620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x11f624: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x11f624u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x11f628: 0x3e00008  jr          $ra
    ctx->pc = 0x11F628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F628u;
        // 0x11f62c: 0xacc30004  sw          $v1, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11F630u;
label_11f630:
    // 0x11f630: 0x1040ffdf  beqz        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x11F630u;
    {
        const bool branch_taken_0x11f630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F630u;
        // 0x11f634: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f630) {
            ctx->pc = 0x11F5B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11f5b0;
        }
    }
    ctx->pc = 0x11F638u;
    // 0x11f638: 0x8d270008  lw          $a3, 0x8($t1)
    ctx->pc = 0x11f638u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x11f63c: 0x8ca80008  lw          $t0, 0x8($a1)
    ctx->pc = 0x11f63cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x11f640: 0x8d2b000c  lw          $t3, 0xC($t1)
    ctx->pc = 0x11f640u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x11f644: 0xe81823  subu        $v1, $a3, $t0
    ctx->pc = 0x11f644u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x11f648: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x11f648u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x11f64c: 0x32023  negu        $a0, $v1
    ctx->pc = 0x11f64cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x11f650: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x11f650u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x11f654: 0x28630020  slti        $v1, $v1, 0x20
    ctx->pc = 0x11f654u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x11f658: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x11F658u;
    {
        const bool branch_taken_0x11f658 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F658u;
        // 0x11f65c: 0x8caa000c  lw          $t2, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f658) {
            ctx->pc = 0x11F6CCu;
            goto label_11f6cc;
        }
    }
    ctx->pc = 0x11F660u;
    // 0x11f660: 0x107102a  slt         $v0, $t0, $a3
    ctx->pc = 0x11f660u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x11f664: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x11F664u;
    {
        const bool branch_taken_0x11f664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F664u;
        // 0x11f668: 0x8d290004  lw          $t1, 0x4($t1) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f664) {
            ctx->pc = 0x11F694u;
            goto label_11f694;
        }
    }
    ctx->pc = 0x11F66Cu;
    // 0x11f66c: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x11f66cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_11f670:
    // 0x11f670: 0xa1042  srl         $v0, $t2, 1
    ctx->pc = 0x11f670u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 10), 1));
    // 0x11f674: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x11f674u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x11f678: 0x31430001  andi        $v1, $t2, 0x1
    ctx->pc = 0x11f678u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x11f67c: 0x107202a  slt         $a0, $t0, $a3
    ctx->pc = 0x11f67cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x11f680: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x11f680u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x11f684: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11F684u;
    {
        const bool branch_taken_0x11f684 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x11f684) {
            ctx->pc = 0x11F670u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11f670;
        }
    }
    ctx->pc = 0x11F68Cu;
    // 0x11f68c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11F68Cu;
    {
        const bool branch_taken_0x11f68c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F68Cu;
        // 0x11f690: 0xe8102a  slt         $v0, $a3, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f68c) {
            ctx->pc = 0x11F69Cu;
            goto label_11f69c;
        }
    }
    ctx->pc = 0x11F694u;
label_11f694:
    // 0x11f694: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x11f694u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x11f698: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x11f698u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_11f69c:
    // 0x11f69c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x11F69Cu;
    {
        const bool branch_taken_0x11f69c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f69c) {
            ctx->pc = 0x11F6F0u;
            goto label_11f6f0;
        }
    }
    ctx->pc = 0x11F6A4u;
    // 0x11f6a4: 0x1073823  subu        $a3, $t0, $a3
    ctx->pc = 0x11f6a4u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_11f6a8:
    // 0x11f6a8: 0xb1842  srl         $v1, $t3, 1
    ctx->pc = 0x11f6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 11), 1));
    // 0x11f6ac: 0x31620001  andi        $v0, $t3, 0x1
    ctx->pc = 0x11f6acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x11f6b0: 0x435825  or          $t3, $v0, $v1
    ctx->pc = 0x11f6b0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x11f6b4: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x11f6b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x11f6b8: 0x0  nop
    ctx->pc = 0x11f6b8u;
    // NOP
    // 0x11f6bc: 0x14e0fffa  bnez        $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11F6BCu;
    {
        const bool branch_taken_0x11f6bc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x11f6bc) {
            ctx->pc = 0x11F6A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11f6a8;
        }
    }
    ctx->pc = 0x11F6C4u;
    // 0x11f6c4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x11F6C4u;
    {
        const bool branch_taken_0x11f6c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F6C4u;
        // 0x11f6c8: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f6c4) {
            ctx->pc = 0x11F6F0u;
            goto label_11f6f0;
        }
    }
    ctx->pc = 0x11F6CCu;
label_11f6cc:
    // 0x11f6cc: 0x107102a  slt         $v0, $t0, $a3
    ctx->pc = 0x11f6ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x11f6d0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11F6D0u;
    {
        const bool branch_taken_0x11f6d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F6D0u;
        // 0x11f6d4: 0x8d290004  lw          $t1, 0x4($t1) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f6d0) {
            ctx->pc = 0x11F6E4u;
            goto label_11f6e4;
        }
    }
    ctx->pc = 0x11F6D8u;
    // 0x11f6d8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x11f6d8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f6dc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11F6DCu;
    {
        const bool branch_taken_0x11f6dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F6DCu;
        // 0x11f6e0: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f6dc) {
            ctx->pc = 0x11F6F0u;
            goto label_11f6f0;
        }
    }
    ctx->pc = 0x11F6E4u;
label_11f6e4:
    // 0x11f6e4: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x11f6e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f6e8: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x11f6e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x11f6ec: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x11f6ecu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11f6f0:
    // 0x11f6f0: 0x11250022  beq         $t1, $a1, . + 4 + (0x22 << 2)
    ctx->pc = 0x11F6F0u;
    {
        const bool branch_taken_0x11f6f0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 5));
        ctx->pc = 0x11F6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F6F0u;
        // 0x11f6f4: 0x16a1021  addu        $v0, $t3, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f6f0) {
            ctx->pc = 0x11F77Cu;
            goto label_11f77c;
        }
    }
    ctx->pc = 0x11F6F8u;
    // 0x11f6f8: 0x15200002  bnez        $t1, . + 4 + (0x2 << 2)
    ctx->pc = 0x11F6F8u;
    {
        const bool branch_taken_0x11f6f8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F6F8u;
        // 0x11f6fc: 0x14b1023  subu        $v0, $t2, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f6f8) {
            ctx->pc = 0x11F704u;
            goto label_11f704;
        }
    }
    ctx->pc = 0x11F700u;
    // 0x11f700: 0x16a1023  subu        $v0, $t3, $t2
    ctx->pc = 0x11f700u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
label_11f704:
    // 0x11f704: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11F704u;
    {
        const bool branch_taken_0x11f704 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x11F708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F704u;
        // 0x11f708: 0x21823  negu        $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f704) {
            ctx->pc = 0x11F71Cu;
            goto label_11f71c;
        }
    }
    ctx->pc = 0x11F70Cu;
    // 0x11f70c: 0xacc70008  sw          $a3, 0x8($a2)
    ctx->pc = 0x11f70cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x11f710: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x11f710u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x11f714: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x11F714u;
    {
        const bool branch_taken_0x11f714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F714u;
        // 0x11f718: 0xacc00004  sw          $zero, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f714) {
            ctx->pc = 0x11F72Cu;
            goto label_11f72c;
        }
    }
    ctx->pc = 0x11F71Cu;
label_11f71c:
    // 0x11f71c: 0xacc70008  sw          $a3, 0x8($a2)
    ctx->pc = 0x11f71cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x11f720: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11f720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11f724: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x11f724u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x11f728: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x11f728u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_11f72c:
    // 0x11f72c: 0x8cc5000c  lw          $a1, 0xC($a2)
    ctx->pc = 0x11f72cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x11f730: 0x3c023fff  lui         $v0, 0x3FFF
    ctx->pc = 0x11f730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16383 << 16));
    // 0x11f734: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x11f734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x11f738: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x11f738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x11f73c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x11f73cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x11f740: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x11F740u;
    {
        const bool branch_taken_0x11f740 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F740u;
        // 0x11f744: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f740) {
            ctx->pc = 0x11F78Cu;
            goto label_11f78c;
        }
    }
    ctx->pc = 0x11F748u;
    // 0x11f748: 0x3c053fff  lui         $a1, 0x3FFF
    ctx->pc = 0x11f748u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16383 << 16));
    // 0x11f74c: 0x34a5fffe  ori         $a1, $a1, 0xFFFE
    ctx->pc = 0x11f74cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65534);
label_11f750:
    // 0x11f750: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x11f750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x11f754: 0x72040  sll         $a0, $a3, 1
    ctx->pc = 0x11f754u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x11f758: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x11f758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x11f75c: 0xacc4000c  sw          $a0, 0xC($a2)
    ctx->pc = 0x11f75cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 4));
    // 0x11f760: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x11f760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x11f764: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x11f764u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x11f768: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x11f768u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x11f76c: 0x1060fff8  beqz        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x11F76Cu;
    {
        const bool branch_taken_0x11f76c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F76Cu;
        // 0x11f770: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f76c) {
            ctx->pc = 0x11F750u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11f750;
        }
    }
    ctx->pc = 0x11F774u;
    // 0x11f774: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x11F774u;
    {
        const bool branch_taken_0x11f774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F774u;
        // 0x11f778: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f774) {
            ctx->pc = 0x11F78Cu;
            goto label_11f78c;
        }
    }
    ctx->pc = 0x11F77Cu;
label_11f77c:
    // 0x11f77c: 0xacc90004  sw          $t1, 0x4($a2)
    ctx->pc = 0x11f77cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 9));
    // 0x11f780: 0xacc70008  sw          $a3, 0x8($a2)
    ctx->pc = 0x11f780u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x11f784: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11f784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f788: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x11f788u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
label_11f78c:
    // 0x11f78c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x11f78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11f790: 0x4a10008  bgez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x11F790u;
    {
        const bool branch_taken_0x11f790 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x11F794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F790u;
        // 0x11f794: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f790) {
            ctx->pc = 0x11F7B4u;
            goto label_11f7b4;
        }
    }
    ctx->pc = 0x11F798u;
    // 0x11f798: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x11f798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x11f79c: 0x52042  srl         $a0, $a1, 1
    ctx->pc = 0x11f79cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x11f7a0: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x11f7a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x11f7a4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x11f7a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x11f7a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11f7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11f7ac: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x11f7acu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x11f7b0: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x11f7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
label_11f7b4:
    // 0x11f7b4: 0x3e00008  jr          $ra
    ctx->pc = 0x11F7B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F7B4u;
        // 0x11f7b8: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F7B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11F7BCu;
}
