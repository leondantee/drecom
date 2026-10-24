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

// Function: entry_0029757c
// Address: 0x29757c - 0x297594
void entry_0029757c_0x29757c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029757c_0x29757c");
#endif

    ctx->pc = 0x29757cu;

    // 0x29757c: 0x3c0280c0  lui         $v0, 0x80C0
    ctx->pc = 0x29757cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32960 << 16));
    // 0x297580: 0x34432020  ori         $v1, $v0, 0x2020
    ctx->pc = 0x297580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x297584: 0x26620010  addiu       $v0, $s3, 0x10
    ctx->pc = 0x297584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x297588: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x297588u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x29758c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x29758Cu;
    {
        const bool branch_taken_0x29758c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29758c) {
            ctx->pc = 0x2975A8u;
            return;
        }
    }
    ctx->pc = 0x297594u;
}
