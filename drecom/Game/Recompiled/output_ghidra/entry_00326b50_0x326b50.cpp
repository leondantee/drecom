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

// Function: entry_00326b50
// Address: 0x326b50 - 0x326b70
void entry_00326b50_0x326b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00326b50_0x326b50");
#endif

    ctx->pc = 0x326b50u;

    // 0x326b50: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326b54: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x326b54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x326b58: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x326b58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x326b5c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x326b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x326b60: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x326b60u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x326b64: 0x1460ff97  bnez        $v1, . + 4 + (-0x69 << 2)
    ctx->pc = 0x326B64u;
    {
        const bool branch_taken_0x326b64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x326b64) {
            ctx->pc = 0x3269C4u;
            return;
        }
    }
    ctx->pc = 0x326B6Cu;
    // 0x326b6c: 0x0  nop
    ctx->pc = 0x326b6cu;
    // NOP
    ctx->pc = 0x326b70u;
}
