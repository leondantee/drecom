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

// Function: entry_002053f8
// Address: 0x2053f8 - 0x205410
void entry_002053f8_0x2053f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002053f8_0x2053f8");
#endif

    ctx->pc = 0x2053f8u;

    // 0x2053f8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2053f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2053fc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2053fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x205400: 0x24429320  addiu       $v0, $v0, -0x6CE0
    ctx->pc = 0x205400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939424));
    // 0x205404: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x205404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x205408: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x205408u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x20540c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x20540cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x205410u;
}
