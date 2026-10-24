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
// Address: 0x1c7024 - 0x1c7044
void caseD_3_0x1c7024(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x1c7024");
#endif

    ctx->pc = 0x1c7024u;

    // 0x1c7024: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c7024u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1c7028: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x1c7028u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1c702c: 0x30430200  andi        $v1, $v0, 0x200
    ctx->pc = 0x1c702cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x1c7030: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C7030u;
    {
        const bool branch_taken_0x1c7030 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7030) {
            ctx->pc = 0x1C7044u;
            return;
        }
    }
    ctx->pc = 0x1C7038u;
    // 0x1c7038: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c7038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c703c: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c703cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7040: 0xa0a213a7  sb          $v0, 0x13A7($a1)
    ctx->pc = 0x1c7040u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5031), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1c7044u;
}
