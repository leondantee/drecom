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

// Function: entry_0030aeb8
// Address: 0x30aeb8 - 0x30af60
void entry_0030aeb8_0x30aeb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030aeb8_0x30aeb8");
#endif

    switch (ctx->pc) {
        case 0x30af54u: goto label_30af54;
        default: break;
    }

    ctx->pc = 0x30aeb8u;

    // 0x30aeb8: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x30aeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x30aebc: 0x244298c0  addiu       $v0, $v0, -0x6740
    ctx->pc = 0x30aebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940864));
    // 0x30aec0: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x30aec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x30aec4: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x30aec4u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x3998C0u));
    // 0x30aec8: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x30aec8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x30aecc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x30aeccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x30aed0: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x30aed0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x30aed4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x30aed4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x30aed8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x30aed8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x30aedc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30aedcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30aee0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x30aee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x30aee4: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x30aee4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x30aee8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x30aee8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x30aeec: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x30aeecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x30aef0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x30aef0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x30aef4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x30aef4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x30aef8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30aef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30aefc: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x30aefcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x30af00: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x30af00u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x30af04: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x30af04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x30af08: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x30af08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x30af0c: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x30af0cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x30af10: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x30af10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x30af14: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x30af14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x30af18: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x30af18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x30af1c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x30af1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x30af20: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x30af20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x30af24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30af24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30af28: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x30af28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30af2c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x30af2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x30af30: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x30af30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x30af34: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x30af34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x30af38: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x30af38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x30af3c: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x30af3cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x30af40: 0x24045505  addiu       $a0, $zero, 0x5505
    ctx->pc = 0x30af40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21765));
    // 0x30af44: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30af44u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30af48: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x30af48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x30af4c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x30AF4Cu;
    SET_GPR_U32(ctx, 31, 0x30AF54u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x30AF4Cu, 0x30AF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AF54u;
label_30af54:
    // 0x30af54: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x30af54u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30af58: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x30AF58u;
    SET_GPR_U32(ctx, 31, 0x30AF60u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x30AF58u, 0x30AF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AF60u;
}
