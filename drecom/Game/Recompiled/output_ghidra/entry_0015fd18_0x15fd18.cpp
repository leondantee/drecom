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

// Function: entry_0015fd18
// Address: 0x15fd18 - 0x15fd4c
void entry_0015fd18_0x15fd18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015fd18_0x15fd18");
#endif

    ctx->pc = 0x15fd18u;

    // 0x15fd18: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x15fd18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x15fd1c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15fd1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x15fd20: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x15FD20u;
    {
        const bool branch_taken_0x15fd20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15fd20) {
            ctx->pc = 0x15FD4Cu;
            return;
        }
    }
    ctx->pc = 0x15FD28u;
    // 0x15fd28: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x15fd28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x15fd2c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x15fd2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x15fd30: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15FD30u;
    {
        const bool branch_taken_0x15fd30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15fd30) {
            ctx->pc = 0x15FD4Cu;
            return;
        }
    }
    ctx->pc = 0x15FD38u;
    // 0x15fd38: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x15fd38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x15fd3c: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x15fd3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x15fd40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15fd40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15fd44: 0x100001cf  b           . + 4 + (0x1CF << 2)
    ctx->pc = 0x15FD44u;
    {
        const bool branch_taken_0x15fd44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15fd44) {
            ctx->pc = 0x160484u;
            return;
        }
    }
    ctx->pc = 0x15FD4Cu;
}
