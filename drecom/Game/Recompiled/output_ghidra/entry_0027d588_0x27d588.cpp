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

// Function: entry_0027d588
// Address: 0x27d588 - 0x27d5bc
void entry_0027d588_0x27d588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027d588_0x27d588");
#endif

    ctx->pc = 0x27d588u;

    // 0x27d588: 0x212182b  sltu        $v1, $s0, $s2
    ctx->pc = 0x27d588u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x27d58c: 0x1460ffdb  bnez        $v1, . + 4 + (-0x25 << 2)
    ctx->pc = 0x27D58Cu;
    {
        const bool branch_taken_0x27d58c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27d58c) {
            ctx->pc = 0x27D4FCu;
            return;
        }
    }
    ctx->pc = 0x27D594u;
    // 0x27d594: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27d594u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27d598: 0x8c231b38  lw          $v1, 0x1B38($at)
    ctx->pc = 0x27d598u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x621B38u));
    // 0x27d59c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x27D59Cu;
    {
        const bool branch_taken_0x27d59c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d59c) {
            ctx->pc = 0x27D5BCu;
            return;
        }
    }
    ctx->pc = 0x27D5A4u;
    // 0x27d5a4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27d5a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27d5a8: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x27d5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x27d5ac: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x27d5acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x27d5b0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x27d5b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x27d5b4: 0x10600037  beqz        $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x27D5B4u;
    {
        const bool branch_taken_0x27d5b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d5b4) {
            ctx->pc = 0x27D694u;
            return;
        }
    }
    ctx->pc = 0x27D5BCu;
}
