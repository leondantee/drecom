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

// Function: entry_002fc8ec
// Address: 0x2fc8ec - 0x2fc93c
void entry_002fc8ec_0x2fc8ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fc8ec_0x2fc8ec");
#endif

    ctx->pc = 0x2fc8ecu;

    // 0x2fc8ec: 0x8fa70178  lw          $a3, 0x178($sp)
    ctx->pc = 0x2fc8ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fc8f0: 0x8ce40010  lw          $a0, 0x10($a3)
    ctx->pc = 0x2fc8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x2fc8f4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2fc8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2fc8f8: 0x148300cf  bne         $a0, $v1, . + 4 + (0xCF << 2)
    ctx->pc = 0x2FC8F8u;
    {
        const bool branch_taken_0x2fc8f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2fc8f8) {
            ctx->pc = 0x2FCC38u;
            return;
        }
    }
    ctx->pc = 0x2FC900u;
    // 0x2fc900: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x2fc900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fc904: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2fc904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2fc908: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x2fc908u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2fc90c: 0x148900ca  bne         $a0, $t1, . + 4 + (0xCA << 2)
    ctx->pc = 0x2FC90Cu;
    {
        const bool branch_taken_0x2fc90c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 9));
        if (branch_taken_0x2fc90c) {
            ctx->pc = 0x2FCC38u;
            return;
        }
    }
    ctx->pc = 0x2FC914u;
    // 0x2fc914: 0x8fa70178  lw          $a3, 0x178($sp)
    ctx->pc = 0x2fc914u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fc918: 0x8ce800d4  lw          $t0, 0xD4($a3)
    ctx->pc = 0x2fc918u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 212)));
    // 0x2fc91c: 0x2901000c  slti        $at, $t0, 0xC
    ctx->pc = 0x2fc91cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x2fc920: 0x142000c5  bnez        $at, . + 4 + (0xC5 << 2)
    ctx->pc = 0x2FC920u;
    {
        const bool branch_taken_0x2fc920 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fc920) {
            ctx->pc = 0x2FCC38u;
            return;
        }
    }
    ctx->pc = 0x2FC928u;
    // 0x2fc928: 0x8fa40178  lw          $a0, 0x178($sp)
    ctx->pc = 0x2fc928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fc92c: 0x8c8400d4  lw          $a0, 0xD4($a0)
    ctx->pc = 0x2fc92cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x2fc930: 0x28810011  slti        $at, $a0, 0x11
    ctx->pc = 0x2fc930u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x2fc934: 0x102000c0  beqz        $at, . + 4 + (0xC0 << 2)
    ctx->pc = 0x2FC934u;
    {
        const bool branch_taken_0x2fc934 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fc934) {
            ctx->pc = 0x2FCC38u;
            return;
        }
    }
    ctx->pc = 0x2FC93Cu;
}
