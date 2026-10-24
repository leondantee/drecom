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

// Function: entry_0011a218
// Address: 0x11a218 - 0x11a230
void entry_0011a218_0x11a218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a218_0x11a218");
#endif

    ctx->pc = 0x11a218u;

    // 0x11a218: 0x13103c  dsll32      $v0, $s3, 0
    ctx->pc = 0x11a218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 0));
    // 0x11a21c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11a21cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a220: 0x2283e  dsrl32      $a1, $v0, 0
    ctx->pc = 0x11a220u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x11a224: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x11a224u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a228: 0x2d31021  addu        $v0, $s6, $s3
    ctx->pc = 0x11a228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 19)));
    // 0x11a22c: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x11a22cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    ctx->pc = 0x11a230u;
}
