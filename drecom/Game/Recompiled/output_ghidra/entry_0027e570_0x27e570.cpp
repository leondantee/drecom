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

// Function: entry_0027e570
// Address: 0x27e570 - 0x27e5a8
void entry_0027e570_0x27e570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027e570_0x27e570");
#endif

    switch (ctx->pc) {
        case 0x27e594u: goto label_27e594;
        default: break;
    }

    ctx->pc = 0x27e570u;

    // 0x27e570: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27e570u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27e574: 0x8c221aa4  lw          $v0, 0x1AA4($at)
    ctx->pc = 0x27e574u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1AA4u));
    // 0x27e578: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x27e578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x27e57c: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x27E57Cu;
    {
        const bool branch_taken_0x27e57c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27e57c) {
            ctx->pc = 0x27E4D8u;
            return;
        }
    }
    ctx->pc = 0x27E584u;
    // 0x27e584: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27e584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27e588: 0x244413e8  addiu       $a0, $v0, 0x13E8
    ctx->pc = 0x27e588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5096));
    // 0x27e58c: 0xc0a1030  jal         func_2840C0
    ctx->pc = 0x27E58Cu;
    SET_GPR_U32(ctx, 31, 0x27E594u);
    ctx->pc = 0x2840C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2840C0u, 0x27E58Cu, 0x27E594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E594u;
label_27e594:
    // 0x27e594: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27e594u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27e598: 0x8c221aa4  lw          $v0, 0x1AA4($at)
    ctx->pc = 0x27e598u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1AA4u));
    // 0x27e59c: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x27e59cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x27e5a0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27e5a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27e5a4: 0xac221aa4  sw          $v0, 0x1AA4($at)
    ctx->pc = 0x27e5a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1AA4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1AA4u, _value); } while (0);
    ctx->pc = 0x27e5a8u;
}
