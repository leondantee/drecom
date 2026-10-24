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

// Function: entry_00118788
// Address: 0x118788 - 0x118794
void entry_00118788_0x118788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118788_0x118788");
#endif

    ctx->pc = 0x118788u;

    // 0x118788: 0x711023  subu        $v0, $v1, $s1
    ctx->pc = 0x118788u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x11878c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x11878cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x118790: 0x2383e  dsrl32      $a3, $v0, 0
    ctx->pc = 0x118790u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) >> (32 + 0));
    ctx->pc = 0x118794u;
}
