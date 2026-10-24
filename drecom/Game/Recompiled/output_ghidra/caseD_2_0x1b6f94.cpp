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

// Function: caseD_2
// Address: 0x1b6f94 - 0x1b6fb8
void caseD_2_0x1b6f94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x1b6f94");
#endif

    ctx->pc = 0x1b6f94u;

    // 0x1b6f94: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6f98: 0xac601b64  sw          $zero, 0x1B64($v1)
    ctx->pc = 0x1b6f98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7012), GPR_U32(ctx, 0));
    // 0x1b6f9c: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x1b6f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x1b6fa0: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x1b6fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x1b6fa4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B6FA4u;
    {
        const bool branch_taken_0x1b6fa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b6fa4) {
            ctx->pc = 0x1B6FB8u;
            return;
        }
    }
    ctx->pc = 0x1B6FACu;
    // 0x1b6fac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b6facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b6fb0: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b6fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6fb4: 0xaca31b64  sw          $v1, 0x1B64($a1)
    ctx->pc = 0x1b6fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 7012), GPR_U32(ctx, 3));
    ctx->pc = 0x1b6fb8u;
}
