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

// Function: entry_00228d90
// Address: 0x228d90 - 0x228eac
void entry_00228d90_0x228d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00228d90_0x228d90");
#endif

    switch (ctx->pc) {
        case 0x228dbcu: goto label_228dbc;
        case 0x228dd8u: goto label_228dd8;
        case 0x228df4u: goto label_228df4;
        case 0x228e04u: goto label_228e04;
        default: break;
    }

    ctx->pc = 0x228d90u;

    // 0x228d90: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x228d90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228d94: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x228d94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228d98: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x228d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228d9c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x228d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x228da0: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x228da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x228da4: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x228da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x228da8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x228da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x228dac: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x228dacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x228db0: 0xc46d0038  lwc1        $f13, 0x38($v1)
    ctx->pc = 0x228db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x228db4: 0xc05c848  jal         func_172120
    ctx->pc = 0x228DB4u;
    SET_GPR_U32(ctx, 31, 0x228DBCu);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x228DB4u, 0x228DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228DBCu;
label_228dbc:
    // 0x228dbc: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x228dbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x228dc0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x228dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228dc4: 0xc46100d4  lwc1        $f1, 0xD4($v1)
    ctx->pc = 0x228dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x228dc8: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x228dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228dcc: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x228dccu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x228dd0: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x228DD0u;
    SET_GPR_U32(ctx, 31, 0x228DD8u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x228DD0u, 0x228DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228DD8u;
label_228dd8:
    // 0x228dd8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x228dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228ddc: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x228ddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x228de0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x228de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228de4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x228de4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x228de8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x228de8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x228dec: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x228DECu;
    SET_GPR_U32(ctx, 31, 0x228DF4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x228DECu, 0x228DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228DF4u;
label_228df4:
    // 0x228df4: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x228df4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228df8: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x228df8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x228dfc: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x228DFCu;
    SET_GPR_U32(ctx, 31, 0x228E04u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x228DFCu, 0x228E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228E04u;
label_228e04:
    // 0x228e04: 0x8fa80058  lw          $t0, 0x58($sp)
    ctx->pc = 0x228e04u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228e08: 0x8502127c  lh          $v0, 0x127C($t0)
    ctx->pc = 0x228e08u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 4732)));
    // 0x228e0c: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x228e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x228e10: 0xa503127c  sh          $v1, 0x127C($t0)
    ctx->pc = 0x228e10u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 4732), (uint16_t)GPR_U32(ctx, 3));
    // 0x228e14: 0x1440005e  bnez        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x228E14u;
    {
        const bool branch_taken_0x228e14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x228e14) {
            ctx->pc = 0x228F90u;
            return;
        }
    }
    ctx->pc = 0x228E1Cu;
    // 0x228e1c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x228e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228e20: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x228e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x228e24: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x228e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x228e28: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x228e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x228e2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x228e2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228e30: 0x0  nop
    ctx->pc = 0x228e30u;
    // NOP
    // 0x228e34: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x228e34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x228e38: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x228e38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x228e3c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x228e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228e40: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x228e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x228e44: 0xc461006c  lwc1        $f1, 0x6C($v1)
    ctx->pc = 0x228e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x228e48: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x228e48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x228e4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x228e4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228e50: 0x0  nop
    ctx->pc = 0x228e50u;
    // NOP
    // 0x228e54: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x228e54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x228e58: 0xe460006c  swc1        $f0, 0x6C($v1)
    ctx->pc = 0x228e58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 108), bits); }
    // 0x228e5c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x228e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228e60: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x228e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x228e64: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x228e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x228e68: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x228e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x228e6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x228e6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228e70: 0x0  nop
    ctx->pc = 0x228e70u;
    // NOP
    // 0x228e74: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x228e74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x228e78: 0x0  nop
    ctx->pc = 0x228e78u;
    // NOP
    // 0x228e7c: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x228E7Cu;
    {
        const bool branch_taken_0x228e7c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x228e7c) {
            ctx->pc = 0x228EACu;
            return;
        }
    }
    ctx->pc = 0x228E84u;
    // 0x228e84: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x228e84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x228e88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x228e88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228e8c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x228e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228e90: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x228e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x228e94: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x228e94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x228e98: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x228e98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x228e9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x228e9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228ea0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x228ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228ea4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x228ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x228ea8: 0xe440006c  swc1        $f0, 0x6C($v0)
    ctx->pc = 0x228ea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 108), bits); }
    ctx->pc = 0x228eacu;
}
