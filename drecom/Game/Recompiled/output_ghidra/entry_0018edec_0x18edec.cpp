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

// Function: entry_0018edec
// Address: 0x18edec - 0x18ee00
void entry_0018edec_0x18edec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018edec_0x18edec");
#endif

    ctx->pc = 0x18edecu;

    // 0x18edec: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18edecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18edf0: 0x8c4302a8  lw          $v1, 0x2A8($v0)
    ctx->pc = 0x18edf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 680)));
    // 0x18edf4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18edf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18edf8: 0x8c4202ac  lw          $v0, 0x2AC($v0)
    ctx->pc = 0x18edf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 684)));
    // 0x18edfc: 0xac4302a8  sw          $v1, 0x2A8($v0)
    ctx->pc = 0x18edfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 680), GPR_U32(ctx, 3));
    ctx->pc = 0x18ee00u;
}
