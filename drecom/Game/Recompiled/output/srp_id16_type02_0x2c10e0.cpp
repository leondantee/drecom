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

// Function: srp_id16_type02
// Address: 0x2c10e0 - 0x2c1270
void srp_id16_type02_0x2c10e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("srp_id16_type02_0x2c10e0");
#endif

    switch (ctx->pc) {
        case 0x2c1188u: goto label_2c1188;
        case 0x2c11b8u: goto label_2c11b8;
        case 0x2c11d8u: goto label_2c11d8;
        default: break;
    }

    ctx->pc = 0x2c10e0u;

    // 0x2c10e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c10e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c10e4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2c10e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2c10e8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2c10e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2c10ec: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x2c10ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x2c10f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c10f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c10f4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c10f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c10f8: 0xe44002d0  swc1        $f0, 0x2D0($v0)
    ctx->pc = 0x2c10f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 720), bits); }
    // 0x2c10fc: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2c10fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2c1100: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c1100u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c1104: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c1104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c1108: 0xe44002d4  swc1        $f0, 0x2D4($v0)
    ctx->pc = 0x2c1108u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 724), bits); }
    // 0x2c110c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2c110cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2c1110: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c1110u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c1114: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c1114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c1118: 0xe44002d8  swc1        $f0, 0x2D8($v0)
    ctx->pc = 0x2c1118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 728), bits); }
    // 0x2c111c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2c111cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2c1120: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c1120u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c1124: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c1124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c1128: 0xe44002dc  swc1        $f0, 0x2DC($v0)
    ctx->pc = 0x2c1128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 732), bits); }
    // 0x2c112c: 0x3c023f7d  lui         $v0, 0x3F7D
    ctx->pc = 0x2c112cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16253 << 16));
    // 0x2c1130: 0x344270a4  ori         $v0, $v0, 0x70A4
    ctx->pc = 0x2c1130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28836);
    // 0x2c1134: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c1134u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c1138: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c1138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c113c: 0xe44002e0  swc1        $f0, 0x2E0($v0)
    ctx->pc = 0x2c113cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 736), bits); }
    // 0x2c1140: 0x3c023f7d  lui         $v0, 0x3F7D
    ctx->pc = 0x2c1140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16253 << 16));
    // 0x2c1144: 0x344270a4  ori         $v0, $v0, 0x70A4
    ctx->pc = 0x2c1144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28836);
    // 0x2c1148: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c1148u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c114c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c114cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c1150: 0xe44002e4  swc1        $f0, 0x2E4($v0)
    ctx->pc = 0x2c1150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 740), bits); }
    // 0x2c1154: 0x3c023f7d  lui         $v0, 0x3F7D
    ctx->pc = 0x2c1154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16253 << 16));
    // 0x2c1158: 0x344270a4  ori         $v0, $v0, 0x70A4
    ctx->pc = 0x2c1158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28836);
    // 0x2c115c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c115cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c1160: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c1160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c1164: 0xe44002e8  swc1        $f0, 0x2E8($v0)
    ctx->pc = 0x2c1164u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 744), bits); }
    // 0x2c1168: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c1168u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c116c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c116cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c1170: 0xe44002f0  swc1        $f0, 0x2F0($v0)
    ctx->pc = 0x2c1170u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 752), bits); }
    // 0x2c1174: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c1174u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c1178: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c1178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c117c: 0xe44002f4  swc1        $f0, 0x2F4($v0)
    ctx->pc = 0x2c117cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 756), bits); }
    // 0x2c1180: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2C1180u;
    SET_GPR_U32(ctx, 31, 0x2C1188u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2C1180u, 0x2C1188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1188u;
label_2c1188:
    // 0x2c1188: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2c1188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2c118c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c118cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c1190: 0x0  nop
    ctx->pc = 0x2c1190u;
    // NOP
    // 0x2c1194: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c1194u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c1198: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2c1198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2c119c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c119cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c11a0: 0x0  nop
    ctx->pc = 0x2c11a0u;
    // NOP
    // 0x2c11a4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c11a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c11a8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c11a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c11ac: 0xe44002f8  swc1        $f0, 0x2F8($v0)
    ctx->pc = 0x2c11acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 760), bits); }
    // 0x2c11b0: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2C11B0u;
    SET_GPR_U32(ctx, 31, 0x2C11B8u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2C11B0u, 0x2C11B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C11B8u;
label_2c11b8:
    // 0x2c11b8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c11b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c11bc: 0xe4400300  swc1        $f0, 0x300($v0)
    ctx->pc = 0x2c11bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 768), bits); }
    // 0x2c11c0: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x2c11c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
    // 0x2c11c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c11c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c11c8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c11c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c11cc: 0xe4400304  swc1        $f0, 0x304($v0)
    ctx->pc = 0x2c11ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 772), bits); }
    // 0x2c11d0: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2C11D0u;
    SET_GPR_U32(ctx, 31, 0x2C11D8u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2C11D0u, 0x2C11D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C11D8u;
label_2c11d8:
    // 0x2c11d8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c11d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c11dc: 0xe4600308  swc1        $f0, 0x308($v1)
    ctx->pc = 0x2c11dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 776), bits); }
    // 0x2c11e0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2c11e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c11e4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c11e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c11e8: 0xa0640342  sb          $a0, 0x342($v1)
    ctx->pc = 0x2c11e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 834), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c11ec: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x2c11ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2c11f0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c11f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c11f4: 0xa0640347  sb          $a0, 0x347($v1)
    ctx->pc = 0x2c11f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 839), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c11f8: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x2c11f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2c11fc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c11fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c1200: 0xa0640344  sb          $a0, 0x344($v1)
    ctx->pc = 0x2c1200u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 836), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c1204: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c1204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c1208: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c1208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c120c: 0xa064036d  sb          $a0, 0x36D($v1)
    ctx->pc = 0x2c120cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 877), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c1210: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2c1210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c1214: 0x8c830270  lw          $v1, 0x270($a0)
    ctx->pc = 0x2c1214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 624)));
    // 0x2c1218: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x2c1218u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x2c121c: 0xac830270  sw          $v1, 0x270($a0)
    ctx->pc = 0x2c121cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 624), GPR_U32(ctx, 3));
    // 0x2c1220: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c1220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c1224: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c1224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c1228: 0xa064036c  sb          $a0, 0x36C($v1)
    ctx->pc = 0x2c1228u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 876), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c122c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c122cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c1230: 0xa060036a  sb          $zero, 0x36A($v1)
    ctx->pc = 0x2c1230u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 874), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c1234: 0x24040046  addiu       $a0, $zero, 0x46
    ctx->pc = 0x2c1234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x2c1238: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c1238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c123c: 0xac640334  sw          $a0, 0x334($v1)
    ctx->pc = 0x2c123cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 820), GPR_U32(ctx, 4));
    // 0x2c1240: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x2c1240u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x2c1244: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c1244u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c1248: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c1248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c124c: 0xe4600338  swc1        $f0, 0x338($v1)
    ctx->pc = 0x2c124cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 824), bits); }
    // 0x2c1250: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x2c1250u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x2c1254: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c1254u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c1258: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c1258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c125c: 0xe460033c  swc1        $f0, 0x33C($v1)
    ctx->pc = 0x2c125cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 828), bits); }
    // 0x2c1260: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2c1260u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c1264: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2c1264u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c1268: 0x3e00008  jr          $ra
    ctx->pc = 0x2C1268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C1268u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C1270u;
}
