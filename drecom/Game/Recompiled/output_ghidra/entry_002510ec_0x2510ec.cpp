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

// Function: entry_002510ec
// Address: 0x2510ec - 0x251114
void entry_002510ec_0x2510ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002510ec_0x2510ec");
#endif

    ctx->pc = 0x2510ecu;

label_2510ec:
    // 0x2510ec: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2510ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2510f0:
    // 0x2510f0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2510f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2510f4:
    // 0x2510f4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2510f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2510f8:
    // 0x2510f8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2510f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2510fc:
    // 0x2510fc: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2510fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_251100:
    // 0x251100: 0x2442b700  addiu       $v0, $v0, -0x4900
    ctx->pc = 0x251100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948608));
label_251104:
    // 0x251104: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x251104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_251108:
    // 0x251108: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x251108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25110c:
    // 0x25110c: 0x40f809  jalr        $v0
label_251110:
    if (ctx->pc == 0x251110u) {
        ctx->pc = 0x251114u;
        goto label_fallthrough_0x25110c;
    }
    ctx->pc = 0x25110Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x251114u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25110Cu, 0x251114u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x25110c:
    ctx->pc = 0x251114u;
}
