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

// Function: entry_001185c8
// Address: 0x1185c8 - 0x1185d8
void entry_001185c8_0x1185c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001185c8_0x1185c8");
#endif

    ctx->pc = 0x1185c8u;

    // 0x1185c8: 0x160502d  daddu       $t2, $t3, $zero
    ctx->pc = 0x1185c8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1185cc: 0x4c4821  addu        $t1, $v0, $t4
    ctx->pc = 0x1185ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x1185d0: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x1185d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1185d4: 0x8cb0000c  lw          $s0, 0xC($a1)
    ctx->pc = 0x1185d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    ctx->pc = 0x1185d8u;
}
