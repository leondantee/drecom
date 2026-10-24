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

// Function: entry_003313c4
// Address: 0x3313c4 - 0x331400
void entry_003313c4_0x3313c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003313c4_0x3313c4");
#endif

    ctx->pc = 0x3313c4u;

    // 0x3313c4: 0x92c20007  lbu         $v0, 0x7($s6)
    ctx->pc = 0x3313c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 7)));
    // 0x3313c8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x3313c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3313cc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3313ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3313d0: 0x10620027  beq         $v1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x3313D0u;
    {
        const bool branch_taken_0x3313d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3313d0) {
            ctx->pc = 0x331470u;
            return;
        }
    }
    ctx->pc = 0x3313D8u;
    // 0x3313d8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3313d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3313dc: 0x1064001c  beq         $v1, $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x3313DCu;
    {
        const bool branch_taken_0x3313dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x3313dc) {
            ctx->pc = 0x331450u;
            return;
        }
    }
    ctx->pc = 0x3313E4u;
    // 0x3313e4: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3313E4u;
    {
        const bool branch_taken_0x3313e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3313e4) {
            ctx->pc = 0x331428u;
            return;
        }
    }
    ctx->pc = 0x3313ECu;
    // 0x3313ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3313ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3313f0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3313F0u;
    {
        const bool branch_taken_0x3313f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3313f0) {
            ctx->pc = 0x331400u;
            return;
        }
    }
    ctx->pc = 0x3313F8u;
    // 0x3313f8: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x3313F8u;
    {
        const bool branch_taken_0x3313f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3313f8) {
            ctx->pc = 0x331490u;
            return;
        }
    }
    ctx->pc = 0x331400u;
}
