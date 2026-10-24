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

// Function: entry_003271b0
// Address: 0x3271b0 - 0x3271d0
void entry_003271b0_0x3271b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003271b0_0x3271b0");
#endif

    ctx->pc = 0x3271b0u;

    // 0x3271b0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3271b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3271b4: 0x90630242  lbu         $v1, 0x242($v1)
    ctx->pc = 0x3271b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 578)));
    // 0x3271b8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3271b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3271bc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3271bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3271c0: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x3271c0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3271c4: 0x1460ffb3  bnez        $v1, . + 4 + (-0x4D << 2)
    ctx->pc = 0x3271C4u;
    {
        const bool branch_taken_0x3271c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3271c4) {
            ctx->pc = 0x327094u;
            return;
        }
    }
    ctx->pc = 0x3271CCu;
    // 0x3271cc: 0x0  nop
    ctx->pc = 0x3271ccu;
    // NOP
    ctx->pc = 0x3271d0u;
}
