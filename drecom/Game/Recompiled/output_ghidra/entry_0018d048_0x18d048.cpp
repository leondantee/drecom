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

// Function: entry_0018d048
// Address: 0x18d048 - 0x18d05c
void entry_0018d048_0x18d048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d048_0x18d048");
#endif

    ctx->pc = 0x18d048u;

    // 0x18d048: 0x2402ff38  addiu       $v0, $zero, -0xC8
    ctx->pc = 0x18d048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
    // 0x18d04c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x18d04cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18d050: 0x24020360  addiu       $v0, $zero, 0x360
    ctx->pc = 0x18d050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 864));
    // 0x18d054: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x18d054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x18d058: 0xfe020a98  sd          $v0, 0xA98($s0)
    ctx->pc = 0x18d058u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2712), GPR_U64(ctx, 2));
    ctx->pc = 0x18d05cu;
}
