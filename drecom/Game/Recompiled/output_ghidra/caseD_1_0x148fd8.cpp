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

// Function: caseD_1
// Address: 0x148fd8 - 0x149044
void caseD_1_0x148fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x148fd8");
#endif

    switch (ctx->pc) {
        case 0x148ffcu: goto label_148ffc;
        default: break;
    }

    ctx->pc = 0x148fd8u;

    // 0x148fd8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x148fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x148fdc: 0x904209da  lbu         $v0, 0x9DA($v0)
    ctx->pc = 0x148fdcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2522)));
    // 0x148fe0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x148fe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x148fe4: 0x3043003f  andi        $v1, $v0, 0x3F
    ctx->pc = 0x148fe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x148fe8: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x148fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x148fec: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x148FECu;
    {
        const bool branch_taken_0x148fec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x148fec) {
            ctx->pc = 0x149044u;
            return;
        }
    }
    ctx->pc = 0x148FF4u;
    // 0x148ff4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x148FF4u;
    SET_GPR_U32(ctx, 31, 0x148FFCu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x148FF4u, 0x148FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148FFCu;
label_148ffc:
    // 0x148ffc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x148ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x149000: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x149000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x149004: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x149004u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x149008: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x149008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x14900c: 0x244252d8  addiu       $v0, $v0, 0x52D8
    ctx->pc = 0x14900cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21208));
    // 0x149010: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x149010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x149014: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x149014u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x149018: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x149018u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x14901c: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x14901cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x149020: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x149020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x149024: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x149024u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x149028: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x149028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x14902c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x14902cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x149030: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x149030u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x149034: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x149034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x149038: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x149038u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14903c: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x14903Cu;
    SET_GPR_U32(ctx, 31, 0x149044u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x14903Cu, 0x149044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149044u;
}
