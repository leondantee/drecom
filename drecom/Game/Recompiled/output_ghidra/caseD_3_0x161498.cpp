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

// Function: caseD_3
// Address: 0x161498 - 0x1614d4
void caseD_3_0x161498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x161498");
#endif

    ctx->pc = 0x161498u;

    // 0x161498: 0x920213a6  lbu         $v0, 0x13A6($s0)
    ctx->pc = 0x161498u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5030)));
    // 0x16149c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x16149cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1614a0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1614a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1614a4: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1614A4u;
    {
        const bool branch_taken_0x1614a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1614a4) {
            ctx->pc = 0x161500u;
            return;
        }
    }
    ctx->pc = 0x1614ACu;
    // 0x1614ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1614acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1614b0: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1614B0u;
    {
        const bool branch_taken_0x1614b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1614b0) {
            ctx->pc = 0x161500u;
            return;
        }
    }
    ctx->pc = 0x1614B8u;
    // 0x1614b8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1614b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1614bc: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1614BCu;
    {
        const bool branch_taken_0x1614bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1614bc) {
            ctx->pc = 0x1614D4u;
            return;
        }
    }
    ctx->pc = 0x1614C4u;
    // 0x1614c4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1614C4u;
    {
        const bool branch_taken_0x1614c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1614c4) {
            ctx->pc = 0x1614D4u;
            return;
        }
    }
    ctx->pc = 0x1614CCu;
    // 0x1614cc: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1614CCu;
    {
        const bool branch_taken_0x1614cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1614cc) {
            ctx->pc = 0x1614D4u;
            return;
        }
    }
    ctx->pc = 0x1614D4u;
}
