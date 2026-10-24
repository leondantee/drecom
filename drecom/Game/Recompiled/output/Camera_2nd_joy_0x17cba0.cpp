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

// Function: Camera_2nd_joy
// Address: 0x17cba0 - 0x17d870
void Camera_2nd_joy_0x17cba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Camera_2nd_joy_0x17cba0");
#endif

    switch (ctx->pc) {
        case 0x17cd14u: goto label_17cd14;
        case 0x17ce20u: goto label_17ce20;
        case 0x17ce50u: goto label_17ce50;
        case 0x17cebcu: goto label_17cebc;
        case 0x17cf2cu: goto label_17cf2c;
        case 0x17cf9cu: goto label_17cf9c;
        case 0x17d00cu: goto label_17d00c;
        case 0x17d07cu: goto label_17d07c;
        case 0x17d0dcu: goto label_17d0dc;
        case 0x17d110u: goto label_17d110;
        case 0x17d180u: goto label_17d180;
        case 0x17d1f0u: goto label_17d1f0;
        case 0x17d218u: goto label_17d218;
        case 0x17d288u: goto label_17d288;
        case 0x17d2f8u: goto label_17d2f8;
        case 0x17d368u: goto label_17d368;
        case 0x17d3d8u: goto label_17d3d8;
        case 0x17d400u: goto label_17d400;
        case 0x17d434u: goto label_17d434;
        case 0x17d464u: goto label_17d464;
        case 0x17d494u: goto label_17d494;
        case 0x17d4c8u: goto label_17d4c8;
        case 0x17d4f8u: goto label_17d4f8;
        case 0x17d52cu: goto label_17d52c;
        case 0x17d554u: goto label_17d554;
        case 0x17d5c4u: goto label_17d5c4;
        case 0x17d634u: goto label_17d634;
        case 0x17d660u: goto label_17d660;
        case 0x17d6d4u: goto label_17d6d4;
        case 0x17d708u: goto label_17d708;
        case 0x17d720u: goto label_17d720;
        case 0x17d748u: goto label_17d748;
        case 0x17d774u: goto label_17d774;
        case 0x17d780u: goto label_17d780;
        case 0x17d7a8u: goto label_17d7a8;
        case 0x17d7b4u: goto label_17d7b4;
        case 0x17d7dcu: goto label_17d7dc;
        case 0x17d808u: goto label_17d808;
        case 0x17d830u: goto label_17d830;
        case 0x17d854u: goto label_17d854;
        default: break;
    }

    ctx->pc = 0x17cba0u;

    // 0x17cba0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x17cba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x17cba4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x17cba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x17cba8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17cba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17cbac: 0xafa400d8  sw          $a0, 0xD8($sp)
    ctx->pc = 0x17cbacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 4));
    // 0x17cbb0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x17cbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x17cbb4: 0x2442ef20  addiu       $v0, $v0, -0x10E0
    ctx->pc = 0x17cbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962976));
    // 0x17cbb8: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x17cbb8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x17cbbc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17cbbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17cbc0: 0x0  nop
    ctx->pc = 0x17cbc0u;
    // NOP
    // 0x17cbc4: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x17cbc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x17cbc8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17cbc8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17cbcc: 0x0  nop
    ctx->pc = 0x17cbccu;
    // NOP
    // 0x17cbd0: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x17cbd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x17cbd4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17cbd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17cbd8: 0x0  nop
    ctx->pc = 0x17cbd8u;
    // NOP
    // 0x17cbdc: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x17cbdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x17cbe0: 0x9382809c  lbu         $v0, -0x7F64($gp)
    ctx->pc = 0x17cbe0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934684)));
    // 0x17cbe4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x17cbe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17cbe8: 0x1440004a  bnez        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x17CBE8u;
    {
        const bool branch_taken_0x17cbe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17cbe8) {
            ctx->pc = 0x17CD14u;
            goto label_17cd14;
        }
    }
    ctx->pc = 0x17CBF0u;
    // 0x17cbf0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17cbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17cbf4: 0xa383809c  sb          $v1, -0x7F64($gp)
    ctx->pc = 0x17cbf4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294934684), (uint8_t)GPR_U32(ctx, 3));
    // 0x17cbf8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17cbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17cbfc: 0xa38280a0  sb          $v0, -0x7F60($gp)
    ctx->pc = 0x17cbfcu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294934688), (uint8_t)GPR_U32(ctx, 2));
    // 0x17cc00: 0xa38080a4  sb          $zero, -0x7F5C($gp)
    ctx->pc = 0x17cc00u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294934692), (uint8_t)GPR_U32(ctx, 0));
    // 0x17cc04: 0xa38080a8  sb          $zero, -0x7F58($gp)
    ctx->pc = 0x17cc04u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294934696), (uint8_t)GPR_U32(ctx, 0));
    // 0x17cc08: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x17cc08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x17cc0c: 0x14a00023  bnez        $a1, . + 4 + (0x23 << 2)
    ctx->pc = 0x17CC0Cu;
    {
        const bool branch_taken_0x17cc0c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x17cc0c) {
            ctx->pc = 0x17CC9Cu;
            goto label_17cc9c;
        }
    }
    ctx->pc = 0x17CC14u;
    // 0x17cc14: 0x3c02459c  lui         $v0, 0x459C
    ctx->pc = 0x17cc14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17820 << 16));
    // 0x17cc18: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x17cc18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x17cc1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17cc1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17cc20: 0x0  nop
    ctx->pc = 0x17cc20u;
    // NOP
    // 0x17cc24: 0xe6000190  swc1        $f0, 0x190($s0)
    ctx->pc = 0x17cc24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 400), bits); }
    // 0x17cc28: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17cc28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17cc2c: 0x0  nop
    ctx->pc = 0x17cc2cu;
    // NOP
    // 0x17cc30: 0xe6000194  swc1        $f0, 0x194($s0)
    ctx->pc = 0x17cc30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 404), bits); }
    // 0x17cc34: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17cc34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17cc38: 0x0  nop
    ctx->pc = 0x17cc38u;
    // NOP
    // 0x17cc3c: 0xe6000198  swc1        $f0, 0x198($s0)
    ctx->pc = 0x17cc3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 408), bits); }
    // 0x17cc40: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17cc40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17cc44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17cc44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17cc48: 0x0  nop
    ctx->pc = 0x17cc48u;
    // NOP
    // 0x17cc4c: 0xe600019c  swc1        $f0, 0x19C($s0)
    ctx->pc = 0x17cc4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 412), bits); }
    // 0x17cc50: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17cc50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17cc54: 0x0  nop
    ctx->pc = 0x17cc54u;
    // NOP
    // 0x17cc58: 0xe60001a0  swc1        $f0, 0x1A0($s0)
    ctx->pc = 0x17cc58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 416), bits); }
    // 0x17cc5c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17cc5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17cc60: 0x0  nop
    ctx->pc = 0x17cc60u;
    // NOP
    // 0x17cc64: 0xe60001a4  swc1        $f0, 0x1A4($s0)
    ctx->pc = 0x17cc64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 420), bits); }
    // 0x17cc68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17cc68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17cc6c: 0x0  nop
    ctx->pc = 0x17cc6cu;
    // NOP
    // 0x17cc70: 0xe60001a8  swc1        $f0, 0x1A8($s0)
    ctx->pc = 0x17cc70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 424), bits); }
    // 0x17cc74: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17cc74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17cc78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17cc78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17cc7c: 0x0  nop
    ctx->pc = 0x17cc7cu;
    // NOP
    // 0x17cc80: 0xe60001ac  swc1        $f0, 0x1AC($s0)
    ctx->pc = 0x17cc80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 428), bits); }
    // 0x17cc84: 0x3c02425c  lui         $v0, 0x425C
    ctx->pc = 0x17cc84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16988 << 16));
    // 0x17cc88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17cc88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17cc8c: 0x0  nop
    ctx->pc = 0x17cc8cu;
    // NOP
    // 0x17cc90: 0xe60001b0  swc1        $f0, 0x1B0($s0)
    ctx->pc = 0x17cc90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 432), bits); }
    // 0x17cc94: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x17CC94u;
    {
        const bool branch_taken_0x17cc94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17cc94) {
            ctx->pc = 0x17CD08u;
            goto label_17cd08;
        }
    }
    ctx->pc = 0x17CC9Cu;
label_17cc9c:
    // 0x17cc9c: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x17cc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x17cca0: 0xc4600190  lwc1        $f0, 0x190($v1)
    ctx->pc = 0x17cca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17cca4: 0xe6000190  swc1        $f0, 0x190($s0)
    ctx->pc = 0x17cca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 400), bits); }
    // 0x17cca8: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x17cca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x17ccac: 0xc4400194  lwc1        $f0, 0x194($v0)
    ctx->pc = 0x17ccacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17ccb0: 0xe6000194  swc1        $f0, 0x194($s0)
    ctx->pc = 0x17ccb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 404), bits); }
    // 0x17ccb4: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x17ccb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x17ccb8: 0xc4a00198  lwc1        $f0, 0x198($a1)
    ctx->pc = 0x17ccb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17ccbc: 0xe6000198  swc1        $f0, 0x198($s0)
    ctx->pc = 0x17ccbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 408), bits); }
    // 0x17ccc0: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x17ccc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x17ccc4: 0xc440019c  lwc1        $f0, 0x19C($v0)
    ctx->pc = 0x17ccc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17ccc8: 0xe600019c  swc1        $f0, 0x19C($s0)
    ctx->pc = 0x17ccc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 412), bits); }
    // 0x17cccc: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x17ccccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x17ccd0: 0xc44001a0  lwc1        $f0, 0x1A0($v0)
    ctx->pc = 0x17ccd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17ccd4: 0xe60001a0  swc1        $f0, 0x1A0($s0)
    ctx->pc = 0x17ccd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 416), bits); }
    // 0x17ccd8: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x17ccd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x17ccdc: 0xc46001a4  lwc1        $f0, 0x1A4($v1)
    ctx->pc = 0x17ccdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17cce0: 0xe60001a4  swc1        $f0, 0x1A4($s0)
    ctx->pc = 0x17cce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 420), bits); }
    // 0x17cce4: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x17cce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x17cce8: 0xc44001a8  lwc1        $f0, 0x1A8($v0)
    ctx->pc = 0x17cce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17ccec: 0xe60001a8  swc1        $f0, 0x1A8($s0)
    ctx->pc = 0x17ccecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 424), bits); }
    // 0x17ccf0: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x17ccf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x17ccf4: 0xc48001ac  lwc1        $f0, 0x1AC($a0)
    ctx->pc = 0x17ccf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17ccf8: 0xe60001ac  swc1        $f0, 0x1AC($s0)
    ctx->pc = 0x17ccf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 428), bits); }
    // 0x17ccfc: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x17ccfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x17cd00: 0xc44001b0  lwc1        $f0, 0x1B0($v0)
    ctx->pc = 0x17cd00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17cd04: 0xe60001b0  swc1        $f0, 0x1B0($s0)
    ctx->pc = 0x17cd04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 432), bits); }
label_17cd08:
    // 0x17cd08: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x17cd08u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x17cd0c: 0xc056518  jal         func_159460
    ctx->pc = 0x17CD0Cu;
    SET_GPR_U32(ctx, 31, 0x17CD14u);
    ctx->pc = 0x159460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159460u, 0x17CD0Cu, 0x17CD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CD14u;
label_17cd14:
    // 0x17cd14: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17cd14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17cd18: 0x942200cc  lhu         $v0, 0xCC($at)
    ctx->pc = 0x17cd18u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x5D00CCu));
    // 0x17cd1c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x17cd1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x17cd20: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x17cd20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x17cd24: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x17CD24u;
    {
        const bool branch_taken_0x17cd24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17cd24) {
            ctx->pc = 0x17CD54u;
            goto label_17cd54;
        }
    }
    ctx->pc = 0x17CD2Cu;
    // 0x17cd2c: 0x938380a0  lbu         $v1, -0x7F60($gp)
    ctx->pc = 0x17cd2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934688)));
    // 0x17cd30: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x17cd30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x17cd34: 0xa38280a0  sb          $v0, -0x7F60($gp)
    ctx->pc = 0x17cd34u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294934688), (uint8_t)GPR_U32(ctx, 2));
    // 0x17cd38: 0x938280a0  lbu         $v0, -0x7F60($gp)
    ctx->pc = 0x17cd38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934688)));
    // 0x17cd3c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x17cd3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17cd40: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x17cd40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17cd44: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17CD44u;
    {
        const bool branch_taken_0x17cd44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x17cd44) {
            ctx->pc = 0x17CD54u;
            goto label_17cd54;
        }
    }
    ctx->pc = 0x17CD4Cu;
    // 0x17cd4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17cd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17cd50: 0xa38280a0  sb          $v0, -0x7F60($gp)
    ctx->pc = 0x17cd50u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294934688), (uint8_t)GPR_U32(ctx, 2));
label_17cd54:
    // 0x17cd54: 0x938280a0  lbu         $v0, -0x7F60($gp)
    ctx->pc = 0x17cd54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934688)));
    // 0x17cd58: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x17cd58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17cd5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17cd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17cd60: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x17CD60u;
    {
        const bool branch_taken_0x17cd60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x17cd60) {
            ctx->pc = 0x17CD80u;
            goto label_17cd80;
        }
    }
    ctx->pc = 0x17CD68u;
    // 0x17cd68: 0x3c02420c  lui         $v0, 0x420C
    ctx->pc = 0x17cd68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16908 << 16));
    // 0x17cd6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17cd6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17cd70: 0x0  nop
    ctx->pc = 0x17cd70u;
    // NOP
    // 0x17cd74: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x17cd74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x17cd78: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x17CD78u;
    {
        const bool branch_taken_0x17cd78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17cd78) {
            ctx->pc = 0x17CDBCu;
            goto label_17cdbc;
        }
    }
    ctx->pc = 0x17CD80u;
label_17cd80:
    // 0x17cd80: 0x938380a0  lbu         $v1, -0x7F60($gp)
    ctx->pc = 0x17cd80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934688)));
    // 0x17cd84: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x17cd84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x17cd88: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x17cd88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17cd8c: 0x14440007  bne         $v0, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x17CD8Cu;
    {
        const bool branch_taken_0x17cd8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x17cd8c) {
            ctx->pc = 0x17CDACu;
            goto label_17cdac;
        }
    }
    ctx->pc = 0x17CD94u;
    // 0x17cd94: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x17cd94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x17cd98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17cd98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17cd9c: 0x0  nop
    ctx->pc = 0x17cd9cu;
    // NOP
    // 0x17cda0: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x17cda0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x17cda4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x17CDA4u;
    {
        const bool branch_taken_0x17cda4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17cda4) {
            ctx->pc = 0x17CDBCu;
            goto label_17cdbc;
        }
    }
    ctx->pc = 0x17CDACu;
label_17cdac:
    // 0x17cdac: 0x3c044348  lui         $a0, 0x4348
    ctx->pc = 0x17cdacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17224 << 16));
    // 0x17cdb0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x17cdb0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17cdb4: 0x0  nop
    ctx->pc = 0x17cdb4u;
    // NOP
    // 0x17cdb8: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x17cdb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_17cdbc:
    // 0x17cdbc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17cdbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17cdc0: 0x942500cc  lhu         $a1, 0xCC($at)
    ctx->pc = 0x17cdc0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)FAST_READ16(0x5D00CCu));
    // 0x17cdc4: 0x30a6ffff  andi        $a2, $a1, 0xFFFF
    ctx->pc = 0x17cdc4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x17cdc8: 0x30c20008  andi        $v0, $a2, 0x8
    ctx->pc = 0x17cdc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8);
    // 0x17cdcc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x17CDCCu;
    {
        const bool branch_taken_0x17cdcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17cdcc) {
            ctx->pc = 0x17CDF8u;
            goto label_17cdf8;
        }
    }
    ctx->pc = 0x17CDD4u;
    // 0x17cdd4: 0x938280a4  lbu         $v0, -0x7F5C($gp)
    ctx->pc = 0x17cdd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934692)));
    // 0x17cdd8: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x17cdd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17cddc: 0xa38580a4  sb          $a1, -0x7F5C($gp)
    ctx->pc = 0x17cddcu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294934692), (uint8_t)GPR_U32(ctx, 5));
    // 0x17cde0: 0x938280a4  lbu         $v0, -0x7F5C($gp)
    ctx->pc = 0x17cde0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934692)));
    // 0x17cde4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x17cde4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17cde8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x17cde8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x17cdec: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x17CDECu;
    {
        const bool branch_taken_0x17cdec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x17cdec) {
            ctx->pc = 0x17CDF8u;
            goto label_17cdf8;
        }
    }
    ctx->pc = 0x17CDF4u;
    // 0x17cdf4: 0xa38080a4  sb          $zero, -0x7F5C($gp)
    ctx->pc = 0x17cdf4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294934692), (uint8_t)GPR_U32(ctx, 0));
label_17cdf8:
    // 0x17cdf8: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x17cdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x17cdfc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x17cdfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x17ce00: 0x2404271a  addiu       $a0, $zero, 0x271A
    ctx->pc = 0x17ce00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10010));
    // 0x17ce04: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x17ce04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x17ce08: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x17ce08u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x17ce0c: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x17ce0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x17ce10: 0x24a6ec38  addiu       $a2, $a1, -0x13C8
    ctx->pc = 0x17ce10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962232));
    // 0x17ce14: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x17ce14u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x17ce18: 0xc059b14  jal         func_166C50
    ctx->pc = 0x17CE18u;
    SET_GPR_U32(ctx, 31, 0x17CE20u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x17CE18u, 0x17CE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CE20u;
label_17ce20:
    // 0x17ce20: 0x938280a0  lbu         $v0, -0x7F60($gp)
    ctx->pc = 0x17ce20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934688)));
    // 0x17ce24: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x17ce24u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17ce28: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x17ce28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x17ce2c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x17ce2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x17ce30: 0x2404361a  addiu       $a0, $zero, 0x361A
    ctx->pc = 0x17ce30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13850));
    // 0x17ce34: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x17ce34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x17ce38: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x17ce38u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x17ce3c: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x17ce3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x17ce40: 0x24a2ec40  addiu       $v0, $a1, -0x13C0
    ctx->pc = 0x17ce40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962240));
    // 0x17ce44: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x17ce44u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x17ce48: 0xc059b14  jal         func_166C50
    ctx->pc = 0x17CE48u;
    SET_GPR_U32(ctx, 31, 0x17CE50u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x17CE48u, 0x17CE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CE50u;
label_17ce50:
    // 0x17ce50: 0x938280a4  lbu         $v0, -0x7F5C($gp)
    ctx->pc = 0x17ce50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934692)));
    // 0x17ce54: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x17ce54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17ce58: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x17ce58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17ce5c: 0x10a401f7  beq         $a1, $a0, . + 4 + (0x1F7 << 2)
    ctx->pc = 0x17CE5Cu;
    {
        const bool branch_taken_0x17ce5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x17ce5c) {
            ctx->pc = 0x17D63Cu;
            goto label_17d63c;
        }
    }
    ctx->pc = 0x17CE64u;
    // 0x17ce64: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x17ce64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x17ce68: 0x10a301b2  beq         $a1, $v1, . + 4 + (0x1B2 << 2)
    ctx->pc = 0x17CE68u;
    {
        const bool branch_taken_0x17ce68 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x17ce68) {
            ctx->pc = 0x17D534u;
            goto label_17d534;
        }
    }
    ctx->pc = 0x17CE70u;
    // 0x17ce70: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x17ce70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17ce74: 0x10a3015a  beq         $a1, $v1, . + 4 + (0x15A << 2)
    ctx->pc = 0x17CE74u;
    {
        const bool branch_taken_0x17ce74 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x17ce74) {
            ctx->pc = 0x17D3E0u;
            goto label_17d3e0;
        }
    }
    ctx->pc = 0x17CE7Cu;
    // 0x17ce7c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x17ce7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17ce80: 0x10a400dd  beq         $a1, $a0, . + 4 + (0xDD << 2)
    ctx->pc = 0x17CE80u;
    {
        const bool branch_taken_0x17ce80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x17ce80) {
            ctx->pc = 0x17D1F8u;
            goto label_17d1f8;
        }
    }
    ctx->pc = 0x17CE88u;
    // 0x17ce88: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17CE88u;
    {
        const bool branch_taken_0x17ce88 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ce88) {
            ctx->pc = 0x17CE98u;
            goto label_17ce98;
        }
    }
    ctx->pc = 0x17CE90u;
    // 0x17ce90: 0x100001fc  b           . + 4 + (0x1FC << 2)
    ctx->pc = 0x17CE90u;
    {
        const bool branch_taken_0x17ce90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ce90) {
            ctx->pc = 0x17D684u;
            goto label_17d684;
        }
    }
    ctx->pc = 0x17CE98u;
label_17ce98:
    // 0x17ce98: 0x24030808  addiu       $v1, $zero, 0x808
    ctx->pc = 0x17ce98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x17ce9c: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x17ce9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x17cea0: 0x24022c1a  addiu       $v0, $zero, 0x2C1A
    ctx->pc = 0x17cea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11290));
    // 0x17cea4: 0x453025  or          $a2, $v0, $a1
    ctx->pc = 0x17cea4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x17cea8: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x17cea8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x17ceac: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x17ceacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x17ceb0: 0x2445ec50  addiu       $a1, $v0, -0x13B0
    ctx->pc = 0x17ceb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962256));
    // 0x17ceb4: 0xc059b14  jal         func_166C50
    ctx->pc = 0x17CEB4u;
    SET_GPR_U32(ctx, 31, 0x17CEBCu);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x17CEB4u, 0x17CEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CEBCu;
label_17cebc:
    // 0x17cebc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17cebcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17cec0: 0x942200c8  lhu         $v0, 0xC8($at)
    ctx->pc = 0x17cec0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x5D00C8u));
    // 0x17cec4: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x17cec4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x17cec8: 0x30821000  andi        $v0, $a0, 0x1000
    ctx->pc = 0x17cec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4096);
    // 0x17cecc: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x17CECCu;
    {
        const bool branch_taken_0x17cecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17cecc) {
            ctx->pc = 0x17CF2Cu;
            goto label_17cf2c;
        }
    }
    ctx->pc = 0x17CED4u;
    // 0x17ced4: 0x3c02bc8e  lui         $v0, 0xBC8E
    ctx->pc = 0x17ced4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48270 << 16));
    // 0x17ced8: 0x3445fa35  ori         $a1, $v0, 0xFA35
    ctx->pc = 0x17ced8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x17cedc: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x17cedcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17cee0: 0x938280a0  lbu         $v0, -0x7F60($gp)
    ctx->pc = 0x17cee0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934688)));
    // 0x17cee4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17CEE4u;
    {
        const bool branch_taken_0x17cee4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x17cee4) {
            ctx->pc = 0x17CF00u;
            goto label_17cf00;
        }
    }
    ctx->pc = 0x17CEECu;
    // 0x17ceec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17ceecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17cef0: 0x0  nop
    ctx->pc = 0x17cef0u;
    // NOP
    // 0x17cef4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17cef4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17cef8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17CEF8u;
    {
        const bool branch_taken_0x17cef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17cef8) {
            ctx->pc = 0x17CF1Cu;
            goto label_17cf1c;
        }
    }
    ctx->pc = 0x17CF00u;
label_17cf00:
    // 0x17cf00: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x17cf00u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x17cf04: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x17cf04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x17cf08: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x17cf08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x17cf0c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17cf0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17cf10: 0x0  nop
    ctx->pc = 0x17cf10u;
    // NOP
    // 0x17cf14: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17cf14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17cf18: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x17cf18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_17cf1c:
    // 0x17cf1c: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x17cf1cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17cf20: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x17cf20u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x17cf24: 0xc056680  jal         func_159A00
    ctx->pc = 0x17CF24u;
    SET_GPR_U32(ctx, 31, 0x17CF2Cu);
    ctx->pc = 0x159A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159A00u, 0x17CF24u, 0x17CF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CF2Cu;
label_17cf2c:
    // 0x17cf2c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17cf2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17cf30: 0x942400c8  lhu         $a0, 0xC8($at)
    ctx->pc = 0x17cf30u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x5D00C8u));
    // 0x17cf34: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x17cf34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x17cf38: 0x30454000  andi        $a1, $v0, 0x4000
    ctx->pc = 0x17cf38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x17cf3c: 0x10a00017  beqz        $a1, . + 4 + (0x17 << 2)
    ctx->pc = 0x17CF3Cu;
    {
        const bool branch_taken_0x17cf3c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x17cf3c) {
            ctx->pc = 0x17CF9Cu;
            goto label_17cf9c;
        }
    }
    ctx->pc = 0x17CF44u;
    // 0x17cf44: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x17cf44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x17cf48: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x17cf48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x17cf4c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17cf4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17cf50: 0x938480a0  lbu         $a0, -0x7F60($gp)
    ctx->pc = 0x17cf50u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934688)));
    // 0x17cf54: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17CF54u;
    {
        const bool branch_taken_0x17cf54 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x17cf54) {
            ctx->pc = 0x17CF70u;
            goto label_17cf70;
        }
    }
    ctx->pc = 0x17CF5Cu;
    // 0x17cf5c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x17cf5cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17cf60: 0x0  nop
    ctx->pc = 0x17cf60u;
    // NOP
    // 0x17cf64: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17cf64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17cf68: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17CF68u;
    {
        const bool branch_taken_0x17cf68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17cf68) {
            ctx->pc = 0x17CF8Cu;
            goto label_17cf8c;
        }
    }
    ctx->pc = 0x17CF70u;
label_17cf70:
    // 0x17cf70: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x17cf70u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x17cf74: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x17cf74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x17cf78: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x17cf78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x17cf7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17cf7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17cf80: 0x0  nop
    ctx->pc = 0x17cf80u;
    // NOP
    // 0x17cf84: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17cf84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17cf88: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x17cf88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_17cf8c:
    // 0x17cf8c: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x17cf8cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17cf90: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x17cf90u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x17cf94: 0xc056680  jal         func_159A00
    ctx->pc = 0x17CF94u;
    SET_GPR_U32(ctx, 31, 0x17CF9Cu);
    ctx->pc = 0x159A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159A00u, 0x17CF94u, 0x17CF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CF9Cu;
label_17cf9c:
    // 0x17cf9c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17cf9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17cfa0: 0x942200c8  lhu         $v0, 0xC8($at)
    ctx->pc = 0x17cfa0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x5D00C8u));
    // 0x17cfa4: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x17cfa4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x17cfa8: 0x30a22000  andi        $v0, $a1, 0x2000
    ctx->pc = 0x17cfa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8192);
    // 0x17cfac: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x17CFACu;
    {
        const bool branch_taken_0x17cfac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17cfac) {
            ctx->pc = 0x17D00Cu;
            goto label_17d00c;
        }
    }
    ctx->pc = 0x17CFB4u;
    // 0x17cfb4: 0x3c04bc8e  lui         $a0, 0xBC8E
    ctx->pc = 0x17cfb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48270 << 16));
    // 0x17cfb8: 0x3482fa35  ori         $v0, $a0, 0xFA35
    ctx->pc = 0x17cfb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64053);
    // 0x17cfbc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17cfbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17cfc0: 0x938380a0  lbu         $v1, -0x7F60($gp)
    ctx->pc = 0x17cfc0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934688)));
    // 0x17cfc4: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x17CFC4u;
    {
        const bool branch_taken_0x17cfc4 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x17cfc4) {
            ctx->pc = 0x17CFE0u;
            goto label_17cfe0;
        }
    }
    ctx->pc = 0x17CFCCu;
    // 0x17cfcc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17cfccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17cfd0: 0x0  nop
    ctx->pc = 0x17cfd0u;
    // NOP
    // 0x17cfd4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17cfd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17cfd8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17CFD8u;
    {
        const bool branch_taken_0x17cfd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17cfd8) {
            ctx->pc = 0x17CFFCu;
            goto label_17cffc;
        }
    }
    ctx->pc = 0x17CFE0u;
label_17cfe0:
    // 0x17cfe0: 0x31042  srl         $v0, $v1, 1
    ctx->pc = 0x17cfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x17cfe4: 0x30640001  andi        $a0, $v1, 0x1
    ctx->pc = 0x17cfe4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x17cfe8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x17cfe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x17cfec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17cfecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17cff0: 0x0  nop
    ctx->pc = 0x17cff0u;
    // NOP
    // 0x17cff4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17cff4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17cff8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x17cff8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_17cffc:
    // 0x17cffc: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x17cffcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17d000: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x17d000u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x17d004: 0xc0566cc  jal         func_159B30
    ctx->pc = 0x17D004u;
    SET_GPR_U32(ctx, 31, 0x17D00Cu);
    ctx->pc = 0x159B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159B30u, 0x17D004u, 0x17D00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D00Cu;
label_17d00c:
    // 0x17d00c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17d00cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17d010: 0x942500c8  lhu         $a1, 0xC8($at)
    ctx->pc = 0x17d010u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)FAST_READ16(0x5D00C8u));
    // 0x17d014: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x17d014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x17d018: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x17d018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x17d01c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x17D01Cu;
    {
        const bool branch_taken_0x17d01c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d01c) {
            ctx->pc = 0x17D07Cu;
            goto label_17d07c;
        }
    }
    ctx->pc = 0x17D024u;
    // 0x17d024: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x17d024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x17d028: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x17d028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x17d02c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17d02cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17d030: 0x938280a0  lbu         $v0, -0x7F60($gp)
    ctx->pc = 0x17d030u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934688)));
    // 0x17d034: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17D034u;
    {
        const bool branch_taken_0x17d034 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x17d034) {
            ctx->pc = 0x17D050u;
            goto label_17d050;
        }
    }
    ctx->pc = 0x17D03Cu;
    // 0x17d03c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17d03cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17d040: 0x0  nop
    ctx->pc = 0x17d040u;
    // NOP
    // 0x17d044: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17d044u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17d048: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17D048u;
    {
        const bool branch_taken_0x17d048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d048) {
            ctx->pc = 0x17D06Cu;
            goto label_17d06c;
        }
    }
    ctx->pc = 0x17D050u;
label_17d050:
    // 0x17d050: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x17d050u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x17d054: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x17d054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x17d058: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x17d058u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x17d05c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17d05cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17d060: 0x0  nop
    ctx->pc = 0x17d060u;
    // NOP
    // 0x17d064: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17d064u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17d068: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x17d068u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_17d06c:
    // 0x17d06c: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x17d06cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17d070: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x17d070u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x17d074: 0xc0566cc  jal         func_159B30
    ctx->pc = 0x17D074u;
    SET_GPR_U32(ctx, 31, 0x17D07Cu);
    ctx->pc = 0x159B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159B30u, 0x17D074u, 0x17D07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D07Cu;
label_17d07c:
    // 0x17d07c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17d07cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17d080: 0x942200c8  lhu         $v0, 0xC8($at)
    ctx->pc = 0x17d080u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x5D00C8u));
    // 0x17d084: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x17d084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x17d088: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x17d088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x17d08c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x17D08Cu;
    {
        const bool branch_taken_0x17d08c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d08c) {
            ctx->pc = 0x17D0DCu;
            goto label_17d0dc;
        }
    }
    ctx->pc = 0x17D094u;
    // 0x17d094: 0xc60101b8  lwc1        $f1, 0x1B8($s0)
    ctx->pc = 0x17d094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17d098: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x17d098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17d09c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x17d09cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x17d0a0: 0xe60001b8  swc1        $f0, 0x1B8($s0)
    ctx->pc = 0x17d0a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 440), bits); }
    // 0x17d0a4: 0xc60101b8  lwc1        $f1, 0x1B8($s0)
    ctx->pc = 0x17d0a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17d0a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17d0a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17d0ac: 0x0  nop
    ctx->pc = 0x17d0acu;
    // NOP
    // 0x17d0b0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x17d0b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17d0b4: 0x0  nop
    ctx->pc = 0x17d0b4u;
    // NOP
    // 0x17d0b8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x17D0B8u;
    {
        const bool branch_taken_0x17d0b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17d0b8) {
            ctx->pc = 0x17D0D0u;
            goto label_17d0d0;
        }
    }
    ctx->pc = 0x17D0C0u;
    // 0x17d0c0: 0xc60101b8  lwc1        $f1, 0x1B8($s0)
    ctx->pc = 0x17d0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17d0c4: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x17d0c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17d0c8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x17d0c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x17d0cc: 0xe60001b8  swc1        $f0, 0x1B8($s0)
    ctx->pc = 0x17d0ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 440), bits); }
label_17d0d0:
    // 0x17d0d0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x17d0d0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x17d0d4: 0xc0565a4  jal         func_159690
    ctx->pc = 0x17D0D4u;
    SET_GPR_U32(ctx, 31, 0x17D0DCu);
    ctx->pc = 0x159690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159690u, 0x17D0D4u, 0x17D0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D0DCu;
label_17d0dc:
    // 0x17d0dc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17d0dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17d0e0: 0x942200c8  lhu         $v0, 0xC8($at)
    ctx->pc = 0x17d0e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x5D00C8u));
    // 0x17d0e4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x17d0e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x17d0e8: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x17d0e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x17d0ec: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x17D0ECu;
    {
        const bool branch_taken_0x17d0ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d0ec) {
            ctx->pc = 0x17D110u;
            goto label_17d110;
        }
    }
    ctx->pc = 0x17D0F4u;
    // 0x17d0f4: 0xc60101b8  lwc1        $f1, 0x1B8($s0)
    ctx->pc = 0x17d0f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17d0f8: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x17d0f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17d0fc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x17d0fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x17d100: 0xe60001b8  swc1        $f0, 0x1B8($s0)
    ctx->pc = 0x17d100u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 440), bits); }
    // 0x17d104: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x17d104u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x17d108: 0xc0565a4  jal         func_159690
    ctx->pc = 0x17D108u;
    SET_GPR_U32(ctx, 31, 0x17D110u);
    ctx->pc = 0x159690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159690u, 0x17D108u, 0x17D110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D110u;
label_17d110:
    // 0x17d110: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17d110u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17d114: 0x942200c8  lhu         $v0, 0xC8($at)
    ctx->pc = 0x17d114u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x5D00C8u));
    // 0x17d118: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x17d118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x17d11c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x17d11cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x17d120: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x17D120u;
    {
        const bool branch_taken_0x17d120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d120) {
            ctx->pc = 0x17D180u;
            goto label_17d180;
        }
    }
    ctx->pc = 0x17D128u;
    // 0x17d128: 0x3c02bc8e  lui         $v0, 0xBC8E
    ctx->pc = 0x17d128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48270 << 16));
    // 0x17d12c: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x17d12cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x17d130: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17d130u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17d134: 0x938280a0  lbu         $v0, -0x7F60($gp)
    ctx->pc = 0x17d134u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934688)));
    // 0x17d138: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17D138u;
    {
        const bool branch_taken_0x17d138 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x17d138) {
            ctx->pc = 0x17D154u;
            goto label_17d154;
        }
    }
    ctx->pc = 0x17D140u;
    // 0x17d140: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17d140u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17d144: 0x0  nop
    ctx->pc = 0x17d144u;
    // NOP
    // 0x17d148: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17d148u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17d14c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17D14Cu;
    {
        const bool branch_taken_0x17d14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d14c) {
            ctx->pc = 0x17D170u;
            goto label_17d170;
        }
    }
    ctx->pc = 0x17D154u;
label_17d154:
    // 0x17d154: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x17d154u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x17d158: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x17d158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x17d15c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x17d15cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x17d160: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17d160u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17d164: 0x0  nop
    ctx->pc = 0x17d164u;
    // NOP
    // 0x17d168: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17d168u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17d16c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x17d16cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_17d170:
    // 0x17d170: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x17d170u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17d174: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x17d174u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x17d178: 0xc056718  jal         func_159C60
    ctx->pc = 0x17D178u;
    SET_GPR_U32(ctx, 31, 0x17D180u);
    ctx->pc = 0x159C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159C60u, 0x17D178u, 0x17D180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D180u;
label_17d180:
    // 0x17d180: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17d180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17d184: 0x942200c8  lhu         $v0, 0xC8($at)
    ctx->pc = 0x17d184u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x5D00C8u));
    // 0x17d188: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x17d188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x17d18c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x17d18cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x17d190: 0x1040013c  beqz        $v0, . + 4 + (0x13C << 2)
    ctx->pc = 0x17D190u;
    {
        const bool branch_taken_0x17d190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d190) {
            ctx->pc = 0x17D684u;
            goto label_17d684;
        }
    }
    ctx->pc = 0x17D198u;
    // 0x17d198: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x17d198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x17d19c: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x17d19cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x17d1a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17d1a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17d1a4: 0x938280a0  lbu         $v0, -0x7F60($gp)
    ctx->pc = 0x17d1a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934688)));
    // 0x17d1a8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17D1A8u;
    {
        const bool branch_taken_0x17d1a8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x17d1a8) {
            ctx->pc = 0x17D1C4u;
            goto label_17d1c4;
        }
    }
    ctx->pc = 0x17D1B0u;
    // 0x17d1b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17d1b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17d1b4: 0x0  nop
    ctx->pc = 0x17d1b4u;
    // NOP
    // 0x17d1b8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17d1b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17d1bc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17D1BCu;
    {
        const bool branch_taken_0x17d1bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d1bc) {
            ctx->pc = 0x17D1E0u;
            goto label_17d1e0;
        }
    }
    ctx->pc = 0x17D1C4u;
label_17d1c4:
    // 0x17d1c4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x17d1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x17d1c8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x17d1c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x17d1cc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x17d1ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x17d1d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17d1d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17d1d4: 0x0  nop
    ctx->pc = 0x17d1d4u;
    // NOP
    // 0x17d1d8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17d1d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17d1dc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x17d1dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_17d1e0:
    // 0x17d1e0: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x17d1e0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17d1e4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x17d1e4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x17d1e8: 0xc056718  jal         func_159C60
    ctx->pc = 0x17D1E8u;
    SET_GPR_U32(ctx, 31, 0x17D1F0u);
    ctx->pc = 0x159C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159C60u, 0x17D1E8u, 0x17D1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D1F0u;
label_17d1f0:
    // 0x17d1f0: 0x10000124  b           . + 4 + (0x124 << 2)
    ctx->pc = 0x17D1F0u;
    {
        const bool branch_taken_0x17d1f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d1f0) {
            ctx->pc = 0x17D684u;
            goto label_17d684;
        }
    }
    ctx->pc = 0x17D1F8u;
label_17d1f8:
    // 0x17d1f8: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x17d1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x17d1fc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x17d1fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x17d200: 0x24022c1a  addiu       $v0, $zero, 0x2C1A
    ctx->pc = 0x17d200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11290));
    // 0x17d204: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x17d204u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x17d208: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x17d208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x17d20c: 0x2445ec60  addiu       $a1, $v0, -0x13A0
    ctx->pc = 0x17d20cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962272));
    // 0x17d210: 0xc059b14  jal         func_166C50
    ctx->pc = 0x17D210u;
    SET_GPR_U32(ctx, 31, 0x17D218u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x17D210u, 0x17D218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D218u;
label_17d218:
    // 0x17d218: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17d218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17d21c: 0x942200c8  lhu         $v0, 0xC8($at)
    ctx->pc = 0x17d21cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x5D00C8u));
    // 0x17d220: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x17d220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x17d224: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x17d224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x17d228: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x17D228u;
    {
        const bool branch_taken_0x17d228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d228) {
            ctx->pc = 0x17D288u;
            goto label_17d288;
        }
    }
    ctx->pc = 0x17D230u;
    // 0x17d230: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x17d230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x17d234: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x17d234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x17d238: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17d238u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17d23c: 0x938280a0  lbu         $v0, -0x7F60($gp)
    ctx->pc = 0x17d23cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934688)));
    // 0x17d240: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17D240u;
    {
        const bool branch_taken_0x17d240 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x17d240) {
            ctx->pc = 0x17D25Cu;
            goto label_17d25c;
        }
    }
    ctx->pc = 0x17D248u;
    // 0x17d248: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17d248u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17d24c: 0x0  nop
    ctx->pc = 0x17d24cu;
    // NOP
    // 0x17d250: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17d250u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17d254: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17D254u;
    {
        const bool branch_taken_0x17d254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d254) {
            ctx->pc = 0x17D278u;
            goto label_17d278;
        }
    }
    ctx->pc = 0x17D25Cu;
label_17d25c:
    // 0x17d25c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x17d25cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x17d260: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x17d260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x17d264: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x17d264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x17d268: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17d268u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17d26c: 0x0  nop
    ctx->pc = 0x17d26cu;
    // NOP
    // 0x17d270: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17d270u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17d274: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x17d274u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_17d278:
    // 0x17d278: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x17d278u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17d27c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x17d27cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x17d280: 0xc056764  jal         func_159D90
    ctx->pc = 0x17D280u;
    SET_GPR_U32(ctx, 31, 0x17D288u);
    ctx->pc = 0x159D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159D90u, 0x17D280u, 0x17D288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D288u;
label_17d288:
    // 0x17d288: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17d288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17d28c: 0x942200c8  lhu         $v0, 0xC8($at)
    ctx->pc = 0x17d28cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x5D00C8u));
    // 0x17d290: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x17d290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x17d294: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x17d294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x17d298: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x17D298u;
    {
        const bool branch_taken_0x17d298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d298) {
            ctx->pc = 0x17D2F8u;
            goto label_17d2f8;
        }
    }
    ctx->pc = 0x17D2A0u;
    // 0x17d2a0: 0x3c02bc8e  lui         $v0, 0xBC8E
    ctx->pc = 0x17d2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48270 << 16));
    // 0x17d2a4: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x17d2a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x17d2a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17d2a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17d2ac: 0x938280a0  lbu         $v0, -0x7F60($gp)
    ctx->pc = 0x17d2acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934688)));
    // 0x17d2b0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17D2B0u;
    {
        const bool branch_taken_0x17d2b0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x17d2b0) {
            ctx->pc = 0x17D2CCu;
            goto label_17d2cc;
        }
    }
    ctx->pc = 0x17D2B8u;
    // 0x17d2b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17d2b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17d2bc: 0x0  nop
    ctx->pc = 0x17d2bcu;
    // NOP
    // 0x17d2c0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17d2c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17d2c4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17D2C4u;
    {
        const bool branch_taken_0x17d2c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d2c4) {
            ctx->pc = 0x17D2E8u;
            goto label_17d2e8;
        }
    }
    ctx->pc = 0x17D2CCu;
label_17d2cc:
    // 0x17d2cc: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x17d2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x17d2d0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x17d2d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x17d2d4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x17d2d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x17d2d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17d2d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17d2dc: 0x0  nop
    ctx->pc = 0x17d2dcu;
    // NOP
    // 0x17d2e0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17d2e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17d2e4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x17d2e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_17d2e8:
    // 0x17d2e8: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x17d2e8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17d2ec: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x17d2ecu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x17d2f0: 0xc056764  jal         func_159D90
    ctx->pc = 0x17D2F0u;
    SET_GPR_U32(ctx, 31, 0x17D2F8u);
    ctx->pc = 0x159D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159D90u, 0x17D2F0u, 0x17D2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D2F8u;
label_17d2f8:
    // 0x17d2f8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17d2f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17d2fc: 0x942200c8  lhu         $v0, 0xC8($at)
    ctx->pc = 0x17d2fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x5D00C8u));
    // 0x17d300: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x17d300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x17d304: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x17d304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x17d308: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x17D308u;
    {
        const bool branch_taken_0x17d308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d308) {
            ctx->pc = 0x17D368u;
            goto label_17d368;
        }
    }
    ctx->pc = 0x17D310u;
    // 0x17d310: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x17d310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x17d314: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x17d314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x17d318: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17d318u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17d31c: 0x938280a0  lbu         $v0, -0x7F60($gp)
    ctx->pc = 0x17d31cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934688)));
    // 0x17d320: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17D320u;
    {
        const bool branch_taken_0x17d320 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x17d320) {
            ctx->pc = 0x17D33Cu;
            goto label_17d33c;
        }
    }
    ctx->pc = 0x17D328u;
    // 0x17d328: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17d328u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17d32c: 0x0  nop
    ctx->pc = 0x17d32cu;
    // NOP
    // 0x17d330: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17d330u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17d334: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17D334u;
    {
        const bool branch_taken_0x17d334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d334) {
            ctx->pc = 0x17D358u;
            goto label_17d358;
        }
    }
    ctx->pc = 0x17D33Cu;
label_17d33c:
    // 0x17d33c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x17d33cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x17d340: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x17d340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x17d344: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x17d344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x17d348: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17d348u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17d34c: 0x0  nop
    ctx->pc = 0x17d34cu;
    // NOP
    // 0x17d350: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17d350u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17d354: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x17d354u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_17d358:
    // 0x17d358: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x17d358u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17d35c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x17d35cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x17d360: 0xc0567b0  jal         func_159EC0
    ctx->pc = 0x17D360u;
    SET_GPR_U32(ctx, 31, 0x17D368u);
    ctx->pc = 0x159EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159EC0u, 0x17D360u, 0x17D368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D368u;
label_17d368:
    // 0x17d368: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17d368u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17d36c: 0x942200c8  lhu         $v0, 0xC8($at)
    ctx->pc = 0x17d36cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x5D00C8u));
    // 0x17d370: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x17d370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x17d374: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x17d374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x17d378: 0x104000c2  beqz        $v0, . + 4 + (0xC2 << 2)
    ctx->pc = 0x17D378u;
    {
        const bool branch_taken_0x17d378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d378) {
            ctx->pc = 0x17D684u;
            goto label_17d684;
        }
    }
    ctx->pc = 0x17D380u;
    // 0x17d380: 0x3c02bc8e  lui         $v0, 0xBC8E
    ctx->pc = 0x17d380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48270 << 16));
    // 0x17d384: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x17d384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x17d388: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17d388u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17d38c: 0x938280a0  lbu         $v0, -0x7F60($gp)
    ctx->pc = 0x17d38cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934688)));
    // 0x17d390: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17D390u;
    {
        const bool branch_taken_0x17d390 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x17d390) {
            ctx->pc = 0x17D3ACu;
            goto label_17d3ac;
        }
    }
    ctx->pc = 0x17D398u;
    // 0x17d398: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17d398u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17d39c: 0x0  nop
    ctx->pc = 0x17d39cu;
    // NOP
    // 0x17d3a0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17d3a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17d3a4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17D3A4u;
    {
        const bool branch_taken_0x17d3a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d3a4) {
            ctx->pc = 0x17D3C8u;
            goto label_17d3c8;
        }
    }
    ctx->pc = 0x17D3ACu;
label_17d3ac:
    // 0x17d3ac: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x17d3acu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x17d3b0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x17d3b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x17d3b4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x17d3b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x17d3b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17d3b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17d3bc: 0x0  nop
    ctx->pc = 0x17d3bcu;
    // NOP
    // 0x17d3c0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17d3c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17d3c4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x17d3c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_17d3c8:
    // 0x17d3c8: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x17d3c8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17d3cc: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x17d3ccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x17d3d0: 0xc0567b0  jal         func_159EC0
    ctx->pc = 0x17D3D0u;
    SET_GPR_U32(ctx, 31, 0x17D3D8u);
    ctx->pc = 0x159EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159EC0u, 0x17D3D0u, 0x17D3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D3D8u;
label_17d3d8:
    // 0x17d3d8: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x17D3D8u;
    {
        const bool branch_taken_0x17d3d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d3d8) {
            ctx->pc = 0x17D684u;
            goto label_17d684;
        }
    }
    ctx->pc = 0x17D3E0u;
label_17d3e0:
    // 0x17d3e0: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x17d3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x17d3e4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x17d3e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x17d3e8: 0x24022c1a  addiu       $v0, $zero, 0x2C1A
    ctx->pc = 0x17d3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11290));
    // 0x17d3ec: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x17d3ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x17d3f0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x17d3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x17d3f4: 0x2445ec70  addiu       $a1, $v0, -0x1390
    ctx->pc = 0x17d3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962288));
    // 0x17d3f8: 0xc059b14  jal         func_166C50
    ctx->pc = 0x17D3F8u;
    SET_GPR_U32(ctx, 31, 0x17D400u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x17D3F8u, 0x17D400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D400u;
label_17d400:
    // 0x17d400: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17d400u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17d404: 0x942200c8  lhu         $v0, 0xC8($at)
    ctx->pc = 0x17d404u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x5D00C8u));
    // 0x17d408: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x17d408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x17d40c: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x17d40cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x17d410: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x17D410u;
    {
        const bool branch_taken_0x17d410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d410) {
            ctx->pc = 0x17D434u;
            goto label_17d434;
        }
    }
    ctx->pc = 0x17D418u;
    // 0x17d418: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x17d418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17d41c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x17d41cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x17d420: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x17d420u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x17d424: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x17d424u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x17d428: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x17d428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17d42c: 0xc056630  jal         func_1598C0
    ctx->pc = 0x17D42Cu;
    SET_GPR_U32(ctx, 31, 0x17D434u);
    ctx->pc = 0x1598C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1598C0u, 0x17D42Cu, 0x17D434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D434u;
label_17d434:
    // 0x17d434: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17d434u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17d438: 0x942200c8  lhu         $v0, 0xC8($at)
    ctx->pc = 0x17d438u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x5D00C8u));
    // 0x17d43c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x17d43cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x17d440: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x17d440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x17d444: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x17D444u;
    {
        const bool branch_taken_0x17d444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d444) {
            ctx->pc = 0x17D464u;
            goto label_17d464;
        }
    }
    ctx->pc = 0x17D44Cu;
    // 0x17d44c: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x17d44cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17d450: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x17d450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x17d454: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x17d454u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x17d458: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x17d458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17d45c: 0xc056630  jal         func_1598C0
    ctx->pc = 0x17D45Cu;
    SET_GPR_U32(ctx, 31, 0x17D464u);
    ctx->pc = 0x1598C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1598C0u, 0x17D45Cu, 0x17D464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D464u;
label_17d464:
    // 0x17d464: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17d464u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17d468: 0x942200c8  lhu         $v0, 0xC8($at)
    ctx->pc = 0x17d468u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x5D00C8u));
    // 0x17d46c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x17d46cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x17d470: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x17d470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x17d474: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x17D474u;
    {
        const bool branch_taken_0x17d474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d474) {
            ctx->pc = 0x17D494u;
            goto label_17d494;
        }
    }
    ctx->pc = 0x17D47Cu;
    // 0x17d47c: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x17d47cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17d480: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x17d480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x17d484: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x17d484u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x17d488: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x17d488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17d48c: 0xc056630  jal         func_1598C0
    ctx->pc = 0x17D48Cu;
    SET_GPR_U32(ctx, 31, 0x17D494u);
    ctx->pc = 0x1598C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1598C0u, 0x17D48Cu, 0x17D494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D494u;
label_17d494:
    // 0x17d494: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17d494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17d498: 0x942200c8  lhu         $v0, 0xC8($at)
    ctx->pc = 0x17d498u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x5D00C8u));
    // 0x17d49c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x17d49cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x17d4a0: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x17d4a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x17d4a4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x17D4A4u;
    {
        const bool branch_taken_0x17d4a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d4a4) {
            ctx->pc = 0x17D4C8u;
            goto label_17d4c8;
        }
    }
    ctx->pc = 0x17D4ACu;
    // 0x17d4ac: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x17d4acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17d4b0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x17d4b0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x17d4b4: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x17d4b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x17d4b8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x17d4b8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x17d4bc: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x17d4bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17d4c0: 0xc056630  jal         func_1598C0
    ctx->pc = 0x17D4C0u;
    SET_GPR_U32(ctx, 31, 0x17D4C8u);
    ctx->pc = 0x1598C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1598C0u, 0x17D4C0u, 0x17D4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D4C8u;
label_17d4c8:
    // 0x17d4c8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17d4c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17d4cc: 0x942200c8  lhu         $v0, 0xC8($at)
    ctx->pc = 0x17d4ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x5D00C8u));
    // 0x17d4d0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x17d4d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x17d4d4: 0x30420024  andi        $v0, $v0, 0x24
    ctx->pc = 0x17d4d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)36);
    // 0x17d4d8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x17D4D8u;
    {
        const bool branch_taken_0x17d4d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d4d8) {
            ctx->pc = 0x17D4F8u;
            goto label_17d4f8;
        }
    }
    ctx->pc = 0x17D4E0u;
    // 0x17d4e0: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x17d4e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17d4e4: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x17d4e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x17d4e8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x17d4e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x17d4ec: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x17d4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17d4f0: 0xc056630  jal         func_1598C0
    ctx->pc = 0x17D4F0u;
    SET_GPR_U32(ctx, 31, 0x17D4F8u);
    ctx->pc = 0x1598C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1598C0u, 0x17D4F0u, 0x17D4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D4F8u;
label_17d4f8:
    // 0x17d4f8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17d4f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17d4fc: 0x942200c8  lhu         $v0, 0xC8($at)
    ctx->pc = 0x17d4fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x5D00C8u));
    // 0x17d500: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x17d500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x17d504: 0x30420041  andi        $v0, $v0, 0x41
    ctx->pc = 0x17d504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65);
    // 0x17d508: 0x1040005e  beqz        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x17D508u;
    {
        const bool branch_taken_0x17d508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d508) {
            ctx->pc = 0x17D684u;
            goto label_17d684;
        }
    }
    ctx->pc = 0x17D510u;
    // 0x17d510: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x17d510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17d514: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x17d514u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x17d518: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x17d518u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x17d51c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x17d51cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x17d520: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x17d520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17d524: 0xc056630  jal         func_1598C0
    ctx->pc = 0x17D524u;
    SET_GPR_U32(ctx, 31, 0x17D52Cu);
    ctx->pc = 0x1598C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1598C0u, 0x17D524u, 0x17D52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D52Cu;
label_17d52c:
    // 0x17d52c: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x17D52Cu;
    {
        const bool branch_taken_0x17d52c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d52c) {
            ctx->pc = 0x17D684u;
            goto label_17d684;
        }
    }
    ctx->pc = 0x17D534u;
label_17d534:
    // 0x17d534: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x17d534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x17d538: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x17d538u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x17d53c: 0x24022c1a  addiu       $v0, $zero, 0x2C1A
    ctx->pc = 0x17d53cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11290));
    // 0x17d540: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x17d540u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x17d544: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x17d544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x17d548: 0x2445ec80  addiu       $a1, $v0, -0x1380
    ctx->pc = 0x17d548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962304));
    // 0x17d54c: 0xc059b14  jal         func_166C50
    ctx->pc = 0x17D54Cu;
    SET_GPR_U32(ctx, 31, 0x17D554u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x17D54Cu, 0x17D554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D554u;
label_17d554:
    // 0x17d554: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17d554u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17d558: 0x942200c8  lhu         $v0, 0xC8($at)
    ctx->pc = 0x17d558u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x5D00C8u));
    // 0x17d55c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x17d55cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x17d560: 0x30423000  andi        $v0, $v0, 0x3000
    ctx->pc = 0x17d560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12288);
    // 0x17d564: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x17D564u;
    {
        const bool branch_taken_0x17d564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d564) {
            ctx->pc = 0x17D5C4u;
            goto label_17d5c4;
        }
    }
    ctx->pc = 0x17D56Cu;
    // 0x17d56c: 0xc60101b0  lwc1        $f1, 0x1B0($s0)
    ctx->pc = 0x17d56cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17d570: 0x938280a0  lbu         $v0, -0x7F60($gp)
    ctx->pc = 0x17d570u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934688)));
    // 0x17d574: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17D574u;
    {
        const bool branch_taken_0x17d574 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x17d574) {
            ctx->pc = 0x17D590u;
            goto label_17d590;
        }
    }
    ctx->pc = 0x17D57Cu;
    // 0x17d57c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17d57cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17d580: 0x0  nop
    ctx->pc = 0x17d580u;
    // NOP
    // 0x17d584: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17d584u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17d588: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17D588u;
    {
        const bool branch_taken_0x17d588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d588) {
            ctx->pc = 0x17D5ACu;
            goto label_17d5ac;
        }
    }
    ctx->pc = 0x17D590u;
label_17d590:
    // 0x17d590: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x17d590u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x17d594: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x17d594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x17d598: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x17d598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x17d59c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17d59cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17d5a0: 0x0  nop
    ctx->pc = 0x17d5a0u;
    // NOP
    // 0x17d5a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17d5a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17d5a8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x17d5a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_17d5ac:
    // 0x17d5ac: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x17d5acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x17d5b0: 0xe60001b0  swc1        $f0, 0x1B0($s0)
    ctx->pc = 0x17d5b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 432), bits); }
    // 0x17d5b4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x17d5b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x17d5b8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x17d5b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17d5bc: 0xc056630  jal         func_1598C0
    ctx->pc = 0x17D5BCu;
    SET_GPR_U32(ctx, 31, 0x17D5C4u);
    ctx->pc = 0x1598C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1598C0u, 0x17D5BCu, 0x17D5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D5C4u;
label_17d5c4:
    // 0x17d5c4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17d5c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17d5c8: 0x942200c8  lhu         $v0, 0xC8($at)
    ctx->pc = 0x17d5c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x5D00C8u));
    // 0x17d5cc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x17d5ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x17d5d0: 0x3042c000  andi        $v0, $v0, 0xC000
    ctx->pc = 0x17d5d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)49152);
    // 0x17d5d4: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x17D5D4u;
    {
        const bool branch_taken_0x17d5d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d5d4) {
            ctx->pc = 0x17D684u;
            goto label_17d684;
        }
    }
    ctx->pc = 0x17D5DCu;
    // 0x17d5dc: 0xc60101b0  lwc1        $f1, 0x1B0($s0)
    ctx->pc = 0x17d5dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17d5e0: 0x938280a0  lbu         $v0, -0x7F60($gp)
    ctx->pc = 0x17d5e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934688)));
    // 0x17d5e4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17D5E4u;
    {
        const bool branch_taken_0x17d5e4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x17d5e4) {
            ctx->pc = 0x17D600u;
            goto label_17d600;
        }
    }
    ctx->pc = 0x17D5ECu;
    // 0x17d5ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17d5ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17d5f0: 0x0  nop
    ctx->pc = 0x17d5f0u;
    // NOP
    // 0x17d5f4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17d5f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17d5f8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17D5F8u;
    {
        const bool branch_taken_0x17d5f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d5f8) {
            ctx->pc = 0x17D61Cu;
            goto label_17d61c;
        }
    }
    ctx->pc = 0x17D600u;
label_17d600:
    // 0x17d600: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x17d600u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x17d604: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x17d604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x17d608: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x17d608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x17d60c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17d60cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17d610: 0x0  nop
    ctx->pc = 0x17d610u;
    // NOP
    // 0x17d614: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17d614u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17d618: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x17d618u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_17d61c:
    // 0x17d61c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x17d61cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x17d620: 0xe60001b0  swc1        $f0, 0x1B0($s0)
    ctx->pc = 0x17d620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 432), bits); }
    // 0x17d624: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x17d624u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x17d628: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x17d628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17d62c: 0xc056630  jal         func_1598C0
    ctx->pc = 0x17D62Cu;
    SET_GPR_U32(ctx, 31, 0x17D634u);
    ctx->pc = 0x1598C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1598C0u, 0x17D62Cu, 0x17D634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D634u;
label_17d634:
    // 0x17d634: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x17D634u;
    {
        const bool branch_taken_0x17d634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d634) {
            ctx->pc = 0x17D684u;
            goto label_17d684;
        }
    }
    ctx->pc = 0x17D63Cu;
label_17d63c:
    // 0x17d63c: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x17d63cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x17d640: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x17d640u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x17d644: 0x24022c1a  addiu       $v0, $zero, 0x2C1A
    ctx->pc = 0x17d644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11290));
    // 0x17d648: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x17d648u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x17d64c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x17d64cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x17d650: 0x2442ec90  addiu       $v0, $v0, -0x1370
    ctx->pc = 0x17d650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962320));
    // 0x17d654: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x17d654u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x17d658: 0xc059b14  jal         func_166C50
    ctx->pc = 0x17D658u;
    SET_GPR_U32(ctx, 31, 0x17D660u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x17D658u, 0x17D660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D660u;
label_17d660:
    // 0x17d660: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17d660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17d664: 0x942300cc  lhu         $v1, 0xCC($at)
    ctx->pc = 0x17d664u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00CCu));
    // 0x17d668: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x17d668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x17d66c: 0x30630800  andi        $v1, $v1, 0x800
    ctx->pc = 0x17d66cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
    // 0x17d670: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x17D670u;
    {
        const bool branch_taken_0x17d670 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d670) {
            ctx->pc = 0x17D684u;
            goto label_17d684;
        }
    }
    ctx->pc = 0x17D678u;
    // 0x17d678: 0xa380809c  sb          $zero, -0x7F64($gp)
    ctx->pc = 0x17d678u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294934684), (uint8_t)GPR_U32(ctx, 0));
    // 0x17d67c: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x17D67Cu;
    {
        const bool branch_taken_0x17d67c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d67c) {
            ctx->pc = 0x17D85Cu;
            goto label_17d85c;
        }
    }
    ctx->pc = 0x17D684u;
label_17d684:
    // 0x17d684: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17d684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17d688: 0x942200cc  lhu         $v0, 0xCC($at)
    ctx->pc = 0x17d688u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x5D00CCu));
    // 0x17d68c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x17d68cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x17d690: 0x30430010  andi        $v1, $v0, 0x10
    ctx->pc = 0x17d690u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x17d694: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x17D694u;
    {
        const bool branch_taken_0x17d694 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d694) {
            ctx->pc = 0x17D6B0u;
            goto label_17d6b0;
        }
    }
    ctx->pc = 0x17D69Cu;
    // 0x17d69c: 0x938280a8  lbu         $v0, -0x7F58($gp)
    ctx->pc = 0x17d69cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934696)));
    // 0x17d6a0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x17d6a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17d6a4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x17d6a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x17d6a8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x17d6a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17d6ac: 0xa38380a8  sb          $v1, -0x7F58($gp)
    ctx->pc = 0x17d6acu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294934696), (uint8_t)GPR_U32(ctx, 3));
label_17d6b0:
    // 0x17d6b0: 0x938280a8  lbu         $v0, -0x7F58($gp)
    ctx->pc = 0x17d6b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934696)));
    // 0x17d6b4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x17d6b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17d6b8: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x17d6b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x17d6bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17d6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17d6c0: 0x14620048  bne         $v1, $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x17D6C0u;
    {
        const bool branch_taken_0x17d6c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x17d6c0) {
            ctx->pc = 0x17D7E4u;
            goto label_17d7e4;
        }
    }
    ctx->pc = 0x17D6C8u;
    // 0x17d6c8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x17d6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x17d6cc: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x17D6CCu;
    SET_GPR_U32(ctx, 31, 0x17D6D4u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x17D6D4u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17D6D4u) { return; }
    ctx->pc = 0x17D6D4u;
label_17d6d4:
    // 0x17d6d4: 0xc60001a0  lwc1        $f0, 0x1A0($s0)
    ctx->pc = 0x17d6d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17d6d8: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x17d6d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x17d6dc: 0xc60001a4  lwc1        $f0, 0x1A4($s0)
    ctx->pc = 0x17d6dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17d6e0: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x17d6e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x17d6e4: 0xc60001a8  lwc1        $f0, 0x1A8($s0)
    ctx->pc = 0x17d6e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17d6e8: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x17d6e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x17d6ec: 0xc60001ac  lwc1        $f0, 0x1AC($s0)
    ctx->pc = 0x17d6ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17d6f0: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x17d6f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x17d6f4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x17d6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17d6f8: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x17d6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x17d6fc: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x17d6fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17d700: 0xc040c92  jal         func_103248
    ctx->pc = 0x17D700u;
    SET_GPR_U32(ctx, 31, 0x17D708u);
    ctx->pc = 0x103248u;
    {
        ctx->pc = 0x17D708u;
        ps2_stubs::sceVu0TransMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17D708u) { return; }
    ctx->pc = 0x17D708u;
label_17d708:
    // 0x17d708: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x17d708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x17d70c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x17d70cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17d710: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x17d710u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x17d714: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x17d714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17d718: 0xc05ea30  jal         func_17A8C0
    ctx->pc = 0x17D718u;
    SET_GPR_U32(ctx, 31, 0x17D720u);
    ctx->pc = 0x17A8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A8C0u, 0x17D718u, 0x17D720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D720u;
label_17d720:
    // 0x17d720: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x17d720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x17d724: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x17d724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x17d728: 0x3c020d00  lui         $v0, 0xD00
    ctx->pc = 0x17d728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3328 << 16));
    // 0x17d72c: 0x34420218  ori         $v0, $v0, 0x218
    ctx->pc = 0x17d72cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)536);
    // 0x17d730: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x17d730u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x17d734: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x17d734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x17d738: 0x2445eca0  addiu       $a1, $v0, -0x1360
    ctx->pc = 0x17d738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962336));
    // 0x17d73c: 0x26060190  addiu       $a2, $s0, 0x190
    ctx->pc = 0x17d73cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x17d740: 0xc059b14  jal         func_166C50
    ctx->pc = 0x17D740u;
    SET_GPR_U32(ctx, 31, 0x17D748u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x17D740u, 0x17D748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D748u;
label_17d748:
    // 0x17d748: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x17d748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x17d74c: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x17d74cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x17d750: 0x3c020d00  lui         $v0, 0xD00
    ctx->pc = 0x17d750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3328 << 16));
    // 0x17d754: 0x34420219  ori         $v0, $v0, 0x219
    ctx->pc = 0x17d754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)537);
    // 0x17d758: 0x462025  or          $a0, $v0, $a2
    ctx->pc = 0x17d758u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x17d75c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x17d75cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x17d760: 0x2445ecb0  addiu       $a1, $v0, -0x1350
    ctx->pc = 0x17d760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962352));
    // 0x17d764: 0x260201a0  addiu       $v0, $s0, 0x1A0
    ctx->pc = 0x17d764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
    // 0x17d768: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x17d768u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x17d76c: 0xc059b14  jal         func_166C50
    ctx->pc = 0x17D76Cu;
    SET_GPR_U32(ctx, 31, 0x17D774u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x17D76Cu, 0x17D774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D774u;
label_17d774:
    // 0x17d774: 0xc60c01b8  lwc1        $f12, 0x1B8($s0)
    ctx->pc = 0x17d774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17d778: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x17D778u;
    SET_GPR_U32(ctx, 31, 0x17D780u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x17D778u, 0x17D780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D780u;
label_17d780:
    // 0x17d780: 0x24050808  addiu       $a1, $zero, 0x808
    ctx->pc = 0x17d780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x17d784: 0x5203c  dsll32      $a0, $a1, 0
    ctx->pc = 0x17d784u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 0));
    // 0x17d788: 0x3c030d00  lui         $v1, 0xD00
    ctx->pc = 0x17d788u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3328 << 16));
    // 0x17d78c: 0x3463021a  ori         $v1, $v1, 0x21A
    ctx->pc = 0x17d78cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)538);
    // 0x17d790: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x17d790u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x17d794: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x17d794u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x17d798: 0x2465ecc0  addiu       $a1, $v1, -0x1340
    ctx->pc = 0x17d798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962368));
    // 0x17d79c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x17d79cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x17d7a0: 0xc059b14  jal         func_166C50
    ctx->pc = 0x17D7A0u;
    SET_GPR_U32(ctx, 31, 0x17D7A8u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x17D7A0u, 0x17D7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D7A8u;
label_17d7a8:
    // 0x17d7a8: 0xc60c01b0  lwc1        $f12, 0x1B0($s0)
    ctx->pc = 0x17d7a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17d7ac: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x17D7ACu;
    SET_GPR_U32(ctx, 31, 0x17D7B4u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x17D7ACu, 0x17D7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D7B4u;
label_17d7b4:
    // 0x17d7b4: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x17d7b4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x17d7b8: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x17d7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x17d7bc: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x17d7bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x17d7c0: 0x3c020d00  lui         $v0, 0xD00
    ctx->pc = 0x17d7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3328 << 16));
    // 0x17d7c4: 0x3442111a  ori         $v0, $v0, 0x111A
    ctx->pc = 0x17d7c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4378);
    // 0x17d7c8: 0x452025  or          $a0, $v0, $a1
    ctx->pc = 0x17d7c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x17d7cc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x17d7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x17d7d0: 0x2445ecd0  addiu       $a1, $v0, -0x1330
    ctx->pc = 0x17d7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962384));
    // 0x17d7d4: 0xc059b14  jal         func_166C50
    ctx->pc = 0x17D7D4u;
    SET_GPR_U32(ctx, 31, 0x17D7DCu);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x17D7D4u, 0x17D7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D7DCu;
label_17d7dc:
    // 0x17d7dc: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x17D7DCu;
    {
        const bool branch_taken_0x17d7dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d7dc) {
            ctx->pc = 0x17D854u;
            goto label_17d854;
        }
    }
    ctx->pc = 0x17D7E4u;
label_17d7e4:
    // 0x17d7e4: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x17d7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x17d7e8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x17d7e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x17d7ec: 0x3c020d00  lui         $v0, 0xD00
    ctx->pc = 0x17d7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3328 << 16));
    // 0x17d7f0: 0x34420218  ori         $v0, $v0, 0x218
    ctx->pc = 0x17d7f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)536);
    // 0x17d7f4: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x17d7f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x17d7f8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x17d7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x17d7fc: 0x2445ece0  addiu       $a1, $v0, -0x1320
    ctx->pc = 0x17d7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962400));
    // 0x17d800: 0xc059b14  jal         func_166C50
    ctx->pc = 0x17D800u;
    SET_GPR_U32(ctx, 31, 0x17D808u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x17D800u, 0x17D808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D808u;
label_17d808:
    // 0x17d808: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x17d808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x17d80c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x17d80cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x17d810: 0x3c020d00  lui         $v0, 0xD00
    ctx->pc = 0x17d810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3328 << 16));
    // 0x17d814: 0x34430219  ori         $v1, $v0, 0x219
    ctx->pc = 0x17d814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)537);
    // 0x17d818: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x17d818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x17d81c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x17d81cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x17d820: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x17d820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x17d824: 0x2445ece0  addiu       $a1, $v0, -0x1320
    ctx->pc = 0x17d824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962400));
    // 0x17d828: 0xc059b14  jal         func_166C50
    ctx->pc = 0x17D828u;
    SET_GPR_U32(ctx, 31, 0x17D830u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x17D828u, 0x17D830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D830u;
label_17d830:
    // 0x17d830: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x17d830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x17d834: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x17d834u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x17d838: 0x3c020d00  lui         $v0, 0xD00
    ctx->pc = 0x17d838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3328 << 16));
    // 0x17d83c: 0x3443021a  ori         $v1, $v0, 0x21A
    ctx->pc = 0x17d83cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)538);
    // 0x17d840: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x17d840u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x17d844: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x17d844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x17d848: 0x2445ed10  addiu       $a1, $v0, -0x12F0
    ctx->pc = 0x17d848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962448));
    // 0x17d84c: 0xc059b14  jal         func_166C50
    ctx->pc = 0x17D84Cu;
    SET_GPR_U32(ctx, 31, 0x17D854u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x17D84Cu, 0x17D854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D854u;
label_17d854:
    // 0x17d854: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17d854u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17d858: 0xac300af0  sw          $s0, 0xAF0($at)
    ctx->pc = 0x17d858u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x5D0AF0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AF0u, _value); } while (0);
label_17d85c:
    // 0x17d85c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x17d85cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17d860: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17d860u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d864: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x17d864u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x17d868: 0x3e00008  jr          $ra
    ctx->pc = 0x17D868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D870u;
}
