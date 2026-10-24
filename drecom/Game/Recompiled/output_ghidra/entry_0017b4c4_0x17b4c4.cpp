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

// Function: entry_0017b4c4
// Address: 0x17b4c4 - 0x17b4d4
void entry_0017b4c4_0x17b4c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b4c4_0x17b4c4");
#endif

    ctx->pc = 0x17b4c4u;

    // 0x17b4c4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17b4c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17b4c8: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x17b4c8u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x17b4cc: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x17b4ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x17b4d0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x17b4d0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    ctx->pc = 0x17b4d4u;
}
