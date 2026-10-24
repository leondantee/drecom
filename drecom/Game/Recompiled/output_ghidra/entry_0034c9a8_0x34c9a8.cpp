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

// Function: entry_0034c9a8
// Address: 0x34c9a8 - 0x34ca38
void entry_0034c9a8_0x34c9a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034c9a8_0x34c9a8");
#endif

    switch (ctx->pc) {
        case 0x34c9fcu: goto label_34c9fc;
        case 0x34ca14u: goto label_34ca14;
        case 0x34ca2cu: goto label_34ca2c;
        default: break;
    }

    ctx->pc = 0x34c9a8u;

    // 0x34c9a8: 0xc7a000e4  lwc1        $f0, 0xE4($sp)
    ctx->pc = 0x34c9a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34c9ac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x34c9acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x34c9b0: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x34c9b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x34c9b4: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x34c9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c9b8: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x34c9b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
    // 0x34c9bc: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x34c9bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x34c9c0: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x34c9c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x34c9c4: 0x74438  dsll        $t0, $a3, 16
    ctx->pc = 0x34c9c4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) << 16);
    // 0x34c9c8: 0x3503ffff  ori         $v1, $t0, 0xFFFF
    ctx->pc = 0x34c9c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x34c9cc: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x34c9ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x34c9d0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x34c9d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x34c9d4: 0x34700006  ori         $s0, $v1, 0x6
    ctx->pc = 0x34c9d4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
    // 0x34c9d8: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x34c9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c9dc: 0x8c830130  lw          $v1, 0x130($a0)
    ctx->pc = 0x34c9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x34c9e0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x34c9e0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x34c9e4: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x34c9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x34c9e8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x34c9e8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34c9ec: 0x246701c0  addiu       $a3, $v1, 0x1C0
    ctx->pc = 0x34c9ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 448));
    // 0x34c9f0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x34c9f0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34c9f4: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x34C9F4u;
    SET_GPR_U32(ctx, 31, 0x34C9FCu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x34C9F4u, 0x34C9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C9FCu;
label_34c9fc:
    // 0x34c9fc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x34c9fcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34ca00: 0x3c100100  lui         $s0, 0x100
    ctx->pc = 0x34ca00u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)256 << 16));
    // 0x34ca04: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x34ca04u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x34ca08: 0x3c05000a  lui         $a1, 0xA
    ctx->pc = 0x34ca08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)10 << 16));
    // 0x34ca0c: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x34CA0Cu;
    SET_GPR_U32(ctx, 31, 0x34CA14u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x34CA0Cu, 0x34CA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CA14u;
label_34ca14:
    // 0x34ca14: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x34ca14u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34ca18: 0x3c0402fa  lui         $a0, 0x2FA
    ctx->pc = 0x34ca18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)762 << 16));
    // 0x34ca1c: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x34ca1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
    // 0x34ca20: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x34ca20u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x34ca24: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x34CA24u;
    SET_GPR_U32(ctx, 31, 0x34CA2Cu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x34CA24u, 0x34CA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CA2Cu;
label_34ca2c:
    // 0x34ca2c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x34ca2cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34ca30: 0x10000127  b           . + 4 + (0x127 << 2)
    ctx->pc = 0x34CA30u;
    {
        const bool branch_taken_0x34ca30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34ca30) {
            ctx->pc = 0x34CED0u;
            return;
        }
    }
    ctx->pc = 0x34CA38u;
}
