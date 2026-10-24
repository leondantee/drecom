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

// Function: entry_0011bdc0
// Address: 0x11bdc0 - 0x11be0c
void entry_0011bdc0_0x11bdc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011bdc0_0x11bdc0");
#endif

    ctx->pc = 0x11bdc0u;

    // 0x11bdc0: 0x33c20002  andi        $v0, $fp, 0x2
    ctx->pc = 0x11bdc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)2);
    // 0x11bdc4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x11BDC4u;
    {
        const bool branch_taken_0x11bdc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BDC4u;
        // 0x11bdc8: 0x24030030  addiu       $v1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bdc4) {
            ctx->pc = 0x11BE28u;
            return;
        }
    }
    ctx->pc = 0x11BDCCu;
    // 0x11bdcc: 0xa3b701c1  sb          $s7, 0x1C1($sp)
    ctx->pc = 0x11bdccu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 449), (uint8_t)GPR_U32(ctx, 23));
    // 0x11bdd0: 0xa3a301c0  sb          $v1, 0x1C0($sp)
    ctx->pc = 0x11bdd0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 448), (uint8_t)GPR_U32(ctx, 3));
    // 0x11bdd4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x11bdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11bdd8: 0x27a301c0  addiu       $v1, $sp, 0x1C0
    ctx->pc = 0x11bdd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x11bddc: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x11bddcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x11bde0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x11bde0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x11bde4: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x11bde4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bde8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x11bde8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11bdec: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x11bdecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x11bdf0: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x11bdf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x11bdf4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11bdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11bdf8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x11bdf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x11bdfc: 0x28430008  slti        $v1, $v0, 0x8
    ctx->pc = 0x11bdfcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x11be00: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x11BE00u;
    {
        const bool branch_taken_0x11be00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BE00u;
        // 0x11be04: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11be00) {
            ctx->pc = 0x11BE24u;
            return;
        }
    }
    ctx->pc = 0x11BE08u;
    // 0x11be08: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x11be08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    ctx->pc = 0x11be0cu;
}
