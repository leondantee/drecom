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

// Function: entry_0011d804
// Address: 0x11d804 - 0x11d810
void entry_0011d804_0x11d804(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d804_0x11d804");
#endif

    ctx->pc = 0x11d804u;

    // 0x11d804: 0x145001b  divu        $zero, $t2, $a1
    ctx->pc = 0x11d804u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,10); } }
    // 0x11d808: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x11d808u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d80c: 0x0  nop
    ctx->pc = 0x11d80cu;
    // NOP
    ctx->pc = 0x11d810u;
}
