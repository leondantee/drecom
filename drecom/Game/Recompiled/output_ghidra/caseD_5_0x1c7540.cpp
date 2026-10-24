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
// Address: 0x1c7540 - 0x1c7560
void caseD_5_0x1c7540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x1c7540");
#endif

    ctx->pc = 0x1c7540u;

    // 0x1c7540: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c7540u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1c7544: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x1c7544u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1c7548: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x1c7548u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x1c754c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C754Cu;
    {
        const bool branch_taken_0x1c754c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c754c) {
            ctx->pc = 0x1C7560u;
            return;
        }
    }
    ctx->pc = 0x1C7554u;
    // 0x1c7554: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1c7554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c7558: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c755c: 0xa06413a7  sb          $a0, 0x13A7($v1)
    ctx->pc = 0x1c755cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5031), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1c7560u;
}
