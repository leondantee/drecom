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

// Function: Item_spend
// Address: 0x3350f0 - 0x335ba8
void Item_spend_0x3350f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Item_spend_0x3350f0");
#endif

    switch (ctx->pc) {
        case 0x335254u: goto label_335254;
        case 0x33529cu: goto label_33529c;
        case 0x3354b0u: goto label_3354b0;
        case 0x335518u: goto label_335518;
        case 0x335584u: goto label_335584;
        case 0x335764u: goto label_335764;
        case 0x335774u: goto label_335774;
        case 0x335794u: goto label_335794;
        case 0x3357a4u: goto label_3357a4;
        case 0x3357b4u: goto label_3357b4;
        case 0x3357c4u: goto label_3357c4;
        case 0x3358a0u: goto label_3358a0;
        case 0x3358d4u: goto label_3358d4;
        case 0x335940u: goto label_335940;
        case 0x335974u: goto label_335974;
        case 0x335a58u: goto label_335a58;
        case 0x335ab8u: goto label_335ab8;
        case 0x335b08u: goto label_335b08;
        default: break;
    }

    ctx->pc = 0x3350f0u;

    // 0x3350f0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x3350f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x3350f4: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x3350f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x3350f8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x3350f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x3350fc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3350fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x335100: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x335100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x335104: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x335104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x335108: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x335108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x33510c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x33510cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x335110: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x335110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x335114: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x335114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x335118: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x335118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33511c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x33511cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x335120: 0x24426150  addiu       $v0, $v0, 0x6150
    ctx->pc = 0x335120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24912));
    // 0x335124: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x335124u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x335128: 0x3c030089  lui         $v1, 0x89
    ctx->pc = 0x335128u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)137 << 16));
    // 0x33512c: 0x246233c0  addiu       $v0, $v1, 0x33C0
    ctx->pc = 0x33512cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 13248));
    // 0x335130: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x335130u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x335134: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x335134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x335138: 0x24423408  addiu       $v0, $v0, 0x3408
    ctx->pc = 0x335138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13320));
    // 0x33513c: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x33513cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x335140: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x335140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x335144: 0xc4203340  lwc1        $f0, 0x3340($at)
    ctx->pc = 0x335144u;
    { uint32_t bits = FAST_READ32(0x893340u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x335148: 0xe6005e00  swc1        $f0, 0x5E00($s0)
    ctx->pc = 0x335148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24064), bits); }
    // 0x33514c: 0xc6015e00  lwc1        $f1, 0x5E00($s0)
    ctx->pc = 0x33514cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x335150: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x335150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x335154: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x335154u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x335158: 0x0  nop
    ctx->pc = 0x335158u;
    // NOP
    // 0x33515c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x33515cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x335160: 0x0  nop
    ctx->pc = 0x335160u;
    // NOP
    // 0x335164: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x335164u;
    {
        const bool branch_taken_0x335164 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x335164) {
            ctx->pc = 0x33517Cu;
            goto label_33517c;
        }
    }
    ctx->pc = 0x33516Cu;
    // 0x33516c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x33516cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x335170: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x335170u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x335174: 0x0  nop
    ctx->pc = 0x335174u;
    // NOP
    // 0x335178: 0xe6005e00  swc1        $f0, 0x5E00($s0)
    ctx->pc = 0x335178u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24064), bits); }
label_33517c:
    // 0x33517c: 0x260229e8  addiu       $v0, $s0, 0x29E8
    ctx->pc = 0x33517cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 10728));
    // 0x335180: 0xafa20104  sw          $v0, 0x104($sp)
    ctx->pc = 0x335180u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 2));
    // 0x335184: 0x26024458  addiu       $v0, $s0, 0x4458
    ctx->pc = 0x335184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 17496));
    // 0x335188: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x335188u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
    // 0x33518c: 0x26024428  addiu       $v0, $s0, 0x4428
    ctx->pc = 0x33518cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 17448));
    // 0x335190: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x335190u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x335194: 0x26044438  addiu       $a0, $s0, 0x4438
    ctx->pc = 0x335194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 17464));
    // 0x335198: 0xafa400b8  sw          $a0, 0xB8($sp)
    ctx->pc = 0x335198u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 4));
    // 0x33519c: 0x26024448  addiu       $v0, $s0, 0x4448
    ctx->pc = 0x33519cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 17480));
    // 0x3351a0: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x3351a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x3351a4: 0x26041de8  addiu       $a0, $s0, 0x1DE8
    ctx->pc = 0x3351a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 7656));
    // 0x3351a8: 0xafa400d0  sw          $a0, 0xD0($sp)
    ctx->pc = 0x3351a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 4));
    // 0x3351ac: 0x26054958  addiu       $a1, $s0, 0x4958
    ctx->pc = 0x3351acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 18776));
    // 0x3351b0: 0xafa500c8  sw          $a1, 0xC8($sp)
    ctx->pc = 0x3351b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 5));
    // 0x3351b4: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x3351b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x3351b8: 0x24423418  addiu       $v0, $v0, 0x3418
    ctx->pc = 0x3351b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13336));
    // 0x3351bc: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x3351bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x3351c0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x3351c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x3351c4: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x3351c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x3351c8: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x3351c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x3351cc: 0x3c040400  lui         $a0, 0x400
    ctx->pc = 0x3351ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1024 << 16));
    // 0x3351d0: 0x34821015  ori         $v0, $a0, 0x1015
    ctx->pc = 0x3351d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4117);
    // 0x3351d4: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x3351d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x3351d8: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x3351d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x3351dc: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x3351dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x3351e0: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x3351e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x3351e4: 0xfc820008  sd          $v0, 0x8($a0)
    ctx->pc = 0x3351e4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 2));
    // 0x3351e8: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x3351e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x3351ec: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x3351ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x3351f0: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x3351f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x3351f4: 0x3c050400  lui         $a1, 0x400
    ctx->pc = 0x3351f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1024 << 16));
    // 0x3351f8: 0x34a41009  ori         $a0, $a1, 0x1009
    ctx->pc = 0x3351f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4105);
    // 0x3351fc: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x3351fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x335200: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x335200u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x335204: 0x24030730  addiu       $v1, $zero, 0x730
    ctx->pc = 0x335204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1840));
    // 0x335208: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x335208u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x33520c: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x33520cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x335210: 0x3483000a  ori         $v1, $a0, 0xA
    ctx->pc = 0x335210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)10);
    // 0x335214: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x335214u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x335218: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x335218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x33521c: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x33521cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x335220: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x335220u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x335224: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x335224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x335228: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x335228u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x33522c: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x33522cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x335230: 0x34631009  ori         $v1, $v1, 0x1009
    ctx->pc = 0x335230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4105);
    // 0x335234: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x335234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x335238: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x335238u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x33523c: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x33523cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x335240: 0xfc400008  sd          $zero, 0x8($v0)
    ctx->pc = 0x335240u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 0));
    // 0x335244: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x335244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x335248: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x335248u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x33524c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x33524Cu;
    SET_GPR_U32(ctx, 31, 0x335254u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x33524Cu, 0x335254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335254u;
label_335254:
    // 0x335254: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x335254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x335258: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x335258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x33525c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x33525cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x335260: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x335260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x335264: 0x3443103f  ori         $v1, $v0, 0x103F
    ctx->pc = 0x335264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4159);
    // 0x335268: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x335268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x33526c: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x33526cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x335270: 0x9202683f  lbu         $v0, 0x683F($s0)
    ctx->pc = 0x335270u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26687)));
    // 0x335274: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x335274u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x335278: 0x82035deb  lb          $v1, 0x5DEB($s0)
    ctx->pc = 0x335278u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24043)));
    // 0x33527c: 0x3163c  dsll32      $v0, $v1, 24
    ctx->pc = 0x33527cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 24));
    // 0x335280: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x335280u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x335284: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x335284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x335288: 0x2b880  sll         $s7, $v0, 2
    ctx->pc = 0x335288u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x33528c: 0x2171821  addu        $v1, $s0, $s7
    ctx->pc = 0x33528cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
    // 0x335290: 0x2464663e  addiu       $a0, $v1, 0x663E
    ctx->pc = 0x335290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 26174));
    // 0x335294: 0xc0ce1cc  jal         func_338730
    ctx->pc = 0x335294u;
    SET_GPR_U32(ctx, 31, 0x33529Cu);
    ctx->pc = 0x338730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338730u, 0x335294u, 0x33529Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33529Cu;
label_33529c:
    // 0x33529c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x33529cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3352a0: 0xafa30100  sw          $v1, 0x100($sp)
    ctx->pc = 0x3352a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 3));
    // 0x3352a4: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x3352a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x3352a8: 0x39080  sll         $s2, $v1, 2
    ctx->pc = 0x3352a8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3352ac: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x3352acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x3352b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3352b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3352b4: 0x3c11003b  lui         $s1, 0x3B
    ctx->pc = 0x3352b4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)59 << 16));
    // 0x3352b8: 0x26319740  addiu       $s1, $s1, -0x68C0
    ctx->pc = 0x3352b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294940480));
    // 0x3352bc: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x3352bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x3352c0: 0xafa3010c  sw          $v1, 0x10C($sp)
    ctx->pc = 0x3352c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 3));
    // 0x3352c4: 0x8e065dd0  lw          $a2, 0x5DD0($s0)
    ctx->pc = 0x3352c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24016)));
    // 0x3352c8: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x3352c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3352cc: 0x10d1021c  beq         $a2, $s1, . + 4 + (0x21C << 2)
    ctx->pc = 0x3352CCu;
    {
        const bool branch_taken_0x3352cc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 17));
        if (branch_taken_0x3352cc) {
            ctx->pc = 0x335B40u;
            goto label_335b40;
        }
    }
    ctx->pc = 0x3352D4u;
    // 0x3352d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3352d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3352d8: 0x10c301b1  beq         $a2, $v1, . + 4 + (0x1B1 << 2)
    ctx->pc = 0x3352D8u;
    {
        const bool branch_taken_0x3352d8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x3352d8) {
            ctx->pc = 0x3359A0u;
            goto label_3359a0;
        }
    }
    ctx->pc = 0x3352E0u;
    // 0x3352e0: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3352E0u;
    {
        const bool branch_taken_0x3352e0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3352e0) {
            ctx->pc = 0x3352F0u;
            goto label_3352f0;
        }
    }
    ctx->pc = 0x3352E8u;
    // 0x3352e8: 0x10000222  b           . + 4 + (0x222 << 2)
    ctx->pc = 0x3352E8u;
    {
        const bool branch_taken_0x3352e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3352e8) {
            ctx->pc = 0x335B74u;
            goto label_335b74;
        }
    }
    ctx->pc = 0x3352F0u;
label_3352f0:
    // 0x3352f0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3352f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3352f4: 0x2451e7d0  addiu       $s1, $v0, -0x1830
    ctx->pc = 0x3352f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961104));
    // 0x3352f8: 0xafb10108  sw          $s1, 0x108($sp)
    ctx->pc = 0x3352f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 17));
    // 0x3352fc: 0x8fa2010c  lw          $v0, 0x10C($sp)
    ctx->pc = 0x3352fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x335300: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x335300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x335304: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x335304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x335308: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x335308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33530c: 0xa42233b0  sh          $v0, 0x33B0($at)
    ctx->pc = 0x33530cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8933B0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x8933B0u, _value); } while (0);
    // 0x335310: 0x8fa2010c  lw          $v0, 0x10C($sp)
    ctx->pc = 0x335310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x335314: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x335314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x335318: 0x305effff  andi        $fp, $v0, 0xFFFF
    ctx->pc = 0x335318u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33531c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33531cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x335320: 0xa43e33b4  sh          $fp, 0x33B4($at)
    ctx->pc = 0x335320u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 30)); ps2TraceGuestWrite(rdram, 0x8933B4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x8933B4u, _value); } while (0);
    // 0x335324: 0x8fa6010c  lw          $a2, 0x10C($sp)
    ctx->pc = 0x335324u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x335328: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x335328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x33532c: 0x3047ffff  andi        $a3, $v0, 0xFFFF
    ctx->pc = 0x33532cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x335330: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x335330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x335334: 0xa42733b2  sh          $a3, 0x33B2($at)
    ctx->pc = 0x335334u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x8933B2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x8933B2u, _value); } while (0);
    // 0x335338: 0x8fa2010c  lw          $v0, 0x10C($sp)
    ctx->pc = 0x335338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x33533c: 0x8c570010  lw          $s7, 0x10($v0)
    ctx->pc = 0x33533cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x335340: 0x32f5ffff  andi        $s5, $s7, 0xFFFF
    ctx->pc = 0x335340u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65535);
    // 0x335344: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x335344u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x335348: 0xa43533b6  sh          $s5, 0x33B6($at)
    ctx->pc = 0x335348u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 21)); ps2TraceGuestWrite(rdram, 0x8933B6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x8933B6u, _value); } while (0);
    // 0x33534c: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x33534cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x335350: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x335350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x335354: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x335354u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x335358: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x335358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x33535c: 0x3443103b  ori         $v1, $v0, 0x103B
    ctx->pc = 0x33535cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4155);
    // 0x335360: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x335360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x335364: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x335364u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x335368: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x335368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x33536c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x33536cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x335370: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x335370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x335374: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x335374u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x335378: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x335378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33537c: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x33537cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x335380: 0x24470018  addiu       $a3, $v0, 0x18
    ctx->pc = 0x335380u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x335384: 0x90e60004  lbu         $a2, 0x4($a3)
    ctx->pc = 0x335384u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x335388: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x335388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x33538c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x33538cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x335390: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x335390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x335394: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x335394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x335398: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x335398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x33539c: 0xa0e20004  sb          $v0, 0x4($a3)
    ctx->pc = 0x33539cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x3353a0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3353a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3353a4: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x3353a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x3353a8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3353a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3353ac: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x3353acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x3353b0: 0x34461043  ori         $a2, $v0, 0x1043
    ctx->pc = 0x3353b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4163);
    // 0x3353b4: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x3353b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x3353b8: 0xac460004  sw          $a2, 0x4($v0)
    ctx->pc = 0x3353b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
    // 0x3353bc: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x3353bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x3353c0: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x3353c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x3353c4: 0xfc620008  sd          $v0, 0x8($v1)
    ctx->pc = 0x3353c4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 2));
    // 0x3353c8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3353c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3353cc: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x3353ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x3353d0: 0x3c028800  lui         $v0, 0x8800
    ctx->pc = 0x3353d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34816 << 16));
    // 0x3353d4: 0x34423b14  ori         $v0, $v0, 0x3B14
    ctx->pc = 0x3353d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15124);
    // 0x3353d8: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x3353d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x3353dc: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x3353dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3353e0: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x3353e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x3353e4: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x3353e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x3353e8: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3353e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3353ec: 0x942233b4  lhu         $v0, 0x33B4($at)
    ctx->pc = 0x3353ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x8933B4u));
    // 0x3353f0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x3353f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3353f4: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3353f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3353f8: 0x942233b0  lhu         $v0, 0x33B0($at)
    ctx->pc = 0x3353f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x8933B0u));
    // 0x3353fc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3353fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x335400: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x335400u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x335404: 0xafa200f8  sw          $v0, 0xF8($sp)
    ctx->pc = 0x335404u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
    // 0x335408: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x335408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33540c: 0x942233b6  lhu         $v0, 0x33B6($at)
    ctx->pc = 0x33540cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x8933B6u));
    // 0x335410: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x335410u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x335414: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x335414u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x335418: 0x942633b2  lhu         $a2, 0x33B2($at)
    ctx->pc = 0x335418u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)FAST_READ16(0x8933B2u));
    // 0x33541c: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x33541cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x335420: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x335420u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x335424: 0xafa300fc  sw          $v1, 0xFC($sp)
    ctx->pc = 0x335424u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 3));
    // 0x335428: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x335428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x33542c: 0xafa300e8  sw          $v1, 0xE8($sp)
    ctx->pc = 0x33542cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 3));
    // 0x335430: 0x240300e0  addiu       $v1, $zero, 0xE0
    ctx->pc = 0x335430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x335434: 0xafa300ec  sw          $v1, 0xEC($sp)
    ctx->pc = 0x335434u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 3));
    // 0x335438: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x335438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x33543c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x33543cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x335440: 0x0  nop
    ctx->pc = 0x335440u;
    // NOP
    // 0x335444: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x335444u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x335448: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x335448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x33544c: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x33544cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x335450: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x335450u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x335454: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x335454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x335458: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x335458u;
    {
        const bool branch_taken_0x335458 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x335458) {
            ctx->pc = 0x335474u;
            goto label_335474;
        }
    }
    ctx->pc = 0x335460u;
    // 0x335460: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x335460u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x335464: 0x0  nop
    ctx->pc = 0x335464u;
    // NOP
    // 0x335468: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x335468u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x33546c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x33546Cu;
    {
        const bool branch_taken_0x33546c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33546c) {
            ctx->pc = 0x335490u;
            goto label_335490;
        }
    }
    ctx->pc = 0x335474u;
label_335474:
    // 0x335474: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x335474u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x335478: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x335478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x33547c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x33547cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x335480: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x335480u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x335484: 0x0  nop
    ctx->pc = 0x335484u;
    // NOP
    // 0x335488: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x335488u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x33548c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x33548cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_335490:
    // 0x335490: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x335490u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x335494: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x335494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x335498: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x335498u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33549c: 0x0  nop
    ctx->pc = 0x33549cu;
    // NOP
    // 0x3354a0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3354a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3354a4: 0x46001301  sub.s       $f12, $f2, $f0
    ctx->pc = 0x3354a4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x3354a8: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x3354A8u;
    SET_GPR_U32(ctx, 31, 0x3354B0u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x3354A8u, 0x3354B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3354B0u;
label_3354b0:
    // 0x3354b0: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x3354b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
    // 0x3354b4: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x3354b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x3354b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3354b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3354bc: 0x0  nop
    ctx->pc = 0x3354bcu;
    // NOP
    // 0x3354c0: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3354c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3354c4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x3354c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x3354c8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3354c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3354cc: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x3354ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x3354d0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3354D0u;
    {
        const bool branch_taken_0x3354d0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3354d0) {
            ctx->pc = 0x3354ECu;
            goto label_3354ec;
        }
    }
    ctx->pc = 0x3354D8u;
    // 0x3354d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3354d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3354dc: 0x0  nop
    ctx->pc = 0x3354dcu;
    // NOP
    // 0x3354e0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3354e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3354e4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3354E4u;
    {
        const bool branch_taken_0x3354e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3354e4) {
            ctx->pc = 0x335508u;
            goto label_335508;
        }
    }
    ctx->pc = 0x3354ECu;
label_3354ec:
    // 0x3354ec: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3354ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x3354f0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3354f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3354f4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3354f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3354f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3354f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3354fc: 0x0  nop
    ctx->pc = 0x3354fcu;
    // NOP
    // 0x335500: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x335500u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x335504: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x335504u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_335508:
    // 0x335508: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x335508u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x33550c: 0x46001301  sub.s       $f12, $f2, $f0
    ctx->pc = 0x33550cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x335510: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x335510u;
    SET_GPR_U32(ctx, 31, 0x335518u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x335510u, 0x335518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335518u;
label_335518:
    // 0x335518: 0xafa200ec  sw          $v0, 0xEC($sp)
    ctx->pc = 0x335518u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
    // 0x33551c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x33551cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x335520: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x335520u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x335524: 0x0  nop
    ctx->pc = 0x335524u;
    // NOP
    // 0x335528: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x335528u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x33552c: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x33552cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x335530: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x335530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x335534: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x335534u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x335538: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x335538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x33553c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x33553Cu;
    {
        const bool branch_taken_0x33553c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x33553c) {
            ctx->pc = 0x335558u;
            goto label_335558;
        }
    }
    ctx->pc = 0x335544u;
    // 0x335544: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x335544u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x335548: 0x0  nop
    ctx->pc = 0x335548u;
    // NOP
    // 0x33554c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x33554cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x335550: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x335550u;
    {
        const bool branch_taken_0x335550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x335550) {
            ctx->pc = 0x335574u;
            goto label_335574;
        }
    }
    ctx->pc = 0x335558u;
label_335558:
    // 0x335558: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x335558u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x33555c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x33555cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x335560: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x335560u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x335564: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x335564u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x335568: 0x0  nop
    ctx->pc = 0x335568u;
    // NOP
    // 0x33556c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x33556cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x335570: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x335570u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_335574:
    // 0x335574: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x335574u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x335578: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x335578u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x33557c: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x33557Cu;
    SET_GPR_U32(ctx, 31, 0x335584u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x33557Cu, 0x335584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335584u;
label_335584:
    // 0x335584: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x335584u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
    // 0x335588: 0x8fa300ec  lw          $v1, 0xEC($sp)
    ctx->pc = 0x335588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x33558c: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x33558cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x335590: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x335590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x335594: 0xafa200f4  sw          $v0, 0xF4($sp)
    ctx->pc = 0x335594u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 2));
    // 0x335598: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x335598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x33559c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x33559cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3355a0: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x3355a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x3355a4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x3355a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3355a8: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x3355a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x3355ac: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3355acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3355b0: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x3355b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x3355b4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x3355b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x3355b8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3355b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3355bc: 0x26620018  addiu       $v0, $s3, 0x18
    ctx->pc = 0x3355bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    // 0x3355c0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3355c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3355c4: 0x3403fffb  ori         $v1, $zero, 0xFFFB
    ctx->pc = 0x3355c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65531);
    // 0x3355c8: 0x2662001c  addiu       $v0, $s3, 0x1C
    ctx->pc = 0x3355c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 28));
    // 0x3355cc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3355ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3355d0: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x3355d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x3355d4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3355d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3355d8: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x3355d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x3355dc: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x3355dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3355e0: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x3355e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x3355e4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3355e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3355e8: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x3355e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x3355ec: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x3355ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x3355f0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3355f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3355f4: 0x26620024  addiu       $v0, $s3, 0x24
    ctx->pc = 0x3355f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
    // 0x3355f8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3355f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3355fc: 0x3403fffb  ori         $v1, $zero, 0xFFFB
    ctx->pc = 0x3355fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65531);
    // 0x335600: 0x26620028  addiu       $v0, $s3, 0x28
    ctx->pc = 0x335600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 40));
    // 0x335604: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x335604u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x335608: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x335608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x33560c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x33560cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x335610: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x335610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x335614: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x335614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x335618: 0x8fa200f4  lw          $v0, 0xF4($sp)
    ctx->pc = 0x335618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x33561c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x33561cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x335620: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x335620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x335624: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x335624u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x335628: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x335628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x33562c: 0x26620030  addiu       $v0, $s3, 0x30
    ctx->pc = 0x33562cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x335630: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x335630u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x335634: 0x3403fffb  ori         $v1, $zero, 0xFFFB
    ctx->pc = 0x335634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65531);
    // 0x335638: 0x26620034  addiu       $v0, $s3, 0x34
    ctx->pc = 0x335638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 52));
    // 0x33563c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x33563cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x335640: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x335640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x335644: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x335644u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x335648: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x335648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x33564c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x33564cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x335650: 0x8fa200f4  lw          $v0, 0xF4($sp)
    ctx->pc = 0x335650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x335654: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x335654u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x335658: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x335658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x33565c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x33565cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x335660: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x335660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x335664: 0x2662003c  addiu       $v0, $s3, 0x3C
    ctx->pc = 0x335664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 60));
    // 0x335668: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x335668u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x33566c: 0x3403fffb  ori         $v1, $zero, 0xFFFB
    ctx->pc = 0x33566cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65531);
    // 0x335670: 0x26620040  addiu       $v0, $s3, 0x40
    ctx->pc = 0x335670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x335674: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x335674u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x335678: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x335678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x33567c: 0x34438080  ori         $v1, $v0, 0x8080
    ctx->pc = 0x33567cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x335680: 0x26620010  addiu       $v0, $s3, 0x10
    ctx->pc = 0x335680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x335684: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x335684u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x335688: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x335688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33568c: 0x942233b0  lhu         $v0, 0x33B0($at)
    ctx->pc = 0x33568cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x8933B0u));
    // 0x335690: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x335690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x335694: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x335694u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x335698: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x335698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33569c: 0x942233b2  lhu         $v0, 0x33B2($at)
    ctx->pc = 0x33569cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x8933B2u));
    // 0x3356a0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3356a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3356a4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3356a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3356a8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x3356a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x3356ac: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3356acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3356b0: 0x26620014  addiu       $v0, $s3, 0x14
    ctx->pc = 0x3356b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
    // 0x3356b4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3356b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3356b8: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3356b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3356bc: 0x942233b4  lhu         $v0, 0x33B4($at)
    ctx->pc = 0x3356bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x8933B4u));
    // 0x3356c0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3356c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3356c4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x3356c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3356c8: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3356c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3356cc: 0x942233b2  lhu         $v0, 0x33B2($at)
    ctx->pc = 0x3356ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x8933B2u));
    // 0x3356d0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3356d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3356d4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3356d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3356d8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x3356d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x3356dc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3356dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3356e0: 0x26620020  addiu       $v0, $s3, 0x20
    ctx->pc = 0x3356e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x3356e4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3356e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3356e8: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3356e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3356ec: 0x942233b0  lhu         $v0, 0x33B0($at)
    ctx->pc = 0x3356ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x8933B0u));
    // 0x3356f0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3356f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3356f4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x3356f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3356f8: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3356f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3356fc: 0x942233b6  lhu         $v0, 0x33B6($at)
    ctx->pc = 0x3356fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x8933B6u));
    // 0x335700: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x335700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x335704: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x335704u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x335708: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x335708u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x33570c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x33570cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x335710: 0x2662002c  addiu       $v0, $s3, 0x2C
    ctx->pc = 0x335710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 44));
    // 0x335714: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x335714u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x335718: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x335718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33571c: 0x942233b4  lhu         $v0, 0x33B4($at)
    ctx->pc = 0x33571cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x8933B4u));
    // 0x335720: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x335720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x335724: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x335724u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x335728: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x335728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33572c: 0x942233b6  lhu         $v0, 0x33B6($at)
    ctx->pc = 0x33572cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x8933B6u));
    // 0x335730: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x335730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x335734: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x335734u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x335738: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x335738u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x33573c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x33573cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x335740: 0x26620038  addiu       $v0, $s3, 0x38
    ctx->pc = 0x335740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 56));
    // 0x335744: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x335744u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x335748: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x335748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x33574c: 0x2442e7d0  addiu       $v0, $v0, -0x1830
    ctx->pc = 0x33574cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961104));
    // 0x335750: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x335750u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x335754: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x335754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x335758: 0x72602e28  paddub      $a1, $s3, $zero
    ctx->pc = 0x335758u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x33575c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x33575Cu;
    SET_GPR_U32(ctx, 31, 0x335764u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x33575Cu, 0x335764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335764u;
label_335764:
    // 0x335764: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x335764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x335768: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x335768u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x33576c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x33576Cu;
    SET_GPR_U32(ctx, 31, 0x335774u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x33576Cu, 0x335774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335774u;
label_335774:
    // 0x335774: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x335774u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x335778: 0x8c226570  lw          $v0, 0x6570($at)
    ctx->pc = 0x335778u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x396570u));
    // 0x33577c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33577Cu;
    {
        const bool branch_taken_0x33577c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33577c) {
            ctx->pc = 0x335794u;
            goto label_335794;
        }
    }
    ctx->pc = 0x335784u;
    // 0x335784: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x335784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x335788: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x335788u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x33578c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x33578Cu;
    SET_GPR_U32(ctx, 31, 0x335794u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x33578Cu, 0x335794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335794u;
label_335794:
    // 0x335794: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x335794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x335798: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x335798u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x33579c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x33579Cu;
    SET_GPR_U32(ctx, 31, 0x3357A4u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x33579Cu, 0x3357A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3357A4u;
label_3357a4:
    // 0x3357a4: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x3357a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x3357a8: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x3357a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3357ac: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x3357ACu;
    SET_GPR_U32(ctx, 31, 0x3357B4u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x3357ACu, 0x3357B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3357B4u;
label_3357b4:
    // 0x3357b4: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x3357b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x3357b8: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x3357b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x3357bc: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x3357BCu;
    SET_GPR_U32(ctx, 31, 0x3357C4u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x3357BCu, 0x3357C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3357C4u;
label_3357c4:
    // 0x3357c4: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3357c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3357c8: 0xac203350  sw          $zero, 0x3350($at)
    ctx->pc = 0x3357c8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x893350u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x893350u, _value); } while (0);
    // 0x3357cc: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3357ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3357d0: 0x8c233348  lw          $v1, 0x3348($at)
    ctx->pc = 0x3357d0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x893348u));
    // 0x3357d4: 0x28610014  slti        $at, $v1, 0x14
    ctx->pc = 0x3357d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x3357d8: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x3357D8u;
    {
        const bool branch_taken_0x3357d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3357d8) {
            ctx->pc = 0x33581Cu;
            goto label_33581c;
        }
    }
    ctx->pc = 0x3357E0u;
    // 0x3357e0: 0x3c03bd57  lui         $v1, 0xBD57
    ctx->pc = 0x3357e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48471 << 16));
    // 0x3357e4: 0x34659436  ori         $a1, $v1, 0x9436
    ctx->pc = 0x3357e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)37942);
    // 0x3357e8: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x3357e8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3357ec: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3357ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3357f0: 0x8c243348  lw          $a0, 0x3348($at)
    ctx->pc = 0x3357f0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x893348u));
    // 0x3357f4: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x3357f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3357f8: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3357f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3357fc: 0xac233348  sw          $v1, 0x3348($at)
    ctx->pc = 0x3357fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x893348u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x893348u, _value); } while (0);
    // 0x335800: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x335800u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x335804: 0x0  nop
    ctx->pc = 0x335804u;
    // NOP
    // 0x335808: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x335808u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x33580c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x33580cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x335810: 0xe6005e00  swc1        $f0, 0x5E00($s0)
    ctx->pc = 0x335810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24064), bits); }
    // 0x335814: 0x100000d7  b           . + 4 + (0xD7 << 2)
    ctx->pc = 0x335814u;
    {
        const bool branch_taken_0x335814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x335814) {
            ctx->pc = 0x335B74u;
            goto label_335b74;
        }
    }
    ctx->pc = 0x33581Cu;
label_33581c:
    // 0x33581c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x33581cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x335820: 0xa2025e04  sb          $v0, 0x5E04($s0)
    ctx->pc = 0x335820u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24068), (uint8_t)GPR_U32(ctx, 2));
    // 0x335824: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x335824u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x335828: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x335828u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33582c: 0x0  nop
    ctx->pc = 0x33582cu;
    // NOP
    // 0x335830: 0xe6005e00  swc1        $f0, 0x5E00($s0)
    ctx->pc = 0x335830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24064), bits); }
    // 0x335834: 0x2602663e  addiu       $v0, $s0, 0x663E
    ctx->pc = 0x335834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 26174));
    // 0x335838: 0xafa200e4  sw          $v0, 0xE4($sp)
    ctx->pc = 0x335838u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 2));
    // 0x33583c: 0x9203683f  lbu         $v1, 0x683F($s0)
    ctx->pc = 0x33583cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26687)));
    // 0x335840: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x335840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x335844: 0x82025deb  lb          $v0, 0x5DEB($s0)
    ctx->pc = 0x335844u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24043)));
    // 0x335848: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x335848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x33584c: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x33584cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x335850: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x335850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x335854: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x335854u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x335858: 0x8fa200e4  lw          $v0, 0xE4($sp)
    ctx->pc = 0x335858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x33585c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x33585cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x335860: 0xafa200e4  sw          $v0, 0xE4($sp)
    ctx->pc = 0x335860u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 2));
    // 0x335864: 0x8fa400e4  lw          $a0, 0xE4($sp)
    ctx->pc = 0x335864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x335868: 0x84830002  lh          $v1, 0x2($a0)
    ctx->pc = 0x335868u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x33586c: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x33586cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x335870: 0xa4820002  sh          $v0, 0x2($a0)
    ctx->pc = 0x335870u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x335874: 0x8fa200e4  lw          $v0, 0xE4($sp)
    ctx->pc = 0x335874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x335878: 0x84420002  lh          $v0, 0x2($v0)
    ctx->pc = 0x335878u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x33587c: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x33587cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x335880: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x335880u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x335884: 0x1c800004  bgtz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x335884u;
    {
        const bool branch_taken_0x335884 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x335884) {
            ctx->pc = 0x335898u;
            goto label_335898;
        }
    }
    ctx->pc = 0x33588Cu;
    // 0x33588c: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x33588cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x335890: 0x8fa200e4  lw          $v0, 0xE4($sp)
    ctx->pc = 0x335890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x335894: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x335894u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_335898:
    // 0x335898: 0xc0ce0d8  jal         func_338360
    ctx->pc = 0x335898u;
    SET_GPR_U32(ctx, 31, 0x3358A0u);
    ctx->pc = 0x338360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338360u, 0x335898u, 0x3358A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3358A0u;
label_3358a0:
    // 0x3358a0: 0x26170620  addiu       $s7, $s0, 0x620
    ctx->pc = 0x3358a0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), 1568));
    // 0x3358a4: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3358a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3358a8: 0xac202720  sw          $zero, 0x2720($at)
    ctx->pc = 0x3358a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x892720u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x892720u, _value); } while (0);
    // 0x3358ac: 0x9203683f  lbu         $v1, 0x683F($s0)
    ctx->pc = 0x3358acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26687)));
    // 0x3358b0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3358b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3358b4: 0x7080a628  paddub      $s4, $a0, $zero
    ctx->pc = 0x3358b4u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x3358b8: 0x3c010063  lui         $at, 0x63
    ctx->pc = 0x3358b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)99 << 16));
    // 0x3358bc: 0x9023c98e  lbu         $v1, -0x3672($at)
    ctx->pc = 0x3358bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x62C98Eu));
    // 0x3358c0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3358c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3358c4: 0x749023  subu        $s2, $v1, $s4
    ctx->pc = 0x3358c4u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x3358c8: 0x7000ae28  paddub      $s5, $zero, $zero
    ctx->pc = 0x3358c8u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3358cc: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x3358CCu;
    {
        const bool branch_taken_0x3358cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3358cc) {
            ctx->pc = 0x335980u;
            goto label_335980;
        }
    }
    ctx->pc = 0x3358D4u;
label_3358d4:
    // 0x3358d4: 0x1a40001d  blez        $s2, . + 4 + (0x1D << 2)
    ctx->pc = 0x3358D4u;
    {
        const bool branch_taken_0x3358d4 = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x3358d4) {
            ctx->pc = 0x33594Cu;
            goto label_33594c;
        }
    }
    ctx->pc = 0x3358DCu;
    // 0x3358dc: 0x8e036850  lw          $v1, 0x6850($s0)
    ctx->pc = 0x3358dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26704)));
    // 0x3358e0: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x3358e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x3358e4: 0x2a38821  addu        $s1, $s5, $v1
    ctx->pc = 0x3358e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x3358e8: 0x234082a  slt         $at, $s1, $s4
    ctx->pc = 0x3358e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x3358ec: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x3358ECu;
    {
        const bool branch_taken_0x3358ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3358ec) {
            ctx->pc = 0x3358F8u;
            goto label_3358f8;
        }
    }
    ctx->pc = 0x3358F4u;
    // 0x3358f4: 0x2328821  addu        $s1, $s1, $s2
    ctx->pc = 0x3358f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
label_3358f8:
    // 0x3358f8: 0x2921821  addu        $v1, $s4, $s2
    ctx->pc = 0x3358f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x3358fc: 0x2466ffff  addiu       $a2, $v1, -0x1
    ctx->pc = 0x3358fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x335900: 0xd1082a  slt         $at, $a2, $s1
    ctx->pc = 0x335900u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x335904: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x335904u;
    {
        const bool branch_taken_0x335904 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x335904) {
            ctx->pc = 0x335910u;
            goto label_335910;
        }
    }
    ctx->pc = 0x33590Cu;
    // 0x33590c: 0x2328823  subu        $s1, $s1, $s2
    ctx->pc = 0x33590cu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
label_335910:
    // 0x335910: 0x2921821  addu        $v1, $s4, $s2
    ctx->pc = 0x335910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x335914: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x335914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x335918: 0x51082a  slt         $at, $v0, $s1
    ctx->pc = 0x335918u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x33591c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x33591Cu;
    {
        const bool branch_taken_0x33591c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x33591c) {
            ctx->pc = 0x335928u;
            goto label_335928;
        }
    }
    ctx->pc = 0x335924u;
    // 0x335924: 0x2328823  subu        $s1, $s1, $s2
    ctx->pc = 0x335924u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
label_335928:
    // 0x335928: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x335928u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x33592c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x33592cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x335930: 0x2442663e  addiu       $v0, $v0, 0x663E
    ctx->pc = 0x335930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26174));
    // 0x335934: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x335934u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x335938: 0xc0ce1cc  jal         func_338730
    ctx->pc = 0x335938u;
    SET_GPR_U32(ctx, 31, 0x335940u);
    ctx->pc = 0x338730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338730u, 0x335938u, 0x335940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335940u;
label_335940:
    // 0x335940: 0x7040b628  paddub      $s6, $v0, $zero
    ctx->pc = 0x335940u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x335944: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x335944u;
    {
        const bool branch_taken_0x335944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x335944) {
            ctx->pc = 0x335950u;
            goto label_335950;
        }
    }
    ctx->pc = 0x33594Cu;
label_33594c:
    // 0x33594c: 0x7000b628  paddub      $s6, $zero, $zero
    ctx->pc = 0x33594cu;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_335950:
    // 0x335950: 0x161400  sll         $v0, $s6, 16
    ctx->pc = 0x335950u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 16));
    // 0x335954: 0x345e0096  ori         $fp, $v0, 0x96
    ctx->pc = 0x335954u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)150);
    // 0x335958: 0x8ee60000  lw          $a2, 0x0($s7)
    ctx->pc = 0x335958u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x33595c: 0x73c02628  paddub      $a0, $fp, $zero
    ctx->pc = 0x33595cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
    // 0x335960: 0x3402a800  ori         $v0, $zero, 0xA800
    ctx->pc = 0x335960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)43008);
    // 0x335964: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x335964u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x335968: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x335968u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x33596c: 0xc07648c  jal         func_1D9230
    ctx->pc = 0x33596Cu;
    SET_GPR_U32(ctx, 31, 0x335974u);
    ctx->pc = 0x1D9230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9230u, 0x33596Cu, 0x335974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335974u;
label_335974:
    // 0x335974: 0x26f70008  addiu       $s7, $s7, 0x8
    ctx->pc = 0x335974u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
    // 0x335978: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x335978u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x33597c: 0x0  nop
    ctx->pc = 0x33597cu;
    // NOP
label_335980:
    // 0x335980: 0x2aa60002  slti        $a2, $s5, 0x2
    ctx->pc = 0x335980u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x335984: 0x14c0ffd3  bnez        $a2, . + 4 + (-0x2D << 2)
    ctx->pc = 0x335984u;
    {
        const bool branch_taken_0x335984 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x335984) {
            ctx->pc = 0x3358D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3358d4;
        }
    }
    ctx->pc = 0x33598Cu;
    // 0x33598c: 0x8e035dd0  lw          $v1, 0x5DD0($s0)
    ctx->pc = 0x33598cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24016)));
    // 0x335990: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x335990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x335994: 0xae035dd0  sw          $v1, 0x5DD0($s0)
    ctx->pc = 0x335994u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24016), GPR_U32(ctx, 3));
    // 0x335998: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x335998u;
    {
        const bool branch_taken_0x335998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x335998) {
            ctx->pc = 0x335B74u;
            goto label_335b74;
        }
    }
    ctx->pc = 0x3359A0u;
label_3359a0:
    // 0x3359a0: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3359a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3359a4: 0x8c223350  lw          $v0, 0x3350($at)
    ctx->pc = 0x3359a4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x893350u));
    // 0x3359a8: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x3359A8u;
    {
        const bool branch_taken_0x3359a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3359a8) {
            ctx->pc = 0x335A6Cu;
            goto label_335a6c;
        }
    }
    ctx->pc = 0x3359B0u;
    // 0x3359b0: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3359b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3359b4: 0xac203358  sw          $zero, 0x3358($at)
    ctx->pc = 0x3359b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x893358u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x893358u, _value); } while (0);
    // 0x3359b8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3359b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3359bc: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3359bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3359c0: 0xa0223368  sb          $v0, 0x3368($at)
    ctx->pc = 0x3359c0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x893368u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x893368u, _value); } while (0);
    // 0x3359c4: 0x3c033cf5  lui         $v1, 0x3CF5
    ctx->pc = 0x3359c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15605 << 16));
    // 0x3359c8: 0x3462c28f  ori         $v0, $v1, 0xC28F
    ctx->pc = 0x3359c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49807);
    // 0x3359cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3359ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3359d0: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3359d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3359d4: 0xe4203364  swc1        $f0, 0x3364($at)
    ctx->pc = 0x3359d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x893364u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x893364u, _value); } while (0); }
    // 0x3359d8: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x3359d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3359dc: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3359dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3359e0: 0xa0223369  sb          $v0, 0x3369($at)
    ctx->pc = 0x3359e0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x893369u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x893369u, _value); } while (0);
    // 0x3359e4: 0x3c023d80  lui         $v0, 0x3D80
    ctx->pc = 0x3359e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15744 << 16));
    // 0x3359e8: 0x3443adfd  ori         $v1, $v0, 0xADFD
    ctx->pc = 0x3359e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44541);
    // 0x3359ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3359ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3359f0: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3359f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3359f4: 0xe4203360  swc1        $f0, 0x3360($at)
    ctx->pc = 0x3359f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x893360u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x893360u, _value); } while (0); }
    // 0x3359f8: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x3359f8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x3359fc: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x3359fcu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x335a00: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x335a00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x335a04: 0xe420336c  swc1        $f0, 0x336C($at)
    ctx->pc = 0x335a04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x89336Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x89336Cu, _value); } while (0); }
    // 0x335a08: 0x3c064000  lui         $a2, 0x4000
    ctx->pc = 0x335a08u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16384 << 16));
    // 0x335a0c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x335a0cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x335a10: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x335a10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x335a14: 0xe4203370  swc1        $f0, 0x3370($at)
    ctx->pc = 0x335a14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x893370u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x893370u, _value); } while (0); }
    // 0x335a18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x335a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x335a1c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x335a1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x335a20: 0xa0223375  sb          $v0, 0x3375($at)
    ctx->pc = 0x335a20u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x893375u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x893375u, _value); } while (0);
    // 0x335a24: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x335a24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x335a28: 0x24626158  addiu       $v0, $v1, 0x6158
    ctx->pc = 0x335a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 24920));
    // 0x335a2c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x335a2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x335a30: 0xac223380  sw          $v0, 0x3380($at)
    ctx->pc = 0x335a30u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x893380u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x893380u, _value); } while (0);
    // 0x335a34: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x335a34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x335a38: 0x24423388  addiu       $v0, $v0, 0x3388
    ctx->pc = 0x335a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13192));
    // 0x335a3c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x335a3cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x335a40: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x335a40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x335a44: 0x2462e7d0  addiu       $v0, $v1, -0x1830
    ctx->pc = 0x335a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961104));
    // 0x335a48: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x335a48u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x335a4c: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x335a4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x335a50: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x335A50u;
    SET_GPR_U32(ctx, 31, 0x335A58u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x335A58u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x335A58u) { return; }
    ctx->pc = 0x335A58u;
label_335a58:
    // 0x335a58: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x335a58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x335a5c: 0x8c223350  lw          $v0, 0x3350($at)
    ctx->pc = 0x335a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x893350u));
    // 0x335a60: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x335a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x335a64: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x335a64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x335a68: 0xac223350  sw          $v0, 0x3350($at)
    ctx->pc = 0x335a68u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x893350u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x893350u, _value); } while (0);
label_335a6c:
    // 0x335a6c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x335a6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x335a70: 0x8c23013c  lw          $v1, 0x13C($at)
    ctx->pc = 0x335a70u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x335a74: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x335a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x335a78: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x335a78u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x335a7c: 0x0  nop
    ctx->pc = 0x335a7cu;
    // NOP
    // 0x335a80: 0x0  nop
    ctx->pc = 0x335a80u;
    // NOP
    // 0x335a84: 0x1010  mfhi        $v0
    ctx->pc = 0x335a84u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x335a88: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x335A88u;
    {
        const bool branch_taken_0x335a88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x335a88) {
            ctx->pc = 0x335AE4u;
            goto label_335ae4;
        }
    }
    ctx->pc = 0x335A90u;
    // 0x335a90: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x335a90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x335a94: 0x8c223358  lw          $v0, 0x3358($at)
    ctx->pc = 0x335a94u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x893358u));
    // 0x335a98: 0x24420027  addiu       $v0, $v0, 0x27
    ctx->pc = 0x335a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 39));
    // 0x335a9c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x335a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x335aa0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x335aa0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x335aa4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x335aa4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x335aa8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x335aa8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x335aac: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x335aacu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x335ab0: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x335AB0u;
    SET_GPR_U32(ctx, 31, 0x335AB8u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x335AB0u, 0x335AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335AB8u;
label_335ab8:
    // 0x335ab8: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x335ab8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x335abc: 0x8c233358  lw          $v1, 0x3358($at)
    ctx->pc = 0x335abcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x893358u));
    // 0x335ac0: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x335ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x335ac4: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x335ac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x335ac8: 0xac223358  sw          $v0, 0x3358($at)
    ctx->pc = 0x335ac8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x893358u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x893358u, _value); } while (0);
    // 0x335acc: 0x2c410005  sltiu       $at, $v0, 0x5
    ctx->pc = 0x335accu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x335ad0: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x335AD0u;
    {
        const bool branch_taken_0x335ad0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x335ad0) {
            ctx->pc = 0x335AE4u;
            goto label_335ae4;
        }
    }
    ctx->pc = 0x335AD8u;
    // 0x335ad8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x335ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x335adc: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x335adcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x335ae0: 0xac223358  sw          $v0, 0x3358($at)
    ctx->pc = 0x335ae0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x893358u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x893358u, _value); } while (0);
label_335ae4:
    // 0x335ae4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x335ae4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x335ae8: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x335ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x335aec: 0x24423360  addiu       $v0, $v0, 0x3360
    ctx->pc = 0x335aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13152));
    // 0x335af0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x335af0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x335af4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x335af4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x335af8: 0x3c030089  lui         $v1, 0x89
    ctx->pc = 0x335af8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)137 << 16));
    // 0x335afc: 0x24663380  addiu       $a2, $v1, 0x3380
    ctx->pc = 0x335afcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 13184));
    // 0x335b00: 0xc0a4474  jal         func_2911D0
    ctx->pc = 0x335B00u;
    SET_GPR_U32(ctx, 31, 0x335B08u);
    ctx->pc = 0x2911D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2911D0u, 0x335B00u, 0x335B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335B08u;
label_335b08:
    // 0x335b08: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x335B08u;
    {
        const bool branch_taken_0x335b08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x335b08) {
            ctx->pc = 0x335B1Cu;
            goto label_335b1c;
        }
    }
    ctx->pc = 0x335B10u;
    // 0x335b10: 0x8e035dd0  lw          $v1, 0x5DD0($s0)
    ctx->pc = 0x335b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24016)));
    // 0x335b14: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x335b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x335b18: 0xae035dd0  sw          $v1, 0x5DD0($s0)
    ctx->pc = 0x335b18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24016), GPR_U32(ctx, 3));
label_335b1c:
    // 0x335b1c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x335b1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x335b20: 0xc4213340  lwc1        $f1, 0x3340($at)
    ctx->pc = 0x335b20u;
    { uint32_t bits = FAST_READ32(0x893340u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x335b24: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x335b24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x335b28: 0xc4203364  lwc1        $f0, 0x3364($at)
    ctx->pc = 0x335b28u;
    { uint32_t bits = FAST_READ32(0x893364u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x335b2c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x335b2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x335b30: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x335b30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x335b34: 0xe4203340  swc1        $f0, 0x3340($at)
    ctx->pc = 0x335b34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x893340u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x893340u, _value); } while (0); }
    // 0x335b38: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x335B38u;
    {
        const bool branch_taken_0x335b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x335b38) {
            ctx->pc = 0x335B74u;
            goto label_335b74;
        }
    }
    ctx->pc = 0x335B40u;
label_335b40:
    // 0x335b40: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x335b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x335b44: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x335b44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x335b48: 0xac239a08  sw          $v1, -0x65F8($at)
    ctx->pc = 0x335b48u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3A9A08u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3A9A08u, _value); } while (0);
    // 0x335b4c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x335b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x335b50: 0xae035dc8  sw          $v1, 0x5DC8($s0)
    ctx->pc = 0x335b50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24008), GPR_U32(ctx, 3));
    // 0x335b54: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x335b54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x335b58: 0x0  nop
    ctx->pc = 0x335b58u;
    // NOP
    // 0x335b5c: 0xe6005e00  swc1        $f0, 0x5E00($s0)
    ctx->pc = 0x335b5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24064), bits); }
    // 0x335b60: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x335b60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x335b64: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x335b64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x335b68: 0xe4203340  swc1        $f0, 0x3340($at)
    ctx->pc = 0x335b68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x893340u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x893340u, _value); } while (0); }
    // 0x335b6c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x335b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x335b70: 0xa20365a8  sb          $v1, 0x65A8($s0)
    ctx->pc = 0x335b70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26024), (uint8_t)GPR_U32(ctx, 3));
label_335b74:
    // 0x335b74: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x335b74u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x335b78: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x335b78u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x335b7c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x335b7cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x335b80: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x335b80u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x335b84: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x335b84u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x335b88: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x335b88u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x335b8c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x335b8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x335b90: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x335b90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x335b94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x335b94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x335b98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x335b98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x335b9c: 0x27bd0110  addiu       $sp, $sp, 0x110
    ctx->pc = 0x335b9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x335ba0: 0x3e00008  jr          $ra
    ctx->pc = 0x335BA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335BA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x335BA8u;
}
