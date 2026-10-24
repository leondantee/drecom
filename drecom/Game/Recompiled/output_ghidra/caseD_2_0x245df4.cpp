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

// Function: caseD_2
// Address: 0x245df4 - 0x245f40
void caseD_2_0x245df4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x245df4");
#endif

    switch (ctx->pc) {
        case 0x245e20u: goto label_245e20;
        case 0x245e3cu: goto label_245e3c;
        case 0x245e54u: goto label_245e54;
        case 0x245e64u: goto label_245e64;
        case 0x245eb8u: goto label_245eb8;
        case 0x245efcu: goto label_245efc;
        case 0x245f04u: goto label_245f04;
        default: break;
    }

    ctx->pc = 0x245df4u;

    // 0x245df4: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x245df4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x245df8: 0x8fa80068  lw          $t0, 0x68($sp)
    ctx->pc = 0x245df8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x245dfc: 0x3c033d49  lui         $v1, 0x3D49
    ctx->pc = 0x245dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15689 << 16));
    // 0x245e00: 0x34620fdb  ori         $v0, $v1, 0xFDB
    ctx->pc = 0x245e00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x245e04: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x245e04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x245e08: 0x24e40120  addiu       $a0, $a3, 0x120
    ctx->pc = 0x245e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 288));
    // 0x245e0c: 0xc50c00d4  lwc1        $f12, 0xD4($t0)
    ctx->pc = 0x245e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x245e10: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x245e10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x245e14: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x245e14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x245e18: 0xc05c848  jal         func_172120
    ctx->pc = 0x245E18u;
    SET_GPR_U32(ctx, 31, 0x245E20u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x245E18u, 0x245E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245E20u;
label_245e20:
    // 0x245e20: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x245e20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x245e24: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x245e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x245e28: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x245e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x245e2c: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x245e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x245e30: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x245e30u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x245e34: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x245E34u;
    SET_GPR_U32(ctx, 31, 0x245E3Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x245E34u, 0x245E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245E3Cu;
label_245e3c:
    // 0x245e3c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x245e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x245e40: 0xe48000d4  swc1        $f0, 0xD4($a0)
    ctx->pc = 0x245e40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 212), bits); }
    // 0x245e44: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x245e44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x245e48: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x245e48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x245e4c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x245E4Cu;
    SET_GPR_U32(ctx, 31, 0x245E54u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x245E4Cu, 0x245E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245E54u;
label_245e54:
    // 0x245e54: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x245e54u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x245e58: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x245e58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x245e5c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x245E5Cu;
    SET_GPR_U32(ctx, 31, 0x245E64u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x245E5Cu, 0x245E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245E64u;
label_245e64:
    // 0x245e64: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x245e64u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x245e68: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x245e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x245e6c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x245e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x245e70: 0x8c630030  lw          $v1, 0x30($v1)
    ctx->pc = 0x245e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x245e74: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x245e74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x245e78: 0x10600031  beqz        $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x245E78u;
    {
        const bool branch_taken_0x245e78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x245e78) {
            ctx->pc = 0x245F40u;
            return;
        }
    }
    ctx->pc = 0x245E80u;
    // 0x245e80: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x245e80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x245e84: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x245e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x245e88: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x245e88u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x245e8c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x245e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x245e90: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x245e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x245e94: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x245e94u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x245e98: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x245e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x245e9c: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x245e9cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x245ea0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x245ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x245ea4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x245ea4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x245ea8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x245ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x245eac: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x245eacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x245eb0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x245EB0u;
    SET_GPR_U32(ctx, 31, 0x245EB8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x245EB0u, 0x245EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245EB8u;
label_245eb8:
    // 0x245eb8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x245eb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x245ebc: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x245ebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x245ec0: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x245ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x245ec4: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x245ec4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x245ec8: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x245ec8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x245ecc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x245eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x245ed0: 0xa4441278  sh          $a0, 0x1278($v0)
    ctx->pc = 0x245ed0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 4));
    // 0x245ed4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x245ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x245ed8: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x245ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x245edc: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x245edcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x245ee0: 0x8c470368  lw          $a3, 0x368($v0)
    ctx->pc = 0x245ee0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x245ee4: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x245ee4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x245ee8: 0x3406f000  ori         $a2, $zero, 0xF000
    ctx->pc = 0x245ee8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
    // 0x245eec: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x245eecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x245ef0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x245ef0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x245ef4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x245EF4u;
    SET_GPR_U32(ctx, 31, 0x245EFCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x245EF4u, 0x245EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245EFCu;
label_245efc:
    // 0x245efc: 0xc067694  jal         func_19DA50
    ctx->pc = 0x245EFCu;
    SET_GPR_U32(ctx, 31, 0x245F04u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x245EFCu, 0x245F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245F04u;
label_245f04:
    // 0x245f04: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x245f04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x245f08: 0x30a3003f  andi        $v1, $a1, 0x3F
    ctx->pc = 0x245f08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
    // 0x245f0c: 0x24630064  addiu       $v1, $v1, 0x64
    ctx->pc = 0x245f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
    // 0x245f10: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x245f10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x245f14: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x245f14u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x245f18: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x245f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x245f1c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x245f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x245f20: 0xa464005c  sh          $a0, 0x5C($v1)
    ctx->pc = 0x245f20u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 92), (uint16_t)GPR_U32(ctx, 4));
    // 0x245f24: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x245f24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x245f28: 0x249010b0  addiu       $s0, $a0, 0x10B0
    ctx->pc = 0x245f28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 4272));
    // 0x245f2c: 0x3c034316  lui         $v1, 0x4316
    ctx->pc = 0x245f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17174 << 16));
    // 0x245f30: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x245f30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x245f34: 0x0  nop
    ctx->pc = 0x245f34u;
    // NOP
    // 0x245f38: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x245f38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
    // 0x245f3c: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x245f3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    ctx->pc = 0x245f40u;
}
