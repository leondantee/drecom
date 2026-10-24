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

// Function: entry_00263550
// Address: 0x263550 - 0x263570
void entry_00263550_0x263550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00263550_0x263550");
#endif

    ctx->pc = 0x263550u;

    // 0x263550: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x263550u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x263554: 0x3262ffff  andi        $v0, $s3, 0xFFFF
    ctx->pc = 0x263554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x263558: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x263558u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x26355c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26355Cu;
    {
        const bool branch_taken_0x26355c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26355c) {
            ctx->pc = 0x263570u;
            return;
        }
    }
    ctx->pc = 0x263564u;
    // 0x263564: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x263564u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x263568: 0x100000dd  b           . + 4 + (0xDD << 2)
    ctx->pc = 0x263568u;
    {
        const bool branch_taken_0x263568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x263568) {
            ctx->pc = 0x2638E0u;
            return;
        }
    }
    ctx->pc = 0x263570u;
}
