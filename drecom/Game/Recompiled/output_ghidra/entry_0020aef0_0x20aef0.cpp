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

// Function: entry_0020aef0
// Address: 0x20aef0 - 0x20af10
void entry_0020aef0_0x20aef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020aef0_0x20aef0");
#endif

    ctx->pc = 0x20aef0u;

    // 0x20aef0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x20aef0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x20aef4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x20aef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x20aef8: 0x244293e0  addiu       $v0, $v0, -0x6C20
    ctx->pc = 0x20aef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939616));
    // 0x20aefc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20aefcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20af00: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x20af00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x20af04: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x20af04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x20af08: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x20af08u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x20af0c: 0x0  nop
    ctx->pc = 0x20af0cu;
    // NOP
    ctx->pc = 0x20af10u;
}
