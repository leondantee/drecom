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

// Function: entry_0013d4a4
// Address: 0x13d4a4 - 0x13d4b4
void entry_0013d4a4_0x13d4a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d4a4_0x13d4a4");
#endif

    ctx->pc = 0x13d4a4u;

    // 0x13d4a4: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x13d4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x13d4a8: 0x3443080b  ori         $v1, $v0, 0x80B
    ctx->pc = 0x13d4a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2059);
    // 0x13d4ac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13d4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d4b0: 0xfc430010  sd          $v1, 0x10($v0)
    ctx->pc = 0x13d4b0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 3));
    ctx->pc = 0x13d4b4u;
}
