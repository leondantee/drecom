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

// Function: entry_001b54b8
// Address: 0x1b54b8 - 0x1b54d4
void entry_001b54b8_0x1b54b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b54b8_0x1b54b8");
#endif

    ctx->pc = 0x1b54b8u;

    // 0x1b54b8: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x1b54b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x1b54bc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1b54bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b54c0: 0x14620032  bne         $v1, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x1B54C0u;
    {
        const bool branch_taken_0x1b54c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b54c0) {
            ctx->pc = 0x1B558Cu;
            return;
        }
    }
    ctx->pc = 0x1B54C8u;
    // 0x1b54c8: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1b54c8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b54cc: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1B54CCu;
    {
        const bool branch_taken_0x1b54cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b54cc) {
            ctx->pc = 0x1B558Cu;
            return;
        }
    }
    ctx->pc = 0x1B54D4u;
}
