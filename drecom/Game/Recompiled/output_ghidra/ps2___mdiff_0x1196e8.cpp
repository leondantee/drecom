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

// Function: __mdiff
// Address: 0x1196e8 - 0x119878
void ps2___mdiff_0x1196e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___mdiff_0x1196e8");
#endif

    switch (ctx->pc) {
        case 0x119718u: goto label_119718;
        case 0x11972cu: goto label_11972c;
        case 0x119764u: goto label_119764;
        case 0x119798u: goto label_119798;
        case 0x1197f0u: goto label_1197f0;
        case 0x119838u: goto label_119838;
        default: break;
    }

    ctx->pc = 0x1196e8u;

    // 0x1196e8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1196e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1196ec: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1196ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1196f0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1196f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1196f4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1196f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1196f8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1196f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1196fc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1196fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119700: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x119700u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119704: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x119704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x119708: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x119708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x11970c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11970cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119710: 0xc0465a0  jal         func_119680
    ctx->pc = 0x119710u;
    SET_GPR_U32(ctx, 31, 0x119718u);
    ctx->pc = 0x119714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119710u;
    // 0x119714: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119680u, 0x119710u, 0x119718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119718u;
label_119718:
    // 0x119718: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x119718u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11971c: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11971Cu;
    {
        const bool branch_taken_0x11971c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x119720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11971Cu;
        // 0x119720: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11971c) {
            ctx->pc = 0x119740u;
            goto label_119740;
        }
    }
    ctx->pc = 0x119724u;
    // 0x119724: 0xc046348  jal         func_118D20
    ctx->pc = 0x119724u;
    SET_GPR_U32(ctx, 31, 0x11972Cu);
    ctx->pc = 0x119728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119724u;
    // 0x119728: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118D20u, 0x119724u, 0x11972Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11972Cu;
label_11972c:
    // 0x11972c: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x11972cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119730: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x119730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x119734: 0xad600014  sw          $zero, 0x14($t3)
    ctx->pc = 0x119734u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 20), GPR_U32(ctx, 0));
    // 0x119738: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x119738u;
    {
        const bool branch_taken_0x119738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11973Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119738u;
        // 0x11973c: 0xad620010  sw          $v0, 0x10($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119738) {
            ctx->pc = 0x119858u;
            goto label_119858;
        }
    }
    ctx->pc = 0x119740u;
label_119740:
    // 0x119740: 0x6010005  bgez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x119740u;
    {
        const bool branch_taken_0x119740 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x119744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119740u;
        // 0x119744: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119740) {
            ctx->pc = 0x119758u;
            goto label_119758;
        }
    }
    ctx->pc = 0x119748u;
    // 0x119748: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x119748u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11974c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x11974cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x119750: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x119750u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119754: 0x160902d  daddu       $s2, $t3, $zero
    ctx->pc = 0x119754u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_119758:
    // 0x119758: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x119758u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x11975c: 0xc046348  jal         func_118D20
    ctx->pc = 0x11975Cu;
    SET_GPR_U32(ctx, 31, 0x119764u);
    ctx->pc = 0x119760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11975Cu;
    // 0x119760: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118D20u, 0x11975Cu, 0x119764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119764u;
label_119764:
    // 0x119764: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x119764u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119768: 0x26280014  addiu       $t0, $s1, 0x14
    ctx->pc = 0x119768u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x11976c: 0xad70000c  sw          $s0, 0xC($t3)
    ctx->pc = 0x11976cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 16));
    // 0x119770: 0x26490014  addiu       $t1, $s2, 0x14
    ctx->pc = 0x119770u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x119774: 0x25670014  addiu       $a3, $t3, 0x14
    ctx->pc = 0x119774u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), 20));
    // 0x119778: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x119778u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11977c: 0x8e2c0010  lw          $t4, 0x10($s1)
    ctx->pc = 0x11977cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x119780: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x119780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x119784: 0xc1880  sll         $v1, $t4, 2
    ctx->pc = 0x119784u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x119788: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x119788u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11978c: 0x1036821  addu        $t5, $t0, $v1
    ctx->pc = 0x11978cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x119790: 0x1223021  addu        $a2, $t1, $v0
    ctx->pc = 0x119790u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x119794: 0x0  nop
    ctx->pc = 0x119794u;
    // NOP
label_119798:
    // 0x119798: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x119798u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x11979c: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x11979cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1197a0: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x1197a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x1197a4: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x1197a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1197a8: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x1197a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x1197ac: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x1197acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1197b0: 0x52c02  srl         $a1, $a1, 16
    ctx->pc = 0x1197b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x1197b4: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1197b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1197b8: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x1197b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x1197bc: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x1197bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x1197c0: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x1197c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1197c4: 0x35403  sra         $t2, $v1, 16
    ctx->pc = 0x1197c4u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 3), 16));
    // 0x1197c8: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x1197c8u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1197cc: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x1197ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x1197d0: 0x126102b  sltu        $v0, $t1, $a2
    ctx->pc = 0x1197d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1197d4: 0xa4e50002  sh          $a1, 0x2($a3)
    ctx->pc = 0x1197d4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x1197d8: 0x55403  sra         $t2, $a1, 16
    ctx->pc = 0x1197d8u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 5), 16));
    // 0x1197dc: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1197DCu;
    {
        const bool branch_taken_0x1197dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1197E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1197DCu;
        // 0x1197e0: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1197dc) {
            ctx->pc = 0x119798u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_119798;
        }
    }
    ctx->pc = 0x1197E4u;
    // 0x1197e4: 0x10d102b  sltu        $v0, $t0, $t5
    ctx->pc = 0x1197e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x1197e8: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x1197E8u;
    {
        const bool branch_taken_0x1197e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1197e8) {
            ctx->pc = 0x1197ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1197E8u;
            // 0x1197ec: 0x24e7fffc  addiu       $a3, $a3, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x119828u;
            goto label_119828;
        }
    }
    ctx->pc = 0x1197F0u;
label_1197f0:
    // 0x1197f0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x1197f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1197f4: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x1197f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x1197f8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1197f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1197fc: 0x10d202b  sltu        $a0, $t0, $t5
    ctx->pc = 0x1197fcu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x119800: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x119800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x119804: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x119804u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x119808: 0x35403  sra         $t2, $v1, 16
    ctx->pc = 0x119808u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 3), 16));
    // 0x11980c: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x11980cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x119810: 0x4a2821  addu        $a1, $v0, $t2
    ctx->pc = 0x119810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x119814: 0xa4e50002  sh          $a1, 0x2($a3)
    ctx->pc = 0x119814u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x119818: 0x55403  sra         $t2, $a1, 16
    ctx->pc = 0x119818u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 5), 16));
    // 0x11981c: 0x1480fff4  bnez        $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x11981Cu;
    {
        const bool branch_taken_0x11981c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x119820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11981Cu;
        // 0x119820: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11981c) {
            ctx->pc = 0x1197F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1197f0;
        }
    }
    ctx->pc = 0x119824u;
    // 0x119824: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x119824u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
label_119828:
    // 0x119828: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x119828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x11982c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x11982Cu;
    {
        const bool branch_taken_0x11982c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11982c) {
            ctx->pc = 0x119830u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11982Cu;
            // 0x119830: 0xad6c0010  sw          $t4, 0x10($t3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 11), 16), GPR_U32(ctx, 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x119858u;
            goto label_119858;
        }
    }
    ctx->pc = 0x119834u;
    // 0x119834: 0x0  nop
    ctx->pc = 0x119834u;
    // NOP
label_119838:
    // 0x119838: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x119838u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
    // 0x11983c: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x11983cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x119840: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x119840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x119844: 0x0  nop
    ctx->pc = 0x119844u;
    // NOP
    // 0x119848: 0x0  nop
    ctx->pc = 0x119848u;
    // NOP
    // 0x11984c: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11984Cu;
    {
        const bool branch_taken_0x11984c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11984c) {
            ctx->pc = 0x119838u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_119838;
        }
    }
    ctx->pc = 0x119854u;
    // 0x119854: 0xad6c0010  sw          $t4, 0x10($t3)
    ctx->pc = 0x119854u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 16), GPR_U32(ctx, 12));
label_119858:
    // 0x119858: 0x160102d  daddu       $v0, $t3, $zero
    ctx->pc = 0x119858u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11985c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x11985cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x119860: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x119860u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x119864: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x119864u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x119868: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x119868u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11986c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11986cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119870: 0x3e00008  jr          $ra
    ctx->pc = 0x119870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119870u;
        // 0x119874: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119870u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119878u;
}
