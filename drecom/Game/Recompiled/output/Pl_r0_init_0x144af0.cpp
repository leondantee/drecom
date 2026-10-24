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

// Function: Pl_r0_init
// Address: 0x144af0 - 0x144ef0
void Pl_r0_init_0x144af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_r0_init_0x144af0");
#endif

    switch (ctx->pc) {
        case 0x144b54u: goto label_144b54;
        case 0x144d2cu: goto label_144d2c;
        case 0x144d34u: goto label_144d34;
        case 0x144d40u: goto label_144d40;
        case 0x144da8u: goto label_144da8;
        case 0x144dc0u: goto label_144dc0;
        case 0x144e94u: goto label_144e94;
        case 0x144ebcu: goto label_144ebc;
        default: break;
    }

    ctx->pc = 0x144af0u;

    // 0x144af0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x144af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x144af4: 0x7fbf0060  sq          $ra, 0x60($sp)
    ctx->pc = 0x144af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 31));
    // 0x144af8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x144af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x144afc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x144afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x144b00: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x144b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x144b04: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x144b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x144b08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x144b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x144b0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x144b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x144b10: 0xafa40078  sw          $a0, 0x78($sp)
    ctx->pc = 0x144b10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 4));
    // 0x144b14: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x144b14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x144b18: 0x2451a530  addiu       $s1, $v0, -0x5AD0
    ctx->pc = 0x144b18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944048));
    // 0x144b1c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x144b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x144b20: 0x2450ec70  addiu       $s0, $v0, -0x1390
    ctx->pc = 0x144b20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962288));
    // 0x144b24: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x144b24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x144b28: 0x2452c960  addiu       $s2, $v0, -0x36A0
    ctx->pc = 0x144b28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953312));
    // 0x144b2c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x144b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x144b30: 0x2453a4a0  addiu       $s3, $v0, -0x5B60
    ctx->pc = 0x144b30u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943904));
    // 0x144b34: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x144b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x144b38: 0x2454b700  addiu       $s4, $v0, -0x4900
    ctx->pc = 0x144b38u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948608));
    // 0x144b3c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x144b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x144b40: 0x24559240  addiu       $s5, $v0, -0x6DC0
    ctx->pc = 0x144b40u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939200));
    // 0x144b44: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x144b44u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x144b48: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x144b48u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x144b4c: 0xc06246c  jal         func_1891B0
    ctx->pc = 0x144B4Cu;
    SET_GPR_U32(ctx, 31, 0x144B54u);
    ctx->pc = 0x1891B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1891B0u, 0x144B4Cu, 0x144B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144B54u;
label_144b54:
    // 0x144b54: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x144b54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x144b58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x144b58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x144b5c: 0x0  nop
    ctx->pc = 0x144b5cu;
    // NOP
    // 0x144b60: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x144b60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
    // 0x144b64: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x144b64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x144b68: 0x3c02439a  lui         $v0, 0x439A
    ctx->pc = 0x144b68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17306 << 16));
    // 0x144b6c: 0x34422aab  ori         $v0, $v0, 0x2AAB
    ctx->pc = 0x144b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10923);
    // 0x144b70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x144b70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x144b74: 0x0  nop
    ctx->pc = 0x144b74u;
    // NOP
    // 0x144b78: 0xe60000d8  swc1        $f0, 0xD8($s0)
    ctx->pc = 0x144b78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 216), bits); }
    // 0x144b7c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x144b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x144b80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x144b80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x144b84: 0x0  nop
    ctx->pc = 0x144b84u;
    // NOP
    // 0x144b88: 0xe60000e4  swc1        $f0, 0xE4($s0)
    ctx->pc = 0x144b88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
    // 0x144b8c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x144b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x144b90: 0x2442dce0  addiu       $v0, $v0, -0x2320
    ctx->pc = 0x144b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x144b94: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x144b94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x144b98: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x144b98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x144b9c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x144b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x144ba0: 0x244200d0  addiu       $v0, $v0, 0xD0
    ctx->pc = 0x144ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x144ba4: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x144ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x144ba8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x144ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x144bac: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x144bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x144bb0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x144bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x144bb4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x144bb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x144bb8: 0x0  nop
    ctx->pc = 0x144bb8u;
    // NOP
    // 0x144bbc: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x144bbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x144bc0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x144bc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x144bc4: 0x0  nop
    ctx->pc = 0x144bc4u;
    // NOP
    // 0x144bc8: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x144bc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x144bcc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x144bccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x144bd0: 0x0  nop
    ctx->pc = 0x144bd0u;
    // NOP
    // 0x144bd4: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x144bd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x144bd8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x144bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x144bdc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x144bdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x144be0: 0x0  nop
    ctx->pc = 0x144be0u;
    // NOP
    // 0x144be4: 0xe600003c  swc1        $f0, 0x3C($s0)
    ctx->pc = 0x144be4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x144be8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x144be8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x144bec: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x144becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x144bf0: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x144bf0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x144bf4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x144bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x144bf8: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x144bf8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x144bfc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x144bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x144c00: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x144c00u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x144c04: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x144c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x144c08: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x144c08u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x144c0c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x144c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x144c10: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x144c10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x144c14: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x144c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x144c18: 0xa04010a8  sb          $zero, 0x10A8($v0)
    ctx->pc = 0x144c18u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x144c1c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x144c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x144c20: 0xa4401574  sh          $zero, 0x1574($v0)
    ctx->pc = 0x144c20u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 5492), (uint16_t)GPR_U32(ctx, 0));
    // 0x144c24: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x144c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x144c28: 0xac4013e8  sw          $zero, 0x13E8($v0)
    ctx->pc = 0x144c28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5096), GPR_U32(ctx, 0));
    // 0x144c2c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x144c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x144c30: 0xac4013f0  sw          $zero, 0x13F0($v0)
    ctx->pc = 0x144c30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5104), GPR_U32(ctx, 0));
    // 0x144c34: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x144c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x144c38: 0xac4013f4  sw          $zero, 0x13F4($v0)
    ctx->pc = 0x144c38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5108), GPR_U32(ctx, 0));
    // 0x144c3c: 0x3c02c248  lui         $v0, 0xC248
    ctx->pc = 0x144c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49736 << 16));
    // 0x144c40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x144c40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x144c44: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x144c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x144c48: 0xe44013bc  swc1        $f0, 0x13BC($v0)
    ctx->pc = 0x144c48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 5052), bits); }
    // 0x144c4c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x144c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x144c50: 0xa4401416  sh          $zero, 0x1416($v0)
    ctx->pc = 0x144c50u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 5142), (uint16_t)GPR_U32(ctx, 0));
    // 0x144c54: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x144c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x144c58: 0xa4401418  sh          $zero, 0x1418($v0)
    ctx->pc = 0x144c58u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 5144), (uint16_t)GPR_U32(ctx, 0));
    // 0x144c5c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x144c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x144c60: 0xac4013b0  sw          $zero, 0x13B0($v0)
    ctx->pc = 0x144c60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5040), GPR_U32(ctx, 0));
    // 0x144c64: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x144c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x144c68: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x144c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x144c6c: 0xa443122c  sh          $v1, 0x122C($v0)
    ctx->pc = 0x144c6cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4652), (uint16_t)GPR_U32(ctx, 3));
    // 0x144c70: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x144c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x144c74: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x144c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x144c78: 0xa443122e  sh          $v1, 0x122E($v0)
    ctx->pc = 0x144c78u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4654), (uint16_t)GPR_U32(ctx, 3));
    // 0x144c7c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x144c7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x144c80: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x144c80u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x144c84: 0x2402ffef  addiu       $v0, $zero, -0x11
    ctx->pc = 0x144c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x144c88: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x144c88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x144c8c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x144c8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x144c90: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x144c90u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x144c94: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x144c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x144c98: 0xac4013e8  sw          $zero, 0x13E8($v0)
    ctx->pc = 0x144c98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5096), GPR_U32(ctx, 0));
    // 0x144c9c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x144c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x144ca0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x144ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x144ca4: 0xa0430012  sb          $v1, 0x12($v0)
    ctx->pc = 0x144ca4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 18), (uint8_t)GPR_U32(ctx, 3));
    // 0x144ca8: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x144ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x144cac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x144cacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x144cb0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x144cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x144cb4: 0xe44011e0  swc1        $f0, 0x11E0($v0)
    ctx->pc = 0x144cb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4576), bits); }
    // 0x144cb8: 0x3c024467  lui         $v0, 0x4467
    ctx->pc = 0x144cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17511 << 16));
    // 0x144cbc: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x144cbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x144cc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x144cc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x144cc4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x144cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x144cc8: 0xe44011e4  swc1        $f0, 0x11E4($v0)
    ctx->pc = 0x144cc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4580), bits); }
    // 0x144ccc: 0x3c024467  lui         $v0, 0x4467
    ctx->pc = 0x144cccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17511 << 16));
    // 0x144cd0: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x144cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x144cd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x144cd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x144cd8: 0x0  nop
    ctx->pc = 0x144cd8u;
    // NOP
    // 0x144cdc: 0xe64011e4  swc1        $f0, 0x11E4($s2)
    ctx->pc = 0x144cdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4580), bits); }
    // 0x144ce0: 0x3c024467  lui         $v0, 0x4467
    ctx->pc = 0x144ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17511 << 16));
    // 0x144ce4: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x144ce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x144ce8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x144ce8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x144cec: 0x0  nop
    ctx->pc = 0x144cecu;
    // NOP
    // 0x144cf0: 0xe6a011e4  swc1        $f0, 0x11E4($s5)
    ctx->pc = 0x144cf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4580), bits); }
    // 0x144cf4: 0x3c024467  lui         $v0, 0x4467
    ctx->pc = 0x144cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17511 << 16));
    // 0x144cf8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x144cf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x144cfc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x144cfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x144d00: 0x0  nop
    ctx->pc = 0x144d00u;
    // NOP
    // 0x144d04: 0xe66011e4  swc1        $f0, 0x11E4($s3)
    ctx->pc = 0x144d04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4580), bits); }
    // 0x144d08: 0x3c024467  lui         $v0, 0x4467
    ctx->pc = 0x144d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17511 << 16));
    // 0x144d0c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x144d0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x144d10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x144d10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x144d14: 0x0  nop
    ctx->pc = 0x144d14u;
    // NOP
    // 0x144d18: 0xe68011e4  swc1        $f0, 0x11E4($s4)
    ctx->pc = 0x144d18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4580), bits); }
    // 0x144d1c: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x144d1cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x144d20: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x144d20u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x144d24: 0xc05d124  jal         func_174490
    ctx->pc = 0x144D24u;
    SET_GPR_U32(ctx, 31, 0x144D2Cu);
    ctx->pc = 0x174490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174490u, 0x144D24u, 0x144D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144D2Cu;
label_144d2c:
    // 0x144d2c: 0xc0511b4  jal         func_1446D0
    ctx->pc = 0x144D2Cu;
    SET_GPR_U32(ctx, 31, 0x144D34u);
    ctx->pc = 0x1446D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1446D0u, 0x144D2Cu, 0x144D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144D34u;
label_144d34:
    // 0x144d34: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x144d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x144d38: 0xc0511ec  jal         func_1447B0
    ctx->pc = 0x144D38u;
    SET_GPR_U32(ctx, 31, 0x144D40u);
    ctx->pc = 0x1447B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1447B0u, 0x144D38u, 0x144D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144D40u;
label_144d40:
    // 0x144d40: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x144d40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x144d44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x144d44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x144d48: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x144d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x144d4c: 0xe44015ac  swc1        $f0, 0x15AC($v0)
    ctx->pc = 0x144d4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 5548), bits); }
    // 0x144d50: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x144d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x144d54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x144d54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x144d58: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x144d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x144d5c: 0xe440158c  swc1        $f0, 0x158C($v0)
    ctx->pc = 0x144d5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 5516), bits); }
    // 0x144d60: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x144d60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x144d64: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x144d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x144d68: 0xe4401598  swc1        $f0, 0x1598($v0)
    ctx->pc = 0x144d68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 5528), bits); }
    // 0x144d6c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x144d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x144d70: 0xe4401594  swc1        $f0, 0x1594($v0)
    ctx->pc = 0x144d70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 5524), bits); }
    // 0x144d74: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x144d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x144d78: 0xe4401590  swc1        $f0, 0x1590($v0)
    ctx->pc = 0x144d78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 5520), bits); }
    // 0x144d7c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x144d7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x144d80: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x144d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x144d84: 0xe44015a8  swc1        $f0, 0x15A8($v0)
    ctx->pc = 0x144d84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 5544), bits); }
    // 0x144d88: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x144d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x144d8c: 0xe44015a4  swc1        $f0, 0x15A4($v0)
    ctx->pc = 0x144d8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 5540), bits); }
    // 0x144d90: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x144d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x144d94: 0xe44015a0  swc1        $f0, 0x15A0($v0)
    ctx->pc = 0x144d94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 5536), bits); }
    // 0x144d98: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x144d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x144d9c: 0x24441580  addiu       $a0, $v0, 0x1580
    ctx->pc = 0x144d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5504));
    // 0x144da0: 0xc05da88  jal         func_176A20
    ctx->pc = 0x144DA0u;
    SET_GPR_U32(ctx, 31, 0x144DA8u);
    ctx->pc = 0x176A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176A20u, 0x144DA0u, 0x144DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144DA8u;
label_144da8:
    // 0x144da8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x144da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x144dac: 0xac6215b0  sw          $v0, 0x15B0($v1)
    ctx->pc = 0x144dacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5552), GPR_U32(ctx, 2));
    // 0x144db0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x144db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x144db4: 0x24441580  addiu       $a0, $v0, 0x1580
    ctx->pc = 0x144db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5504));
    // 0x144db8: 0xc05da88  jal         func_176A20
    ctx->pc = 0x144DB8u;
    SET_GPR_U32(ctx, 31, 0x144DC0u);
    ctx->pc = 0x176A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176A20u, 0x144DB8u, 0x144DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144DC0u;
label_144dc0:
    // 0x144dc0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x144dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x144dc4: 0xac6215b4  sw          $v0, 0x15B4($v1)
    ctx->pc = 0x144dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5556), GPR_U32(ctx, 2));
    // 0x144dc8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x144dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x144dcc: 0xa040157c  sb          $zero, 0x157C($v0)
    ctx->pc = 0x144dccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5500), (uint8_t)GPR_U32(ctx, 0));
    // 0x144dd0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x144dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x144dd4: 0xa040157d  sb          $zero, 0x157D($v0)
    ctx->pc = 0x144dd4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5501), (uint8_t)GPR_U32(ctx, 0));
    // 0x144dd8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x144dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x144ddc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x144ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x144de0: 0x8c4315b0  lw          $v1, 0x15B0($v0)
    ctx->pc = 0x144de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5552)));
    // 0x144de4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x144de4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x144de8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x144de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x144dec: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x144decu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x144df0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x144df0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x144df4: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x144df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x144df8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x144df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x144dfc: 0xac44007c  sw          $a0, 0x7C($v0)
    ctx->pc = 0x144dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 124), GPR_U32(ctx, 4));
    // 0x144e00: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x144e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x144e04: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x144e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x144e08: 0x8c4315b4  lw          $v1, 0x15B4($v0)
    ctx->pc = 0x144e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5556)));
    // 0x144e0c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x144e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x144e10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x144e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x144e14: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x144e14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x144e18: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x144e18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x144e1c: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x144e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x144e20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x144e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x144e24: 0xac44007c  sw          $a0, 0x7C($v0)
    ctx->pc = 0x144e24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 124), GPR_U32(ctx, 4));
    // 0x144e28: 0x3c024cbe  lui         $v0, 0x4CBE
    ctx->pc = 0x144e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19646 << 16));
    // 0x144e2c: 0x3442bc20  ori         $v0, $v0, 0xBC20
    ctx->pc = 0x144e2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48160);
    // 0x144e30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x144e30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x144e34: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x144e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x144e38: 0xe4401230  swc1        $f0, 0x1230($v0)
    ctx->pc = 0x144e38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4656), bits); }
    // 0x144e3c: 0x3c024cbe  lui         $v0, 0x4CBE
    ctx->pc = 0x144e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19646 << 16));
    // 0x144e40: 0x3442bc20  ori         $v0, $v0, 0xBC20
    ctx->pc = 0x144e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48160);
    // 0x144e44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x144e44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x144e48: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x144e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x144e4c: 0xe4401234  swc1        $f0, 0x1234($v0)
    ctx->pc = 0x144e4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4660), bits); }
    // 0x144e50: 0x3c024cbe  lui         $v0, 0x4CBE
    ctx->pc = 0x144e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19646 << 16));
    // 0x144e54: 0x3442bc20  ori         $v0, $v0, 0xBC20
    ctx->pc = 0x144e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48160);
    // 0x144e58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x144e58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x144e5c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x144e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x144e60: 0xe4401238  swc1        $f0, 0x1238($v0)
    ctx->pc = 0x144e60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4664), bits); }
    // 0x144e64: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x144e64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x144e68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x144e68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x144e6c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x144e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x144e70: 0xe440123c  swc1        $f0, 0x123C($v0)
    ctx->pc = 0x144e70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4668), bits); }
    // 0x144e74: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x144e74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x144e78: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x144e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x144e7c: 0xe44015e0  swc1        $f0, 0x15E0($v0)
    ctx->pc = 0x144e7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 5600), bits); }
    // 0x144e80: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x144e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x144e84: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x144e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x144e88: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x144e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x144e8c: 0xc0d7c6c  jal         func_35F1B0
    ctx->pc = 0x144E8Cu;
    SET_GPR_U32(ctx, 31, 0x144E94u);
    ctx->pc = 0x35F1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35F1B0u, 0x144E8Cu, 0x144E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144E94u;
label_144e94:
    // 0x144e94: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x144e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x144e98: 0xa44015ec  sh          $zero, 0x15EC($v0)
    ctx->pc = 0x144e98u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 5612), (uint16_t)GPR_U32(ctx, 0));
    // 0x144e9c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x144e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x144ea0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x144ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x144ea4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x144ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x144ea8: 0x8c841340  lw          $a0, 0x1340($a0)
    ctx->pc = 0x144ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4928)));
    // 0x144eac: 0x8c651330  lw          $a1, 0x1330($v1)
    ctx->pc = 0x144eacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4912)));
    // 0x144eb0: 0x8c461338  lw          $a2, 0x1338($v0)
    ctx->pc = 0x144eb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4920)));
    // 0x144eb4: 0xc050f5c  jal         func_143D70
    ctx->pc = 0x144EB4u;
    SET_GPR_U32(ctx, 31, 0x144EBCu);
    ctx->pc = 0x143D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143D70u, 0x144EB4u, 0x144EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144EBCu;
label_144ebc:
    // 0x144ebc: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x144ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x144ec0: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x144ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x144ec4: 0xa0600090  sb          $zero, 0x90($v1)
    ctx->pc = 0x144ec4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 144), (uint8_t)GPR_U32(ctx, 0));
    // 0x144ec8: 0x7bbf0060  lq          $ra, 0x60($sp)
    ctx->pc = 0x144ec8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x144ecc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x144eccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x144ed0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x144ed0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x144ed4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x144ed4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x144ed8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x144ed8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x144edc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x144edcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x144ee0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x144ee0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x144ee4: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x144ee4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x144ee8: 0x3e00008  jr          $ra
    ctx->pc = 0x144EE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144EE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x144EF0u;
}
