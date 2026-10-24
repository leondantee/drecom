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

// Function: entry_001e1348
// Address: 0x1e1348 - 0x1e138c
void entry_001e1348_0x1e1348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e1348_0x1e1348");
#endif

    ctx->pc = 0x1e1348u;

    // 0x1e1348: 0x8e030108  lw          $v1, 0x108($s0)
    ctx->pc = 0x1e1348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e134c: 0x30720001  andi        $s2, $v1, 0x1
    ctx->pc = 0x1e134cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1e1350: 0x124001a7  beqz        $s2, . + 4 + (0x1A7 << 2)
    ctx->pc = 0x1E1350u;
    {
        const bool branch_taken_0x1e1350 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1350) {
            ctx->pc = 0x1E19F0u;
            return;
        }
    }
    ctx->pc = 0x1E1358u;
    // 0x1e1358: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x1e1358u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e135c: 0x8e040108  lw          $a0, 0x108($s0)
    ctx->pc = 0x1e135cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e1360: 0x30830008  andi        $v1, $a0, 0x8
    ctx->pc = 0x1e1360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
    // 0x1e1364: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E1364u;
    {
        const bool branch_taken_0x1e1364 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1364) {
            ctx->pc = 0x1E138Cu;
            return;
        }
    }
    ctx->pc = 0x1E136Cu;
    // 0x1e136c: 0x34128000  ori         $s2, $zero, 0x8000
    ctx->pc = 0x1e136cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e1370: 0x8fa30194  lw          $v1, 0x194($sp)
    ctx->pc = 0x1e1370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
    // 0x1e1374: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1e1374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e1378: 0xafa40194  sw          $a0, 0x194($sp)
    ctx->pc = 0x1e1378u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 4));
    // 0x1e137c: 0x26050110  addiu       $a1, $s0, 0x110
    ctx->pc = 0x1e137cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x1e1380: 0x70a08628  paddub      $s0, $a1, $zero
    ctx->pc = 0x1e1380u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1e1384: 0x1000019e  b           . + 4 + (0x19E << 2)
    ctx->pc = 0x1E1384u;
    {
        const bool branch_taken_0x1e1384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1384) {
            ctx->pc = 0x1E1A00u;
            return;
        }
    }
    ctx->pc = 0x1E138Cu;
}
