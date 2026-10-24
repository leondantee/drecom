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

// Function: entry_00121a14
// Address: 0x121a14 - 0x121ac4
void entry_00121a14_0x121a14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121a14_0x121a14");
#endif

    switch (ctx->pc) {
        case 0x121a7cu: goto label_121a7c;
        default: break;
    }

    ctx->pc = 0x121a14u;

    // 0x121a14: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x121a14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121a18: 0x90a311ef  lbu         $v1, 0x11EF($a1)
    ctx->pc = 0x121a18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4591)));
    // 0x121a1c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x121a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121a20: 0xa08310a8  sb          $v1, 0x10A8($a0)
    ctx->pc = 0x121a20u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x121a24: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121a28: 0x946511f4  lhu         $a1, 0x11F4($v1)
    ctx->pc = 0x121a28u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4596)));
    // 0x121a2c: 0x30a4ffff  andi        $a0, $a1, 0xFFFF
    ctx->pc = 0x121a2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x121a30: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x121a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x121a34: 0x14830086  bne         $a0, $v1, . + 4 + (0x86 << 2)
    ctx->pc = 0x121A34u;
    {
        const bool branch_taken_0x121a34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x121a34) {
            ctx->pc = 0x121C50u;
            return;
        }
    }
    ctx->pc = 0x121A3Cu;
    // 0x121a3c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x121a3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x121a40: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x121a40u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x121a44: 0x30838000  andi        $v1, $a0, 0x8000
    ctx->pc = 0x121a44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32768);
    // 0x121a48: 0x14600081  bnez        $v1, . + 4 + (0x81 << 2)
    ctx->pc = 0x121A48u;
    {
        const bool branch_taken_0x121a48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x121a48) {
            ctx->pc = 0x121C50u;
            return;
        }
    }
    ctx->pc = 0x121A50u;
    // 0x121a50: 0x3c05469c  lui         $a1, 0x469C
    ctx->pc = 0x121a50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18076 << 16));
    // 0x121a54: 0x34a34000  ori         $v1, $a1, 0x4000
    ctx->pc = 0x121a54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
    // 0x121a58: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x121a58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x121a5c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x121a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121a60: 0x8c830130  lw          $v1, 0x130($a0)
    ctx->pc = 0x121a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x121a64: 0x24040522  addiu       $a0, $zero, 0x522
    ctx->pc = 0x121a64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1314));
    // 0x121a68: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x121a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x121a6c: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x121a6cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x121a70: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x121a70u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x121a74: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x121A74u;
    SET_GPR_U32(ctx, 31, 0x121A7Cu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x121A74u, 0x121A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121A7Cu;
label_121a7c:
    // 0x121a7c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x121a7cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x121a80: 0x8fa60078  lw          $a2, 0x78($sp)
    ctx->pc = 0x121a80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121a84: 0x94c511f6  lhu         $a1, 0x11F6($a2)
    ctx->pc = 0x121a84u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4598)));
    // 0x121a88: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x121a88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x121a8c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x121a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x121a90: 0x1043003f  beq         $v0, $v1, . + 4 + (0x3F << 2)
    ctx->pc = 0x121A90u;
    {
        const bool branch_taken_0x121a90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x121a90) {
            ctx->pc = 0x121B90u;
            return;
        }
    }
    ctx->pc = 0x121A98u;
    // 0x121a98: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x121a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x121a9c: 0x10440035  beq         $v0, $a0, . + 4 + (0x35 << 2)
    ctx->pc = 0x121A9Cu;
    {
        const bool branch_taken_0x121a9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x121a9c) {
            ctx->pc = 0x121B74u;
            return;
        }
    }
    ctx->pc = 0x121AA4u;
    // 0x121aa4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x121aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x121aa8: 0x1045000e  beq         $v0, $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x121AA8u;
    {
        const bool branch_taken_0x121aa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x121aa8) {
            ctx->pc = 0x121AE4u;
            return;
        }
    }
    ctx->pc = 0x121AB0u;
    // 0x121ab0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x121ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x121ab4: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x121AB4u;
    {
        const bool branch_taken_0x121ab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x121ab4) {
            ctx->pc = 0x121AC4u;
            return;
        }
    }
    ctx->pc = 0x121ABCu;
    // 0x121abc: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x121ABCu;
    {
        const bool branch_taken_0x121abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x121abc) {
            ctx->pc = 0x121C20u;
            return;
        }
    }
    ctx->pc = 0x121AC4u;
}
