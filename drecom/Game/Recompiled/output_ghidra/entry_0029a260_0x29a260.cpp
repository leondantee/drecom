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

// Function: entry_0029a260
// Address: 0x29a260 - 0x29a268
void entry_0029a260_0x29a260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029a260_0x29a260");
#endif

    ctx->pc = 0x29a260u;

    // 0x29a260: 0x36620003  ori         $v0, $s3, 0x3
    ctx->pc = 0x29a260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)3);
    // 0x29a264: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x29a264u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->pc = 0x29a268u;
}
