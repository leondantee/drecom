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

// Function: entry_0018c544
// Address: 0x18c544 - 0x18c558
void entry_0018c544_0x18c544(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018c544_0x18c544");
#endif

    ctx->pc = 0x18c544u;

    // 0x18c544: 0x2402ff38  addiu       $v0, $zero, -0xC8
    ctx->pc = 0x18c544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
    // 0x18c548: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x18c548u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18c54c: 0x24020360  addiu       $v0, $zero, 0x360
    ctx->pc = 0x18c54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 864));
    // 0x18c550: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x18c550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x18c554: 0xfe0201e8  sd          $v0, 0x1E8($s0)
    ctx->pc = 0x18c554u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 488), GPR_U64(ctx, 2));
    ctx->pc = 0x18c558u;
}
