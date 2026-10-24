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

// Function: entry_001047b8
// Address: 0x1047b8 - 0x104848
void entry_001047b8_0x1047b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001047b8_0x1047b8");
#endif

    ctx->pc = 0x1047b8u;

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
            return;
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
            return;
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
            return;
        }
    }
    ctx->pc = 0x104848u;
}
