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

// Function: entry_00213378
// Address: 0x213378 - 0x2133b4
void entry_00213378_0x213378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00213378_0x213378");
#endif

    ctx->pc = 0x213378u;

    // 0x213378: 0xf  sync
    ctx->pc = 0x213378u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x21337c: 0xbcd00000  cache       0x10, 0x0($a2)
    ctx->pc = 0x21337cu;
    // CACHE instruction (ignored)
    // 0x213380: 0xf  sync
    ctx->pc = 0x213380u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x213384: 0x4002e000  mfc0        $v0, TagLo
    ctx->pc = 0x213384u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_taglo);
    // 0x213388: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x213388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x21338c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x21338cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x213390: 0xa2182b  sltu        $v1, $a1, $v0
    ctx->pc = 0x213390u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x213394: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x213394u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x213398: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x213398u;
    {
        const bool branch_taken_0x213398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x213398) {
            ctx->pc = 0x2133B4u;
            return;
        }
    }
    ctx->pc = 0x2133A0u;
    // 0x2133a0: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2133A0u;
    {
        const bool branch_taken_0x2133a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2133a0) {
            ctx->pc = 0x2133B4u;
            return;
        }
    }
    ctx->pc = 0x2133A8u;
    // 0x2133a8: 0xf  sync
    ctx->pc = 0x2133a8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2133ac: 0xbcd60000  cache       0x16, 0x0($a2)
    ctx->pc = 0x2133acu;
    // CACHE instruction (ignored)
    // 0x2133b0: 0xf  sync
    ctx->pc = 0x2133b0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    ctx->pc = 0x2133b4u;
}
