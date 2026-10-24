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

// Function: entry_002fbe68
// Address: 0x2fbe68 - 0x2fbe9c
void entry_002fbe68_0x2fbe68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fbe68_0x2fbe68");
#endif

    ctx->pc = 0x2fbe68u;

    // 0x2fbe68: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x2fbe68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fbe6c: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x2fbe6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2fbe70: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2fbe70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2fbe74: 0x14a40009  bne         $a1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2FBE74u;
    {
        const bool branch_taken_0x2fbe74 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x2fbe74) {
            ctx->pc = 0x2FBE9Cu;
            return;
        }
    }
    ctx->pc = 0x2FBE7Cu;
    // 0x2fbe7c: 0x8fa40178  lw          $a0, 0x178($sp)
    ctx->pc = 0x2fbe7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fbe80: 0x8c8300d4  lw          $v1, 0xD4($a0)
    ctx->pc = 0x2fbe80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x2fbe84: 0x2465fff9  addiu       $a1, $v1, -0x7
    ctx->pc = 0x2fbe84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967289));
    // 0x2fbe88: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2fbe88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2fbe8c: 0x51883  sra         $v1, $a1, 2
    ctx->pc = 0x2fbe8cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 5), 2));
    // 0x2fbe90: 0x70609628  paddub      $s2, $v1, $zero
    ctx->pc = 0x2fbe90u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2fbe94: 0x72401e28  paddub      $v1, $s2, $zero
    ctx->pc = 0x2fbe94u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x2fbe98: 0x7060f628  paddub      $fp, $v1, $zero
    ctx->pc = 0x2fbe98u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    ctx->pc = 0x2fbe9cu;
}
