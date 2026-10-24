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

// Function: entry_0028b7b4
// Address: 0x28b7b4 - 0x28b7e4
void entry_0028b7b4_0x28b7b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028b7b4_0x28b7b4");
#endif

    ctx->pc = 0x28b7b4u;

    // 0x28b7b4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28b7b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28b7b8: 0x8c23204c  lw          $v1, 0x204C($at)
    ctx->pc = 0x28b7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x62204Cu));
    // 0x28b7bc: 0x3c070800  lui         $a3, 0x800
    ctx->pc = 0x28b7bcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)2048 << 16));
    // 0x28b7c0: 0x34e80011  ori         $t0, $a3, 0x11
    ctx->pc = 0x28b7c0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)17);
    // 0x28b7c4: 0x10680071  beq         $v1, $t0, . + 4 + (0x71 << 2)
    ctx->pc = 0x28B7C4u;
    {
        const bool branch_taken_0x28b7c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 8));
        if (branch_taken_0x28b7c4) {
            ctx->pc = 0x28B98Cu;
            return;
        }
    }
    ctx->pc = 0x28B7CCu;
    // 0x28b7cc: 0x2408008d  addiu       $t0, $zero, 0x8D
    ctx->pc = 0x28b7ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
    // 0x28b7d0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28b7d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28b7d4: 0x8c26204c  lw          $a2, 0x204C($at)
    ctx->pc = 0x28b7d4u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x62204Cu));
    // 0x28b7d8: 0xa0c8011c  sb          $t0, 0x11C($a2)
    ctx->pc = 0x28b7d8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 284), (uint8_t)GPR_U32(ctx, 8));
    // 0x28b7dc: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x28B7DCu;
    {
        const bool branch_taken_0x28b7dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b7dc) {
            ctx->pc = 0x28B98Cu;
            return;
        }
    }
    ctx->pc = 0x28B7E4u;
}
