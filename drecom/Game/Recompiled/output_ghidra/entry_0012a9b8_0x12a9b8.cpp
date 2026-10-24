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

// Function: entry_0012a9b8
// Address: 0x12a9b8 - 0x12a9fc
void entry_0012a9b8_0x12a9b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012a9b8_0x12a9b8");
#endif

    switch (ctx->pc) {
        case 0x12a9c0u: goto label_12a9c0;
        default: break;
    }

    ctx->pc = 0x12a9b8u;

    // 0x12a9b8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x12A9B8u;
    SET_GPR_U32(ctx, 31, 0x12A9C0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x12A9B8u, 0x12A9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A9C0u;
label_12a9c0:
    // 0x12a9c0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x12a9c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12a9c4: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x12a9c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x12a9c8: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x12A9C8u;
    {
        const bool branch_taken_0x12a9c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12a9c8) {
            ctx->pc = 0x12A9FCu;
            return;
        }
    }
    ctx->pc = 0x12A9D0u;
    // 0x12a9d0: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x12a9d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12a9d4: 0x8ca4121c  lw          $a0, 0x121C($a1)
    ctx->pc = 0x12a9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4636)));
    // 0x12a9d8: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x12a9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x12a9dc: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x12a9dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x12a9e0: 0xaca3121c  sw          $v1, 0x121C($a1)
    ctx->pc = 0x12a9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4636), GPR_U32(ctx, 3));
    // 0x12a9e4: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x12a9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12a9e8: 0x8ca4121c  lw          $a0, 0x121C($a1)
    ctx->pc = 0x12a9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4636)));
    // 0x12a9ec: 0x3c03ebff  lui         $v1, 0xEBFF
    ctx->pc = 0x12a9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60415 << 16));
    // 0x12a9f0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x12a9f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x12a9f4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x12a9f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x12a9f8: 0xaca3121c  sw          $v1, 0x121C($a1)
    ctx->pc = 0x12a9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4636), GPR_U32(ctx, 3));
    ctx->pc = 0x12a9fcu;
}
