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

// Function: entry_00101130
// Address: 0x101130 - 0x101140
void entry_00101130_0x101130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101130_0x101130");
#endif

    ctx->pc = 0x101130u;

    // 0x101130: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x101130u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x101134: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x101134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x101138: 0x3463a010  ori         $v1, $v1, 0xA010
    ctx->pc = 0x101138u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40976);
    // 0x10113c: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x10113cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    ctx->pc = 0x101140u;
}
