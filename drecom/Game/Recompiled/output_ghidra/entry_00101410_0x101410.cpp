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

// Function: entry_00101410
// Address: 0x101410 - 0x101420
void entry_00101410_0x101410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101410_0x101410");
#endif

    ctx->pc = 0x101410u;

    // 0x101410: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x101410u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x101414: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x101414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x101418: 0x34639010  ori         $v1, $v1, 0x9010
    ctx->pc = 0x101418u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36880);
    // 0x10141c: 0x2821024  and         $v0, $s4, $v0
    ctx->pc = 0x10141cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & GPR_U64(ctx, 2));
    ctx->pc = 0x101420u;
}
