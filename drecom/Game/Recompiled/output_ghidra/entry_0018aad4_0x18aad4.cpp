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

// Function: entry_0018aad4
// Address: 0x18aad4 - 0x18aaf0
void entry_0018aad4_0x18aad4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018aad4_0x18aad4");
#endif

    ctx->pc = 0x18aad4u;

    // 0x18aad4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x18aad4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x18aad8: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x18aad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x18aadc: 0x2442a608  addiu       $v0, $v0, -0x59F8
    ctx->pc = 0x18aadcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944264));
    // 0x18aae0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18aae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18aae4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x18aae4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x18aae8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18aae8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18aaec: 0x0  nop
    ctx->pc = 0x18aaecu;
    // NOP
    ctx->pc = 0x18aaf0u;
}
