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

// Function: Em0a_R1_escape_R
// Address: 0x366b70 - 0x366ce0
void Em0a_R1_escape_R_0x366b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0a_R1_escape_R_0x366b70");
#endif

    switch (ctx->pc) {
        case 0x366bc4u: goto label_366bc4;
        case 0x366c18u: goto label_366c18;
        case 0x366c24u: goto label_366c24;
        case 0x366c7cu: goto label_366c7c;
        case 0x366c88u: goto label_366c88;
        default: break;
    }

    ctx->pc = 0x366b70u;

    // 0x366b70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x366b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x366b74: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x366b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x366b78: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x366b78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x366b7c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x366b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366b80: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x366b80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x366b84: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x366b84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x366b88: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x366b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x366b8c: 0x1083001e  beq         $a0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x366B8Cu;
    {
        const bool branch_taken_0x366b8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x366b8c) {
            ctx->pc = 0x366C08u;
            goto label_366c08;
        }
    }
    ctx->pc = 0x366B94u;
    // 0x366b94: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x366B94u;
    {
        const bool branch_taken_0x366b94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x366b94) {
            ctx->pc = 0x366BA4u;
            goto label_366ba4;
        }
    }
    ctx->pc = 0x366B9Cu;
    // 0x366b9c: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x366B9Cu;
    {
        const bool branch_taken_0x366b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x366b9c) {
            ctx->pc = 0x366CD0u;
            goto label_366cd0;
        }
    }
    ctx->pc = 0x366BA4u;
label_366ba4:
    // 0x366ba4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x366ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366ba8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x366ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366bac: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x366bacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x366bb0: 0x2406051d  addiu       $a2, $zero, 0x51D
    ctx->pc = 0x366bb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1309));
    // 0x366bb4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x366bb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x366bb8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x366bb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x366bbc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x366BBCu;
    SET_GPR_U32(ctx, 31, 0x366BC4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x366BBCu, 0x366BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366BC4u;
label_366bc4:
    // 0x366bc4: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x366bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x366bc8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x366bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366bcc: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x366bccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x366bd0: 0x3c02c316  lui         $v0, 0xC316
    ctx->pc = 0x366bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49942 << 16));
    // 0x366bd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x366bd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x366bd8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x366bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366bdc: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x366bdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x366be0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x366be0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x366be4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x366be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366be8: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x366be8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x366bec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x366becu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x366bf0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x366bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366bf4: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x366bf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x366bf8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x366bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366bfc: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x366bfcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x366c00: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x366c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x366c04: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x366c04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_366c08:
    // 0x366c08: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x366c08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366c0c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x366c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x366c10: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x366C10u;
    SET_GPR_U32(ctx, 31, 0x366C18u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x366C10u, 0x366C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366C18u;
label_366c18:
    // 0x366c18: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x366c18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366c1c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x366C1Cu;
    SET_GPR_U32(ctx, 31, 0x366C24u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x366C1Cu, 0x366C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366C24u;
label_366c24:
    // 0x366c24: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x366c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366c28: 0xc4610180  lwc1        $f1, 0x180($v1)
    ctx->pc = 0x366c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x366c2c: 0x3c024116  lui         $v0, 0x4116
    ctx->pc = 0x366c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16662 << 16));
    // 0x366c30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x366c30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x366c34: 0x0  nop
    ctx->pc = 0x366c34u;
    // NOP
    // 0x366c38: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x366c38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x366c3c: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x366c3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
    // 0x366c40: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x366c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366c44: 0xc4410180  lwc1        $f1, 0x180($v0)
    ctx->pc = 0x366c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x366c48: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x366c48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x366c4c: 0x0  nop
    ctx->pc = 0x366c4cu;
    // NOP
    // 0x366c50: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x366c50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x366c54: 0x0  nop
    ctx->pc = 0x366c54u;
    // NOP
    // 0x366c58: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x366C58u;
    {
        const bool branch_taken_0x366c58 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x366c58) {
            ctx->pc = 0x366C6Cu;
            goto label_366c6c;
        }
    }
    ctx->pc = 0x366C60u;
    // 0x366c60: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x366c60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x366c64: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x366c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366c68: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x366c68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
label_366c6c:
    // 0x366c6c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x366c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366c70: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x366c70u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x366c74: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x366C74u;
    SET_GPR_U32(ctx, 31, 0x366C7Cu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x366C74u, 0x366C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366C7Cu;
label_366c7c:
    // 0x366c7c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x366c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366c80: 0xc097478  jal         func_25D1E0
    ctx->pc = 0x366C80u;
    SET_GPR_U32(ctx, 31, 0x366C88u);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x366C80u, 0x366C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366C88u;
label_366c88:
    // 0x366c88: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x366c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366c8c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x366c8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x366c90: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x366C90u;
    {
        const bool branch_taken_0x366c90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x366c90) {
            ctx->pc = 0x366CD0u;
            goto label_366cd0;
        }
    }
    ctx->pc = 0x366C98u;
    // 0x366c98: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x366c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x366c9c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x366c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366ca0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x366ca0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x366ca4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x366ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x366ca8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x366ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366cac: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x366cacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x366cb0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x366cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366cb4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x366cb4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x366cb8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x366cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366cbc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x366cbcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x366cc0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x366cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366cc4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x366cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x366cc8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x366cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366ccc: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x366cccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
label_366cd0:
    // 0x366cd0: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x366cd0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x366cd4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x366cd4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x366cd8: 0x3e00008  jr          $ra
    ctx->pc = 0x366CD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x366CD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x366CE0u;
}
