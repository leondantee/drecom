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

// Function: entry_002fc850
// Address: 0x2fc850 - 0x2fc8b0
void entry_002fc850_0x2fc850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fc850_0x2fc850");
#endif

    ctx->pc = 0x2fc850u;

    // 0x2fc850: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x2fc850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fc854: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x2fc854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2fc858: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x2fc858u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2fc85c: 0x142000f6  bnez        $at, . + 4 + (0xF6 << 2)
    ctx->pc = 0x2FC85Cu;
    {
        const bool branch_taken_0x2fc85c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fc85c) {
            ctx->pc = 0x2FCC38u;
            return;
        }
    }
    ctx->pc = 0x2FC864u;
    // 0x2fc864: 0x8fa60178  lw          $a2, 0x178($sp)
    ctx->pc = 0x2fc864u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fc868: 0x8cc40010  lw          $a0, 0x10($a2)
    ctx->pc = 0x2fc868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2fc86c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2fc86cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2fc870: 0x1483000f  bne         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2FC870u;
    {
        const bool branch_taken_0x2fc870 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2fc870) {
            ctx->pc = 0x2FC8B0u;
            return;
        }
    }
    ctx->pc = 0x2FC878u;
    // 0x2fc878: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x2fc878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fc87c: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x2fc87cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2fc880: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2FC880u;
    {
        const bool branch_taken_0x2fc880 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fc880) {
            ctx->pc = 0x2FC8B0u;
            return;
        }
    }
    ctx->pc = 0x2FC888u;
    // 0x2fc888: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x2fc888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fc88c: 0x8c6400d4  lw          $a0, 0xD4($v1)
    ctx->pc = 0x2fc88cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2fc890: 0x2881000e  slti        $at, $a0, 0xE
    ctx->pc = 0x2fc890u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x2fc894: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FC894u;
    {
        const bool branch_taken_0x2fc894 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fc894) {
            ctx->pc = 0x2FC8B0u;
            return;
        }
    }
    ctx->pc = 0x2FC89Cu;
    // 0x2fc89c: 0x8fa60178  lw          $a2, 0x178($sp)
    ctx->pc = 0x2fc89cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fc8a0: 0x8cc700d4  lw          $a3, 0xD4($a2)
    ctx->pc = 0x2fc8a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 212)));
    // 0x2fc8a4: 0x28e40013  slti        $a0, $a3, 0x13
    ctx->pc = 0x2fc8a4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)19) ? 1 : 0);
    // 0x2fc8a8: 0x14800024  bnez        $a0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2FC8A8u;
    {
        const bool branch_taken_0x2fc8a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fc8a8) {
            ctx->pc = 0x2FC93Cu;
            return;
        }
    }
    ctx->pc = 0x2FC8B0u;
}
