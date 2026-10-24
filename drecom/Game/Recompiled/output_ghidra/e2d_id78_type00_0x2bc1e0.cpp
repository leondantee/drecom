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

// Function: e2d_id78_type00
// Address: 0x2bc1e0 - 0x2bc360
void e2d_id78_type00_0x2bc1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id78_type00_0x2bc1e0");
#endif

    switch (ctx->pc) {
        case 0x2bc224u: goto label_2bc224;
        case 0x2bc310u: goto label_2bc310;
        case 0x2bc320u: goto label_2bc320;
        default: break;
    }

    ctx->pc = 0x2bc1e0u;

    // 0x2bc1e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bc1e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bc1e4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2bc1e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2bc1e8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2bc1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2bc1ec: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2bc1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x2bc1f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bc1f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bc1f4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bc1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bc1f8: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2bc1f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2bc1fc: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x2bc1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x2bc200: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bc200u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bc204: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bc204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bc208: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2bc208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2bc20c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2bc20cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2bc210: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bc210u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bc214: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bc214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bc218: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2bc218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2bc21c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2BC21Cu;
    SET_GPR_U32(ctx, 31, 0x2BC224u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2BC21Cu, 0x2BC224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC224u;
label_2bc224:
    // 0x2bc224: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2bc224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2bc228: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2bc228u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bc22c: 0x0  nop
    ctx->pc = 0x2bc22cu;
    // NOP
    // 0x2bc230: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2bc230u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bc234: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2bc234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2bc238: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bc238u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bc23c: 0x0  nop
    ctx->pc = 0x2bc23cu;
    // NOP
    // 0x2bc240: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bc240u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bc244: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bc244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bc248: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x2bc248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x2bc24c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bc24cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bc250: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2bc250u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2bc254: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2bc254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2bc258: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2bc258u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2bc25c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2bc25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bc260: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2bc260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2bc264: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2bc264u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2bc268: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bc268u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bc26c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2bc26cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2bc270: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2bc270u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2bc274: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2bc274u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2bc278: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2bc278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bc27c: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2bc27cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2bc280: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2bc280u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2bc284: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2bc284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2bc288: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bc288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bc28c: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2bc28cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2bc290: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2bc290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2bc294: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2bc294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2bc298: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2bc298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2bc29c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bc29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bc2a0: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x2bc2a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bc2a4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bc2a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bc2a8: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2bc2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2bc2ac: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2bc2acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2bc2b0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2bc2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2bc2b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2bc2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bc2b8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2bc2b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2bc2bc: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2bc2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2bc2c0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bc2c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bc2c4: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2bc2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2bc2c8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2bc2c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2bc2cc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2bc2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2bc2d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2bc2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bc2d4: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2bc2d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2bc2d8: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2bc2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2bc2dc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2bc2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2bc2e0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bc2e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bc2e4: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2bc2e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2bc2e8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2bc2e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2bc2ec: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2bc2ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2bc2f0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2bc2f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2bc2f4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bc2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bc2f8: 0xa043011a  sb          $v1, 0x11A($v0)
    ctx->pc = 0x2bc2f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bc2fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2bc2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bc300: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bc300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bc304: 0xa043011e  sb          $v1, 0x11E($v0)
    ctx->pc = 0x2bc304u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 286), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bc308: 0xc067648  jal         func_19D920
    ctx->pc = 0x2BC308u;
    SET_GPR_U32(ctx, 31, 0x2BC310u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2BC308u, 0x2BC310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC310u;
label_2bc310:
    // 0x2bc310: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bc310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bc314: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x2bc314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x2bc318: 0xc067648  jal         func_19D920
    ctx->pc = 0x2BC318u;
    SET_GPR_U32(ctx, 31, 0x2BC320u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2BC318u, 0x2BC320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC320u;
label_2bc320:
    // 0x2bc320: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x2bc320u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x2bc324: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2bc324u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2bc328: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2bc328u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bc32c: 0x0  nop
    ctx->pc = 0x2bc32cu;
    // NOP
    // 0x2bc330: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2bc330u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bc334: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bc334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bc338: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x2bc338u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x2bc33c: 0x3c03bb44  lui         $v1, 0xBB44
    ctx->pc = 0x2bc33cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47940 << 16));
    // 0x2bc340: 0x34639ba6  ori         $v1, $v1, 0x9BA6
    ctx->pc = 0x2bc340u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39846);
    // 0x2bc344: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bc344u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bc348: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bc348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bc34c: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2bc34cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2bc350: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2bc350u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bc354: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2bc354u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2bc358: 0x3e00008  jr          $ra
    ctx->pc = 0x2BC358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BC358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BC360u;
}
