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

// Function: entry_00281860
// Address: 0x281860 - 0x2818dc
void entry_00281860_0x281860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00281860_0x281860");
#endif

    ctx->pc = 0x281860u;

    // 0x281860: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x281860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x281864: 0x8c231b88  lw          $v1, 0x1B88($at)
    ctx->pc = 0x281864u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x621B88u));
    // 0x281868: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x281868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x28186c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28186cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x281870: 0xac231b88  sw          $v1, 0x1B88($at)
    ctx->pc = 0x281870u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x621B88u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621B88u, _value); } while (0);
    // 0x281874: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x281874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x281878: 0x8c231b88  lw          $v1, 0x1B88($at)
    ctx->pc = 0x281878u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x621B88u));
    // 0x28187c: 0x461001b  bgez        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x28187Cu;
    {
        const bool branch_taken_0x28187c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x28187c) {
            ctx->pc = 0x2818ECu;
            return;
        }
    }
    ctx->pc = 0x281884u;
    // 0x281884: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x281884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x281888: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x281888u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x28188c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x28188cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x281890: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x281890u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x281894: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x281894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x281898: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x281898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x28189c: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x28189cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2818a0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2818a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2818a4: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2818a4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2818a8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2818a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2818ac: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2818acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2818b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2818b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2818b4: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2818b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2818b8: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2818b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2818bc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2818bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2818c0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2818c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2818c4: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2818c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2818c8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2818c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2818cc: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x2818ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2818d0: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x2818d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x2818d4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2818d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2818d8: 0xac221b88  sw          $v0, 0x1B88($at)
    ctx->pc = 0x2818d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x621B88u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621B88u, _value); } while (0);
    ctx->pc = 0x2818dcu;
}
