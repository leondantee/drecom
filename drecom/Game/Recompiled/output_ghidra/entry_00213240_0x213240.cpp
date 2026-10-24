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

// Function: entry_00213240
// Address: 0x213240 - 0x21327c
void entry_00213240_0x213240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00213240_0x213240");
#endif

    ctx->pc = 0x213240u;

    // 0x213240: 0xf  sync
    ctx->pc = 0x213240u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x213244: 0xbcd00000  cache       0x10, 0x0($a2)
    ctx->pc = 0x213244u;
    // CACHE instruction (ignored)
    // 0x213248: 0xf  sync
    ctx->pc = 0x213248u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x21324c: 0x4002e000  mfc0        $v0, TagLo
    ctx->pc = 0x21324cu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_taglo);
    // 0x213250: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x213250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x213254: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x213254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x213258: 0xa2182b  sltu        $v1, $a1, $v0
    ctx->pc = 0x213258u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x21325c: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x21325cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x213260: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x213260u;
    {
        const bool branch_taken_0x213260 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x213260) {
            ctx->pc = 0x21327Cu;
            return;
        }
    }
    ctx->pc = 0x213268u;
    // 0x213268: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x213268u;
    {
        const bool branch_taken_0x213268 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x213268) {
            ctx->pc = 0x21327Cu;
            return;
        }
    }
    ctx->pc = 0x213270u;
    // 0x213270: 0xf  sync
    ctx->pc = 0x213270u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x213274: 0xbcd40000  cache       0x14, 0x0($a2)
    ctx->pc = 0x213274u;
    // CACHE instruction (ignored)
    // 0x213278: 0xf  sync
    ctx->pc = 0x213278u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    ctx->pc = 0x21327cu;
}
