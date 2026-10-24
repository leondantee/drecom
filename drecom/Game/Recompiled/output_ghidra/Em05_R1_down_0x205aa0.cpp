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

// Function: Em05_R1_down
// Address: 0x205aa0 - 0x205c08
void Em05_R1_down_0x205aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em05_R1_down_0x205aa0");
#endif

    switch (ctx->pc) {
        case 0x205b2cu: goto label_205b2c;
        case 0x205b40u: goto label_205b40;
        case 0x205bb0u: goto label_205bb0;
        case 0x205becu: goto label_205bec;
        case 0x205bf8u: goto label_205bf8;
        default: break;
    }

    ctx->pc = 0x205aa0u;

    // 0x205aa0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x205aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x205aa4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x205aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x205aa8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x205aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x205aac: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x205aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x205ab0: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x205ab0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x205ab4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x205ab4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x205ab8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x205ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x205abc: 0x10830010  beq         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x205ABCu;
    {
        const bool branch_taken_0x205abc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x205abc) {
            ctx->pc = 0x205B00u;
            goto label_205b00;
        }
    }
    ctx->pc = 0x205AC4u;
    // 0x205ac4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x205AC4u;
    {
        const bool branch_taken_0x205ac4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x205ac4) {
            ctx->pc = 0x205AD4u;
            goto label_205ad4;
        }
    }
    ctx->pc = 0x205ACCu;
    // 0x205acc: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x205ACCu;
    {
        const bool branch_taken_0x205acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x205acc) {
            ctx->pc = 0x205BF8u;
            goto label_205bf8;
        }
    }
    ctx->pc = 0x205AD4u;
label_205ad4:
    // 0x205ad4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x205ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x205ad8: 0xa4601278  sh          $zero, 0x1278($v1)
    ctx->pc = 0x205ad8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x205adc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x205adcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x205ae0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x205ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x205ae4: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x205ae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    // 0x205ae8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x205ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x205aec: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x205aecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x205af0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x205af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x205af4: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x205af4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x205af8: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x205AF8u;
    {
        const bool branch_taken_0x205af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x205af8) {
            ctx->pc = 0x205BF8u;
            goto label_205bf8;
        }
    }
    ctx->pc = 0x205B00u;
label_205b00:
    // 0x205b00: 0x3c023d03  lui         $v0, 0x3D03
    ctx->pc = 0x205b00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15619 << 16));
    // 0x205b04: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x205b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x205b08: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x205b08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x205b0c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x205b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x205b10: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x205b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x205b14: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x205b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x205b18: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x205b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x205b1c: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x205b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x205b20: 0x24451240  addiu       $a1, $v0, 0x1240
    ctx->pc = 0x205b20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4672));
    // 0x205b24: 0xc05c848  jal         func_172120
    ctx->pc = 0x205B24u;
    SET_GPR_U32(ctx, 31, 0x205B2Cu);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x205B24u, 0x205B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205B2Cu;
label_205b2c:
    // 0x205b2c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x205b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x205b30: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x205b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x205b34: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x205b34u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x205b38: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x205B38u;
    SET_GPR_U32(ctx, 31, 0x205B40u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x205B38u, 0x205B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205B40u;
label_205b40:
    // 0x205b40: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x205b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x205b44: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x205b44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x205b48: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x205b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x205b4c: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x205b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x205b50: 0x3c02c348  lui         $v0, 0xC348
    ctx->pc = 0x205b50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49992 << 16));
    // 0x205b54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x205b54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x205b58: 0x0  nop
    ctx->pc = 0x205b58u;
    // NOP
    // 0x205b5c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x205b5cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x205b60: 0x0  nop
    ctx->pc = 0x205b60u;
    // NOP
    // 0x205b64: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x205B64u;
    {
        const bool branch_taken_0x205b64 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x205b64) {
            ctx->pc = 0x205B88u;
            goto label_205b88;
        }
    }
    ctx->pc = 0x205B6Cu;
    // 0x205b6c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x205b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x205b70: 0xc4610184  lwc1        $f1, 0x184($v1)
    ctx->pc = 0x205b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x205b74: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x205b74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x205b78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x205b78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x205b7c: 0x0  nop
    ctx->pc = 0x205b7cu;
    // NOP
    // 0x205b80: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x205b80u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x205b84: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x205b84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
label_205b88:
    // 0x205b88: 0x3c024370  lui         $v0, 0x4370
    ctx->pc = 0x205b88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
    // 0x205b8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x205b8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x205b90: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x205b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x205b94: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x205b94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x205b98: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x205b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x205b9c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x205b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x205ba0: 0xc46c0188  lwc1        $f12, 0x188($v1)
    ctx->pc = 0x205ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x205ba4: 0xc44d0184  lwc1        $f13, 0x184($v0)
    ctx->pc = 0x205ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x205ba8: 0xc0455e6  jal         func_115798
    ctx->pc = 0x205BA8u;
    SET_GPR_U32(ctx, 31, 0x205BB0u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x205BA8u, 0x205BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205BB0u;
label_205bb0:
    // 0x205bb0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x205bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x205bb4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x205bb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x205bb8: 0x0  nop
    ctx->pc = 0x205bb8u;
    // NOP
    // 0x205bbc: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x205bbcu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x205bc0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x205bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x205bc4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x205bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x205bc8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x205bc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x205bcc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x205bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x205bd0: 0x8c4302d0  lw          $v1, 0x2D0($v0)
    ctx->pc = 0x205bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x205bd4: 0x94620140  lhu         $v0, 0x140($v1)
    ctx->pc = 0x205bd4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 320)));
    // 0x205bd8: 0x3042fffd  andi        $v0, $v0, 0xFFFD
    ctx->pc = 0x205bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65533);
    // 0x205bdc: 0xa4620140  sh          $v0, 0x140($v1)
    ctx->pc = 0x205bdcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x205be0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x205be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x205be4: 0xc05cd34  jal         func_1734D0
    ctx->pc = 0x205BE4u;
    SET_GPR_U32(ctx, 31, 0x205BECu);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x205BE4u, 0x205BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205BECu;
label_205bec:
    // 0x205bec: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x205becu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x205bf0: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x205BF0u;
    SET_GPR_U32(ctx, 31, 0x205BF8u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x205BF0u, 0x205BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205BF8u;
label_205bf8:
    // 0x205bf8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x205bf8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x205bfc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x205bfcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x205c00: 0x3e00008  jr          $ra
    ctx->pc = 0x205C00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205C00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205C08u;
}
