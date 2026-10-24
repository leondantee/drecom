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

// Function: entry_001bbd50
// Address: 0x1bbd50 - 0x1bbda4
void entry_001bbd50_0x1bbd50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bbd50_0x1bbd50");
#endif

    switch (ctx->pc) {
        case 0x1bbd80u: goto label_1bbd80;
        case 0x1bbd90u: goto label_1bbd90;
        default: break;
    }

    ctx->pc = 0x1bbd50u;

    // 0x1bbd50: 0x8fb00068  lw          $s0, 0x68($sp)
    ctx->pc = 0x1bbd50u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bbd54: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1bbd54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1bbd58: 0x3c0397ff  lui         $v1, 0x97FF
    ctx->pc = 0x1bbd58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38911 << 16));
    // 0x1bbd5c: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x1bbd5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1bbd60: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x1bbd60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x1bbd64: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x1bbd64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
    // 0x1bbd68: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bbd68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bbd6c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bbd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bbd70: 0xc48c137c  lwc1        $f12, 0x137C($a0)
    ctx->pc = 0x1bbd70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bbd74: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x1bbd74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1bbd78: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1BBD78u;
    SET_GPR_U32(ctx, 31, 0x1BBD80u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1BBD78u, 0x1BBD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBD80u;
label_1bbd80:
    // 0x1bbd80: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1bbd80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1bbd84: 0xc7ac0054  lwc1        $f12, 0x54($sp)
    ctx->pc = 0x1bbd84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bbd88: 0xc05733c  jal         func_15CCF0
    ctx->pc = 0x1BBD88u;
    SET_GPR_U32(ctx, 31, 0x1BBD90u);
    ctx->pc = 0x15CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CCF0u, 0x1BBD88u, 0x1BBD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBD90u;
label_1bbd90:
    // 0x1bbd90: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1bbd90u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1bbd94: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1bbd94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bbd98: 0x90a30003  lbu         $v1, 0x3($a1)
    ctx->pc = 0x1bbd98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x1bbd9c: 0x24660001  addiu       $a2, $v1, 0x1
    ctx->pc = 0x1bbd9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1bbda0: 0xa0a60003  sb          $a2, 0x3($a1)
    ctx->pc = 0x1bbda0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 6));
    ctx->pc = 0x1bbda4u;
}
