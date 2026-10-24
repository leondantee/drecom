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
// Address: 0x1476a0 - 0x147710
void caseD_1_0x1476a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x1476a0");
#endif

    switch (ctx->pc) {
        case 0x1476c4u: goto label_1476c4;
        default: break;
    }

    ctx->pc = 0x1476a0u;

    // 0x1476a0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1476a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1476a4: 0x904309da  lbu         $v1, 0x9DA($v0)
    ctx->pc = 0x1476a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2522)));
    // 0x1476a8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1476a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1476ac: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x1476acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x1476b0: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x1476b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1476b4: 0x14640016  bne         $v1, $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1476B4u;
    {
        const bool branch_taken_0x1476b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1476b4) {
            ctx->pc = 0x147710u;
            return;
        }
    }
    ctx->pc = 0x1476BCu;
    // 0x1476bc: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1476BCu;
    SET_GPR_U32(ctx, 31, 0x1476C4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1476BCu, 0x1476C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1476C4u;
label_1476c4:
    // 0x1476c4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1476c4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1476c8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1476c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1476cc: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x1476ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1476d0: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x1476d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1476d4: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1476d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1476d8: 0x248352d8  addiu       $v1, $a0, 0x52D8
    ctx->pc = 0x1476d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 21208));
    // 0x1476dc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1476dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1476e0: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x1476e0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1476e4: 0x3090ffff  andi        $s0, $a0, 0xFFFF
    ctx->pc = 0x1476e4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1476e8: 0x3c06469c  lui         $a2, 0x469C
    ctx->pc = 0x1476e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)18076 << 16));
    // 0x1476ec: 0x34c54000  ori         $a1, $a2, 0x4000
    ctx->pc = 0x1476ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16384);
    // 0x1476f0: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x1476f0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1476f4: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x1476f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1476f8: 0x8ce80130  lw          $t0, 0x130($a3)
    ctx->pc = 0x1476f8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 304)));
    // 0x1476fc: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1476fcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x147700: 0x25050030  addiu       $a1, $t0, 0x30
    ctx->pc = 0x147700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 48));
    // 0x147704: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x147704u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x147708: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x147708u;
    SET_GPR_U32(ctx, 31, 0x147710u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x147708u, 0x147710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147710u;
}
