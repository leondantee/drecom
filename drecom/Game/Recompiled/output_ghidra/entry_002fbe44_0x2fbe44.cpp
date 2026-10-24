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

// Function: entry_002fbe44
// Address: 0x2fbe44 - 0x2fbe68
void entry_002fbe44_0x2fbe44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fbe44_0x2fbe44");
#endif

    ctx->pc = 0x2fbe44u;

    // 0x2fbe44: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x2fbe44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fbe48: 0x8c6600d4  lw          $a2, 0xD4($v1)
    ctx->pc = 0x2fbe48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2fbe4c: 0x24c3ffff  addiu       $v1, $a2, -0x1
    ctx->pc = 0x2fbe4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2fbe50: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2fbe50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2fbe54: 0x32083  sra         $a0, $v1, 2
    ctx->pc = 0x2fbe54u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 2));
    // 0x2fbe58: 0x70801e28  paddub      $v1, $a0, $zero
    ctx->pc = 0x2fbe58u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x2fbe5c: 0x7060f628  paddub      $fp, $v1, $zero
    ctx->pc = 0x2fbe5cu;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2fbe60: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2FBE60u;
    {
        const bool branch_taken_0x2fbe60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fbe60) {
            ctx->pc = 0x2FBE9Cu;
            return;
        }
    }
    ctx->pc = 0x2FBE68u;
}
