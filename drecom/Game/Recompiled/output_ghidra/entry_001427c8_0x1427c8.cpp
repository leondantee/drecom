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

// Function: entry_001427c8
// Address: 0x1427c8 - 0x1427f8
void entry_001427c8_0x1427c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001427c8_0x1427c8");
#endif

    switch (ctx->pc) {
        case 0x1427d4u: goto label_1427d4;
        default: break;
    }

    ctx->pc = 0x1427c8u;

    // 0x1427c8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1427c8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1427cc: 0xc0592ec  jal         func_164BB0
    ctx->pc = 0x1427CCu;
    SET_GPR_U32(ctx, 31, 0x1427D4u);
    ctx->pc = 0x164BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164BB0u, 0x1427CCu, 0x1427D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1427D4u;
label_1427d4:
    // 0x1427d4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1427d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1427d8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1427D8u;
    {
        const bool branch_taken_0x1427d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1427d8) {
            ctx->pc = 0x1427F8u;
            return;
        }
    }
    ctx->pc = 0x1427E0u;
    // 0x1427e0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1427e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1427e4: 0x8c231a3c  lw          $v1, 0x1A3C($at)
    ctx->pc = 0x1427e4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x1427e8: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x1427e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x1427ec: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1427ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1427f0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1427f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1427f4: 0xac221a3c  sw          $v0, 0x1A3C($at)
    ctx->pc = 0x1427f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A3Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A3Cu, _value); } while (0);
    ctx->pc = 0x1427f8u;
}
