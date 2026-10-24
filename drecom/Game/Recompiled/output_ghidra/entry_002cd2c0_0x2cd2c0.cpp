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

// Function: entry_002cd2c0
// Address: 0x2cd2c0 - 0x2cd3fc
void entry_002cd2c0_0x2cd2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002cd2c0_0x2cd2c0");
#endif

    switch (ctx->pc) {
        case 0x2cd2e4u: goto label_2cd2e4;
        case 0x2cd310u: goto label_2cd310;
        case 0x2cd328u: goto label_2cd328;
        case 0x2cd348u: goto label_2cd348;
        case 0x2cd358u: goto label_2cd358;
        case 0x2cd364u: goto label_2cd364;
        default: break;
    }

    ctx->pc = 0x2cd2c0u;

    // 0x2cd2c0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cd2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd2c4: 0xc44100d8  lwc1        $f1, 0xD8($v0)
    ctx->pc = 0x2cd2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cd2c8: 0x3c023f0e  lui         $v0, 0x3F0E
    ctx->pc = 0x2cd2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16142 << 16));
    // 0x2cd2cc: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x2cd2ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x2cd2d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cd2d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cd2d4: 0x0  nop
    ctx->pc = 0x2cd2d4u;
    // NOP
    // 0x2cd2d8: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2cd2d8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cd2dc: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2CD2DCu;
    SET_GPR_U32(ctx, 31, 0x2CD2E4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2CD2DCu, 0x2CD2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD2E4u;
label_2cd2e4:
    // 0x2cd2e4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cd2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd2e8: 0xe44000d8  swc1        $f0, 0xD8($v0)
    ctx->pc = 0x2cd2e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 216), bits); }
    // 0x2cd2ec: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cd2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd2f0: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x2cd2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cd2f4: 0x3c023e8e  lui         $v0, 0x3E8E
    ctx->pc = 0x2cd2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16014 << 16));
    // 0x2cd2f8: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x2cd2f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x2cd2fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cd2fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cd300: 0x0  nop
    ctx->pc = 0x2cd300u;
    // NOP
    // 0x2cd304: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2cd304u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cd308: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2CD308u;
    SET_GPR_U32(ctx, 31, 0x2CD310u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2CD308u, 0x2CD310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD310u;
label_2cd310:
    // 0x2cd310: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cd310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd314: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x2cd314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x2cd318: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2cd318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd31c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2cd31cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2cd320: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2CD320u;
    SET_GPR_U32(ctx, 31, 0x2CD328u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2CD320u, 0x2CD328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD328u;
label_2cd328:
    // 0x2cd328: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2cd328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd32c: 0x8fb00068  lw          $s0, 0x68($sp)
    ctx->pc = 0x2cd32cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd330: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cd330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd334: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x2cd334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2cd338: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x2cd338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x2cd33c: 0x24460180  addiu       $a2, $v0, 0x180
    ctx->pc = 0x2cd33cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x2cd340: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2CD340u;
    SET_GPR_U32(ctx, 31, 0x2CD348u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2CD340u, 0x2CD348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD348u;
label_2cd348:
    // 0x2cd348: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2cd348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd34c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2cd34cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2cd350: 0xc0b1094  jal         func_2C4250
    ctx->pc = 0x2CD350u;
    SET_GPR_U32(ctx, 31, 0x2CD358u);
    ctx->pc = 0x2C4250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4250u, 0x2CD350u, 0x2CD358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD358u;
label_2cd358:
    // 0x2cd358: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2cd358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd35c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2CD35Cu;
    SET_GPR_U32(ctx, 31, 0x2CD364u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2CD35Cu, 0x2CD364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD364u;
label_2cd364:
    // 0x2cd364: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cd364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd368: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x2cd368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2cd36c: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x2cd36cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cd370: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x2cd370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x2cd374: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cd374u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cd378: 0x0  nop
    ctx->pc = 0x2cd378u;
    // NOP
    // 0x2cd37c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2cd37cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2cd380: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x2cd380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x2cd384: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cd384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd388: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2cd388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2cd38c: 0xc4410020  lwc1        $f1, 0x20($v0)
    ctx->pc = 0x2cd38cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cd390: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cd390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd394: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x2cd394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd398: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2cd398u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2cd39c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x2cd39cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x2cd3a0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cd3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd3a4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2cd3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2cd3a8: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x2cd3a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cd3ac: 0x8fb00068  lw          $s0, 0x68($sp)
    ctx->pc = 0x2cd3acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd3b0: 0xc6000124  lwc1        $f0, 0x124($s0)
    ctx->pc = 0x2cd3b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd3b4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2cd3b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cd3b8: 0x0  nop
    ctx->pc = 0x2cd3b8u;
    // NOP
    // 0x2cd3bc: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x2CD3BCu;
    {
        const bool branch_taken_0x2cd3bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cd3bc) {
            ctx->pc = 0x2CD3FCu;
            return;
        }
    }
    ctx->pc = 0x2CD3C4u;
    // 0x2cd3c4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cd3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd3c8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2cd3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2cd3cc: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x2cd3ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd3d0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cd3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd3d4: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x2cd3d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x2cd3d8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2cd3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2cd3dc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cd3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd3e0: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2cd3e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2cd3e4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2cd3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd3e8: 0x9462000e  lhu         $v0, 0xE($v1)
    ctx->pc = 0x2cd3e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x2cd3ec: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2cd3ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2cd3f0: 0xa462000e  sh          $v0, 0xE($v1)
    ctx->pc = 0x2cd3f0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x2cd3f4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cd3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd3f8: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x2cd3f8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x2cd3fcu;
}
