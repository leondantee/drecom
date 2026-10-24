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

// Function: entry_00184ef4
// Address: 0x184ef4 - 0x184f20
void entry_00184ef4_0x184ef4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00184ef4_0x184ef4");
#endif

    ctx->pc = 0x184ef4u;

    // 0x184ef4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x184ef4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x184ef8: 0x8c221a64  lw          $v0, 0x1A64($at)
    ctx->pc = 0x184ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x184efc: 0x30420140  andi        $v0, $v0, 0x140
    ctx->pc = 0x184efcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)320);
    // 0x184f00: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x184F00u;
    {
        const bool branch_taken_0x184f00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x184f00) {
            ctx->pc = 0x184F20u;
            return;
        }
    }
    ctx->pc = 0x184F08u;
    // 0x184f08: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x184f08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x184f0c: 0x8c23dbc8  lw          $v1, -0x2438($at)
    ctx->pc = 0x184f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EDBC8u));
    // 0x184f10: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x184f10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x184f14: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x184f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x184f18: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x184F18u;
    {
        const bool branch_taken_0x184f18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x184f18) {
            ctx->pc = 0x184F2Cu;
            return;
        }
    }
    ctx->pc = 0x184F20u;
}
