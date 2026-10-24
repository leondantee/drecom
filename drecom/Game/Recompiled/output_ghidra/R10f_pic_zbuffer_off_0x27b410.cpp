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

// Function: R10f_pic_zbuffer_off
// Address: 0x27b410 - 0x27b4ec
void R10f_pic_zbuffer_off_0x27b410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R10f_pic_zbuffer_off_0x27b410");
#endif

    switch (ctx->pc) {
        case 0x27b468u: goto label_27b468;
        case 0x27b490u: goto label_27b490;
        case 0x27b49cu: goto label_27b49c;
        case 0x27b4c4u: goto label_27b4c4;
        case 0x27b4ccu: goto label_27b4cc;
        default: break;
    }

    ctx->pc = 0x27b410u;

    // 0x27b410: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x27b410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x27b414: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x27b414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x27b418: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x27b418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x27b41c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27b41cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x27b420: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27b420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27b424: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27b424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27b428: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x27b428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x27b42c: 0x24531ac0  addiu       $s3, $v0, 0x1AC0
    ctx->pc = 0x27b42cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 6848));
    // 0x27b430: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x27b430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x27b434: 0x24510b10  addiu       $s1, $v0, 0xB10
    ctx->pc = 0x27b434u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 2832));
    // 0x27b438: 0x8e3202d0  lw          $s2, 0x2D0($s1)
    ctx->pc = 0x27b438u;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x5D0DE0u));
    // 0x27b43c: 0x8e3002d0  lw          $s0, 0x2D0($s1)
    ctx->pc = 0x27b43cu;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x5D0DE0u));
    // 0x27b440: 0x26100120  addiu       $s0, $s0, 0x120
    ctx->pc = 0x27b440u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x27b444: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x27b444u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x27b448: 0x304200fb  andi        $v0, $v0, 0xFB
    ctx->pc = 0x27b448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)251);
    // 0x27b44c: 0xa2420000  sb          $v0, 0x0($s2)
    ctx->pc = 0x27b44cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x27b450: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x27b450u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27b454: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x27b454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x27b458: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x27b458u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x27b45c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27b45cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27b460: 0xc084964  jal         func_212590
    ctx->pc = 0x27B460u;
    SET_GPR_U32(ctx, 31, 0x27B468u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x27B460u, 0x27B468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B468u;
label_27b468:
    // 0x27b468: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x27b468u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x27b46c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27b46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27b470: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x27b470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x27b474: 0x3c020a00  lui         $v0, 0xA00
    ctx->pc = 0x27b474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2560 << 16));
    // 0x27b478: 0x34420070  ori         $v0, $v0, 0x70
    ctx->pc = 0x27b478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)112);
    // 0x27b47c: 0x432825  or          $a1, $v0, $v1
    ctx->pc = 0x27b47cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x27b480: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27b480u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27b484: 0x8c260140  lw          $a2, 0x140($at)
    ctx->pc = 0x27b484u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5D0140u));
    // 0x27b488: 0xc04f59c  jal         func_13D670
    ctx->pc = 0x27B488u;
    SET_GPR_U32(ctx, 31, 0x27B490u);
    ctx->pc = 0x13D670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D670u, 0x27B488u, 0x27B490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B490u;
label_27b490:
    // 0x27b490: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27b490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27b494: 0xc084964  jal         func_212590
    ctx->pc = 0x27B494u;
    SET_GPR_U32(ctx, 31, 0x27B49Cu);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x27B494u, 0x27B49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B49Cu;
label_27b49c:
    // 0x27b49c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x27b49cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x27b4a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27b4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27b4a4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x27b4a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x27b4a8: 0x3c020a00  lui         $v0, 0xA00
    ctx->pc = 0x27b4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2560 << 16));
    // 0x27b4ac: 0x34420070  ori         $v0, $v0, 0x70
    ctx->pc = 0x27b4acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)112);
    // 0x27b4b0: 0x432825  or          $a1, $v0, $v1
    ctx->pc = 0x27b4b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x27b4b4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27b4b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27b4b8: 0x8c260140  lw          $a2, 0x140($at)
    ctx->pc = 0x27b4b8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5D0140u));
    // 0x27b4bc: 0xc04f59c  jal         func_13D670
    ctx->pc = 0x27B4BCu;
    SET_GPR_U32(ctx, 31, 0x27B4C4u);
    ctx->pc = 0x13D670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D670u, 0x27B4BCu, 0x27B4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B4C4u;
label_27b4c4:
    // 0x27b4c4: 0xc084934  jal         func_2124D0
    ctx->pc = 0x27B4C4u;
    SET_GPR_U32(ctx, 31, 0x27B4CCu);
    ctx->pc = 0x2124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124D0u, 0x27B4C4u, 0x27B4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B4CCu;
label_27b4cc:
    // 0x27b4cc: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x27b4ccu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27b4d0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x27b4d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27b4d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27b4d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27b4d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27b4d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27b4dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27b4dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27b4e0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x27b4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x27b4e4: 0x3e00008  jr          $ra
    ctx->pc = 0x27B4E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27B4E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27B4ECu;
}
