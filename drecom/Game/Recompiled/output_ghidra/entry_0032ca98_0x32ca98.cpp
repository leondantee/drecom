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

// Function: entry_0032ca98
// Address: 0x32ca98 - 0x32caa8
void entry_0032ca98_0x32ca98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032ca98_0x32ca98");
#endif

    ctx->pc = 0x32ca98u;

    // 0x32ca98: 0x82622820  lb          $v0, 0x2820($s3)
    ctx->pc = 0x32ca98u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 10272)));
    // 0x32ca9c: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x32ca9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x32caa0: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x32caa0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x32caa4: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x32caa4u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x32caa8u;
}
