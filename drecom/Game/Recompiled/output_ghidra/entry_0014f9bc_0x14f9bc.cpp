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

// Function: entry_0014f9bc
// Address: 0x14f9bc - 0x14f9d8
void entry_0014f9bc_0x14f9bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f9bc_0x14f9bc");
#endif

    ctx->pc = 0x14f9bcu;

    // 0x14f9bc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14f9bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14f9c0: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x14f9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x14f9c4: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x14f9c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x14f9c8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14F9C8u;
    {
        const bool branch_taken_0x14f9c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f9c8) {
            ctx->pc = 0x14F9D8u;
            return;
        }
    }
    ctx->pc = 0x14F9D0u;
    // 0x14f9d0: 0x36220006  ori         $v0, $s1, 0x6
    ctx->pc = 0x14f9d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)6);
    // 0x14f9d4: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x14f9d4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->pc = 0x14f9d8u;
}
