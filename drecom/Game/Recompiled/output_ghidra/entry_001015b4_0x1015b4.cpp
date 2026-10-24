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

// Function: entry_001015b4
// Address: 0x1015b4 - 0x1015c4
void entry_001015b4_0x1015b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001015b4_0x1015b4");
#endif

    ctx->pc = 0x1015b4u;

    // 0x1015b4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1015b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1015b8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1015b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1015bc: 0x34639010  ori         $v1, $v1, 0x9010
    ctx->pc = 0x1015bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36880);
    // 0x1015c0: 0x2a21024  and         $v0, $s5, $v0
    ctx->pc = 0x1015c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & GPR_U64(ctx, 2));
    ctx->pc = 0x1015c4u;
}
