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

// Function: entry_00152abc
// Address: 0x152abc - 0x152b50
void entry_00152abc_0x152abc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00152abc_0x152abc");
#endif

    switch (ctx->pc) {
        case 0x152adcu: goto label_152adc;
        case 0x152ae4u: goto label_152ae4;
        case 0x152b30u: goto label_152b30;
        default: break;
    }

    ctx->pc = 0x152abcu;

    // 0x152abc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x152abcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x152ac0: 0x8c24a5d0  lw          $a0, -0x5A30($at)
    ctx->pc = 0x152ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3EA5D0u));
    // 0x152ac4: 0x3c0247c3  lui         $v0, 0x47C3
    ctx->pc = 0x152ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18371 << 16));
    // 0x152ac8: 0x34475000  ori         $a3, $v0, 0x5000
    ctx->pc = 0x152ac8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20480);
    // 0x152acc: 0x44876000  mtc1        $a3, $f12
    ctx->pc = 0x152accu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x152ad0: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x152ad0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x152ad4: 0xc074300  jal         func_1D0C00
    ctx->pc = 0x152AD4u;
    SET_GPR_U32(ctx, 31, 0x152ADCu);
    ctx->pc = 0x1D0C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0C00u, 0x152AD4u, 0x152ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152ADCu;
label_152adc:
    // 0x152adc: 0xc054b28  jal         func_152CA0
    ctx->pc = 0x152ADCu;
    SET_GPR_U32(ctx, 31, 0x152AE4u);
    ctx->pc = 0x152CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152CA0u, 0x152ADCu, 0x152AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152AE4u;
label_152ae4:
    // 0x152ae4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x152ae4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x152ae8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x152ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x152aec: 0x2484a4a0  addiu       $a0, $a0, -0x5B60
    ctx->pc = 0x152aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943904));
    // 0x152af0: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x152af0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x152af4: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x152af4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x152af8: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x152af8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x152afc: 0x72438  dsll        $a0, $a3, 16
    ctx->pc = 0x152afcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << 16);
    // 0x152b00: 0x3482ffff  ori         $v0, $a0, 0xFFFF
    ctx->pc = 0x152b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x152b04: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x152b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x152b08: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x152b08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x152b0c: 0x34640205  ori         $a0, $v1, 0x205
    ctx->pc = 0x152b0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)517);
    // 0x152b10: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x152b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x152b14: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x152b14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x152b18: 0x244600d0  addiu       $a2, $v0, 0xD0
    ctx->pc = 0x152b18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x152b1c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x152b1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x152b20: 0x8c27a5d0  lw          $a3, -0x5A30($at)
    ctx->pc = 0x152b20u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x3EA5D0u));
    // 0x152b24: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x152b24u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x152b28: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x152B28u;
    SET_GPR_U32(ctx, 31, 0x152B30u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x152B28u, 0x152B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152B30u;
label_152b30:
    // 0x152b30: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x152b30u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x152b34: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x152b34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x152b38: 0xa0c0157c  sb          $zero, 0x157C($a2)
    ctx->pc = 0x152b38u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 5500), (uint8_t)GPR_U32(ctx, 0));
    // 0x152b3c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x152b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x152b40: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x152b40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x152b44: 0xa082157d  sb          $v0, 0x157D($a0)
    ctx->pc = 0x152b44u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5501), (uint8_t)GPR_U32(ctx, 2));
    // 0x152b48: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x152B48u;
    {
        const bool branch_taken_0x152b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x152b48) {
            ctx->pc = 0x152C70u;
            return;
        }
    }
    ctx->pc = 0x152B50u;
}
