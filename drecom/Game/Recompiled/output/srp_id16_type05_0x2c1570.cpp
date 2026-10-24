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

// Function: srp_id16_type05
// Address: 0x2c1570 - 0x2c1700
void srp_id16_type05_0x2c1570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("srp_id16_type05_0x2c1570");
#endif

    switch (ctx->pc) {
        case 0x2c160cu: goto label_2c160c;
        case 0x2c1648u: goto label_2c1648;
        case 0x2c1668u: goto label_2c1668;
        default: break;
    }

    ctx->pc = 0x2c1570u;

    // 0x2c1570: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c1570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c1574: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2c1574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2c1578: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2c1578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2c157c: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x2c157cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x2c1580: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c1580u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c1584: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c1584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c1588: 0xe44002d0  swc1        $f0, 0x2D0($v0)
    ctx->pc = 0x2c1588u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 720), bits); }
    // 0x2c158c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2c158cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2c1590: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c1590u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c1594: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c1594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c1598: 0xe44002d4  swc1        $f0, 0x2D4($v0)
    ctx->pc = 0x2c1598u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 724), bits); }
    // 0x2c159c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2c159cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2c15a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c15a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c15a4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c15a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c15a8: 0xe44002d8  swc1        $f0, 0x2D8($v0)
    ctx->pc = 0x2c15a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 728), bits); }
    // 0x2c15ac: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2c15acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2c15b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c15b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c15b4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c15b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c15b8: 0xe44002dc  swc1        $f0, 0x2DC($v0)
    ctx->pc = 0x2c15b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 732), bits); }
    // 0x2c15bc: 0x3c023f7d  lui         $v0, 0x3F7D
    ctx->pc = 0x2c15bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16253 << 16));
    // 0x2c15c0: 0x344270a4  ori         $v0, $v0, 0x70A4
    ctx->pc = 0x2c15c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28836);
    // 0x2c15c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c15c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c15c8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c15c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c15cc: 0xe44002e0  swc1        $f0, 0x2E0($v0)
    ctx->pc = 0x2c15ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 736), bits); }
    // 0x2c15d0: 0x3c023f7d  lui         $v0, 0x3F7D
    ctx->pc = 0x2c15d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16253 << 16));
    // 0x2c15d4: 0x344270a4  ori         $v0, $v0, 0x70A4
    ctx->pc = 0x2c15d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28836);
    // 0x2c15d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c15d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c15dc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c15dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c15e0: 0xe44002e4  swc1        $f0, 0x2E4($v0)
    ctx->pc = 0x2c15e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 740), bits); }
    // 0x2c15e4: 0x3c023f7d  lui         $v0, 0x3F7D
    ctx->pc = 0x2c15e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16253 << 16));
    // 0x2c15e8: 0x344270a4  ori         $v0, $v0, 0x70A4
    ctx->pc = 0x2c15e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28836);
    // 0x2c15ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c15ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c15f0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c15f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c15f4: 0xe44002e8  swc1        $f0, 0x2E8($v0)
    ctx->pc = 0x2c15f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 744), bits); }
    // 0x2c15f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c15f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c15fc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c15fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c1600: 0xe44002f0  swc1        $f0, 0x2F0($v0)
    ctx->pc = 0x2c1600u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 752), bits); }
    // 0x2c1604: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2C1604u;
    SET_GPR_U32(ctx, 31, 0x2C160Cu);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2C1604u, 0x2C160Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C160Cu;
label_2c160c:
    // 0x2c160c: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2c160cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2c1610: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c1610u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c1614: 0x0  nop
    ctx->pc = 0x2c1614u;
    // NOP
    // 0x2c1618: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c1618u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c161c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2c161cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2c1620: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c1620u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c1624: 0x0  nop
    ctx->pc = 0x2c1624u;
    // NOP
    // 0x2c1628: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c1628u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c162c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c162cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c1630: 0xe44002f4  swc1        $f0, 0x2F4($v0)
    ctx->pc = 0x2c1630u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 756), bits); }
    // 0x2c1634: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c1634u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c1638: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c1638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c163c: 0xe44002f8  swc1        $f0, 0x2F8($v0)
    ctx->pc = 0x2c163cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 760), bits); }
    // 0x2c1640: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2C1640u;
    SET_GPR_U32(ctx, 31, 0x2C1648u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2C1640u, 0x2C1648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1648u;
label_2c1648:
    // 0x2c1648: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c1648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c164c: 0xe4400300  swc1        $f0, 0x300($v0)
    ctx->pc = 0x2c164cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 768), bits); }
    // 0x2c1650: 0x3c02c040  lui         $v0, 0xC040
    ctx->pc = 0x2c1650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49216 << 16));
    // 0x2c1654: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c1654u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c1658: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c1658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c165c: 0xe4400304  swc1        $f0, 0x304($v0)
    ctx->pc = 0x2c165cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 772), bits); }
    // 0x2c1660: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2C1660u;
    SET_GPR_U32(ctx, 31, 0x2C1668u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2C1660u, 0x2C1668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1668u;
label_2c1668:
    // 0x2c1668: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c1668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c166c: 0xe4600308  swc1        $f0, 0x308($v1)
    ctx->pc = 0x2c166cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 776), bits); }
    // 0x2c1670: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2c1670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c1674: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c1674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c1678: 0xa0640342  sb          $a0, 0x342($v1)
    ctx->pc = 0x2c1678u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 834), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c167c: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x2c167cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2c1680: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c1680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c1684: 0xa0640347  sb          $a0, 0x347($v1)
    ctx->pc = 0x2c1684u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 839), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c1688: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x2c1688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2c168c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c168cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c1690: 0xa0640344  sb          $a0, 0x344($v1)
    ctx->pc = 0x2c1690u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 836), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c1694: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c1694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c1698: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c1698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c169c: 0xa064036d  sb          $a0, 0x36D($v1)
    ctx->pc = 0x2c169cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 877), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c16a0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2c16a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c16a4: 0x8c830270  lw          $v1, 0x270($a0)
    ctx->pc = 0x2c16a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 624)));
    // 0x2c16a8: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x2c16a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x2c16ac: 0xac830270  sw          $v1, 0x270($a0)
    ctx->pc = 0x2c16acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 624), GPR_U32(ctx, 3));
    // 0x2c16b0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c16b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c16b4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c16b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c16b8: 0xa064036c  sb          $a0, 0x36C($v1)
    ctx->pc = 0x2c16b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 876), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c16bc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c16bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c16c0: 0xa060036a  sb          $zero, 0x36A($v1)
    ctx->pc = 0x2c16c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 874), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c16c4: 0x24040046  addiu       $a0, $zero, 0x46
    ctx->pc = 0x2c16c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x2c16c8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c16c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c16cc: 0xac640334  sw          $a0, 0x334($v1)
    ctx->pc = 0x2c16ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 820), GPR_U32(ctx, 4));
    // 0x2c16d0: 0x3c034316  lui         $v1, 0x4316
    ctx->pc = 0x2c16d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17174 << 16));
    // 0x2c16d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c16d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c16d8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c16d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c16dc: 0xe4600338  swc1        $f0, 0x338($v1)
    ctx->pc = 0x2c16dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 824), bits); }
    // 0x2c16e0: 0x3c034316  lui         $v1, 0x4316
    ctx->pc = 0x2c16e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17174 << 16));
    // 0x2c16e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c16e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c16e8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c16e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c16ec: 0xe460033c  swc1        $f0, 0x33C($v1)
    ctx->pc = 0x2c16ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 828), bits); }
    // 0x2c16f0: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2c16f0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c16f4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2c16f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c16f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2C16F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C16F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C1700u;
}
