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

// Function: entry_0015bb3c
// Address: 0x15bb3c - 0x15bb5c
void entry_0015bb3c_0x15bb3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015bb3c_0x15bb3c");
#endif

    ctx->pc = 0x15bb3cu;

    // 0x15bb3c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15bb3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15bb40: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x15bb40u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x15bb44: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x15bb44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x15bb48: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x15bb48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x15bb4c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15BB4Cu;
    {
        const bool branch_taken_0x15bb4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15bb4c) {
            ctx->pc = 0x15BB5Cu;
            return;
        }
    }
    ctx->pc = 0x15BB54u;
    // 0x15bb54: 0x1260000e  beqz        $s3, . + 4 + (0xE << 2)
    ctx->pc = 0x15BB54u;
    {
        const bool branch_taken_0x15bb54 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bb54) {
            ctx->pc = 0x15BB90u;
            return;
        }
    }
    ctx->pc = 0x15BB5Cu;
}
