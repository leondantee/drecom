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

// Function: entry_0034c46c
// Address: 0x34c46c - 0x34c4e8
void entry_0034c46c_0x34c46c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034c46c_0x34c46c");
#endif

    switch (ctx->pc) {
        case 0x34c4bcu: goto label_34c4bc;
        case 0x34c4d0u: goto label_34c4d0;
        case 0x34c4e4u: goto label_34c4e4;
        default: break;
    }

    ctx->pc = 0x34c46cu;

    // 0x34c46c: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x34c46cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34c470: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x34c470u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x34c474: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x34c474u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x34c478: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34c478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c47c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x34c47cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x34c480: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x34c480u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x34c484: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x34c484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x34c488: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x34c488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x34c48c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x34c48cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x34c490: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x34c490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x34c494: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x34c494u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x34c498: 0x34640006  ori         $a0, $v1, 0x6
    ctx->pc = 0x34c498u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
    // 0x34c49c: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34c49cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c4a0: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x34c4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x34c4a4: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x34c4a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x34c4a8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x34c4a8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34c4ac: 0x246701c0  addiu       $a3, $v1, 0x1C0
    ctx->pc = 0x34c4acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 448));
    // 0x34c4b0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x34c4b0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34c4b4: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x34C4B4u;
    SET_GPR_U32(ctx, 31, 0x34C4BCu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x34C4B4u, 0x34C4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C4BCu;
label_34c4bc:
    // 0x34c4bc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x34c4bcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34c4c0: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x34c4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x34c4c4: 0x3c05000a  lui         $a1, 0xA
    ctx->pc = 0x34c4c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)10 << 16));
    // 0x34c4c8: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x34C4C8u;
    SET_GPR_U32(ctx, 31, 0x34C4D0u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x34C4C8u, 0x34C4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C4D0u;
label_34c4d0:
    // 0x34c4d0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x34c4d0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34c4d4: 0x3c0402fa  lui         $a0, 0x2FA
    ctx->pc = 0x34c4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)762 << 16));
    // 0x34c4d8: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x34c4d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    // 0x34c4dc: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x34C4DCu;
    SET_GPR_U32(ctx, 31, 0x34C4E4u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x34C4DCu, 0x34C4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C4E4u;
label_34c4e4:
    // 0x34c4e4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x34c4e4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x34c4e8u;
}
