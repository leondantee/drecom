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

// Function: _getRef0
// Address: 0x1046f8 - 0x104b18
void _getRef0_0x1046f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_getRef0_0x1046f8");
#endif

    ctx->pc = 0x1046f8u;

    // 0x1046f8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1046f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1046fc: 0x3c0c0038  lui         $t4, 0x38
    ctx->pc = 0x1046fcu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)56 << 16));
    // 0x104700: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x104700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x104704: 0x258341f8  addiu       $v1, $t4, 0x41F8
    ctx->pc = 0x104704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 16888));
    // 0x104708: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x104708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x10470c: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x10470cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x104710: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x104710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x104714: 0x246e0048  addiu       $t6, $v1, 0x48
    ctx->pc = 0x104714u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), 72));
    // 0x104718: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x104718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x10471c: 0x240c001c  addiu       $t4, $zero, 0x1C
    ctx->pc = 0x10471cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x104720: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x104720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x104724: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x104724u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104728: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x104728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x10472c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x10472cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104730: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x104730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x104734: 0x160882d  daddu       $s1, $t3, $zero
    ctx->pc = 0x104734u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104738: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x104738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x10473c: 0x246b00b8  addiu       $t3, $v1, 0xB8
    ctx->pc = 0x10473cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 184));
    // 0x104740: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x104740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x104744: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x104744u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104748: 0x8faf00b8  lw          $t7, 0xB8($sp)
    ctx->pc = 0x104748u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x10474c: 0x100c02d  daddu       $t8, $t0, $zero
    ctx->pc = 0x10474cu;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104750: 0x8c6d0280  lw          $t5, 0x280($v1)
    ctx->pc = 0x104750u;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x384478u));
    // 0x104754: 0x140982d  daddu       $s3, $t2, $zero
    ctx->pc = 0x104754u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104758: 0xafa90004  sw          $t1, 0x4($sp)
    ctx->pc = 0x104758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 9));
    // 0x10475c: 0x1a26818  mult        $t5, $t5, $v0
    ctx->pc = 0x10475cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x104760: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x104760u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x104764: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x104764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x104768: 0x114843  sra         $t1, $s1, 1
    ctx->pc = 0x104768u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 17), 1));
    // 0x10476c: 0x8c423bf0  lw          $v0, 0x3BF0($v0)
    ctx->pc = 0x10476cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15344)));
    // 0x104770: 0x8fb500b0  lw          $s5, 0xB0($sp)
    ctx->pc = 0x104770u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x104774: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x104774u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x104778: 0x6d1821  addu        $v1, $v1, $t5
    ctx->pc = 0x104778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x10477c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x10477cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x104780: 0x8c77012c  lw          $s7, 0x12C($v1)
    ctx->pc = 0x104780u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 300)));
    // 0x104784: 0x122c821  addu        $t9, $t1, $v0
    ctx->pc = 0x104784u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x104788: 0x2ec6018  mult        $t4, $s7, $t4
    ctx->pc = 0x104788u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x10478c: 0x18b5821  addu        $t3, $t4, $t3
    ctx->pc = 0x10478cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
    // 0x104790: 0x18e6021  addu        $t4, $t4, $t6
    ctx->pc = 0x104790u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 14)));
    // 0x104794: 0x1ab8021  addu        $s0, $t5, $t3
    ctx->pc = 0x104794u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 11)));
    // 0x104798: 0x11e00005  beqz        $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x104798u;
    {
        const bool branch_taken_0x104798 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x10479Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104798u;
        // 0x10479c: 0x1ac6821  addu        $t5, $t5, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104798) {
            ctx->pc = 0x1047B0u;
            goto label_1047b0;
        }
    }
    ctx->pc = 0x1047A0u;
    // 0x1047a0: 0x151043  sra         $v0, $s5, 1
    ctx->pc = 0x1047a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 21), 1));
    // 0x1047a4: 0x2541821  addu        $v1, $s2, $s4
    ctx->pc = 0x1047a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
    // 0x1047a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1047A8u;
    {
        const bool branch_taken_0x1047a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1047ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1047A8u;
        // 0x1047ac: 0x21040  sll         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1047a8) {
            ctx->pc = 0x1047B8u;
            goto label_1047b8;
        }
    }
    ctx->pc = 0x1047B0u;
label_1047b0:
    // 0x1047b0: 0x151043  sra         $v0, $s5, 1
    ctx->pc = 0x1047b0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 21), 1));
    // 0x1047b4: 0x2541821  addu        $v1, $s2, $s4
    ctx->pc = 0x1047b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
label_1047b8:
    // 0x1047b8: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1047b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1047bc: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x1047bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1047c0: 0x8ec50010  lw          $a1, 0x10($s6)
    ctx->pc = 0x1047c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x1047c4: 0x195903  sra         $t3, $t9, 4
    ctx->pc = 0x1047c4u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 25), 4));
    // 0x1047c8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1047c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1047cc: 0x67103  sra         $t6, $a2, 4
    ctx->pc = 0x1047ccu;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 6), 4));
    // 0x1047d0: 0x1652818  mult        $a1, $t3, $a1
    ctx->pc = 0x1047d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1047d4: 0x8fac0008  lw          $t4, 0x8($sp)
    ctx->pc = 0x1047d4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1047d8: 0x722021  addu        $a0, $v1, $s2
    ctx->pc = 0x1047d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1047dc: 0xe1100  sll         $v0, $t6, 4
    ctx->pc = 0x1047dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 14), 4));
    // 0x1047e0: 0xb1900  sll         $v1, $t3, 4
    ctx->pc = 0x1047e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x1047e4: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x1047e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x1047e8: 0x3231823  subu        $v1, $t9, $v1
    ctx->pc = 0x1047e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 25), GPR_U32(ctx, 3)));
    // 0x1047ec: 0x1842021  addu        $a0, $t4, $a0
    ctx->pc = 0x1047ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
    // 0x1047f0: 0xada30004  sw          $v1, 0x4($t5)
    ctx->pc = 0x1047f0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 3));
    // 0x1047f4: 0xae2821  addu        $a1, $a1, $t6
    ctx->pc = 0x1047f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 14)));
    // 0x1047f8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x1047f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x1047fc: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x1047fcu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x104800: 0xada40000  sw          $a0, 0x0($t5)
    ctx->pc = 0x104800u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 4));
    // 0x104804: 0x32b90001  andi        $t9, $s5, 0x1
    ctx->pc = 0x104804u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
    // 0x104808: 0x1320000f  beqz        $t9, . + 4 + (0xF << 2)
    ctx->pc = 0x104808u;
    {
        const bool branch_taken_0x104808 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x10480Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104808u;
        // 0x10480c: 0x322c0001  andi        $t4, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 12, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x104808) {
            ctx->pc = 0x104848u;
            goto label_104848;
        }
    }
    ctx->pc = 0x104810u;
    // 0x104810: 0x1f81004  sllv        $v0, $t8, $t7
    ctx->pc = 0x104810u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 24), GPR_U32(ctx, 15) & 0x1F));
    // 0x104814: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x104814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x104818: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x104818u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x10481c: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x10481Cu;
    {
        const bool branch_taken_0x10481c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10481c) {
            ctx->pc = 0x104820u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10481Cu;
            // 0x104820: 0xadb80008  sw          $t8, 0x8($t5) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10487Cu;
            goto label_10487c;
        }
    }
    ctx->pc = 0x104824u;
    // 0x104824: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x104824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x104828: 0x1e61807  srav        $v1, $a2, $t7
    ctx->pc = 0x104828u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 15) & 0x1F));
    // 0x10482c: 0x1e21007  srav        $v0, $v0, $t7
    ctx->pc = 0x10482cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 15) & 0x1F));
    // 0x104830: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x104830u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x104834: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x104834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x104838: 0x3021823  subu        $v1, $t8, $v0
    ctx->pc = 0x104838u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 2)));
    // 0x10483c: 0xada20008  sw          $v0, 0x8($t5)
    ctx->pc = 0x10483cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 2));
    // 0x104840: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x104840u;
    {
        const bool branch_taken_0x104840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104840u;
        // 0x104844: 0xada3000c  sw          $v1, 0xC($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104840) {
            ctx->pc = 0x104880u;
            goto label_104880;
        }
    }
    ctx->pc = 0x104848u;
label_104848:
    // 0x104848: 0x1f81004  sllv        $v0, $t8, $t7
    ctx->pc = 0x104848u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 24), GPR_U32(ctx, 15) & 0x1F));
    // 0x10484c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x10484cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x104850: 0x28420011  slti        $v0, $v0, 0x11
    ctx->pc = 0x104850u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x104854: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x104854u;
    {
        const bool branch_taken_0x104854 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x104854) {
            ctx->pc = 0x104858u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x104854u;
            // 0x104858: 0xadb80008  sw          $t8, 0x8($t5) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10487Cu;
            goto label_10487c;
        }
    }
    ctx->pc = 0x10485Cu;
    // 0x10485c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x10485cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x104860: 0x1e61807  srav        $v1, $a2, $t7
    ctx->pc = 0x104860u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 15) & 0x1F));
    // 0x104864: 0x1e21007  srav        $v0, $v0, $t7
    ctx->pc = 0x104864u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 15) & 0x1F));
    // 0x104868: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x104868u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10486c: 0x3022023  subu        $a0, $t8, $v0
    ctx->pc = 0x10486cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 2)));
    // 0x104870: 0xada20008  sw          $v0, 0x8($t5)
    ctx->pc = 0x104870u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 2));
    // 0x104874: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x104874u;
    {
        const bool branch_taken_0x104874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104874u;
        // 0x104878: 0xada4000c  sw          $a0, 0xC($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104874) {
            ctx->pc = 0x104880u;
            goto label_104880;
        }
    }
    ctx->pc = 0x10487Cu;
label_10487c:
    // 0x10487c: 0xada0000c  sw          $zero, 0xC($t5)
    ctx->pc = 0x10487cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 12), GPR_U32(ctx, 0));
label_104880:
    // 0x104880: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x104880u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x104884: 0x24070600  addiu       $a3, $zero, 0x600
    ctx->pc = 0x104884u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
    // 0x104888: 0x246241f8  addiu       $v0, $v1, 0x41F8
    ctx->pc = 0x104888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16888));
    // 0x10488c: 0x2e73818  mult        $a3, $s7, $a3
    ctx->pc = 0x10488cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x104890: 0x8c450280  lw          $a1, 0x280($v0)
    ctx->pc = 0x104890u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 640)));
    // 0x104894: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x104894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x104898: 0x64900  sll         $t1, $a2, 4
    ctx->pc = 0x104898u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x10489c: 0xa32018  mult        $a0, $a1, $v1
    ctx->pc = 0x10489cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1048a0: 0x252a0300  addiu       $t2, $t1, 0x300
    ctx->pc = 0x1048a0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 768));
    // 0x1048a4: 0xc1840  sll         $v1, $t4, 1
    ctx->pc = 0x1048a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x1048a8: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1048a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1048ac: 0x1e63004  sllv        $a2, $a2, $t7
    ctx->pc = 0x1048acu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 15) & 0x1F));
    // 0x1048b0: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x1048b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1048b4: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1048b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1048b8: 0x1127c2  srl         $a0, $s1, 31
    ctx->pc = 0x1048b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 17), 31));
    // 0x1048bc: 0x8ca80000  lw          $t0, 0x0($a1)
    ctx->pc = 0x1048bcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1048c0: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x1048c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x1048c4: 0x2f080  sll         $fp, $v0, 2
    ctx->pc = 0x1048c4u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1048c8: 0x48843  sra         $s1, $a0, 1
    ctx->pc = 0x1048c8u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 4), 1));
    // 0x1048cc: 0x3c31825  or          $v1, $fp, $v1
    ctx->pc = 0x1048ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) | GPR_U64(ctx, 3));
    // 0x1048d0: 0x1517c2  srl         $v0, $s5, 31
    ctx->pc = 0x1048d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 21), 31));
    // 0x1048d4: 0x791825  or          $v1, $v1, $t9
    ctx->pc = 0x1048d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 25));
    // 0x1048d8: 0x1072821  addu        $a1, $t0, $a3
    ctx->pc = 0x1048d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x1048dc: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x1048dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x1048e0: 0x2a26021  addu        $t4, $s5, $v0
    ctx->pc = 0x1048e0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1048e4: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1048e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1048e8: 0xaa5021  addu        $t2, $a1, $t2
    ctx->pc = 0x1048e8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x1048ec: 0x42083  sra         $a0, $a0, 2
    ctx->pc = 0x1048ecu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 2));
    // 0x1048f0: 0xa94821  addu        $t1, $a1, $t1
    ctx->pc = 0x1048f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x1048f4: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x1048f4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x1048f8: 0xca843  sra         $s5, $t4, 1
    ctx->pc = 0x1048f8u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 12), 1));
    // 0x1048fc: 0xada60010  sw          $a2, 0x10($t5)
    ctx->pc = 0x1048fcu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 16), GPR_U32(ctx, 6));
    // 0x104900: 0x82c821  addu        $t9, $a0, $v0
    ctx->pc = 0x104900u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x104904: 0xada90014  sw          $t1, 0x14($t5)
    ctx->pc = 0x104904u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 20), GPR_U32(ctx, 9));
    // 0x104908: 0x123843  sra         $a3, $s2, 1
    ctx->pc = 0x104908u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 18), 1));
    // 0x10490c: 0xadaa0018  sw          $t2, 0x18($t5)
    ctx->pc = 0x10490cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 24), GPR_U32(ctx, 10));
    // 0x104910: 0x11e00008  beqz        $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x104910u;
    {
        const bool branch_taken_0x104910 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x104914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104910u;
        // 0x104914: 0x184043  sra         $t0, $t8, 1 (Delay Slot)
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 24), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104910) {
            ctx->pc = 0x104934u;
            goto label_104934;
        }
    }
    ctx->pc = 0x104918u;
    // 0x104918: 0xc1083  sra         $v0, $t4, 2
    ctx->pc = 0x104918u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 12), 2));
    // 0x10491c: 0x132043  sra         $a0, $s3, 1
    ctx->pc = 0x10491cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 19), 1));
    // 0x104920: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x104920u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x104924: 0xf41821  addu        $v1, $a3, $s4
    ctx->pc = 0x104924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 20)));
    // 0x104928: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x104928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x10492c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x10492Cu;
    {
        const bool branch_taken_0x10492c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10492Cu;
        // 0x104930: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10492c) {
            ctx->pc = 0x104948u;
            goto label_104948;
        }
    }
    ctx->pc = 0x104934u;
label_104934:
    // 0x104934: 0xc1083  sra         $v0, $t4, 2
    ctx->pc = 0x104934u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 12), 2));
    // 0x104938: 0x131843  sra         $v1, $s3, 1
    ctx->pc = 0x104938u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 19), 1));
    // 0x10493c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10493cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x104940: 0xf42021  addu        $a0, $a3, $s4
    ctx->pc = 0x104940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 20)));
    // 0x104944: 0x443021  addu        $a2, $v0, $a0
    ctx->pc = 0x104944u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_104948:
    // 0x104948: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x104948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10494c: 0x1948c3  sra         $t1, $t9, 3
    ctx->pc = 0x10494cu;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 25), 3));
    // 0x104950: 0x8fac0008  lw          $t4, 0x8($sp)
    ctx->pc = 0x104950u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x104954: 0x650c3  sra         $t2, $a2, 3
    ctx->pc = 0x104954u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 6), 3));
    // 0x104958: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x104958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x10495c: 0x918c0  sll         $v1, $t1, 3
    ctx->pc = 0x10495cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x104960: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x104960u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x104964: 0x3231823  subu        $v1, $t9, $v1
    ctx->pc = 0x104964u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 25), GPR_U32(ctx, 3)));
    // 0x104968: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x104968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x10496c: 0xa20c0  sll         $a0, $t2, 3
    ctx->pc = 0x10496cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x104970: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x104970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x104974: 0xc43023  subu        $a2, $a2, $a0
    ctx->pc = 0x104974u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x104978: 0x322c0001  andi        $t4, $s1, 0x1
    ctx->pc = 0x104978u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x10497c: 0x32b90001  andi        $t9, $s5, 0x1
    ctx->pc = 0x10497cu;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
    // 0x104980: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x104980u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x104984: 0x1320000f  beqz        $t9, . + 4 + (0xF << 2)
    ctx->pc = 0x104984u;
    {
        const bool branch_taken_0x104984 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x104988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104984u;
        // 0x104988: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104984) {
            ctx->pc = 0x1049C4u;
            goto label_1049c4;
        }
    }
    ctx->pc = 0x10498Cu;
    // 0x10498c: 0x1e81004  sllv        $v0, $t0, $t7
    ctx->pc = 0x10498cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 15) & 0x1F));
    // 0x104990: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x104990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x104994: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x104994u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x104998: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x104998u;
    {
        const bool branch_taken_0x104998 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x104998) {
            ctx->pc = 0x10499Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x104998u;
            // 0x10499c: 0xae080008  sw          $t0, 0x8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1049F8u;
            goto label_1049f8;
        }
    }
    ctx->pc = 0x1049A0u;
    // 0x1049a0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1049a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1049a4: 0x1e61807  srav        $v1, $a2, $t7
    ctx->pc = 0x1049a4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 15) & 0x1F));
    // 0x1049a8: 0x1e21007  srav        $v0, $v0, $t7
    ctx->pc = 0x1049a8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 15) & 0x1F));
    // 0x1049ac: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1049acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1049b0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1049b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1049b4: 0x1021823  subu        $v1, $t0, $v0
    ctx->pc = 0x1049b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1049b8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1049b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1049bc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1049BCu;
    {
        const bool branch_taken_0x1049bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1049C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1049BCu;
        // 0x1049c0: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1049bc) {
            ctx->pc = 0x1049FCu;
            goto label_1049fc;
        }
    }
    ctx->pc = 0x1049C4u;
label_1049c4:
    // 0x1049c4: 0x1e81004  sllv        $v0, $t0, $t7
    ctx->pc = 0x1049c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 15) & 0x1F));
    // 0x1049c8: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1049c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1049cc: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x1049ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1049d0: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1049D0u;
    {
        const bool branch_taken_0x1049d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1049d0) {
            ctx->pc = 0x1049D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1049D0u;
            // 0x1049d4: 0xae080008  sw          $t0, 0x8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1049F8u;
            goto label_1049f8;
        }
    }
    ctx->pc = 0x1049D8u;
    // 0x1049d8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1049d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1049dc: 0x1e61807  srav        $v1, $a2, $t7
    ctx->pc = 0x1049dcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 15) & 0x1F));
    // 0x1049e0: 0x1e21007  srav        $v0, $v0, $t7
    ctx->pc = 0x1049e0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 15) & 0x1F));
    // 0x1049e4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1049e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1049e8: 0x1022023  subu        $a0, $t0, $v0
    ctx->pc = 0x1049e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1049ec: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1049ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1049f0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1049F0u;
    {
        const bool branch_taken_0x1049f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1049F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1049F0u;
        // 0x1049f4: 0xae04000c  sw          $a0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1049f0) {
            ctx->pc = 0x1049FCu;
            goto label_1049fc;
        }
    }
    ctx->pc = 0x1049F8u;
label_1049f8:
    // 0x1049f8: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1049f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_1049fc:
    // 0x1049fc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1049fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x104a00: 0x3c110038  lui         $s1, 0x38
    ctx->pc = 0x104a00u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)56 << 16));
    // 0x104a04: 0x1e21004  sllv        $v0, $v0, $t7
    ctx->pc = 0x104a04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 15) & 0x1F));
    // 0x104a08: 0x262741f8  addiu       $a3, $s1, 0x41F8
    ctx->pc = 0x104a08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 16888));
    // 0x104a0c: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x104a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x104a10: 0x14e1823  subu        $v1, $t2, $t6
    ctx->pc = 0x104a10u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 14)));
    // 0x104a14: 0x12b2023  subu        $a0, $t1, $t3
    ctx->pc = 0x104a14u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x104a18: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x104a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x104a1c: 0x8cea0280  lw          $t2, 0x280($a3)
    ctx->pc = 0x104a1cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 640)));
    // 0x104a20: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x104a20u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x104a24: 0x240b0180  addiu       $t3, $zero, 0x180
    ctx->pc = 0x104a24u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x104a28: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x104a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x104a2c: 0x1425018  mult        $t2, $t2, $v0
    ctx->pc = 0x104a2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x104a30: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x104a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x104a34: 0x8b1018  mult        $v0, $a0, $t3
    ctx->pc = 0x104a34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x104a38: 0x8ece0010  lw          $t6, 0x10($s6)
    ctx->pc = 0x104a38u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x104a3c: 0x6b7818  mult        $t7, $v1, $t3
    ctx->pc = 0x104a3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x104a40: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x104a40u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x104a44: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x104a44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x104a48: 0x24c90400  addiu       $t1, $a2, 0x400
    ctx->pc = 0x104a48u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 1024));
    // 0x104a4c: 0x24633a30  addiu       $v1, $v1, 0x3A30
    ctx->pc = 0x104a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14896));
    // 0x104a50: 0x8ecd0000  lw          $t5, 0x0($s6)
    ctx->pc = 0x104a50u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x104a54: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x104a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x104a58: 0x24c60100  addiu       $a2, $a2, 0x100
    ctx->pc = 0x104a58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 256));
    // 0x104a5c: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x104a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x104a60: 0xc1040  sll         $v0, $t4, 1
    ctx->pc = 0x104a60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x104a64: 0x8fac000c  lw          $t4, 0xC($sp)
    ctx->pc = 0x104a64u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x104a68: 0x3c21025  or          $v0, $fp, $v0
    ctx->pc = 0x104a68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) | GPR_U64(ctx, 2));
    // 0x104a6c: 0xae7021  addu        $t6, $a1, $t6
    ctx->pc = 0x104a6cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 14)));
    // 0x104a70: 0x591025  or          $v0, $v0, $t9
    ctx->pc = 0x104a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 25));
    // 0x104a74: 0x1cb8818  mult        $s1, $t6, $t3
    ctx->pc = 0x104a74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x104a78: 0xc4080  sll         $t0, $t4, 2
    ctx->pc = 0x104a78u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x104a7c: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x104a7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x104a80: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x104a80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x104a84: 0x894821  addu        $t1, $a0, $t1
    ctx->pc = 0x104a84u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x104a88: 0x24ec012c  addiu       $t4, $a3, 0x12C
    ctx->pc = 0x104a88u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), 300));
    // 0x104a8c: 0x171880  sll         $v1, $s7, 2
    ctx->pc = 0x104a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x104a90: 0x24a53a50  addiu       $a1, $a1, 0x3A50
    ctx->pc = 0x104a90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14928));
    // 0x104a94: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x104a94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x104a98: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x104a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x104a9c: 0x14c6021  addu        $t4, $t2, $t4
    ctx->pc = 0x104a9cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 12)));
    // 0x104aa0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x104aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x104aa4: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x104aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x104aa8: 0x22d7021  addu        $t6, $s1, $t5
    ctx->pc = 0x104aa8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 13)));
    // 0x104aac: 0xe33021  addu        $a2, $a3, $v1
    ctx->pc = 0x104aacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x104ab0: 0xae040014  sw          $a0, 0x14($s0)
    ctx->pc = 0x104ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 4));
    // 0x104ab4: 0x8d0b0000  lw          $t3, 0x0($t0)
    ctx->pc = 0x104ab4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x104ab8: 0x1af6821  addu        $t5, $t5, $t7
    ctx->pc = 0x104ab8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
    // 0x104abc: 0x8d850000  lw          $a1, 0x0($t4)
    ctx->pc = 0x104abcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x104ac0: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x104ac0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104ac4: 0xae090018  sw          $t1, 0x18($s0)
    ctx->pc = 0x104ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 9));
    // 0x104ac8: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x104ac8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104acc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x104accu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x104ad0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x104ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x104ad4: 0xaccd0008  sw          $t5, 0x8($a2)
    ctx->pc = 0x104ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 13));
    // 0x104ad8: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x104ad8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104adc: 0xad0b0028  sw          $t3, 0x28($t0)
    ctx->pc = 0x104adcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 40), GPR_U32(ctx, 11));
    // 0x104ae0: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x104ae0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x104ae4: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x104ae4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x104ae8: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x104ae8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x104aec: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x104aecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x104af0: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x104af0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x104af4: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x104af4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x104af8: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x104af8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x104afc: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x104afcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x104b00: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x104b00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x104b04: 0xacee0018  sw          $t6, 0x18($a3)
    ctx->pc = 0x104b04u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 14));
    // 0x104b08: 0xad440038  sw          $a0, 0x38($t2)
    ctx->pc = 0x104b08u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 56), GPR_U32(ctx, 4));
    // 0x104b0c: 0xad850000  sw          $a1, 0x0($t4)
    ctx->pc = 0x104b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 5));
    // 0x104b10: 0x3e00008  jr          $ra
    ctx->pc = 0x104B10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x104B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104B10u;
        // 0x104b14: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104B10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104B18u;
}
