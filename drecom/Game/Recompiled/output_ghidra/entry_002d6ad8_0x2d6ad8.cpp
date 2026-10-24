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

// Function: entry_002d6ad8
// Address: 0x2d6ad8 - 0x2d6bc8
void entry_002d6ad8_0x2d6ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d6ad8_0x2d6ad8");
#endif

    switch (ctx->pc) {
        case 0x2d6af8u: goto label_2d6af8;
        case 0x2d6b3cu: goto label_2d6b3c;
        case 0x2d6b70u: goto label_2d6b70;
        case 0x2d6b90u: goto label_2d6b90;
        default: break;
    }

    ctx->pc = 0x2d6ad8u;

    // 0x2d6ad8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d6ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6adc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6ae0: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x2d6ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2d6ae4: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x2d6ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d6ae8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2d6ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2d6aec: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2d6aecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2d6af0: 0xc05cc90  jal         func_173240
    ctx->pc = 0x2D6AF0u;
    SET_GPR_U32(ctx, 31, 0x2D6AF8u);
    ctx->pc = 0x173240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173240u, 0x2D6AF0u, 0x2D6AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6AF8u;
label_2d6af8:
    // 0x2d6af8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2d6af8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2d6afc: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x2d6afcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d6b00: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2d6b00u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2d6b04: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6b08: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x2d6b08u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2d6b0c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6b10: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x2d6b10u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x2d6b14: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x2D6B14u;
    {
        const bool branch_taken_0x2d6b14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d6b14) {
            ctx->pc = 0x2D6BC8u;
            return;
        }
    }
    ctx->pc = 0x2D6B1Cu;
    // 0x2d6b1c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6b20: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d6b20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6b24: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2d6b24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2d6b28: 0x24063c06  addiu       $a2, $zero, 0x3C06
    ctx->pc = 0x2d6b28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15366));
    // 0x2d6b2c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d6b2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d6b30: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2d6b30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d6b34: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2D6B34u;
    SET_GPR_U32(ctx, 31, 0x2D6B3Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2D6B34u, 0x2D6B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6B3Cu;
label_2d6b3c:
    // 0x2d6b3c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d6b3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d6b40: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6b44: 0x24421344  addiu       $v0, $v0, 0x1344
    ctx->pc = 0x2d6b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4932));
    // 0x2d6b48: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2d6b48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2d6b4c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6b50: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2d6b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d6b54: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x2d6b54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x2d6b58: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2d6b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2d6b5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d6b5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d6b60: 0x0  nop
    ctx->pc = 0x2d6b60u;
    // NOP
    // 0x2d6b64: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x2d6b64u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d6b68: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2D6B68u;
    SET_GPR_U32(ctx, 31, 0x2D6B70u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2D6B68u, 0x2D6B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6B70u;
label_2d6b70:
    // 0x2d6b70: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6b74: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d6b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d6b78: 0x244400b0  addiu       $a0, $v0, 0xB0
    ctx->pc = 0x2d6b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x2d6b7c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2d6b7cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2d6b80: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2d6b80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2d6b84: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2d6b84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2d6b88: 0xc05cc20  jal         func_173080
    ctx->pc = 0x2D6B88u;
    SET_GPR_U32(ctx, 31, 0x2D6B90u);
    ctx->pc = 0x173080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173080u, 0x2D6B88u, 0x2D6B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6B90u;
label_2d6b90:
    // 0x2d6b90: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6b94: 0x24421348  addiu       $v0, $v0, 0x1348
    ctx->pc = 0x2d6b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4936));
    // 0x2d6b98: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2d6b98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2d6b9c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6ba0: 0x24431348  addiu       $v1, $v0, 0x1348
    ctx->pc = 0x2d6ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4936));
    // 0x2d6ba4: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2d6ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2d6ba8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2d6ba8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d6bac: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2d6bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d6bb0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2d6bb0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2d6bb4: 0x0  nop
    ctx->pc = 0x2d6bb4u;
    // NOP
    // 0x2d6bb8: 0x0  nop
    ctx->pc = 0x2d6bb8u;
    // NOP
    // 0x2d6bbc: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2d6bbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2d6bc0: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2D6BC0u;
    {
        const bool branch_taken_0x2d6bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d6bc0) {
            ctx->pc = 0x2D6C64u;
            return;
        }
    }
    ctx->pc = 0x2D6BC8u;
}
