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

// Function: entry_00152bf0
// Address: 0x152bf0 - 0x152c70
void entry_00152bf0_0x152bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00152bf0_0x152bf0");
#endif

    switch (ctx->pc) {
        case 0x152c10u: goto label_152c10;
        case 0x152c5cu: goto label_152c5c;
        default: break;
    }

    ctx->pc = 0x152bf0u;

    // 0x152bf0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x152bf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x152bf4: 0x8c22a5d0  lw          $v0, -0x5A30($at)
    ctx->pc = 0x152bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EA5D0u));
    // 0x152bf8: 0x3c04437a  lui         $a0, 0x437A
    ctx->pc = 0x152bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17274 << 16));
    // 0x152bfc: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x152bfcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x152c00: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x152c00u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x152c04: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x152c04u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x152c08: 0xc074300  jal         func_1D0C00
    ctx->pc = 0x152C08u;
    SET_GPR_U32(ctx, 31, 0x152C10u);
    ctx->pc = 0x1D0C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0C00u, 0x152C08u, 0x152C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152C10u;
label_152c10:
    // 0x152c10: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x152c10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x152c14: 0x2444a4a0  addiu       $a0, $v0, -0x5B60
    ctx->pc = 0x152c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943904));
    // 0x152c18: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x152c18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x152c1c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x152c1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x152c20: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x152c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x152c24: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x152c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x152c28: 0x3447ffff  ori         $a3, $v0, 0xFFFF
    ctx->pc = 0x152c28u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x152c2c: 0x672024  and         $a0, $v1, $a3
    ctx->pc = 0x152c2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x152c30: 0x4303c  dsll32      $a2, $a0, 0
    ctx->pc = 0x152c30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
    // 0x152c34: 0x34c20005  ori         $v0, $a2, 0x5
    ctx->pc = 0x152c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)5);
    // 0x152c38: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x152c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x152c3c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x152c3cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x152c40: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x152c40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x152c44: 0x246600d0  addiu       $a2, $v1, 0xD0
    ctx->pc = 0x152c44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x152c48: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x152c48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x152c4c: 0x8c27a5d0  lw          $a3, -0x5A30($at)
    ctx->pc = 0x152c4cu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x3EA5D0u));
    // 0x152c50: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x152c50u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x152c54: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x152C54u;
    SET_GPR_U32(ctx, 31, 0x152C5Cu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x152C54u, 0x152C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152C5Cu;
label_152c5c:
    // 0x152c5c: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x152c5cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x152c60: 0xa0e0157c  sb          $zero, 0x157C($a3)
    ctx->pc = 0x152c60u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 5500), (uint8_t)GPR_U32(ctx, 0));
    // 0x152c64: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x152c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x152c68: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x152c68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x152c6c: 0xa0c3157d  sb          $v1, 0x157D($a2)
    ctx->pc = 0x152c6cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 5501), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x152c70u;
}
