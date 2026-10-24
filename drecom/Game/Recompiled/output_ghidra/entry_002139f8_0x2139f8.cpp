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

// Function: entry_002139f8
// Address: 0x2139f8 - 0x213a0c
void entry_002139f8_0x2139f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002139f8_0x2139f8");
#endif

    ctx->pc = 0x2139f8u;

    // 0x2139f8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2139f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x2139fc: 0x8c449ce8  lw          $a0, -0x6318($v0)
    ctx->pc = 0x2139fcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x619CE8u));
    // 0x213a00: 0x24a39ce0  addiu       $v1, $a1, -0x6320
    ctx->pc = 0x213a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941920));
    // 0x213a04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x213a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x213a08: 0xac700004  sw          $s0, 0x4($v1)
    ctx->pc = 0x213a08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 16));
    ctx->pc = 0x213a0cu;
}
