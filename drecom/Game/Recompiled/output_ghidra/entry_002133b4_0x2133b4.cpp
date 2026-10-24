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

// Function: entry_002133b4
// Address: 0x2133b4 - 0x2133f0
void entry_002133b4_0x2133b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002133b4_0x2133b4");
#endif

    ctx->pc = 0x2133b4u;

    // 0x2133b4: 0xf  sync
    ctx->pc = 0x2133b4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2133b8: 0xbcd00001  cache       0x10, 0x1($a2)
    ctx->pc = 0x2133b8u;
    // CACHE instruction (ignored)
    // 0x2133bc: 0xf  sync
    ctx->pc = 0x2133bcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2133c0: 0x4002e000  mfc0        $v0, TagLo
    ctx->pc = 0x2133c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_taglo);
    // 0x2133c4: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x2133c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x2133c8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2133c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2133cc: 0xa2182b  sltu        $v1, $a1, $v0
    ctx->pc = 0x2133ccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2133d0: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x2133d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2133d4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2133D4u;
    {
        const bool branch_taken_0x2133d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2133d4) {
            ctx->pc = 0x2133F0u;
            return;
        }
    }
    ctx->pc = 0x2133DCu;
    // 0x2133dc: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2133DCu;
    {
        const bool branch_taken_0x2133dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2133dc) {
            ctx->pc = 0x2133F0u;
            return;
        }
    }
    ctx->pc = 0x2133E4u;
    // 0x2133e4: 0xf  sync
    ctx->pc = 0x2133e4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2133e8: 0xbcd60001  cache       0x16, 0x1($a2)
    ctx->pc = 0x2133e8u;
    // CACHE instruction (ignored)
    // 0x2133ec: 0xf  sync
    ctx->pc = 0x2133ecu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    ctx->pc = 0x2133f0u;
}
