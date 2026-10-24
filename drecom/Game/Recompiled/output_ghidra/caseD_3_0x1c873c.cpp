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
// Address: 0x1c873c - 0x1c875c
void caseD_3_0x1c873c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x1c873c");
#endif

    ctx->pc = 0x1c873cu;

    // 0x1c873c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c873cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1c8740: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x1c8740u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1c8744: 0x30430200  andi        $v1, $v0, 0x200
    ctx->pc = 0x1c8744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x1c8748: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C8748u;
    {
        const bool branch_taken_0x1c8748 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8748) {
            ctx->pc = 0x1C875Cu;
            return;
        }
    }
    ctx->pc = 0x1C8750u;
    // 0x1c8750: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1c8750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c8754: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c8754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8758: 0xa06413a7  sb          $a0, 0x13A7($v1)
    ctx->pc = 0x1c8758u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5031), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1c875cu;
}
