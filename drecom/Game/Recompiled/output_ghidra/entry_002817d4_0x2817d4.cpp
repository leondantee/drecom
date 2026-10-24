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

// Function: entry_002817d4
// Address: 0x2817d4 - 0x281860
void entry_002817d4_0x2817d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002817d4_0x2817d4");
#endif

    switch (ctx->pc) {
        case 0x281858u: goto label_281858;
        default: break;
    }

    ctx->pc = 0x2817d4u;

    // 0x2817d4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2817d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2817d8: 0x8c231b80  lw          $v1, 0x1B80($at)
    ctx->pc = 0x2817d8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x621B80u));
    // 0x2817dc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2817dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2817e0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2817e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2817e4: 0xac231b80  sw          $v1, 0x1B80($at)
    ctx->pc = 0x2817e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x621B80u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621B80u, _value); } while (0);
    // 0x2817e8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2817e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2817ec: 0x8c231b80  lw          $v1, 0x1B80($at)
    ctx->pc = 0x2817ecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x621B80u));
    // 0x2817f0: 0x461001b  bgez        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x2817F0u;
    {
        const bool branch_taken_0x2817f0 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2817f0) {
            ctx->pc = 0x281860u;
            return;
        }
    }
    ctx->pc = 0x2817F8u;
    // 0x2817f8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2817f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2817fc: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2817fcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x281800: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x281800u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x281804: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x281804u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x281808: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x281808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28180c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x28180cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x281810: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x281810u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x281814: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x281814u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x281818: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x281818u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x28181c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x28181cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x281820: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x281820u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x281824: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x281824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x281828: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x281828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x28182c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x28182cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x281830: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x281830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x281834: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x281834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x281838: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x281838u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x28183c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x28183cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x281840: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x281840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x281844: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x281844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x281848: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x281848u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28184c: 0xac221b80  sw          $v0, 0x1B80($at)
    ctx->pc = 0x28184cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x621B80u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621B80u, _value); } while (0);
    // 0x281850: 0xc0a072c  jal         func_281CB0
    ctx->pc = 0x281850u;
    SET_GPR_U32(ctx, 31, 0x281858u);
    ctx->pc = 0x281CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281CB0u, 0x281850u, 0x281858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281858u;
label_281858:
    // 0x281858: 0xc0a07f8  jal         func_281FE0
    ctx->pc = 0x281858u;
    SET_GPR_U32(ctx, 31, 0x281860u);
    ctx->pc = 0x281FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281FE0u, 0x281858u, 0x281860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281860u;
}
