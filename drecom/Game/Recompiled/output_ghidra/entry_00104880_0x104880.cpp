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

// Function: entry_00104880
// Address: 0x104880 - 0x104934
void entry_00104880_0x104880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104880_0x104880");
#endif

    ctx->pc = 0x104880u;

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
            return;
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
            return;
        }
    }
    ctx->pc = 0x104934u;
}
