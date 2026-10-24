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

// Function: entry_0027a3ec
// Address: 0x27a3ec - 0x27a468
void entry_0027a3ec_0x27a3ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027a3ec_0x27a3ec");
#endif

    switch (ctx->pc) {
        case 0x27a460u: goto label_27a460;
        default: break;
    }

    ctx->pc = 0x27a3ecu;

    // 0x27a3ec: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x27a3ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x27a3f0: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x27a3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x27a3f4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x27a3f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x27a3f8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x27a3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27a3fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27a3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27a400: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x27a400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x27a404: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x27a404u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x27a408: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x27a408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x27a40c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x27a40cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x27a410: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x27a410u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x27a414: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x27a414u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27a418: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27a418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27a41c: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x27a41cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x27a420: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x27a420u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x27a424: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x27a424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x27a428: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x27a428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x27a42c: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x27a42cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x27a430: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x27a430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x27a434: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x27a434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x27a438: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x27a438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x27a43c: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x27a43cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x27a440: 0x326200ff  andi        $v0, $s3, 0xFF
    ctx->pc = 0x27a440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x27a444: 0x28410006  slti        $at, $v0, 0x6
    ctx->pc = 0x27a444u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x27a448: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x27A448u;
    {
        const bool branch_taken_0x27a448 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a448) {
            ctx->pc = 0x27A468u;
            return;
        }
    }
    ctx->pc = 0x27A450u;
    // 0x27a450: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27a450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27a454: 0x244407b8  addiu       $a0, $v0, 0x7B8
    ctx->pc = 0x27a454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1976));
    // 0x27a458: 0xc0a1030  jal         func_2840C0
    ctx->pc = 0x27A458u;
    SET_GPR_U32(ctx, 31, 0x27A460u);
    ctx->pc = 0x2840C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2840C0u, 0x27A458u, 0x27A460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A460u;
label_27a460:
    // 0x27a460: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x27A460u;
    {
        const bool branch_taken_0x27a460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a460) {
            ctx->pc = 0x27A4A0u;
            return;
        }
    }
    ctx->pc = 0x27A468u;
}
