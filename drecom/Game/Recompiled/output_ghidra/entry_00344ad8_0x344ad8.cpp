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

// Function: entry_00344ad8
// Address: 0x344ad8 - 0x344b60
void entry_00344ad8_0x344ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00344ad8_0x344ad8");
#endif

    switch (ctx->pc) {
        case 0x344b04u: goto label_344b04;
        case 0x344b20u: goto label_344b20;
        case 0x344b38u: goto label_344b38;
        case 0x344b44u: goto label_344b44;
        case 0x344b54u: goto label_344b54;
        default: break;
    }

    ctx->pc = 0x344ad8u;

    // 0x344ad8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x344ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x344adc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x344adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x344ae0: 0x3c023d56  lui         $v0, 0x3D56
    ctx->pc = 0x344ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15702 << 16));
    // 0x344ae4: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x344ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x344ae8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x344ae8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x344aec: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x344aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x344af0: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x344af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x344af4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x344af4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x344af8: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x344af8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x344afc: 0xc05c848  jal         func_172120
    ctx->pc = 0x344AFCu;
    SET_GPR_U32(ctx, 31, 0x344B04u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x344AFCu, 0x344B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344B04u;
label_344b04:
    // 0x344b04: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x344b04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x344b08: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x344b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x344b0c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x344b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x344b10: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x344b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x344b14: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x344b14u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x344b18: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x344B18u;
    SET_GPR_U32(ctx, 31, 0x344B20u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x344B18u, 0x344B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344B20u;
label_344b20:
    // 0x344b20: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x344b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x344b24: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x344b24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x344b28: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x344b28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x344b2c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x344b2cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x344b30: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x344B30u;
    SET_GPR_U32(ctx, 31, 0x344B38u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x344B30u, 0x344B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344B38u;
label_344b38:
    // 0x344b38: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x344b38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x344b3c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x344B3Cu;
    SET_GPR_U32(ctx, 31, 0x344B44u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x344B3Cu, 0x344B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344B44u;
label_344b44:
    // 0x344b44: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x344b44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x344b48: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x344b48u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x344b4c: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x344B4Cu;
    SET_GPR_U32(ctx, 31, 0x344B54u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x344B4Cu, 0x344B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344B54u;
label_344b54:
    // 0x344b54: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x344b54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x344b58: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x344B58u;
    SET_GPR_U32(ctx, 31, 0x344B60u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x344B58u, 0x344B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344B60u;
}
