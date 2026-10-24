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

// Function: entry_0029c608
// Address: 0x29c608 - 0x29c628
void entry_0029c608_0x29c608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029c608_0x29c608");
#endif

    ctx->pc = 0x29c608u;

    // 0x29c608: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x29c608u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29c60c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x29c60cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x29c610: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x29c610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x29c614: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x29c614u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x29c618: 0x1460ffbb  bnez        $v1, . + 4 + (-0x45 << 2)
    ctx->pc = 0x29C618u;
    {
        const bool branch_taken_0x29c618 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29c618) {
            ctx->pc = 0x29C508u;
            return;
        }
    }
    ctx->pc = 0x29C620u;
    // 0x29c620: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x29c620u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x29c624: 0x0  nop
    ctx->pc = 0x29c624u;
    // NOP
    ctx->pc = 0x29c628u;
}
