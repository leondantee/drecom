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

// Function: srp_id16_type03
// Address: 0x2c1270 - 0x2c1400
void srp_id16_type03_0x2c1270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("srp_id16_type03_0x2c1270");
#endif

    switch (ctx->pc) {
        case 0x2c130cu: goto label_2c130c;
        case 0x2c1348u: goto label_2c1348;
        case 0x2c1368u: goto label_2c1368;
        default: break;
    }

    ctx->pc = 0x2c1270u;

    // 0x2c1270: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c1270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c1274: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2c1274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2c1278: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2c1278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2c127c: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x2c127cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x2c1280: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c1280u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c1284: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c1284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c1288: 0xe44002d0  swc1        $f0, 0x2D0($v0)
    ctx->pc = 0x2c1288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 720), bits); }
    // 0x2c128c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2c128cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2c1290: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c1290u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c1294: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c1294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c1298: 0xe44002d4  swc1        $f0, 0x2D4($v0)
    ctx->pc = 0x2c1298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 724), bits); }
    // 0x2c129c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2c129cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2c12a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c12a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c12a4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c12a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c12a8: 0xe44002d8  swc1        $f0, 0x2D8($v0)
    ctx->pc = 0x2c12a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 728), bits); }
    // 0x2c12ac: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2c12acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2c12b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c12b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c12b4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c12b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c12b8: 0xe44002dc  swc1        $f0, 0x2DC($v0)
    ctx->pc = 0x2c12b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 732), bits); }
    // 0x2c12bc: 0x3c023f7d  lui         $v0, 0x3F7D
    ctx->pc = 0x2c12bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16253 << 16));
    // 0x2c12c0: 0x344270a4  ori         $v0, $v0, 0x70A4
    ctx->pc = 0x2c12c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28836);
    // 0x2c12c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c12c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c12c8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c12c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c12cc: 0xe44002e0  swc1        $f0, 0x2E0($v0)
    ctx->pc = 0x2c12ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 736), bits); }
    // 0x2c12d0: 0x3c023f7d  lui         $v0, 0x3F7D
    ctx->pc = 0x2c12d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16253 << 16));
    // 0x2c12d4: 0x344270a4  ori         $v0, $v0, 0x70A4
    ctx->pc = 0x2c12d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28836);
    // 0x2c12d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c12d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c12dc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c12dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c12e0: 0xe44002e4  swc1        $f0, 0x2E4($v0)
    ctx->pc = 0x2c12e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 740), bits); }
    // 0x2c12e4: 0x3c023f7d  lui         $v0, 0x3F7D
    ctx->pc = 0x2c12e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16253 << 16));
    // 0x2c12e8: 0x344270a4  ori         $v0, $v0, 0x70A4
    ctx->pc = 0x2c12e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28836);
    // 0x2c12ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c12ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c12f0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c12f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c12f4: 0xe44002e8  swc1        $f0, 0x2E8($v0)
    ctx->pc = 0x2c12f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 744), bits); }
    // 0x2c12f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c12f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c12fc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c12fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c1300: 0xe44002f0  swc1        $f0, 0x2F0($v0)
    ctx->pc = 0x2c1300u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 752), bits); }
    // 0x2c1304: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2C1304u;
    SET_GPR_U32(ctx, 31, 0x2C130Cu);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2C1304u, 0x2C130Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C130Cu;
label_2c130c:
    // 0x2c130c: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2c130cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2c1310: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c1310u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c1314: 0x0  nop
    ctx->pc = 0x2c1314u;
    // NOP
    // 0x2c1318: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c1318u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c131c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2c131cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2c1320: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c1320u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c1324: 0x0  nop
    ctx->pc = 0x2c1324u;
    // NOP
    // 0x2c1328: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c1328u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c132c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c132cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c1330: 0xe44002f4  swc1        $f0, 0x2F4($v0)
    ctx->pc = 0x2c1330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 756), bits); }
    // 0x2c1334: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c1334u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c1338: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c1338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c133c: 0xe44002f8  swc1        $f0, 0x2F8($v0)
    ctx->pc = 0x2c133cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 760), bits); }
    // 0x2c1340: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2C1340u;
    SET_GPR_U32(ctx, 31, 0x2C1348u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2C1340u, 0x2C1348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1348u;
label_2c1348:
    // 0x2c1348: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c1348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c134c: 0xe4400300  swc1        $f0, 0x300($v0)
    ctx->pc = 0x2c134cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 768), bits); }
    // 0x2c1350: 0x3c02c040  lui         $v0, 0xC040
    ctx->pc = 0x2c1350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49216 << 16));
    // 0x2c1354: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c1354u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c1358: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c1358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c135c: 0xe4400304  swc1        $f0, 0x304($v0)
    ctx->pc = 0x2c135cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 772), bits); }
    // 0x2c1360: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2C1360u;
    SET_GPR_U32(ctx, 31, 0x2C1368u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2C1360u, 0x2C1368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1368u;
label_2c1368:
    // 0x2c1368: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c1368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c136c: 0xe4600308  swc1        $f0, 0x308($v1)
    ctx->pc = 0x2c136cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 776), bits); }
    // 0x2c1370: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2c1370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c1374: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c1374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c1378: 0xa0640342  sb          $a0, 0x342($v1)
    ctx->pc = 0x2c1378u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 834), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c137c: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x2c137cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2c1380: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c1380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c1384: 0xa0640347  sb          $a0, 0x347($v1)
    ctx->pc = 0x2c1384u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 839), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c1388: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x2c1388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2c138c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c138cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c1390: 0xa0640344  sb          $a0, 0x344($v1)
    ctx->pc = 0x2c1390u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 836), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c1394: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c1394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c1398: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c1398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c139c: 0xa064036d  sb          $a0, 0x36D($v1)
    ctx->pc = 0x2c139cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 877), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c13a0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2c13a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c13a4: 0x8c830270  lw          $v1, 0x270($a0)
    ctx->pc = 0x2c13a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 624)));
    // 0x2c13a8: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x2c13a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x2c13ac: 0xac830270  sw          $v1, 0x270($a0)
    ctx->pc = 0x2c13acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 624), GPR_U32(ctx, 3));
    // 0x2c13b0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c13b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c13b4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c13b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c13b8: 0xa064036c  sb          $a0, 0x36C($v1)
    ctx->pc = 0x2c13b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 876), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c13bc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c13bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c13c0: 0xa060036a  sb          $zero, 0x36A($v1)
    ctx->pc = 0x2c13c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 874), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c13c4: 0x24040046  addiu       $a0, $zero, 0x46
    ctx->pc = 0x2c13c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x2c13c8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c13c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c13cc: 0xac640334  sw          $a0, 0x334($v1)
    ctx->pc = 0x2c13ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 820), GPR_U32(ctx, 4));
    // 0x2c13d0: 0x3c034316  lui         $v1, 0x4316
    ctx->pc = 0x2c13d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17174 << 16));
    // 0x2c13d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c13d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c13d8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c13d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c13dc: 0xe4600338  swc1        $f0, 0x338($v1)
    ctx->pc = 0x2c13dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 824), bits); }
    // 0x2c13e0: 0x3c034316  lui         $v1, 0x4316
    ctx->pc = 0x2c13e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17174 << 16));
    // 0x2c13e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c13e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c13e8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c13e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c13ec: 0xe460033c  swc1        $f0, 0x33C($v1)
    ctx->pc = 0x2c13ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 828), bits); }
    // 0x2c13f0: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2c13f0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c13f4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2c13f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c13f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2C13F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C13F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C1400u;
}
