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

// Function: e2d_id04_type01
// Address: 0x2ad320 - 0x2ad4a0
void e2d_id04_type01_0x2ad320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id04_type01_0x2ad320");
#endif

    switch (ctx->pc) {
        case 0x2ad3e4u: goto label_2ad3e4;
        default: break;
    }

    ctx->pc = 0x2ad320u;

    // 0x2ad320: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ad320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ad324: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2ad324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2ad328: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2ad328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2ad32c: 0x3c0242c0  lui         $v0, 0x42C0
    ctx->pc = 0x2ad32cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17088 << 16));
    // 0x2ad330: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ad330u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad334: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ad334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ad338: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2ad338u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2ad33c: 0x3c0242c0  lui         $v0, 0x42C0
    ctx->pc = 0x2ad33cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17088 << 16));
    // 0x2ad340: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ad340u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad344: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ad344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ad348: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2ad348u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2ad34c: 0x3c0242c0  lui         $v0, 0x42C0
    ctx->pc = 0x2ad34cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17088 << 16));
    // 0x2ad350: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ad350u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad354: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ad354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ad358: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2ad358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2ad35c: 0x3c0242c0  lui         $v0, 0x42C0
    ctx->pc = 0x2ad35cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17088 << 16));
    // 0x2ad360: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ad360u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad364: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ad364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ad368: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2ad368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2ad36c: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x2ad36cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x2ad370: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x2ad370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x2ad374: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ad374u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad378: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ad378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ad37c: 0xe44000ac  swc1        $f0, 0xAC($v0)
    ctx->pc = 0x2ad37cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
    // 0x2ad380: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x2ad380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x2ad384: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ad384u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad388: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ad388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ad38c: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x2ad38cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x2ad390: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2ad390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2ad394: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ad394u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad398: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ad398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ad39c: 0xe4400060  swc1        $f0, 0x60($v0)
    ctx->pc = 0x2ad39cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 96), bits); }
    // 0x2ad3a0: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2ad3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2ad3a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ad3a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad3a8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ad3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ad3ac: 0xe4400064  swc1        $f0, 0x64($v0)
    ctx->pc = 0x2ad3acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 100), bits); }
    // 0x2ad3b0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2ad3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2ad3b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ad3b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad3b8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ad3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ad3bc: 0xe4400068  swc1        $f0, 0x68($v0)
    ctx->pc = 0x2ad3bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 104), bits); }
    // 0x2ad3c0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2ad3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x2ad3c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ad3c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad3c8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ad3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ad3cc: 0xe4400084  swc1        $f0, 0x84($v0)
    ctx->pc = 0x2ad3ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 132), bits); }
    // 0x2ad3d0: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2ad3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2ad3d4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ad3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ad3d8: 0xa0430139  sb          $v1, 0x139($v0)
    ctx->pc = 0x2ad3d8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 313), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ad3dc: 0xc067654  jal         func_19D950
    ctx->pc = 0x2AD3DCu;
    SET_GPR_U32(ctx, 31, 0x2AD3E4u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2AD3DCu, 0x2AD3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD3E4u;
label_2ad3e4:
    // 0x2ad3e4: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2ad3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x2ad3e8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ad3e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ad3ec: 0x0  nop
    ctx->pc = 0x2ad3ecu;
    // NOP
    // 0x2ad3f0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ad3f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ad3f4: 0x3c03437a  lui         $v1, 0x437A
    ctx->pc = 0x2ad3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17274 << 16));
    // 0x2ad3f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ad3f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad3fc: 0x0  nop
    ctx->pc = 0x2ad3fcu;
    // NOP
    // 0x2ad400: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ad400u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ad404: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ad404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ad408: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2ad408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2ad40c: 0x3c033d23  lui         $v1, 0x3D23
    ctx->pc = 0x2ad40cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15651 << 16));
    // 0x2ad410: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2ad410u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2ad414: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ad414u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad418: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ad418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ad41c: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2ad41cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2ad420: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2ad420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ad424: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ad424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ad428: 0xa064013a  sb          $a0, 0x13A($v1)
    ctx->pc = 0x2ad428u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 314), (uint8_t)GPR_U32(ctx, 4));
    // 0x2ad42c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ad42cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ad430: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2ad430u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2ad434: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2ad434u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ad438: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ad438u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ad43c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ad43cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ad440: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2ad440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ad444: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2ad444u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2ad448: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ad448u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ad44c: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2ad44cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2ad450: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2ad450u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ad454: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ad454u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ad458: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ad458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ad45c: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2ad45cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2ad460: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2ad460u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2ad464: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2ad464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2ad468: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ad468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ad46c: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2ad46cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2ad470: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2ad470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ad474: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2ad474u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2ad478: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2ad478u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ad47c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ad47cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ad480: 0xa064011a  sb          $a0, 0x11A($v1)
    ctx->pc = 0x2ad480u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 282), (uint8_t)GPR_U32(ctx, 4));
    // 0x2ad484: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2ad484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ad488: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ad488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ad48c: 0xa064011d  sb          $a0, 0x11D($v1)
    ctx->pc = 0x2ad48cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 285), (uint8_t)GPR_U32(ctx, 4));
    // 0x2ad490: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2ad490u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ad494: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2ad494u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2ad498: 0x3e00008  jr          $ra
    ctx->pc = 0x2AD498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD498u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AD4A0u;
}
