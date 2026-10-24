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

// Function: default
// Address: 0x1504c8 - 0x1504e4
void ps2_default_0x1504c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2_default_0x1504c8");
#endif

    ctx->pc = 0x1504c8u;

    // 0x1504c8: 0x922213a7  lbu         $v0, 0x13A7($s1)
    ctx->pc = 0x1504c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5031)));
    // 0x1504cc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1504ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1504d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1504d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1504d4: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1504D4u;
    {
        const bool branch_taken_0x1504d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1504d4) {
            ctx->pc = 0x1504E4u;
            return;
        }
    }
    ctx->pc = 0x1504DCu;
    // 0x1504dc: 0xc053f0c  jal         func_14FC30
    ctx->pc = 0x1504DCu;
    SET_GPR_U32(ctx, 31, 0x1504E4u);
    ctx->pc = 0x14FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FC30u, 0x1504DCu, 0x1504E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1504E4u;
}
