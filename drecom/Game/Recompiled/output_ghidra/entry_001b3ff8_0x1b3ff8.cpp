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

// Function: entry_001b3ff8
// Address: 0x1b3ff8 - 0x1b4020
void entry_001b3ff8_0x1b3ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3ff8_0x1b3ff8");
#endif

    ctx->pc = 0x1b3ff8u;

    // 0x1b3ff8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b3ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b3ffc: 0xa20210a8  sb          $v0, 0x10A8($s0)
    ctx->pc = 0x1b3ffcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4264), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b4000: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x1b4000u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x1b4004: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b4004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b4008: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1b4008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x1b400c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B400Cu;
    {
        const bool branch_taken_0x1b400c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b400c) {
            ctx->pc = 0x1B4020u;
            return;
        }
    }
    ctx->pc = 0x1B4014u;
    // 0x1b4014: 0x36b50003  ori         $s5, $s5, 0x3
    ctx->pc = 0x1b4014u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)3);
    // 0x1b4018: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1B4018u;
    {
        const bool branch_taken_0x1b4018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4018) {
            ctx->pc = 0x1B4048u;
            return;
        }
    }
    ctx->pc = 0x1B4020u;
}
