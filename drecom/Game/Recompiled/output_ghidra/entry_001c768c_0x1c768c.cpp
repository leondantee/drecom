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

// Function: entry_001c768c
// Address: 0x1c768c - 0x1c76fc
void entry_001c768c_0x1c768c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c768c_0x1c768c");
#endif

    switch (ctx->pc) {
        case 0x1c76b0u: goto label_1c76b0;
        default: break;
    }

    ctx->pc = 0x1c768cu;

    // 0x1c768c: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1c768cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7690: 0x90c709da  lbu         $a3, 0x9DA($a2)
    ctx->pc = 0x1c7690u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2522)));
    // 0x1c7694: 0x30e800ff  andi        $t0, $a3, 0xFF
    ctx->pc = 0x1c7694u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1c7698: 0x3103003f  andi        $v1, $t0, 0x3F
    ctx->pc = 0x1c7698u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)63);
    // 0x1c769c: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x1c769cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1c76a0: 0x14640016  bne         $v1, $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1C76A0u;
    {
        const bool branch_taken_0x1c76a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1c76a0) {
            ctx->pc = 0x1C76FCu;
            return;
        }
    }
    ctx->pc = 0x1C76A8u;
    // 0x1c76a8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1C76A8u;
    SET_GPR_U32(ctx, 31, 0x1C76B0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1C76A8u, 0x1C76B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C76B0u;
label_1c76b0:
    // 0x1c76b0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1c76b0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1c76b4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1c76b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c76b8: 0x30820003  andi        $v0, $a0, 0x3
    ctx->pc = 0x1c76b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x1c76bc: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x1c76bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1c76c0: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x1c76c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
    // 0x1c76c4: 0x24c79228  addiu       $a3, $a2, -0x6DD8
    ctx->pc = 0x1c76c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939176));
    // 0x1c76c8: 0xe54021  addu        $t0, $a3, $a1
    ctx->pc = 0x1c76c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x1c76cc: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x1c76ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1c76d0: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x1c76d0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1c76d4: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x1c76d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x1c76d8: 0x34434000  ori         $v1, $v0, 0x4000
    ctx->pc = 0x1c76d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1c76dc: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1c76dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c76e0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c76e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c76e4: 0x8c620130  lw          $v0, 0x130($v1)
    ctx->pc = 0x1c76e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x1c76e8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1c76e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1c76ec: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x1c76ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1c76f0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1c76f0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c76f4: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1C76F4u;
    SET_GPR_U32(ctx, 31, 0x1C76FCu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1C76F4u, 0x1C76FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C76FCu;
}
