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

// Function: e2d_id83_type00
// Address: 0x2bd250 - 0x2bd3f0
void e2d_id83_type00_0x2bd250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id83_type00_0x2bd250");
#endif

    switch (ctx->pc) {
        case 0x2bd264u: goto label_2bd264;
        case 0x2bd294u: goto label_2bd294;
        case 0x2bd2c0u: goto label_2bd2c0;
        case 0x2bd2f8u: goto label_2bd2f8;
        default: break;
    }

    ctx->pc = 0x2bd250u;

    // 0x2bd250: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bd250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bd254: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2bd254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2bd258: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2bd258u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2bd25c: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2BD25Cu;
    SET_GPR_U32(ctx, 31, 0x2BD264u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2BD25Cu, 0x2BD264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD264u;
label_2bd264:
    // 0x2bd264: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x2bd264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x2bd268: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2bd268u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bd26c: 0x0  nop
    ctx->pc = 0x2bd26cu;
    // NOP
    // 0x2bd270: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2bd270u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bd274: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x2bd274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x2bd278: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bd278u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd27c: 0x0  nop
    ctx->pc = 0x2bd27cu;
    // NOP
    // 0x2bd280: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bd280u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bd284: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bd284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bd288: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x2bd288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x2bd28c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2BD28Cu;
    SET_GPR_U32(ctx, 31, 0x2BD294u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2BD28Cu, 0x2BD294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD294u;
label_2bd294:
    // 0x2bd294: 0x3c024413  lui         $v0, 0x4413
    ctx->pc = 0x2bd294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17427 << 16));
    // 0x2bd298: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2bd298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2bd29c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2bd29cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bd2a0: 0x0  nop
    ctx->pc = 0x2bd2a0u;
    // NOP
    // 0x2bd2a4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2bd2a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bd2a8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bd2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bd2ac: 0xc44000b0  lwc1        $f0, 0xB0($v0)
    ctx->pc = 0x2bd2acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bd2b0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bd2b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bd2b4: 0xe44000b0  swc1        $f0, 0xB0($v0)
    ctx->pc = 0x2bd2b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 176), bits); }
    // 0x2bd2b8: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2BD2B8u;
    SET_GPR_U32(ctx, 31, 0x2BD2C0u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2BD2B8u, 0x2BD2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD2C0u;
label_2bd2c0:
    // 0x2bd2c0: 0x3c0243be  lui         $v0, 0x43BE
    ctx->pc = 0x2bd2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17342 << 16));
    // 0x2bd2c4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2bd2c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bd2c8: 0x0  nop
    ctx->pc = 0x2bd2c8u;
    // NOP
    // 0x2bd2cc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2bd2ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bd2d0: 0x3c02435c  lui         $v0, 0x435C
    ctx->pc = 0x2bd2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17244 << 16));
    // 0x2bd2d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bd2d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd2d8: 0x0  nop
    ctx->pc = 0x2bd2d8u;
    // NOP
    // 0x2bd2dc: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2bd2dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bd2e0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bd2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bd2e4: 0xc44000b4  lwc1        $f0, 0xB4($v0)
    ctx->pc = 0x2bd2e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bd2e8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bd2e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bd2ec: 0xe44000b4  swc1        $f0, 0xB4($v0)
    ctx->pc = 0x2bd2ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 180), bits); }
    // 0x2bd2f0: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2BD2F0u;
    SET_GPR_U32(ctx, 31, 0x2BD2F8u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2BD2F0u, 0x2BD2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD2F8u;
label_2bd2f8:
    // 0x2bd2f8: 0x3c034413  lui         $v1, 0x4413
    ctx->pc = 0x2bd2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17427 << 16));
    // 0x2bd2fc: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x2bd2fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x2bd300: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2bd300u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bd304: 0x0  nop
    ctx->pc = 0x2bd304u;
    // NOP
    // 0x2bd308: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2bd308u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bd30c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bd30cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bd310: 0xc46000b8  lwc1        $f0, 0xB8($v1)
    ctx->pc = 0x2bd310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bd314: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bd314u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bd318: 0xe46000b8  swc1        $f0, 0xB8($v1)
    ctx->pc = 0x2bd318u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 184), bits); }
    // 0x2bd31c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bd31cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bd320: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2bd320u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2bd324: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2bd324u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2bd328: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2bd328u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2bd32c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2bd32cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2bd330: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2bd330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2bd334: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2bd334u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2bd338: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bd338u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bd33c: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2bd33cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2bd340: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2bd340u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2bd344: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2bd344u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2bd348: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2bd348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2bd34c: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2bd34cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2bd350: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2bd350u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2bd354: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2bd354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2bd358: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bd358u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bd35c: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2bd35cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2bd360: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2bd360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2bd364: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2bd364u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2bd368: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x2bd368u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2bd36c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2bd36cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bd370: 0x9083011a  lbu         $v1, 0x11A($a0)
    ctx->pc = 0x2bd370u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 282)));
    // 0x2bd374: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2bd374u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2bd378: 0xa083011a  sb          $v1, 0x11A($a0)
    ctx->pc = 0x2bd378u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 282), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bd37c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bd37cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bd380: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2bd380u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2bd384: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2bd384u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2bd388: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2bd388u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2bd38c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2bd38cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2bd390: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2bd390u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2bd394: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2bd394u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2bd398: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bd398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bd39c: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2bd39cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2bd3a0: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2bd3a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2bd3a4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2bd3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2bd3a8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2bd3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2bd3ac: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2bd3acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2bd3b0: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2bd3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2bd3b4: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2bd3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2bd3b8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bd3b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bd3bc: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2bd3bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2bd3c0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2bd3c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2bd3c4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2bd3c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2bd3c8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2bd3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2bd3cc: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x2bd3ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2bd3d0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2bd3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bd3d4: 0x9083011a  lbu         $v1, 0x11A($a0)
    ctx->pc = 0x2bd3d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 282)));
    // 0x2bd3d8: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2bd3d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2bd3dc: 0xa083011a  sb          $v1, 0x11A($a0)
    ctx->pc = 0x2bd3dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 282), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bd3e0: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2bd3e0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bd3e4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2bd3e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2bd3e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2BD3E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BD3E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BD3F0u;
}
