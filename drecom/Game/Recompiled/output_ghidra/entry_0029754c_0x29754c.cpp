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

// Function: entry_0029754c
// Address: 0x29754c - 0x297564
void entry_0029754c_0x29754c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029754c_0x29754c");
#endif

    ctx->pc = 0x29754cu;

    // 0x29754c: 0x3c028020  lui         $v0, 0x8020
    ctx->pc = 0x29754cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32800 << 16));
    // 0x297550: 0x344320c0  ori         $v1, $v0, 0x20C0
    ctx->pc = 0x297550u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8384);
    // 0x297554: 0x26620010  addiu       $v0, $s3, 0x10
    ctx->pc = 0x297554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x297558: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x297558u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x29755c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x29755Cu;
    {
        const bool branch_taken_0x29755c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29755c) {
            ctx->pc = 0x2975A8u;
            return;
        }
    }
    ctx->pc = 0x297564u;
}
