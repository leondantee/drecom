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

// Function: entry_0035d484
// Address: 0x35d484 - 0x35d4a0
void entry_0035d484_0x35d484(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035d484_0x35d484");
#endif

    ctx->pc = 0x35d484u;

    // 0x35d484: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x35d484u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x35d488: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x35d488u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x35d48c: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x35D48Cu;
    {
        const bool branch_taken_0x35d48c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x35d48c) {
            ctx->pc = 0x35D4A0u;
            return;
        }
    }
    ctx->pc = 0x35D494u;
    // 0x35d494: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x35d494u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x35d498: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x35D498u;
    {
        const bool branch_taken_0x35d498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35d498) {
            ctx->pc = 0x35D4B0u;
            return;
        }
    }
    ctx->pc = 0x35D4A0u;
}
