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

// Function: entry_00222eac
// Address: 0x222eac - 0x223188
void entry_00222eac_0x222eac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00222eac_0x222eac");
#endif

    switch (ctx->pc) {
        case 0x222f54u: goto label_222f54;
        case 0x222f90u: goto label_222f90;
        case 0x222fb8u: goto label_222fb8;
        case 0x223134u: goto label_223134;
        case 0x223144u: goto label_223144;
        case 0x22315cu: goto label_22315c;
        default: break;
    }

    ctx->pc = 0x222eacu;

    // 0x222eac: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x222eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x222eb0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x222eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x222eb4: 0x34500010  ori         $s0, $v0, 0x10
    ctx->pc = 0x222eb4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x222eb8: 0xac700008  sw          $s0, 0x8($v1)
    ctx->pc = 0x222eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 16));
    // 0x222ebc: 0x3c160039  lui         $s6, 0x39
    ctx->pc = 0x222ebcu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)57 << 16));
    // 0x222ec0: 0x26c3ac70  addiu       $v1, $s6, -0x5390
    ctx->pc = 0x222ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294945904));
    // 0x222ec4: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x222ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x222ec8: 0xac431228  sw          $v1, 0x1228($v0)
    ctx->pc = 0x222ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4648), GPR_U32(ctx, 3));
    // 0x222ecc: 0x3c10f000  lui         $s0, 0xF000
    ctx->pc = 0x222eccu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)61440 << 16));
    // 0x222ed0: 0x8fb60128  lw          $s6, 0x128($sp)
    ctx->pc = 0x222ed0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x222ed4: 0xaed0121c  sw          $s0, 0x121C($s6)
    ctx->pc = 0x222ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4636), GPR_U32(ctx, 16));
    // 0x222ed8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x222ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x222edc: 0x8fb00128  lw          $s0, 0x128($sp)
    ctx->pc = 0x222edcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x222ee0: 0xa2021219  sb          $v0, 0x1219($s0)
    ctx->pc = 0x222ee0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4633), (uint8_t)GPR_U32(ctx, 2));
    // 0x222ee4: 0x3c02466a  lui         $v0, 0x466A
    ctx->pc = 0x222ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18026 << 16));
    // 0x222ee8: 0x34436000  ori         $v1, $v0, 0x6000
    ctx->pc = 0x222ee8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24576);
    // 0x222eec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x222eecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x222ef0: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x222ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x222ef4: 0xe44011e8  swc1        $f0, 0x11E8($v0)
    ctx->pc = 0x222ef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4584), bits); }
    // 0x222ef8: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x222ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x222efc: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x222efcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x222f00: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x222f00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x222f04: 0xa480127a  sh          $zero, 0x127A($a0)
    ctx->pc = 0x222f04u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x222f08: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x222f08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x222f0c: 0xa4a0127c  sh          $zero, 0x127C($a1)
    ctx->pc = 0x222f0cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4732), (uint16_t)GPR_U32(ctx, 0));
    // 0x222f10: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x222f10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x222f14: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x222f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x222f18: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x222f18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x222f1c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x222f1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x222f20: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x222f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x222f24: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x222f24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x222f28: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x222f28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x222f2c: 0x8fbe0128  lw          $fp, 0x128($sp)
    ctx->pc = 0x222f2cu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x222f30: 0xe7c00188  swc1        $f0, 0x188($fp)
    ctx->pc = 0x222f30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 392), bits); }
    // 0x222f34: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x222f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x222f38: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x222f38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x222f3c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x222f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x222f40: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x222f40u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x222f44: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x222f44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x222f48: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x222f48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x222f4c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x222F4Cu;
    SET_GPR_U32(ctx, 31, 0x222F54u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x222F4Cu, 0x222F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222F54u;
label_222f54:
    // 0x222f54: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x222f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x222f58: 0x24691330  addiu       $t1, $v1, 0x1330
    ctx->pc = 0x222f58u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x222f5c: 0xad200000  sw          $zero, 0x0($t1)
    ctx->pc = 0x222f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
    // 0x222f60: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x222f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x222f64: 0x244a1330  addiu       $t2, $v0, 0x1330
    ctx->pc = 0x222f64u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x222f68: 0xad400004  sw          $zero, 0x4($t2)
    ctx->pc = 0x222f68u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 0));
    // 0x222f6c: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x222f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x222f70: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x222f70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x222f74: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x222f74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x222f78: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x222f78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x222f7c: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x222f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x222f80: 0x24a71330  addiu       $a3, $a1, 0x1330
    ctx->pc = 0x222f80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x222f84: 0xe4e0000c  swc1        $f0, 0xC($a3)
    ctx->pc = 0x222f84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x222f88: 0xc067694  jal         func_19DA50
    ctx->pc = 0x222F88u;
    SET_GPR_U32(ctx, 31, 0x222F90u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x222F88u, 0x222F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222F90u;
label_222f90:
    // 0x222f90: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x222f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x222f94: 0x3044007f  andi        $a0, $v0, 0x7F
    ctx->pc = 0x222f94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x222f98: 0x2482012c  addiu       $v0, $a0, 0x12C
    ctx->pc = 0x222f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 300));
    // 0x222f9c: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x222f9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x222fa0: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x222fa0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x222fa4: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x222fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x222fa8: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x222fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x222fac: 0xa465005c  sh          $a1, 0x5C($v1)
    ctx->pc = 0x222facu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 92), (uint16_t)GPR_U32(ctx, 5));
    // 0x222fb0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x222FB0u;
    SET_GPR_U32(ctx, 31, 0x222FB8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x222FB0u, 0x222FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222FB8u;
label_222fb8:
    // 0x222fb8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x222fb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x222fbc: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x222fbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x222fc0: 0x246404b0  addiu       $a0, $v1, 0x4B0
    ctx->pc = 0x222fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1200));
    // 0x222fc4: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x222fc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x222fc8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x222fc8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x222fcc: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x222fccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x222fd0: 0x24a61330  addiu       $a2, $a1, 0x1330
    ctx->pc = 0x222fd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x222fd4: 0xa4c30076  sh          $v1, 0x76($a2)
    ctx->pc = 0x222fd4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 118), (uint16_t)GPR_U32(ctx, 3));
    // 0x222fd8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x222fd8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x222fdc: 0x8fa70128  lw          $a3, 0x128($sp)
    ctx->pc = 0x222fdcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x222fe0: 0x24e21330  addiu       $v0, $a3, 0x1330
    ctx->pc = 0x222fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4912));
    // 0x222fe4: 0xe440002c  swc1        $f0, 0x2C($v0)
    ctx->pc = 0x222fe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
    // 0x222fe8: 0x8fa90128  lw          $t1, 0x128($sp)
    ctx->pc = 0x222fe8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x222fec: 0x252b1330  addiu       $t3, $t1, 0x1330
    ctx->pc = 0x222fecu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), 4912));
    // 0x222ff0: 0xad600030  sw          $zero, 0x30($t3)
    ctx->pc = 0x222ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 48), GPR_U32(ctx, 0));
    // 0x222ff4: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x222ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x222ff8: 0x24a21330  addiu       $v0, $a1, 0x1330
    ctx->pc = 0x222ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x222ffc: 0xa040007f  sb          $zero, 0x7F($v0)
    ctx->pc = 0x222ffcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 127), (uint8_t)GPR_U32(ctx, 0));
    // 0x223000: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x223000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x223004: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x223004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x223008: 0xa4400082  sh          $zero, 0x82($v0)
    ctx->pc = 0x223008u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 130), (uint16_t)GPR_U32(ctx, 0));
    // 0x22300c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22300cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x223010: 0x8fb00128  lw          $s0, 0x128($sp)
    ctx->pc = 0x223010u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x223014: 0x26021330  addiu       $v0, $s0, 0x1330
    ctx->pc = 0x223014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4912));
    // 0x223018: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x223018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x22301c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22301cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x223020: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x223020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x223024: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x223024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x223028: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x223028u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x22302c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22302cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x223030: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x223030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x223034: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x223034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x223038: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x223038u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x22303c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22303cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x223040: 0x8fa60128  lw          $a2, 0x128($sp)
    ctx->pc = 0x223040u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x223044: 0x24c41330  addiu       $a0, $a2, 0x1330
    ctx->pc = 0x223044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4912));
    // 0x223048: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x223048u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x22304c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22304cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x223050: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x223050u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x223054: 0x24a21330  addiu       $v0, $a1, 0x1330
    ctx->pc = 0x223054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x223058: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x223058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x22305c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22305cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x223060: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x223060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x223064: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x223064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x223068: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x223068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x22306c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22306cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x223070: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x223070u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x223074: 0x24a61330  addiu       $a2, $a1, 0x1330
    ctx->pc = 0x223074u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x223078: 0xe4c00038  swc1        $f0, 0x38($a2)
    ctx->pc = 0x223078u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 56), bits); }
    // 0x22307c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22307cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x223080: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x223080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x223084: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x223084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x223088: 0xe480003c  swc1        $f0, 0x3C($a0)
    ctx->pc = 0x223088u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x22308c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22308cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x223090: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x223090u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x223094: 0x24a31330  addiu       $v1, $a1, 0x1330
    ctx->pc = 0x223094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x223098: 0xe4600058  swc1        $f0, 0x58($v1)
    ctx->pc = 0x223098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 88), bits); }
    // 0x22309c: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x22309cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2230a0: 0x249e1330  addiu       $fp, $a0, 0x1330
    ctx->pc = 0x2230a0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x2230a4: 0xafc00054  sw          $zero, 0x54($fp)
    ctx->pc = 0x2230a4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 84), GPR_U32(ctx, 0));
    // 0x2230a8: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x2230a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2230ac: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2230acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2230b0: 0xac600068  sw          $zero, 0x68($v1)
    ctx->pc = 0x2230b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 0));
    // 0x2230b4: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x2230b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2230b8: 0x24a71330  addiu       $a3, $a1, 0x1330
    ctx->pc = 0x2230b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x2230bc: 0xa4e00078  sh          $zero, 0x78($a3)
    ctx->pc = 0x2230bcu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 120), (uint16_t)GPR_U32(ctx, 0));
    // 0x2230c0: 0x8fb40128  lw          $s4, 0x128($sp)
    ctx->pc = 0x2230c0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2230c4: 0x26881330  addiu       $t0, $s4, 0x1330
    ctx->pc = 0x2230c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 4912));
    // 0x2230c8: 0xa100007b  sb          $zero, 0x7B($t0)
    ctx->pc = 0x2230c8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 123), (uint8_t)GPR_U32(ctx, 0));
    // 0x2230cc: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x2230ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2230d0: 0x24691330  addiu       $t1, $v1, 0x1330
    ctx->pc = 0x2230d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2230d4: 0xa120007d  sb          $zero, 0x7D($t1)
    ctx->pc = 0x2230d4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 125), (uint8_t)GPR_U32(ctx, 0));
    // 0x2230d8: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x2230d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2230dc: 0x246a1330  addiu       $t2, $v1, 0x1330
    ctx->pc = 0x2230dcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2230e0: 0xa140007e  sb          $zero, 0x7E($t2)
    ctx->pc = 0x2230e0u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 126), (uint8_t)GPR_U32(ctx, 0));
    // 0x2230e4: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x2230e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2230e8: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2230e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2230ec: 0xa4800080  sh          $zero, 0x80($a0)
    ctx->pc = 0x2230ecu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 128), (uint16_t)GPR_U32(ctx, 0));
    // 0x2230f0: 0x8fb10128  lw          $s1, 0x128($sp)
    ctx->pc = 0x2230f0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2230f4: 0x26231330  addiu       $v1, $s1, 0x1330
    ctx->pc = 0x2230f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4912));
    // 0x2230f8: 0xa4600096  sh          $zero, 0x96($v1)
    ctx->pc = 0x2230f8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 150), (uint16_t)GPR_U32(ctx, 0));
    // 0x2230fc: 0x8fb20128  lw          $s2, 0x128($sp)
    ctx->pc = 0x2230fcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x223100: 0x26431330  addiu       $v1, $s2, 0x1330
    ctx->pc = 0x223100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4912));
    // 0x223104: 0xa4600094  sh          $zero, 0x94($v1)
    ctx->pc = 0x223104u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 148), (uint16_t)GPR_U32(ctx, 0));
    // 0x223108: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x223108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x22310c: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x22310cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x223110: 0xa06000a8  sb          $zero, 0xA8($v1)
    ctx->pc = 0x223110u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 168), (uint8_t)GPR_U32(ctx, 0));
    // 0x223114: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x223114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x223118: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x223118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22311c: 0xa44000ac  sh          $zero, 0xAC($v0)
    ctx->pc = 0x22311cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 172), (uint16_t)GPR_U32(ctx, 0));
    // 0x223120: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x223120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x223124: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x223124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x223128: 0xa46000aa  sh          $zero, 0xAA($v1)
    ctx->pc = 0x223128u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 170), (uint16_t)GPR_U32(ctx, 0));
    // 0x22312c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22312Cu;
    SET_GPR_U32(ctx, 31, 0x223134u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22312Cu, 0x223134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223134u;
label_223134:
    // 0x223134: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x223134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x223138: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x223138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x22313c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22313Cu;
    SET_GPR_U32(ctx, 31, 0x223144u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22313Cu, 0x223144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223144u;
label_223144:
    // 0x223144: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x223144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x223148: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x223148u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x22314c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22314cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x223150: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x223150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x223154: 0xc067694  jal         func_19DA50
    ctx->pc = 0x223154u;
    SET_GPR_U32(ctx, 31, 0x22315Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x223154u, 0x22315Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22315Cu;
label_22315c:
    // 0x22315c: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x22315cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x223160: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x223160u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x223164: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x223164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x223168: 0x30430007  andi        $v1, $v0, 0x7
    ctx->pc = 0x223168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x22316c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22316cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x223170: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x223170u;
    {
        const bool branch_taken_0x223170 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x223170) {
            ctx->pc = 0x223188u;
            return;
        }
    }
    ctx->pc = 0x223178u;
    // 0x223178: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x223178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22317c: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x22317cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x223180: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x223180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x223184: 0xa46200aa  sh          $v0, 0xAA($v1)
    ctx->pc = 0x223184u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 170), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x223188u;
}
