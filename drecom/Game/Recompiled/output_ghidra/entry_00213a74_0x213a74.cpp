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

// Function: entry_00213a74
// Address: 0x213a74 - 0x213a88
void entry_00213a74_0x213a74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00213a74_0x213a74");
#endif

    ctx->pc = 0x213a74u;

    // 0x213a74: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x213a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x213a78: 0x8c449ce8  lw          $a0, -0x6318($v0)
    ctx->pc = 0x213a78u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x619CE8u));
    // 0x213a7c: 0x24a39ce0  addiu       $v1, $a1, -0x6320
    ctx->pc = 0x213a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941920));
    // 0x213a80: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x213a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x213a84: 0xac700004  sw          $s0, 0x4($v1)
    ctx->pc = 0x213a84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 16));
    ctx->pc = 0x213a88u;
}
