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

// Function: entry_0021327c
// Address: 0x21327c - 0x2132b8
void entry_0021327c_0x21327c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021327c_0x21327c");
#endif

    ctx->pc = 0x21327cu;

    // 0x21327c: 0xf  sync
    ctx->pc = 0x21327cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x213280: 0xbcd00001  cache       0x10, 0x1($a2)
    ctx->pc = 0x213280u;
    // CACHE instruction (ignored)
    // 0x213284: 0xf  sync
    ctx->pc = 0x213284u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x213288: 0x4002e000  mfc0        $v0, TagLo
    ctx->pc = 0x213288u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_taglo);
    // 0x21328c: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x21328cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x213290: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x213290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x213294: 0xa2182b  sltu        $v1, $a1, $v0
    ctx->pc = 0x213294u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x213298: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x213298u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x21329c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21329Cu;
    {
        const bool branch_taken_0x21329c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21329c) {
            ctx->pc = 0x2132B8u;
            return;
        }
    }
    ctx->pc = 0x2132A4u;
    // 0x2132a4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2132A4u;
    {
        const bool branch_taken_0x2132a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2132a4) {
            ctx->pc = 0x2132B8u;
            return;
        }
    }
    ctx->pc = 0x2132ACu;
    // 0x2132ac: 0xf  sync
    ctx->pc = 0x2132acu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2132b0: 0xbcd40001  cache       0x14, 0x1($a2)
    ctx->pc = 0x2132b0u;
    // CACHE instruction (ignored)
    // 0x2132b4: 0xf  sync
    ctx->pc = 0x2132b4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    ctx->pc = 0x2132b8u;
}
