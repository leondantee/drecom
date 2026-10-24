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

// Function: entry_00104948
// Address: 0x104948 - 0x1049c4
void entry_00104948_0x104948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104948_0x104948");
#endif

    ctx->pc = 0x104948u;

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
            return;
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
            return;
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
            return;
        }
    }
    ctx->pc = 0x1049C4u;
}
