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

// Function: entry_00350d24
// Address: 0x350d24 - 0x350ec0
void entry_00350d24_0x350d24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00350d24_0x350d24");
#endif

    switch (ctx->pc) {
        case 0x350d40u: goto label_350d40;
        case 0x350d4cu: goto label_350d4c;
        case 0x350e10u: goto label_350e10;
        case 0x350e1cu: goto label_350e1c;
        case 0x350e6cu: goto label_350e6c;
        default: break;
    }

    ctx->pc = 0x350d24u;

    // 0x350d24: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x350d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x350d28: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x350d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350d2c: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x350d2cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x350d30: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x350d30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350d34: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x350d34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x350d38: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x350D38u;
    SET_GPR_U32(ctx, 31, 0x350D40u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x350D38u, 0x350D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350D40u;
label_350d40:
    // 0x350d40: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x350d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350d44: 0xc05cd10  jal         func_173440
    ctx->pc = 0x350D44u;
    SET_GPR_U32(ctx, 31, 0x350D4Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x350D44u, 0x350D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350D4Cu;
label_350d4c:
    // 0x350d4c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x350d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350d50: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x350d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x350d54: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x350d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x350d58: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x350d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350d5c: 0xc4400120  lwc1        $f0, 0x120($v0)
    ctx->pc = 0x350d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x350d60: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x350d60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x350d64: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x350d64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x350d68: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x350d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350d6c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x350d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x350d70: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x350d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x350d74: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x350d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350d78: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x350d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x350d7c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x350d7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x350d80: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x350d80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x350d84: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x350d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350d88: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x350d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x350d8c: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x350d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x350d90: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x350d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350d94: 0xc4400128  lwc1        $f0, 0x128($v0)
    ctx->pc = 0x350d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x350d98: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x350d98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x350d9c: 0xe4400128  swc1        $f0, 0x128($v0)
    ctx->pc = 0x350d9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
    // 0x350da0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x350da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350da4: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x350da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x350da8: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x350da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x350dac: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x350dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x350db0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x350db0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x350db4: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x350db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x350db8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x350db8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x350dbc: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x350dbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x350dc0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x350dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350dc4: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x350dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x350dc8: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x350dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x350dcc: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x350dccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x350dd0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x350dd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x350dd4: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x350dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x350dd8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x350dd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x350ddc: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x350ddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x350de0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x350de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350de4: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x350de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x350de8: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x350de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x350dec: 0x3c0240e0  lui         $v0, 0x40E0
    ctx->pc = 0x350decu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
    // 0x350df0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x350df0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x350df4: 0x0  nop
    ctx->pc = 0x350df4u;
    // NOP
    // 0x350df8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x350df8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x350dfc: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x350dfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x350e00: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x350e00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350e04: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x350e04u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x350e08: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x350E08u;
    SET_GPR_U32(ctx, 31, 0x350E10u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x350E08u, 0x350E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350E10u;
label_350e10:
    // 0x350e10: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x350e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350e14: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x350E14u;
    SET_GPR_U32(ctx, 31, 0x350E1Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x350E14u, 0x350E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350E1Cu;
label_350e1c:
    // 0x350e1c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x350e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350e20: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x350e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x350e24: 0xc4610088  lwc1        $f1, 0x88($v1)
    ctx->pc = 0x350e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x350e28: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x350e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350e2c: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x350e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x350e30: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x350e30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x350e34: 0x0  nop
    ctx->pc = 0x350e34u;
    // NOP
    // 0x350e38: 0x4501007c  bc1t        . + 4 + (0x7C << 2)
    ctx->pc = 0x350E38u;
    {
        const bool branch_taken_0x350e38 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x350e38) {
            ctx->pc = 0x35102Cu;
            return;
        }
    }
    ctx->pc = 0x350E40u;
    // 0x350e40: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x350e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x350e44: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x350e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350e48: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x350e48u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x350e4c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x350e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350e50: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x350e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350e54: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x350e54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x350e58: 0x24060424  addiu       $a2, $zero, 0x424
    ctx->pc = 0x350e58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1060));
    // 0x350e5c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x350e5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x350e60: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x350e60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x350e64: 0xc0965d0  jal         func_259740
    ctx->pc = 0x350E64u;
    SET_GPR_U32(ctx, 31, 0x350E6Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x350E64u, 0x350E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350E6Cu;
label_350e6c:
    // 0x350e6c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x350e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350e70: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x350e70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x350e74: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x350e74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x350e78: 0x2403ffdf  addiu       $v1, $zero, -0x21
    ctx->pc = 0x350e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x350e7c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x350e7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x350e80: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x350e80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x350e84: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x350e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350e88: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x350e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x350e8c: 0xa0600028  sb          $zero, 0x28($v1)
    ctx->pc = 0x350e8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x350e90: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x350e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x350e94: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x350e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350e98: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x350e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x350e9c: 0xa0640029  sb          $a0, 0x29($v1)
    ctx->pc = 0x350e9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 41), (uint8_t)GPR_U32(ctx, 4));
    // 0x350ea0: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x350ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x350ea4: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x350ea4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x350ea8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x350ea8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x350eac: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x350eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350eb0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x350eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x350eb4: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x350eb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x350eb8: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x350EB8u;
    {
        const bool branch_taken_0x350eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x350eb8) {
            ctx->pc = 0x35102Cu;
            return;
        }
    }
    ctx->pc = 0x350EC0u;
}
