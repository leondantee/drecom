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

// Function: entry_00350be8
// Address: 0x350be8 - 0x350d24
void entry_00350be8_0x350be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00350be8_0x350be8");
#endif

    switch (ctx->pc) {
        case 0x350c04u: goto label_350c04;
        case 0x350c10u: goto label_350c10;
        case 0x350cd4u: goto label_350cd4;
        case 0x350ce0u: goto label_350ce0;
        case 0x350d1cu: goto label_350d1c;
        default: break;
    }

    ctx->pc = 0x350be8u;

    // 0x350be8: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x350be8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x350bec: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x350becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350bf0: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x350bf0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x350bf4: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x350bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350bf8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x350bf8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x350bfc: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x350BFCu;
    SET_GPR_U32(ctx, 31, 0x350C04u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x350BFCu, 0x350C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350C04u;
label_350c04:
    // 0x350c04: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x350c04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350c08: 0xc05cd10  jal         func_173440
    ctx->pc = 0x350C08u;
    SET_GPR_U32(ctx, 31, 0x350C10u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x350C08u, 0x350C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350C10u;
label_350c10:
    // 0x350c10: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x350c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350c14: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x350c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x350c18: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x350c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x350c1c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x350c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350c20: 0xc4400120  lwc1        $f0, 0x120($v0)
    ctx->pc = 0x350c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x350c24: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x350c24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x350c28: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x350c28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x350c2c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x350c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350c30: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x350c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x350c34: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x350c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x350c38: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x350c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350c3c: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x350c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x350c40: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x350c40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x350c44: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x350c44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x350c48: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x350c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350c4c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x350c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x350c50: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x350c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x350c54: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x350c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350c58: 0xc4400128  lwc1        $f0, 0x128($v0)
    ctx->pc = 0x350c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x350c5c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x350c5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x350c60: 0xe4400128  swc1        $f0, 0x128($v0)
    ctx->pc = 0x350c60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
    // 0x350c64: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x350c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350c68: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x350c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x350c6c: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x350c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x350c70: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x350c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x350c74: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x350c74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x350c78: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x350c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x350c7c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x350c7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x350c80: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x350c80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x350c84: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x350c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350c88: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x350c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x350c8c: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x350c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x350c90: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x350c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x350c94: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x350c94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x350c98: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x350c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x350c9c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x350c9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x350ca0: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x350ca0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x350ca4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x350ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350ca8: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x350ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x350cac: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x350cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x350cb0: 0x3c0240e0  lui         $v0, 0x40E0
    ctx->pc = 0x350cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
    // 0x350cb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x350cb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x350cb8: 0x0  nop
    ctx->pc = 0x350cb8u;
    // NOP
    // 0x350cbc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x350cbcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x350cc0: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x350cc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x350cc4: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x350cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350cc8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x350cc8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x350ccc: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x350CCCu;
    SET_GPR_U32(ctx, 31, 0x350CD4u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x350CCCu, 0x350CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350CD4u;
label_350cd4:
    // 0x350cd4: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x350cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350cd8: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x350CD8u;
    SET_GPR_U32(ctx, 31, 0x350CE0u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x350CD8u, 0x350CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350CE0u;
label_350ce0:
    // 0x350ce0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x350ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350ce4: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x350ce4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x350ce8: 0x106000d0  beqz        $v1, . + 4 + (0xD0 << 2)
    ctx->pc = 0x350CE8u;
    {
        const bool branch_taken_0x350ce8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x350ce8) {
            ctx->pc = 0x35102Cu;
            return;
        }
    }
    ctx->pc = 0x350CF0u;
    // 0x350cf0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x350cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x350cf4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x350cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350cf8: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x350cf8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x350cfc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x350cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350d00: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x350d00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350d04: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x350d04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x350d08: 0x24060423  addiu       $a2, $zero, 0x423
    ctx->pc = 0x350d08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1059));
    // 0x350d0c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x350d0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x350d10: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x350d10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x350d14: 0xc0965d0  jal         func_259740
    ctx->pc = 0x350D14u;
    SET_GPR_U32(ctx, 31, 0x350D1Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x350D14u, 0x350D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350D1Cu;
label_350d1c:
    // 0x350d1c: 0x100000c3  b           . + 4 + (0xC3 << 2)
    ctx->pc = 0x350D1Cu;
    {
        const bool branch_taken_0x350d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x350d1c) {
            ctx->pc = 0x35102Cu;
            return;
        }
    }
    ctx->pc = 0x350D24u;
}
