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

// Function: entry_00188538
// Address: 0x188538 - 0x188560
void entry_00188538_0x188538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188538_0x188538");
#endif

    ctx->pc = 0x188538u;

    // 0x188538: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x188538u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18853c: 0x8c23006c  lw          $v1, 0x6C($at)
    ctx->pc = 0x18853cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D006Cu));
    // 0x188540: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x188540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x188544: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x188544u;
    {
        const bool branch_taken_0x188544 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x188544) {
            ctx->pc = 0x1885A0u;
            return;
        }
    }
    ctx->pc = 0x18854Cu;
    // 0x18854c: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x18854cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x188550: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x188550u;
    {
        const bool branch_taken_0x188550 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x188550) {
            ctx->pc = 0x188560u;
            return;
        }
    }
    ctx->pc = 0x188558u;
    // 0x188558: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x188558u;
    {
        const bool branch_taken_0x188558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x188558) {
            ctx->pc = 0x1885A0u;
            return;
        }
    }
    ctx->pc = 0x188560u;
}
