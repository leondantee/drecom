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

// Function: entry_002fe3b8
// Address: 0x2fe3b8 - 0x2fe3ec
void entry_002fe3b8_0x2fe3b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fe3b8_0x2fe3b8");
#endif

    ctx->pc = 0x2fe3b8u;

    // 0x2fe3b8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2fe3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2fe3bc: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x2fe3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2fe3c0: 0x2861002e  slti        $at, $v1, 0x2E
    ctx->pc = 0x2fe3c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)46) ? 1 : 0);
    // 0x2fe3c4: 0x142000e6  bnez        $at, . + 4 + (0xE6 << 2)
    ctx->pc = 0x2FE3C4u;
    {
        const bool branch_taken_0x2fe3c4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fe3c4) {
            ctx->pc = 0x2FE760u;
            return;
        }
    }
    ctx->pc = 0x2FE3CCu;
    // 0x2fe3cc: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2fe3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2fe3d0: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x2fe3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2fe3d4: 0x2861003c  slti        $at, $v1, 0x3C
    ctx->pc = 0x2fe3d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)60) ? 1 : 0);
    // 0x2fe3d8: 0x102000e1  beqz        $at, . + 4 + (0xE1 << 2)
    ctx->pc = 0x2FE3D8u;
    {
        const bool branch_taken_0x2fe3d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fe3d8) {
            ctx->pc = 0x2FE760u;
            return;
        }
    }
    ctx->pc = 0x2FE3E0u;
    // 0x2fe3e0: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x2fe3e0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fe3e4: 0x100000da  b           . + 4 + (0xDA << 2)
    ctx->pc = 0x2FE3E4u;
    {
        const bool branch_taken_0x2fe3e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fe3e4) {
            ctx->pc = 0x2FE750u;
            return;
        }
    }
    ctx->pc = 0x2FE3ECu;
}
