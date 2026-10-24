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

// Function: entry_001045dc
// Address: 0x1045dc - 0x1045f0
void entry_001045dc_0x1045dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001045dc_0x1045dc");
#endif

    ctx->pc = 0x1045dcu;

    // 0x1045dc: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1045dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1045e0: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x1045e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1045e4: 0x8e2b0008  lw          $t3, 0x8($s1)
    ctx->pc = 0x1045e4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1045e8: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x1045e8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1045ec: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1045ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1045f0u;
}
