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

// Function: entry_00119f40
// Address: 0x119f40 - 0x119fe4
void entry_00119f40_0x119f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119f40_0x119f40");
#endif

    switch (ctx->pc) {
        case 0x119facu: goto label_119fac;
        case 0x119fbcu: goto label_119fbc;
        case 0x119fd0u: goto label_119fd0;
        default: break;
    }

    ctx->pc = 0x119f40u;

label_119f40:
    // 0x119f40: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x119f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_119f44:
    // 0x119f44: 0x31042  srl         $v0, $v1, 1
    ctx->pc = 0x119f44u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_119f48:
    // 0x119f48: 0x532018  mult        $a0, $v0, $s3
    ctx->pc = 0x119f48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_119f4c:
    // 0x119f4c: 0x2c630008  sltiu       $v1, $v1, 0x8
    ctx->pc = 0x119f4cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_119f50:
    // 0x119f50: 0x14600092  bnez        $v1, . + 4 + (0x92 << 2)
label_119f54:
    if (ctx->pc == 0x119F54u) {
        ctx->pc = 0x119F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119F50u;
        // 0x119f54: 0x968021  addu        $s0, $a0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119F58u;
        goto label_119f58;
    }
    ctx->pc = 0x119F50u;
    {
        const bool branch_taken_0x119f50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x119F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119F50u;
        // 0x119f54: 0x968021  addu        $s0, $a0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119f50) {
            ctx->pc = 0x11A19Cu;
            return;
        }
    }
    ctx->pc = 0x119F58u;
label_119f58:
    // 0x119f58: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x119f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_119f5c:
    // 0x119f5c: 0x2c0882d  daddu       $s1, $s6, $zero
    ctx->pc = 0x119f5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_119f60:
    // 0x119f60: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x119f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_119f64:
    // 0x119f64: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x119f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_119f68:
    // 0x119f68: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x119f68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
label_119f6c:
    // 0x119f6c: 0x2c620029  sltiu       $v0, $v1, 0x29
    ctx->pc = 0x119f6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)41) ? 1 : 0);
label_119f70:
    // 0x119f70: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x119f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_119f74:
    // 0x119f74: 0x731818  mult        $v1, $v1, $s3
    ctx->pc = 0x119f74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_119f78:
    // 0x119f78: 0x14400069  bnez        $v0, . + 4 + (0x69 << 2)
label_119f7c:
    if (ctx->pc == 0x119F7Cu) {
        ctx->pc = 0x119F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119F78u;
        // 0x119f7c: 0x76a821  addu        $s5, $v1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119F80u;
        goto label_119f80;
    }
    ctx->pc = 0x119F78u;
    {
        const bool branch_taken_0x119f78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x119F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119F78u;
        // 0x119f7c: 0x76a821  addu        $s5, $v1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119f78) {
            ctx->pc = 0x11A120u;
            return;
        }
    }
    ctx->pc = 0x119F80u;
label_119f80:
    // 0x119f80: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x119f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_119f84:
    // 0x119f84: 0x410c2  srl         $v0, $a0, 3
    ctx->pc = 0x119f84u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 3));
label_119f88:
    // 0x119f88: 0x531818  mult        $v1, $v0, $s3
    ctx->pc = 0x119f88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_119f8c:
    // 0x119f8c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x119f8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_119f90:
    // 0x119f90: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x119f90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_119f94:
    // 0x119f94: 0x2c38821  addu        $s1, $s6, $v1
    ctx->pc = 0x119f94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
label_119f98:
    // 0x119f98: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x119f98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
label_119f9c:
    // 0x119f9c: 0x569021  addu        $s2, $v0, $s6
    ctx->pc = 0x119f9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_119fa0:
    // 0x119fa0: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x119fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_119fa4:
    // 0x119fa4: 0x2e0f809  jalr        $s7
label_119fa8:
    if (ctx->pc == 0x119FA8u) {
        ctx->pc = 0x119FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119FA4u;
        // 0x119fa8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119FACu;
        goto label_119fac;
    }
    ctx->pc = 0x119FA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x119FACu);
        ctx->pc = 0x119FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119FA4u;
        // 0x119fa8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119FA4u, 0x119FACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x119FACu;
label_119fac:
    // 0x119fac: 0x441000d  bgez        $v0, . + 4 + (0xD << 2)
label_119fb0:
    if (ctx->pc == 0x119FB0u) {
        ctx->pc = 0x119FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119FACu;
        // 0x119fb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119FB4u;
        goto label_119fb4;
    }
    ctx->pc = 0x119FACu;
    {
        const bool branch_taken_0x119fac = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x119FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119FACu;
        // 0x119fb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119fac) {
            ctx->pc = 0x119FE4u;
            return;
        }
    }
    ctx->pc = 0x119FB4u;
label_119fb4:
    // 0x119fb4: 0x2e0f809  jalr        $s7
label_119fb8:
    if (ctx->pc == 0x119FB8u) {
        ctx->pc = 0x119FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119FB4u;
        // 0x119fb8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119FBCu;
        goto label_119fbc;
    }
    ctx->pc = 0x119FB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x119FBCu);
        ctx->pc = 0x119FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119FB4u;
        // 0x119fb8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119FB4u, 0x119FBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x119FBCu;
label_119fbc:
    // 0x119fbc: 0x4420014  bltzl       $v0, . + 4 + (0x14 << 2)
label_119fc0:
    if (ctx->pc == 0x119FC0u) {
        ctx->pc = 0x119FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119FBCu;
        // 0x119fc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119FC4u;
        goto label_119fc4;
    }
    ctx->pc = 0x119FBCu;
    {
        const bool branch_taken_0x119fbc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x119fbc) {
            ctx->pc = 0x119FC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x119FBCu;
            // 0x119fc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11A010u;
            return;
        }
    }
    ctx->pc = 0x119FC4u;
label_119fc4:
    // 0x119fc4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x119fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_119fc8:
    // 0x119fc8: 0x2e0f809  jalr        $s7
label_119fcc:
    if (ctx->pc == 0x119FCCu) {
        ctx->pc = 0x119FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119FC8u;
        // 0x119fcc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119FD0u;
        goto label_119fd0;
    }
    ctx->pc = 0x119FC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x119FD0u);
        ctx->pc = 0x119FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119FC8u;
        // 0x119fcc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119FC8u, 0x119FD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x119FD0u;
label_119fd0:
    // 0x119fd0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x119fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_119fd4:
    // 0x119fd4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x119fd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_119fd8:
    // 0x119fd8: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x119fd8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_119fdc:
    // 0x119fdc: 0x1000000c  b           . + 4 + (0xC << 2)
label_119fe0:
    if (ctx->pc == 0x119FE0u) {
        ctx->pc = 0x119FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119FDCu;
        // 0x119fe0: 0x2c3200b  movn        $a0, $s6, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119FE4u;
        goto label_fallthrough_0x119fdc;
    }
    ctx->pc = 0x119FDCu;
    {
        const bool branch_taken_0x119fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119FDCu;
        // 0x119fe0: 0x2c3200b  movn        $a0, $s6, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119fdc) {
            ctx->pc = 0x11A010u;
            return;
        }
    }
label_fallthrough_0x119fdc:
    ctx->pc = 0x119FE4u;
}
