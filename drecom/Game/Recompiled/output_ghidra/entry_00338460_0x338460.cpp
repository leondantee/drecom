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

// Function: entry_00338460
// Address: 0x338460 - 0x338480
void entry_00338460_0x338460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00338460_0x338460");
#endif

    ctx->pc = 0x338460u;

    // 0x338460: 0x2a230010  slti        $v1, $s1, 0x10
    ctx->pc = 0x338460u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x338464: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x338464u;
    {
        const bool branch_taken_0x338464 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x338464) {
            ctx->pc = 0x338424u;
            return;
        }
    }
    ctx->pc = 0x33846Cu;
    // 0x33846c: 0x3c010063  lui         $at, 0x63
    ctx->pc = 0x33846cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)99 << 16));
    // 0x338470: 0x9024c98e  lbu         $a0, -0x3672($at)
    ctx->pc = 0x338470u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x62C98Eu));
    // 0x338474: 0x3c010063  lui         $at, 0x63
    ctx->pc = 0x338474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)99 << 16));
    // 0x338478: 0x9023c998  lbu         $v1, -0x3668($at)
    ctx->pc = 0x338478u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x62C998u));
    // 0x33847c: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x33847cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    ctx->pc = 0x338480u;
}
