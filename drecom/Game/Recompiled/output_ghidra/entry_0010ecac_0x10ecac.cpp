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

// Function: entry_0010ecac
// Address: 0x10ecac - 0x10ecf8
void entry_0010ecac_0x10ecac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ecac_0x10ecac");
#endif

    ctx->pc = 0x10ecacu;

    // 0x10ecac: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x10ecacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x10ecb0: 0x2602000c  addiu       $v0, $s0, 0xC
    ctx->pc = 0x10ecb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x10ecb4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x10ecb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x10ecb8: 0x26030004  addiu       $v1, $s0, 0x4
    ctx->pc = 0x10ecb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x10ecbc: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x10ecbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x10ecc0: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x10ecc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10ecc4: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x10ecc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x10ecc8: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x10ecc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x10eccc: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x10ecccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10ecd0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x10ecd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10ecd4: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x10ecd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x10ecd8: 0x10c20016  beq         $a2, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x10ECD8u;
    {
        const bool branch_taken_0x10ecd8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x10ECDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ECD8u;
        // 0x10ecdc: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ecd8) {
            ctx->pc = 0x10ED34u;
            return;
        }
    }
    ctx->pc = 0x10ECE0u;
    // 0x10ece0: 0x240200fe  addiu       $v0, $zero, 0xFE
    ctx->pc = 0x10ece0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    // 0x10ece4: 0x14c20004  bne         $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10ECE4u;
    {
        const bool branch_taken_0x10ece4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x10ECE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ECE4u;
        // 0x10ece8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ece4) {
            ctx->pc = 0x10ECF8u;
            return;
        }
    }
    ctx->pc = 0x10ECECu;
    // 0x10ecec: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x10ececu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x10ecf0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x10ECF0u;
    {
        const bool branch_taken_0x10ecf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10ECF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ECF0u;
        // 0x10ecf4: 0xac5045a8  sw          $s0, 0x45A8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 17832), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ecf0) {
            ctx->pc = 0x10ED34u;
            return;
        }
    }
    ctx->pc = 0x10ECF8u;
}
