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

// Function: entry_001e1b58
// Address: 0x1e1b58 - 0x1e1b98
void entry_001e1b58_0x1e1b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e1b58_0x1e1b58");
#endif

    ctx->pc = 0x1e1b58u;

    // 0x1e1b58: 0x8e030108  lw          $v1, 0x108($s0)
    ctx->pc = 0x1e1b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e1b5c: 0x30650001  andi        $a1, $v1, 0x1
    ctx->pc = 0x1e1b5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1e1b60: 0x10a0019f  beqz        $a1, . + 4 + (0x19F << 2)
    ctx->pc = 0x1E1B60u;
    {
        const bool branch_taken_0x1e1b60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1b60) {
            ctx->pc = 0x1E21E0u;
            return;
        }
    }
    ctx->pc = 0x1E1B68u;
    // 0x1e1b68: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x1e1b68u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e1b6c: 0x8e040108  lw          $a0, 0x108($s0)
    ctx->pc = 0x1e1b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e1b70: 0x30830008  andi        $v1, $a0, 0x8
    ctx->pc = 0x1e1b70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
    // 0x1e1b74: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E1B74u;
    {
        const bool branch_taken_0x1e1b74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1b74) {
            ctx->pc = 0x1E1B98u;
            return;
        }
    }
    ctx->pc = 0x1E1B7Cu;
    // 0x1e1b7c: 0x34138000  ori         $s3, $zero, 0x8000
    ctx->pc = 0x1e1b7cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e1b80: 0x8fa30258  lw          $v1, 0x258($sp)
    ctx->pc = 0x1e1b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
    // 0x1e1b84: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1e1b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e1b88: 0xafa30258  sw          $v1, 0x258($sp)
    ctx->pc = 0x1e1b88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 600), GPR_U32(ctx, 3));
    // 0x1e1b8c: 0x26100110  addiu       $s0, $s0, 0x110
    ctx->pc = 0x1e1b8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x1e1b90: 0x10000195  b           . + 4 + (0x195 << 2)
    ctx->pc = 0x1E1B90u;
    {
        const bool branch_taken_0x1e1b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1b90) {
            ctx->pc = 0x1E21E8u;
            return;
        }
    }
    ctx->pc = 0x1E1B98u;
}
