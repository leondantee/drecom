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

// Function: entry_001408c8
// Address: 0x1408c8 - 0x140920
void entry_001408c8_0x1408c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001408c8_0x1408c8");
#endif

    switch (ctx->pc) {
        case 0x1408d0u: goto label_1408d0;
        case 0x1408dcu: goto label_1408dc;
        case 0x1408e4u: goto label_1408e4;
        case 0x1408ecu: goto label_1408ec;
        default: break;
    }

    ctx->pc = 0x1408c8u;

    // 0x1408c8: 0xc050914  jal         func_142450
    ctx->pc = 0x1408C8u;
    SET_GPR_U32(ctx, 31, 0x1408D0u);
    ctx->pc = 0x142450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142450u, 0x1408C8u, 0x1408D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1408D0u;
label_1408d0:
    // 0x1408d0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1408d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1408d4: 0xc0505b4  jal         func_1416D0
    ctx->pc = 0x1408D4u;
    SET_GPR_U32(ctx, 31, 0x1408DCu);
    ctx->pc = 0x1416D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1416D0u, 0x1408D4u, 0x1408DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1408DCu;
label_1408dc:
    // 0x1408dc: 0xc095ed8  jal         func_257B60
    ctx->pc = 0x1408DCu;
    SET_GPR_U32(ctx, 31, 0x1408E4u);
    ctx->pc = 0x257B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257B60u, 0x1408DCu, 0x1408E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1408E4u;
label_1408e4:
    // 0x1408e4: 0xc0792b8  jal         func_1E4AE0
    ctx->pc = 0x1408E4u;
    SET_GPR_U32(ctx, 31, 0x1408ECu);
    ctx->pc = 0x1E4AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4AE0u, 0x1408E4u, 0x1408ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1408ECu;
label_1408ec:
    // 0x1408ec: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1408ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1408f0: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x1408f0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1408f4: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1408f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1408f8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1408f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1408fc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1408FCu;
    {
        const bool branch_taken_0x1408fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1408fc) {
            ctx->pc = 0x140920u;
            return;
        }
    }
    ctx->pc = 0x140904u;
    // 0x140904: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x140904u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x140908: 0x8c220b18  lw          $v0, 0xB18($at)
    ctx->pc = 0x140908u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0B18u));
    // 0x14090c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x14090cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x140910: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x140910u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x140914: 0xac220b18  sw          $v0, 0xB18($at)
    ctx->pc = 0x140914u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D0B18u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0B18u, _value); } while (0);
    // 0x140918: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x140918u;
    {
        const bool branch_taken_0x140918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x140918) {
            ctx->pc = 0x140938u;
            return;
        }
    }
    ctx->pc = 0x140920u;
}
