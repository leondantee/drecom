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

// Function: entry_0011a2e8
// Address: 0x11a2e8 - 0x11a300
void entry_0011a2e8_0x11a2e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a2e8_0x11a2e8");
#endif

    ctx->pc = 0x11a2e8u;

    // 0x11a2e8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11a2e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a2ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11a2ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a2f0: 0xb303e  dsrl32      $a2, $t3, 0
    ctx->pc = 0x11a2f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 11) >> (32 + 0));
    // 0x11a2f4: 0xb34021  addu        $t0, $a1, $s3
    ctx->pc = 0x11a2f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x11a2f8: 0x933823  subu        $a3, $a0, $s3
    ctx->pc = 0x11a2f8u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x11a2fc: 0x0  nop
    ctx->pc = 0x11a2fcu;
    // NOP
    ctx->pc = 0x11a300u;
}
