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

// Function: entry_0031aa50
// Address: 0x31aa50 - 0x31aa68
void entry_0031aa50_0x31aa50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031aa50_0x31aa50");
#endif

    ctx->pc = 0x31aa50u;

    // 0x31aa50: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x31aa50u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x31aa54: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x31aa54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x31aa58: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x31aa58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31aa5c: 0xac60128c  sw          $zero, 0x128C($v1)
    ctx->pc = 0x31aa5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4748), GPR_U32(ctx, 0));
    // 0x31aa60: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x31aa60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x31aa64: 0x0  nop
    ctx->pc = 0x31aa64u;
    // NOP
    ctx->pc = 0x31aa68u;
}
