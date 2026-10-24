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

// Function: entry_0011bd80
// Address: 0x11bd80 - 0x11bdc0
void entry_0011bd80_0x11bd80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011bd80_0x11bd80");
#endif

    ctx->pc = 0x11bd80u;

    // 0x11bd80: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x11BD80u;
    {
        const bool branch_taken_0x11bd80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BD80u;
        // 0x11bd84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bd80) {
            ctx->pc = 0x11BDC0u;
            return;
        }
    }
    ctx->pc = 0x11BD88u;
    // 0x11bd88: 0x27a401d1  addiu       $a0, $sp, 0x1D1
    ctx->pc = 0x11bd88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 465));
    // 0x11bd8c: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x11bd8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x11bd90: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x11bd90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x11bd94: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x11bd94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bd98: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x11bd98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11bd9c: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x11bd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x11bda0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x11bda0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x11bda4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11bda4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11bda8: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x11bda8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x11bdac: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x11bdacu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x11bdb0: 0x1480001c  bnez        $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x11BDB0u;
    {
        const bool branch_taken_0x11bdb0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BDB0u;
        // 0x11bdb4: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bdb0) {
            ctx->pc = 0x11BE24u;
            return;
        }
    }
    ctx->pc = 0x11BDB8u;
    // 0x11bdb8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x11BDB8u;
    {
        const bool branch_taken_0x11bdb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BDB8u;
        // 0x11bdbc: 0x8fa401e8  lw          $a0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bdb8) {
            ctx->pc = 0x11BE0Cu;
            return;
        }
    }
    ctx->pc = 0x11BDC0u;
}
