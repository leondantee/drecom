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

// Function: entry_0018b56c
// Address: 0x18b56c - 0x18b590
void entry_0018b56c_0x18b56c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b56c_0x18b56c");
#endif

    ctx->pc = 0x18b56cu;

    // 0x18b56c: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x18b56cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x18b570: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x18b570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x18b574: 0x94440004  lhu         $a0, 0x4($v0)
    ctx->pc = 0x18b574u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x18b578: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x18b578u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x18b57c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x18b57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18b580: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18b580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18b584: 0xa4440004  sh          $a0, 0x4($v0)
    ctx->pc = 0x18b584u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 4));
    // 0x18b588: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18b588u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18b58c: 0x0  nop
    ctx->pc = 0x18b58cu;
    // NOP
    ctx->pc = 0x18b590u;
}
