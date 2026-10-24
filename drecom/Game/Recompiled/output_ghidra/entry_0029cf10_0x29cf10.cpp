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

// Function: entry_0029cf10
// Address: 0x29cf10 - 0x29cf78
void entry_0029cf10_0x29cf10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029cf10_0x29cf10");
#endif

    switch (ctx->pc) {
        case 0x29cf28u: goto label_29cf28;
        default: break;
    }

    ctx->pc = 0x29cf10u;

    // 0x29cf10: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29cf10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29cf14: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x29cf14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29cf18: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x29cf18u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x29cf1c: 0x844611f2  lh          $a2, 0x11F2($v0)
    ctx->pc = 0x29cf1cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4594)));
    // 0x29cf20: 0xc06d1d8  jal         func_1B4760
    ctx->pc = 0x29CF20u;
    SET_GPR_U32(ctx, 31, 0x29CF28u);
    ctx->pc = 0x1B4760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4760u, 0x29CF20u, 0x29CF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CF28u;
label_29cf28:
    // 0x29cf28: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x29cf28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x29cf2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29cf2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29cf30: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29cf30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29cf34: 0xe46011e0  swc1        $f0, 0x11E0($v1)
    ctx->pc = 0x29cf34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4576), bits); }
    // 0x29cf38: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29cf38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29cf3c: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x29cf3cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x29cf40: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x29cf40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x29cf44: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x29cf44u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x29cf48: 0x460005e  bltz        $v1, . + 4 + (0x5E << 2)
    ctx->pc = 0x29CF48u;
    {
        const bool branch_taken_0x29cf48 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x29cf48) {
            ctx->pc = 0x29D0C4u;
            return;
        }
    }
    ctx->pc = 0x29CF50u;
    // 0x29cf50: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29cf50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29cf54: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x29cf54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x29cf58: 0x8c640014  lw          $a0, 0x14($v1)
    ctx->pc = 0x29cf58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x29cf5c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x29cf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x29cf60: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x29cf60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x29cf64: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x29CF64u;
    {
        const bool branch_taken_0x29cf64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29cf64) {
            ctx->pc = 0x29CF78u;
            return;
        }
    }
    ctx->pc = 0x29CF6Cu;
    // 0x29cf6c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x29cf6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29cf70: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29cf70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29cf74: 0xa46411f6  sh          $a0, 0x11F6($v1)
    ctx->pc = 0x29cf74u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4598), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x29cf78u;
}
