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

// Function: R10f_pic_zbuffer_on
// Address: 0x27b350 - 0x27b408
void R10f_pic_zbuffer_on_0x27b350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R10f_pic_zbuffer_on_0x27b350");
#endif

    switch (ctx->pc) {
        case 0x27b3a0u: goto label_27b3a0;
        case 0x27b3bcu: goto label_27b3bc;
        case 0x27b3c8u: goto label_27b3c8;
        case 0x27b3e4u: goto label_27b3e4;
        case 0x27b3ecu: goto label_27b3ec;
        default: break;
    }

    ctx->pc = 0x27b350u;

    // 0x27b350: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x27b350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x27b354: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x27b354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x27b358: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27b358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x27b35c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27b35cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27b360: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27b360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27b364: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x27b364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x27b368: 0x24521ac0  addiu       $s2, $v0, 0x1AC0
    ctx->pc = 0x27b368u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 6848));
    // 0x27b36c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x27b36cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x27b370: 0x24510b10  addiu       $s1, $v0, 0xB10
    ctx->pc = 0x27b370u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 2832));
    // 0x27b374: 0x8e3002d0  lw          $s0, 0x2D0($s1)
    ctx->pc = 0x27b374u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x5D0DE0u));
    // 0x27b378: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x27b378u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27b37c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x27b37cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x27b380: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x27b380u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x27b384: 0x26100120  addiu       $s0, $s0, 0x120
    ctx->pc = 0x27b384u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x27b388: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x27b388u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27b38c: 0x304200fd  andi        $v0, $v0, 0xFD
    ctx->pc = 0x27b38cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)253);
    // 0x27b390: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x27b390u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x27b394: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27b394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27b398: 0xc084964  jal         func_212590
    ctx->pc = 0x27B398u;
    SET_GPR_U32(ctx, 31, 0x27B3A0u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x27B398u, 0x27B3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B3A0u;
label_27b3a0:
    // 0x27b3a0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x27b3a0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x27b3a4: 0x3c020a00  lui         $v0, 0xA00
    ctx->pc = 0x27b3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2560 << 16));
    // 0x27b3a8: 0x34450070  ori         $a1, $v0, 0x70
    ctx->pc = 0x27b3a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)112);
    // 0x27b3ac: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27b3acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27b3b0: 0x8c260140  lw          $a2, 0x140($at)
    ctx->pc = 0x27b3b0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5D0140u));
    // 0x27b3b4: 0xc04f59c  jal         func_13D670
    ctx->pc = 0x27B3B4u;
    SET_GPR_U32(ctx, 31, 0x27B3BCu);
    ctx->pc = 0x13D670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D670u, 0x27B3B4u, 0x27B3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B3BCu;
label_27b3bc:
    // 0x27b3bc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27b3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27b3c0: 0xc084964  jal         func_212590
    ctx->pc = 0x27B3C0u;
    SET_GPR_U32(ctx, 31, 0x27B3C8u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x27B3C0u, 0x27B3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B3C8u;
label_27b3c8:
    // 0x27b3c8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x27b3c8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x27b3cc: 0x3c020a00  lui         $v0, 0xA00
    ctx->pc = 0x27b3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2560 << 16));
    // 0x27b3d0: 0x34450070  ori         $a1, $v0, 0x70
    ctx->pc = 0x27b3d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)112);
    // 0x27b3d4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27b3d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27b3d8: 0x8c260140  lw          $a2, 0x140($at)
    ctx->pc = 0x27b3d8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5D0140u));
    // 0x27b3dc: 0xc04f59c  jal         func_13D670
    ctx->pc = 0x27B3DCu;
    SET_GPR_U32(ctx, 31, 0x27B3E4u);
    ctx->pc = 0x13D670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D670u, 0x27B3DCu, 0x27B3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B3E4u;
label_27b3e4:
    // 0x27b3e4: 0xc084934  jal         func_2124D0
    ctx->pc = 0x27B3E4u;
    SET_GPR_U32(ctx, 31, 0x27B3ECu);
    ctx->pc = 0x2124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124D0u, 0x27B3E4u, 0x27B3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B3ECu;
label_27b3ec:
    // 0x27b3ec: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x27b3ecu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27b3f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27b3f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27b3f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27b3f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27b3f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27b3f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27b3fc: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x27b3fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x27b400: 0x3e00008  jr          $ra
    ctx->pc = 0x27B400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27B400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27B408u;
}
