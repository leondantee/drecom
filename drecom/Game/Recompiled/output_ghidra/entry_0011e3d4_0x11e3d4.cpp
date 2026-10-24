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

// Function: entry_0011e3d4
// Address: 0x11e3d4 - 0x11e3e0
void entry_0011e3d4_0x11e3d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e3d4_0x11e3d4");
#endif

    ctx->pc = 0x11e3d4u;

    // 0x11e3d4: 0x145001b  divu        $zero, $t2, $a1
    ctx->pc = 0x11e3d4u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,10); } }
    // 0x11e3d8: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x11e3d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e3dc: 0x0  nop
    ctx->pc = 0x11e3dcu;
    // NOP
    ctx->pc = 0x11e3e0u;
}
