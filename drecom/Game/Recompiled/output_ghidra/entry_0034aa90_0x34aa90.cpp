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

// Function: entry_0034aa90
// Address: 0x34aa90 - 0x34ab48
void entry_0034aa90_0x34aa90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034aa90_0x34aa90");
#endif

    switch (ctx->pc) {
        case 0x34aab0u: goto label_34aab0;
        case 0x34aae4u: goto label_34aae4;
        case 0x34ab10u: goto label_34ab10;
        case 0x34ab28u: goto label_34ab28;
        case 0x34ab34u: goto label_34ab34;
        case 0x34ab44u: goto label_34ab44;
        default: break;
    }

    ctx->pc = 0x34aa90u;

    // 0x34aa90: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34aa90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34aa94: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34aa94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34aa98: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x34aa98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34aa9c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34aa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34aaa0: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x34aaa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34aaa4: 0x46010301  sub.s       $f12, $f0, $f1
    ctx->pc = 0x34aaa4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x34aaa8: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x34AAA8u;
    SET_GPR_U32(ctx, 31, 0x34AAB0u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x34AAA8u, 0x34AAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AAB0u;
label_34aab0:
    // 0x34aab0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34aab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34aab4: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x34aab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x34aab8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34aab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34aabc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34aabcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34aac0: 0x3c023dd6  lui         $v0, 0x3DD6
    ctx->pc = 0x34aac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15830 << 16));
    // 0x34aac4: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x34aac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x34aac8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x34aac8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x34aacc: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x34aaccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x34aad0: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x34aad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x34aad4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x34aad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x34aad8: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x34aad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x34aadc: 0xc05c848  jal         func_172120
    ctx->pc = 0x34AADCu;
    SET_GPR_U32(ctx, 31, 0x34AAE4u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x34AADCu, 0x34AAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AAE4u;
label_34aae4:
    // 0x34aae4: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x34aae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x34aae8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34aae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34aaec: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34aaecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34aaf0: 0xc4420010  lwc1        $f2, 0x10($v0)
    ctx->pc = 0x34aaf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34aaf4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34aaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34aaf8: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x34aaf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34aafc: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x34aafcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34ab00: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x34ab00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x34ab04: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x34ab04u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x34ab08: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x34AB08u;
    SET_GPR_U32(ctx, 31, 0x34AB10u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x34AB08u, 0x34AB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AB10u;
label_34ab10:
    // 0x34ab10: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34ab10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34ab14: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x34ab14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x34ab18: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34ab18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34ab1c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34ab1cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34ab20: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x34AB20u;
    SET_GPR_U32(ctx, 31, 0x34AB28u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x34AB20u, 0x34AB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AB28u;
label_34ab28:
    // 0x34ab28: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34ab28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34ab2c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x34AB2Cu;
    SET_GPR_U32(ctx, 31, 0x34AB34u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x34AB2Cu, 0x34AB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AB34u;
label_34ab34:
    // 0x34ab34: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34ab34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34ab38: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34ab38u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34ab3c: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x34AB3Cu;
    SET_GPR_U32(ctx, 31, 0x34AB44u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x34AB3Cu, 0x34AB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AB44u;
label_34ab44:
    // 0x34ab44: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34ab44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    ctx->pc = 0x34ab48u;
}
