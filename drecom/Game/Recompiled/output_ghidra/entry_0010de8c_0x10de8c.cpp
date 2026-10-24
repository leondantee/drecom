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

// Function: entry_0010de8c
// Address: 0x10de8c - 0x10dea0
void entry_0010de8c_0x10de8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010de8c_0x10de8c");
#endif

    switch (ctx->pc) {
        case 0x10de9cu: goto label_10de9c;
        default: break;
    }

    ctx->pc = 0x10de8cu;

    // 0x10de8c: 0xb20018  mult        $zero, $a1, $s2
    ctx->pc = 0x10de8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x10de90: 0x2812  mflo        $a1
    ctx->pc = 0x10de90u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x10de94: 0xc0854a6  jal         func_215298
    ctx->pc = 0x10DE94u;
    SET_GPR_U32(ctx, 31, 0x10DE9Cu);
    ctx->pc = 0x10DE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DE94u;
    // 0x10de98: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215298u;
    {
        ctx->pc = 0x10DE9Cu;
        ps2_stubs::sceSifWriteBackDCache(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10DE9Cu) { return; }
    ctx->pc = 0x10DE9Cu;
label_10de9c:
    // 0x10de9c: 0x26310003  addiu       $s1, $s1, 0x3
    ctx->pc = 0x10de9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    ctx->pc = 0x10dea0u;
}
