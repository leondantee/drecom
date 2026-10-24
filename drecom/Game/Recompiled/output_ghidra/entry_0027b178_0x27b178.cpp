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

// Function: entry_0027b178
// Address: 0x27b178 - 0x27b1b8
void entry_0027b178_0x27b178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027b178_0x27b178");
#endif

    ctx->pc = 0x27b178u;

    // 0x27b178: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x27b178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x27b17c: 0x1202000e  beq         $s0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x27B17Cu;
    {
        const bool branch_taken_0x27b17c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x27b17c) {
            ctx->pc = 0x27B1B8u;
            return;
        }
    }
    ctx->pc = 0x27B184u;
    // 0x27b184: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x27b184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27b188: 0x1202000b  beq         $s0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x27B188u;
    {
        const bool branch_taken_0x27b188 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x27b188) {
            ctx->pc = 0x27B1B8u;
            return;
        }
    }
    ctx->pc = 0x27B190u;
    // 0x27b190: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x27b190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27b194: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x27B194u;
    {
        const bool branch_taken_0x27b194 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x27b194) {
            ctx->pc = 0x27B1B8u;
            return;
        }
    }
    ctx->pc = 0x27B19Cu;
    // 0x27b19c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27b19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27b1a0: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27B1A0u;
    {
        const bool branch_taken_0x27b1a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x27b1a0) {
            ctx->pc = 0x27B1B8u;
            return;
        }
    }
    ctx->pc = 0x27B1A8u;
    // 0x27b1a8: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27B1A8u;
    {
        const bool branch_taken_0x27b1a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b1a8) {
            ctx->pc = 0x27B1B8u;
            return;
        }
    }
    ctx->pc = 0x27B1B0u;
    // 0x27b1b0: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x27B1B0u;
    {
        const bool branch_taken_0x27b1b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b1b0) {
            ctx->pc = 0x27B2ACu;
            return;
        }
    }
    ctx->pc = 0x27B1B8u;
}
