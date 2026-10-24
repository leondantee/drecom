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

// Function: caseD_5
// Address: 0x1c8b4c - 0x1c8b7c
void caseD_5_0x1c8b4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x1c8b4c");
#endif

    ctx->pc = 0x1c8b4cu;

    // 0x1c8b4c: 0x8fa80088  lw          $t0, 0x88($sp)
    ctx->pc = 0x1c8b4cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8b50: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x1c8b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1c8b54: 0x3c048040  lui         $a0, 0x8040
    ctx->pc = 0x1c8b54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32832 << 16));
    // 0x1c8b58: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1c8b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1c8b5c: 0xad020008  sw          $v0, 0x8($t0)
    ctx->pc = 0x1c8b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 2));
    // 0x1c8b60: 0x8e05009c  lw          $a1, 0x9C($s0)
    ctx->pc = 0x1c8b60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1c8b64: 0x30a60040  andi        $a2, $a1, 0x40
    ctx->pc = 0x1c8b64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)64);
    // 0x1c8b68: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C8B68u;
    {
        const bool branch_taken_0x1c8b68 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8b68) {
            ctx->pc = 0x1C8B7Cu;
            return;
        }
    }
    ctx->pc = 0x1C8B70u;
    // 0x1c8b70: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c8b70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c8b74: 0x8fa80088  lw          $t0, 0x88($sp)
    ctx->pc = 0x1c8b74u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8b78: 0xad071b64  sw          $a3, 0x1B64($t0)
    ctx->pc = 0x1c8b78u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7012), GPR_U32(ctx, 7));
    ctx->pc = 0x1c8b7cu;
}
