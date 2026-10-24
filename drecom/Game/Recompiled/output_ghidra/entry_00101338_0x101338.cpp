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

// Function: entry_00101338
// Address: 0x101338 - 0x101344
void entry_00101338_0x101338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101338_0x101338");
#endif

    ctx->pc = 0x101338u;

    // 0x101338: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x101338u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x10133c: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x10133cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x101340: 0x2456ffff  addiu       $s6, $v0, -0x1
    ctx->pc = 0x101340u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    ctx->pc = 0x101344u;
}
