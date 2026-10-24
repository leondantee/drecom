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

// Function: caseD_b
// Address: 0x126d34 - 0x126d9c
void caseD_b_0x126d34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_b_0x126d34");
#endif

    ctx->pc = 0x126d34u;

    // 0x126d34: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x126d34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x126d38: 0x8c231a64  lw          $v1, 0x1A64($at)
    ctx->pc = 0x126d38u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x126d3c: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x126d3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x126d40: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x126D40u;
    {
        const bool branch_taken_0x126d40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x126d40) {
            ctx->pc = 0x126D9Cu;
            return;
        }
    }
    ctx->pc = 0x126D48u;
    // 0x126d48: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x126d48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x126d4c: 0x8c236838  lw          $v1, 0x6838($at)
    ctx->pc = 0x126d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3B6838u));
    // 0x126d50: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x126D50u;
    {
        const bool branch_taken_0x126d50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x126d50) {
            ctx->pc = 0x126D9Cu;
            return;
        }
    }
    ctx->pc = 0x126D58u;
    // 0x126d58: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x126d58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x126d5c: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x126d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x126d60: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x126d60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x126d64: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x126D64u;
    {
        const bool branch_taken_0x126d64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x126d64) {
            ctx->pc = 0x126D9Cu;
            return;
        }
    }
    ctx->pc = 0x126D6Cu;
    // 0x126d6c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x126d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x126d70: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126d74: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x126d74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x126d78: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x126d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x126d7c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126d80: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x126d80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x126d84: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126d88: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x126d88u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x126d8c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126d90: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x126d90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x126d94: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126d98: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x126d98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x126d9cu;
}
