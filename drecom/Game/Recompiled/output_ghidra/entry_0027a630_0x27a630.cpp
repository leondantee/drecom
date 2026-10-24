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

// Function: entry_0027a630
// Address: 0x27a630 - 0x27a688
void entry_0027a630_0x27a630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027a630_0x27a630");
#endif

    switch (ctx->pc) {
        case 0x27a64cu: goto label_27a64c;
        default: break;
    }

    ctx->pc = 0x27a630u;

    // 0x27a630: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x27a630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x27a634: 0x2442b0d0  addiu       $v0, $v0, -0x4F30
    ctx->pc = 0x27a634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947024));
    // 0x27a638: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27a638u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27a63c: 0xac22d4bc  sw          $v0, -0x2B44($at)
    ctx->pc = 0x27a63cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CD4BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CD4BCu, _value); } while (0);
    // 0x27a640: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x27a640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27a644: 0xc0c79e8  jal         func_31E7A0
    ctx->pc = 0x27A644u;
    SET_GPR_U32(ctx, 31, 0x27A64Cu);
    ctx->pc = 0x31E7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E7A0u, 0x27A644u, 0x27A64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A64Cu;
label_27a64c:
    // 0x27a64c: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x27a64cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x27a650: 0x2463b4f0  addiu       $v1, $v1, -0x4B10
    ctx->pc = 0x27a650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948080));
    // 0x27a654: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27a654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27a658: 0xac23d73c  sw          $v1, -0x28C4($at)
    ctx->pc = 0x27a658u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CD73Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CD73Cu, _value); } while (0);
    // 0x27a65c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27a65cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27a660: 0x8c241b04  lw          $a0, 0x1B04($at)
    ctx->pc = 0x27a660u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1B04u));
    // 0x27a664: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x27a664u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x27a668: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x27a668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x27a66c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x27A66Cu;
    {
        const bool branch_taken_0x27a66c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a66c) {
            ctx->pc = 0x27A688u;
            return;
        }
    }
    ctx->pc = 0x27A674u;
    // 0x27a674: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27a674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27a678: 0x8c231ae4  lw          $v1, 0x1AE4($at)
    ctx->pc = 0x27a678u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1AE4u));
    // 0x27a67c: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x27a67cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x27a680: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x27A680u;
    {
        const bool branch_taken_0x27a680 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a680) {
            ctx->pc = 0x27A694u;
            return;
        }
    }
    ctx->pc = 0x27A688u;
}
