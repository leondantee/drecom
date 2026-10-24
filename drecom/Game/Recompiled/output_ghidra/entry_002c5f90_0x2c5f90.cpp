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

// Function: entry_002c5f90
// Address: 0x2c5f90 - 0x2c609c
void entry_002c5f90_0x2c5f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c5f90_0x2c5f90");
#endif

    switch (ctx->pc) {
        case 0x2c5fa8u: goto label_2c5fa8;
        case 0x2c5fe4u: goto label_2c5fe4;
        case 0x2c5fecu: goto label_2c5fec;
        default: break;
    }

    ctx->pc = 0x2c5f90u;

    // 0x2c5f90: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2c5f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c5f94: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2c5f94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2c5f98: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2c5f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2c5f9c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2c5f9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x2c5fa0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2C5FA0u;
    SET_GPR_U32(ctx, 31, 0x2C5FA8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2C5FA0u, 0x2C5FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5FA8u;
label_2c5fa8:
    // 0x2c5fa8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c5fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c5fac: 0x30430007  andi        $v1, $v0, 0x7
    ctx->pc = 0x2c5facu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2c5fb0: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2c5fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2c5fb4: 0x24428110  addiu       $v0, $v0, -0x7EF0
    ctx->pc = 0x2c5fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934800));
    // 0x2c5fb8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c5fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c5fbc: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x2c5fbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c5fc0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c5fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c5fc4: 0x34460800  ori         $a2, $v0, 0x800
    ctx->pc = 0x2c5fc4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x2c5fc8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2c5fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c5fcc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2c5fccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c5fd0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2c5fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2c5fd4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2c5fd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c5fd8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2c5fd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2c5fdc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2C5FDCu;
    SET_GPR_U32(ctx, 31, 0x2C5FE4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2C5FDCu, 0x2C5FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5FE4u;
label_2c5fe4:
    // 0x2c5fe4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2C5FE4u;
    SET_GPR_U32(ctx, 31, 0x2C5FECu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2C5FE4u, 0x2C5FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5FECu;
label_2c5fec:
    // 0x2c5fec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c5fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c5ff0: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x2c5ff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x2c5ff4: 0x244200b4  addiu       $v0, $v0, 0xB4
    ctx->pc = 0x2c5ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x2c5ff8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x2c5ff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2c5ffc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2c5ffcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2c6000: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2c6000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c6004: 0xa443127e  sh          $v1, 0x127E($v0)
    ctx->pc = 0x2c6004u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c6008: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2c6008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c600c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x2c600cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c6010: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x2c6010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2c6014: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2c6014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2c6018: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x2c6018u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
    // 0x2c601c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2c601cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c6020: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x2c6020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c6024: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x2c6024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2c6028: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x2c6028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x2c602c: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x2c602cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
    // 0x2c6030: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c6030u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6034: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2c6034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c6038: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x2c6038u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x2c603c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c603cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6040: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2c6040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c6044: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c6044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c6048: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x2c6048u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x2c604c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c604cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6050: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2c6050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c6054: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c6054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c6058: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x2c6058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x2c605c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c605cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6060: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2c6060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c6064: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c6064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c6068: 0xe4400048  swc1        $f0, 0x48($v0)
    ctx->pc = 0x2c6068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    // 0x2c606c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c606cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6070: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2c6070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c6074: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c6074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c6078: 0xe440004c  swc1        $f0, 0x4C($v0)
    ctx->pc = 0x2c6078u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 76), bits); }
    // 0x2c607c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c607cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6080: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2c6080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c6084: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c6084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c6088: 0xe4400050  swc1        $f0, 0x50($v0)
    ctx->pc = 0x2c6088u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    // 0x2c608c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c608cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6090: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2c6090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c6094: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c6094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c6098: 0xe4400054  swc1        $f0, 0x54($v0)
    ctx->pc = 0x2c6098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    ctx->pc = 0x2c609cu;
}
