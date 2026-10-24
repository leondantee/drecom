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

// Function: entry_0029c4b8
// Address: 0x29c4b8 - 0x29c4d8
void entry_0029c4b8_0x29c4b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029c4b8_0x29c4b8");
#endif

    ctx->pc = 0x29c4b8u;

    // 0x29c4b8: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x29c4b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29c4bc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x29c4bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x29c4c0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x29c4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x29c4c4: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x29c4c4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x29c4c8: 0x1460ffc5  bnez        $v1, . + 4 + (-0x3B << 2)
    ctx->pc = 0x29C4C8u;
    {
        const bool branch_taken_0x29c4c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29c4c8) {
            ctx->pc = 0x29C3E0u;
            return;
        }
    }
    ctx->pc = 0x29C4D0u;
    // 0x29c4d0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x29c4d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x29c4d4: 0x0  nop
    ctx->pc = 0x29c4d4u;
    // NOP
    ctx->pc = 0x29c4d8u;
}
