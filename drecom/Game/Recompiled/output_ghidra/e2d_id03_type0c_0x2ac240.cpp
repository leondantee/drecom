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

// Function: e2d_id03_type0c
// Address: 0x2ac240 - 0x2ac408
void e2d_id03_type0c_0x2ac240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id03_type0c_0x2ac240");
#endif

    switch (ctx->pc) {
        case 0x2ac2e0u: goto label_2ac2e0;
        default: break;
    }

    ctx->pc = 0x2ac240u;

    // 0x2ac240: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ac240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ac244: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2ac244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2ac248: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2ac248u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2ac24c: 0x3c0242b0  lui         $v0, 0x42B0
    ctx->pc = 0x2ac24cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17072 << 16));
    // 0x2ac250: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ac250u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ac254: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ac254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ac258: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2ac258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2ac25c: 0x3c0242b0  lui         $v0, 0x42B0
    ctx->pc = 0x2ac25cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17072 << 16));
    // 0x2ac260: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ac260u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ac264: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ac264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ac268: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2ac268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2ac26c: 0x3c0242d8  lui         $v0, 0x42D8
    ctx->pc = 0x2ac26cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17112 << 16));
    // 0x2ac270: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ac270u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ac274: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ac274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ac278: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2ac278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2ac27c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2ac27cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2ac280: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ac280u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ac284: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ac284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ac288: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2ac288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2ac28c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2ac28cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2ac290: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ac290u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ac294: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ac294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ac298: 0xe44000a0  swc1        $f0, 0xA0($v0)
    ctx->pc = 0x2ac298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 160), bits); }
    // 0x2ac29c: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x2ac29cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x2ac2a0: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2ac2a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2ac2a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ac2a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ac2a8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ac2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ac2ac: 0xe44000a4  swc1        $f0, 0xA4($v0)
    ctx->pc = 0x2ac2acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 164), bits); }
    // 0x2ac2b0: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x2ac2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x2ac2b4: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2ac2b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2ac2b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ac2b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ac2bc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ac2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ac2c0: 0xe44000a8  swc1        $f0, 0xA8($v0)
    ctx->pc = 0x2ac2c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 168), bits); }
    // 0x2ac2c4: 0x3c023f6e  lui         $v0, 0x3F6E
    ctx->pc = 0x2ac2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16238 << 16));
    // 0x2ac2c8: 0x3442147b  ori         $v0, $v0, 0x147B
    ctx->pc = 0x2ac2c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5243);
    // 0x2ac2cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ac2ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ac2d0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ac2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ac2d4: 0xe44000ac  swc1        $f0, 0xAC($v0)
    ctx->pc = 0x2ac2d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
    // 0x2ac2d8: 0xc067648  jal         func_19D920
    ctx->pc = 0x2AC2D8u;
    SET_GPR_U32(ctx, 31, 0x2AC2E0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2AC2D8u, 0x2AC2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC2E0u;
label_2ac2e0:
    // 0x2ac2e0: 0x3c0342a0  lui         $v1, 0x42A0
    ctx->pc = 0x2ac2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17056 << 16));
    // 0x2ac2e4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ac2e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ac2e8: 0x0  nop
    ctx->pc = 0x2ac2e8u;
    // NOP
    // 0x2ac2ec: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ac2ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ac2f0: 0x3c0343b9  lui         $v1, 0x43B9
    ctx->pc = 0x2ac2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17337 << 16));
    // 0x2ac2f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ac2f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ac2f8: 0x0  nop
    ctx->pc = 0x2ac2f8u;
    // NOP
    // 0x2ac2fc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ac2fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ac300: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ac300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ac304: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2ac304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2ac308: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2ac308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2ac30c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ac30cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ac310: 0xac640100  sw          $a0, 0x100($v1)
    ctx->pc = 0x2ac310u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 4));
    // 0x2ac314: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2ac314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ac318: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ac318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ac31c: 0xa0640138  sb          $a0, 0x138($v1)
    ctx->pc = 0x2ac31cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 312), (uint8_t)GPR_U32(ctx, 4));
    // 0x2ac320: 0x3c03bd75  lui         $v1, 0xBD75
    ctx->pc = 0x2ac320u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48501 << 16));
    // 0x2ac324: 0x3463c28f  ori         $v1, $v1, 0xC28F
    ctx->pc = 0x2ac324u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49807);
    // 0x2ac328: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ac328u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ac32c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ac32cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ac330: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2ac330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2ac334: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ac334u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ac338: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2ac338u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2ac33c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2ac33cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ac340: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ac340u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ac344: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ac344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ac348: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2ac348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ac34c: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2ac34cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2ac350: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ac350u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ac354: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2ac354u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2ac358: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2ac358u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ac35c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ac35cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ac360: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ac360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ac364: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2ac364u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2ac368: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2ac368u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2ac36c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2ac36cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2ac370: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ac370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ac374: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2ac374u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2ac378: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2ac378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ac37c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2ac37cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2ac380: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x2ac380u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ac384: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2ac384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ac388: 0x9083011a  lbu         $v1, 0x11A($a0)
    ctx->pc = 0x2ac388u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 282)));
    // 0x2ac38c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2ac38cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2ac390: 0xa083011a  sb          $v1, 0x11A($a0)
    ctx->pc = 0x2ac390u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 282), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ac394: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ac394u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ac398: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2ac398u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2ac39c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2ac39cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ac3a0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ac3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ac3a4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ac3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ac3a8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2ac3a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ac3ac: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2ac3acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2ac3b0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ac3b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ac3b4: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2ac3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2ac3b8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2ac3b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ac3bc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ac3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ac3c0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ac3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ac3c4: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2ac3c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2ac3c8: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2ac3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2ac3cc: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2ac3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2ac3d0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ac3d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ac3d4: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2ac3d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2ac3d8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2ac3d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ac3dc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2ac3dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2ac3e0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2ac3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2ac3e4: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x2ac3e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ac3e8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2ac3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ac3ec: 0x9083011a  lbu         $v1, 0x11A($a0)
    ctx->pc = 0x2ac3ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 282)));
    // 0x2ac3f0: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2ac3f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2ac3f4: 0xa083011a  sb          $v1, 0x11A($a0)
    ctx->pc = 0x2ac3f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 282), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ac3f8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2ac3f8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ac3fc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2ac3fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2ac400: 0x3e00008  jr          $ra
    ctx->pc = 0x2AC400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AC408u;
}
