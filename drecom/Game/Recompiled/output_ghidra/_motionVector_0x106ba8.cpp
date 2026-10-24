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

// Function: _motionVector
// Address: 0x106ba8 - 0x106ce4
void _motionVector_0x106ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_motionVector_0x106ba8");
#endif

    switch (ctx->pc) {
        case 0x106bf4u: goto label_106bf4;
        case 0x106c0cu: goto label_106c0c;
        case 0x106c2cu: goto label_106c2c;
        case 0x106c3cu: goto label_106c3c;
        case 0x106c48u: goto label_106c48;
        case 0x106c60u: goto label_106c60;
        case 0x106c90u: goto label_106c90;
        case 0x106cb4u: goto label_106cb4;
        default: break;
    }

    ctx->pc = 0x106ba8u;

    // 0x106ba8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x106ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x106bac: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x106bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x106bb0: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x106bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x106bb4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x106bb4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106bb8: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x106bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x106bbc: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x106bbcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106bc0: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x106bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x106bc4: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x106bc4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106bc8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x106bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x106bcc: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x106bccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106bd0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x106bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x106bd4: 0x140a02d  daddu       $s4, $t2, $zero
    ctx->pc = 0x106bd4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106bd8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x106bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x106bdc: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x106bdcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106be0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x106be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x106be4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x106be4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106be8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x106be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x106bec: 0xc041b9c  jal         func_106E70
    ctx->pc = 0x106BECu;
    SET_GPR_U32(ctx, 31, 0x106BF4u);
    ctx->pc = 0x106BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106BECu;
    // 0x106bf0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E70u, 0x106BECu, 0x106BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106BF4u;
label_106bf4:
    // 0x106bf4: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x106BF4u;
    {
        const bool branch_taken_0x106bf4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x106BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106BF4u;
        // 0x106bf8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106bf4) {
            ctx->pc = 0x106C14u;
            goto label_106c14;
        }
    }
    ctx->pc = 0x106BFCu;
    // 0x106bfc: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x106BFCu;
    {
        const bool branch_taken_0x106bfc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x106C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106BFCu;
        // 0x106c00: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106bfc) {
            ctx->pc = 0x106C18u;
            goto label_106c18;
        }
    }
    ctx->pc = 0x106C04u;
    // 0x106c04: 0xc041c9e  jal         func_107278
    ctx->pc = 0x106C04u;
    SET_GPR_U32(ctx, 31, 0x106C0Cu);
    ctx->pc = 0x106C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106C04u;
    // 0x106c08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x106C04u, 0x106C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106C0Cu;
label_106c0c:
    // 0x106c0c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x106C0Cu;
    {
        const bool branch_taken_0x106c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106C0Cu;
        // 0x106c10: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106c0c) {
            ctx->pc = 0x106C18u;
            goto label_106c18;
        }
    }
    ctx->pc = 0x106C14u;
label_106c14:
    // 0x106c14: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x106c14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_106c18:
    // 0x106c18: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x106c18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106c1c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x106c1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106c20: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x106c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106c24: 0xc041a68  jal         func_1069A0
    ctx->pc = 0x106C24u;
    SET_GPR_U32(ctx, 31, 0x106C2Cu);
    ctx->pc = 0x106C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106C24u;
    // 0x106c28: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1069A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1069A0u, 0x106C24u, 0x106C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106C2Cu;
label_106c2c:
    // 0x106c2c: 0x12c00004  beqz        $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x106C2Cu;
    {
        const bool branch_taken_0x106c2c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x106c2c) {
            ctx->pc = 0x106C40u;
            goto label_106c40;
        }
    }
    ctx->pc = 0x106C34u;
    // 0x106c34: 0xc041728  jal         func_105CA0
    ctx->pc = 0x106C34u;
    SET_GPR_U32(ctx, 31, 0x106C3Cu);
    ctx->pc = 0x105CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105CA0u, 0x106C34u, 0x106C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106C3Cu;
label_106c3c:
    // 0x106c3c: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x106c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
label_106c40:
    // 0x106c40: 0xc041b9c  jal         func_106E70
    ctx->pc = 0x106C40u;
    SET_GPR_U32(ctx, 31, 0x106C48u);
    ctx->pc = 0x106C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106C40u;
    // 0x106c44: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E70u, 0x106C40u, 0x106C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106C48u;
label_106c48:
    // 0x106c48: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x106C48u;
    {
        const bool branch_taken_0x106c48 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x106C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106C48u;
        // 0x106c4c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106c48) {
            ctx->pc = 0x106C68u;
            goto label_106c68;
        }
    }
    ctx->pc = 0x106C50u;
    // 0x106c50: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x106C50u;
    {
        const bool branch_taken_0x106c50 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x106C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106C50u;
        // 0x106c54: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106c50) {
            ctx->pc = 0x106C6Cu;
            goto label_106c6c;
        }
    }
    ctx->pc = 0x106C58u;
    // 0x106c58: 0xc041c9e  jal         func_107278
    ctx->pc = 0x106C58u;
    SET_GPR_U32(ctx, 31, 0x106C60u);
    ctx->pc = 0x106C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106C58u;
    // 0x106c5c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x106C58u, 0x106C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106C60u;
label_106c60:
    // 0x106c60: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x106C60u;
    {
        const bool branch_taken_0x106c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106C60u;
        // 0x106c64: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106c60) {
            ctx->pc = 0x106C6Cu;
            goto label_106c6c;
        }
    }
    ctx->pc = 0x106C68u;
label_106c68:
    // 0x106c68: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x106c68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_106c6c:
    // 0x106c6c: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x106C6Cu;
    {
        const bool branch_taken_0x106c6c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x106C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106C6Cu;
        // 0x106c70: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106c6c) {
            ctx->pc = 0x106C80u;
            goto label_106c80;
        }
    }
    ctx->pc = 0x106C74u;
    // 0x106c74: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x106c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x106c78: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x106c78u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x106c7c: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x106c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_106c80:
    // 0x106c80: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x106c80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106c84: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x106c84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106c88: 0xc041a68  jal         func_1069A0
    ctx->pc = 0x106C88u;
    SET_GPR_U32(ctx, 31, 0x106C90u);
    ctx->pc = 0x106C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106C88u;
    // 0x106c8c: 0x26440004  addiu       $a0, $s2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1069A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1069A0u, 0x106C88u, 0x106C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106C90u;
label_106c90:
    // 0x106c90: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x106C90u;
    {
        const bool branch_taken_0x106c90 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x106c90) {
            ctx->pc = 0x106CA4u;
            goto label_106ca4;
        }
    }
    ctx->pc = 0x106C98u;
    // 0x106c98: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x106c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x106c9c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x106c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x106ca0: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x106ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_106ca4:
    // 0x106ca4: 0x12c00005  beqz        $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x106CA4u;
    {
        const bool branch_taken_0x106ca4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x106CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106CA4u;
        // 0x106ca8: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106ca4) {
            ctx->pc = 0x106CBCu;
            goto label_106cbc;
        }
    }
    ctx->pc = 0x106CACu;
    // 0x106cac: 0xc041728  jal         func_105CA0
    ctx->pc = 0x106CACu;
    SET_GPR_U32(ctx, 31, 0x106CB4u);
    ctx->pc = 0x105CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105CA0u, 0x106CACu, 0x106CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106CB4u;
label_106cb4:
    // 0x106cb4: 0xaee20004  sw          $v0, 0x4($s7)
    ctx->pc = 0x106cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 2));
    // 0x106cb8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x106cb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_106cbc:
    // 0x106cbc: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x106cbcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x106cc0: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x106cc0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x106cc4: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x106cc4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x106cc8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x106cc8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x106ccc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x106cccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x106cd0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x106cd0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x106cd4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x106cd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106cd8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x106cd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106cdc: 0x3e00008  jr          $ra
    ctx->pc = 0x106CDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106CDCu;
        // 0x106ce0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106CDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106CE4u;
}
