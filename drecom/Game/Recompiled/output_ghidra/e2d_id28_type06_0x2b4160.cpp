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

// Function: e2d_id28_type06
// Address: 0x2b4160 - 0x2b42d4
void e2d_id28_type06_0x2b4160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id28_type06_0x2b4160");
#endif

    switch (ctx->pc) {
        case 0x2b41b0u: goto label_2b41b0;
        default: break;
    }

    ctx->pc = 0x2b4160u;

    // 0x2b4160: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b4160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b4164: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2b4164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2b4168: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2b4168u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2b416c: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x2b416cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x2b4170: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b4170u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4174: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b4174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b4178: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2b4178u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2b417c: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x2b417cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x2b4180: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b4180u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4184: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b4184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b4188: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2b4188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2b418c: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x2b418cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x2b4190: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b4190u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4194: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b4194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b4198: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2b4198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2b419c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2b419cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b41a0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b41a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b41a4: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x2b41a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b41a8: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2B41A8u;
    SET_GPR_U32(ctx, 31, 0x2B41B0u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2B41A8u, 0x2B41B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B41B0u;
label_2b41b0:
    // 0x2b41b0: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2b41b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x2b41b4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b41b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b41b8: 0x0  nop
    ctx->pc = 0x2b41b8u;
    // NOP
    // 0x2b41bc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b41bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b41c0: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x2b41c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x2b41c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b41c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b41c8: 0x0  nop
    ctx->pc = 0x2b41c8u;
    // NOP
    // 0x2b41cc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b41ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b41d0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b41d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b41d4: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b41d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b41d8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2b41d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b41dc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b41dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b41e0: 0xa064011d  sb          $a0, 0x11D($v1)
    ctx->pc = 0x2b41e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 285), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b41e4: 0x3c034170  lui         $v1, 0x4170
    ctx->pc = 0x2b41e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16752 << 16));
    // 0x2b41e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b41e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b41ec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b41ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b41f0: 0xe4600058  swc1        $f0, 0x58($v1)
    ctx->pc = 0x2b41f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 88), bits); }
    // 0x2b41f4: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2b41f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2b41f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b41f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b41fc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b41fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b4200: 0xe4600060  swc1        $f0, 0x60($v1)
    ctx->pc = 0x2b4200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 96), bits); }
    // 0x2b4204: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x2b4204u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x2b4208: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b4208u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b420c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b420cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b4210: 0xe4600064  swc1        $f0, 0x64($v1)
    ctx->pc = 0x2b4210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 100), bits); }
    // 0x2b4214: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x2b4214u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x2b4218: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b4218u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b421c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b421cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b4220: 0xe4600068  swc1        $f0, 0x68($v1)
    ctx->pc = 0x2b4220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 104), bits); }
    // 0x2b4224: 0x3c033f7d  lui         $v1, 0x3F7D
    ctx->pc = 0x2b4224u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16253 << 16));
    // 0x2b4228: 0x346370a4  ori         $v1, $v1, 0x70A4
    ctx->pc = 0x2b4228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28836);
    // 0x2b422c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b422cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4230: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b4230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b4234: 0xe4600070  swc1        $f0, 0x70($v1)
    ctx->pc = 0x2b4234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 112), bits); }
    // 0x2b4238: 0x3c033f7d  lui         $v1, 0x3F7D
    ctx->pc = 0x2b4238u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16253 << 16));
    // 0x2b423c: 0x346370a4  ori         $v1, $v1, 0x70A4
    ctx->pc = 0x2b423cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28836);
    // 0x2b4240: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b4240u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4244: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b4244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b4248: 0xe4600074  swc1        $f0, 0x74($v1)
    ctx->pc = 0x2b4248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 116), bits); }
    // 0x2b424c: 0x3c033f7d  lui         $v1, 0x3F7D
    ctx->pc = 0x2b424cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16253 << 16));
    // 0x2b4250: 0x346370a4  ori         $v1, $v1, 0x70A4
    ctx->pc = 0x2b4250u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28836);
    // 0x2b4254: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b4254u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4258: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b4258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b425c: 0xe4600078  swc1        $f0, 0x78($v1)
    ctx->pc = 0x2b425cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 120), bits); }
    // 0x2b4260: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b4260u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b4264: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2b4264u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2b4268: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2b4268u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b426c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b426cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b4270: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b4270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b4274: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b4274u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b4278: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2b4278u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2b427c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b427cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b4280: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2b4280u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2b4284: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2b4284u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b4288: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b4288u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b428c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b428cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b4290: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2b4290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2b4294: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2b4294u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2b4298: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2b4298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2b429c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b429cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b42a0: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2b42a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2b42a4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b42a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b42a8: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2b42a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2b42ac: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2b42acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b42b0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b42b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b42b4: 0xa064011a  sb          $a0, 0x11A($v1)
    ctx->pc = 0x2b42b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 282), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b42b8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b42b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b42bc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b42bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b42c0: 0xa064013a  sb          $a0, 0x13A($v1)
    ctx->pc = 0x2b42c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 314), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b42c4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2b42c4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b42c8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b42c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b42cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2B42CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B42CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B42D4u;
}
