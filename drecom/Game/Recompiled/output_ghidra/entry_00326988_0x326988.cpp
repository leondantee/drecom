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

// Function: entry_00326988
// Address: 0x326988 - 0x3269ac
void entry_00326988_0x326988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00326988_0x326988");
#endif

    ctx->pc = 0x326988u;

    // 0x326988: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x32698c: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x32698cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x326990: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x326990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x326994: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x326994u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x326998: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x326998u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x32699c: 0x1460ff99  bnez        $v1, . + 4 + (-0x67 << 2)
    ctx->pc = 0x32699Cu;
    {
        const bool branch_taken_0x32699c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x32699c) {
            ctx->pc = 0x326804u;
            return;
        }
    }
    ctx->pc = 0x3269A4u;
    // 0x3269a4: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x3269A4u;
    {
        const bool branch_taken_0x3269a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3269a4) {
            ctx->pc = 0x326B70u;
            return;
        }
    }
    ctx->pc = 0x3269ACu;
}
