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

// Function: entry_00115c58
// Address: 0x115c58 - 0x115cd0
void entry_00115c58_0x115c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115c58_0x115c58");
#endif

    ctx->pc = 0x115c58u;

label_115c58:
    // 0x115c58: 0x8d640000  lw          $a0, 0x0($t3)
    ctx->pc = 0x115c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x115c5c: 0x8d450000  lw          $a1, 0x0($t2)
    ctx->pc = 0x115c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x115c60: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x115c60u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x115c64: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x115c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x115c68: 0x43402  srl         $a2, $a0, 16
    ctx->pc = 0x115c68u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x115c6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x115c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x115c70: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x115c70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x115c74: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x115c74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x115c78: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x115c78u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x115c7c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x115c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x115c80: 0xc24821  addu        $t1, $a2, $v0
    ctx->pc = 0x115c80u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x115c84: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x115c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x115c88: 0x3122ffff  andi        $v0, $t1, 0xFFFF
    ctx->pc = 0x115c88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x115c8c: 0x52c02  srl         $a1, $a1, 16
    ctx->pc = 0x115c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x115c90: 0x36403  sra         $t4, $v1, 16
    ctx->pc = 0x115c90u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 3), 16));
    // 0x115c94: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x115c94u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x115c98: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x115c98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x115c9c: 0xa5430000  sh          $v1, 0x0($t2)
    ctx->pc = 0x115c9cu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x115ca0: 0xa5450002  sh          $a1, 0x2($t2)
    ctx->pc = 0x115ca0u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x115ca4: 0x91c02  srl         $v1, $t1, 16
    ctx->pc = 0x115ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x115ca8: 0x56403  sra         $t4, $a1, 16
    ctx->pc = 0x115ca8u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 5), 16));
    // 0x115cac: 0x26b102b  sltu        $v0, $s3, $t3
    ctx->pc = 0x115cacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x115cb0: 0x1040ffe9  beqz        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x115CB0u;
    {
        const bool branch_taken_0x115cb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x115CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115CB0u;
        // 0x115cb4: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115cb0) {
            ctx->pc = 0x115C58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_115c58;
        }
    }
    ctx->pc = 0x115CB8u;
    // 0x115cb8: 0x2274021  addu        $t0, $s1, $a3
    ctx->pc = 0x115cb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x115cbc: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x115cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x115cc0: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x115CC0u;
    {
        const bool branch_taken_0x115cc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x115CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115CC0u;
        // 0x115cc4: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115cc0) {
            ctx->pc = 0x115CF4u;
            return;
        }
    }
    ctx->pc = 0x115CC8u;
    // 0x115cc8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x115CC8u;
    {
        const bool branch_taken_0x115cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115CC8u;
        // 0x115ccc: 0x2508fffc  addiu       $t0, $t0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115cc8) {
            ctx->pc = 0x115CD4u;
            return;
        }
    }
    ctx->pc = 0x115CD0u;
}
