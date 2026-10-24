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

// Function: entry_001cf2a0
// Address: 0x1cf2a0 - 0x1cf310
void entry_001cf2a0_0x1cf2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf2a0_0x1cf2a0");
#endif

    switch (ctx->pc) {
        case 0x1cf2c4u: goto label_1cf2c4;
        default: break;
    }

    ctx->pc = 0x1cf2a0u;

    // 0x1cf2a0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cf2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf2a4: 0x908309da  lbu         $v1, 0x9DA($a0)
    ctx->pc = 0x1cf2a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2522)));
    // 0x1cf2a8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1cf2a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1cf2ac: 0x3064003f  andi        $a0, $v1, 0x3F
    ctx->pc = 0x1cf2acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x1cf2b0: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x1cf2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1cf2b4: 0x14830016  bne         $a0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1CF2B4u;
    {
        const bool branch_taken_0x1cf2b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1cf2b4) {
            ctx->pc = 0x1CF310u;
            return;
        }
    }
    ctx->pc = 0x1CF2BCu;
    // 0x1cf2bc: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1CF2BCu;
    SET_GPR_U32(ctx, 31, 0x1CF2C4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1CF2BCu, 0x1CF2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF2C4u;
label_1cf2c4:
    // 0x1cf2c4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1cf2c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cf2c8: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1cf2c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1cf2cc: 0x30640003  andi        $a0, $v1, 0x3
    ctx->pc = 0x1cf2ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1cf2d0: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1cf2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1cf2d4: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x1cf2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
    // 0x1cf2d8: 0x24a69228  addiu       $a2, $a1, -0x6DD8
    ctx->pc = 0x1cf2d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939176));
    // 0x1cf2dc: 0xc33821  addu        $a3, $a2, $v1
    ctx->pc = 0x1cf2dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1cf2e0: 0x94e80000  lhu         $t0, 0x0($a3)
    ctx->pc = 0x1cf2e0u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1cf2e4: 0x3110ffff  andi        $s0, $t0, 0xFFFF
    ctx->pc = 0x1cf2e4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x1cf2e8: 0x3c04469c  lui         $a0, 0x469C
    ctx->pc = 0x1cf2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)18076 << 16));
    // 0x1cf2ec: 0x34834000  ori         $v1, $a0, 0x4000
    ctx->pc = 0x1cf2ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x1cf2f0: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1cf2f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cf2f4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1cf2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf2f8: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x1cf2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1cf2fc: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1cf2fcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1cf300: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x1cf300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x1cf304: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1cf304u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cf308: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1CF308u;
    SET_GPR_U32(ctx, 31, 0x1CF310u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1CF308u, 0x1CF310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF310u;
}
