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
// Address: 0x296934 - 0x296968
void caseD_b_0x296934(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_b_0x296934");
#endif

    ctx->pc = 0x296934u;

    // 0x296934: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x296934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x296938: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x296938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29693c: 0xa06469c9  sb          $a0, 0x69C9($v1)
    ctx->pc = 0x29693cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 27081), (uint8_t)GPR_U32(ctx, 4));
    // 0x296940: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x296940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x296944: 0x8c6469b4  lw          $a0, 0x69B4($v1)
    ctx->pc = 0x296944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27060)));
    // 0x296948: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x296948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29694c: 0xac6469b8  sw          $a0, 0x69B8($v1)
    ctx->pc = 0x29694cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 27064), GPR_U32(ctx, 4));
    // 0x296950: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x296950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x296954: 0x8c6469c0  lw          $a0, 0x69C0($v1)
    ctx->pc = 0x296954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27072)));
    // 0x296958: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x296958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29695c: 0xac6469c4  sw          $a0, 0x69C4($v1)
    ctx->pc = 0x29695cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 27076), GPR_U32(ctx, 4));
    // 0x296960: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x296960u;
    {
        const bool branch_taken_0x296960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x296960) {
            ctx->pc = 0x296A6Cu;
            return;
        }
    }
    ctx->pc = 0x296968u;
}
