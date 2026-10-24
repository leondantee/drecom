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

// Function: e2d_id04_type06
// Address: 0x2ad6e0 - 0x2ad868
void e2d_id04_type06_0x2ad6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id04_type06_0x2ad6e0");
#endif

    switch (ctx->pc) {
        case 0x2ad7acu: goto label_2ad7ac;
        default: break;
    }

    ctx->pc = 0x2ad6e0u;

    // 0x2ad6e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ad6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ad6e4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2ad6e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2ad6e8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2ad6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2ad6ec: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x2ad6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x2ad6f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ad6f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad6f4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ad6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ad6f8: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2ad6f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2ad6fc: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x2ad6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x2ad700: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ad700u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad704: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ad704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ad708: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2ad708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2ad70c: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x2ad70cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x2ad710: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ad710u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad714: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ad714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ad718: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2ad718u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2ad71c: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x2ad71cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x2ad720: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ad720u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad724: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ad724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ad728: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2ad728u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2ad72c: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x2ad72cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x2ad730: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x2ad730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x2ad734: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ad734u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad738: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ad738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ad73c: 0xe44000ac  swc1        $f0, 0xAC($v0)
    ctx->pc = 0x2ad73cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
    // 0x2ad740: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2ad740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2ad744: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ad744u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad748: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ad748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ad74c: 0xe4400054  swc1        $f0, 0x54($v0)
    ctx->pc = 0x2ad74cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x2ad750: 0x3c02c120  lui         $v0, 0xC120
    ctx->pc = 0x2ad750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49440 << 16));
    // 0x2ad754: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ad754u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad758: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ad758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ad75c: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x2ad75cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x2ad760: 0x3c0240e0  lui         $v0, 0x40E0
    ctx->pc = 0x2ad760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
    // 0x2ad764: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ad764u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad768: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ad768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ad76c: 0xe4400060  swc1        $f0, 0x60($v0)
    ctx->pc = 0x2ad76cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 96), bits); }
    // 0x2ad770: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2ad770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2ad774: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ad774u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad778: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ad778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ad77c: 0xe4400064  swc1        $f0, 0x64($v0)
    ctx->pc = 0x2ad77cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 100), bits); }
    // 0x2ad780: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2ad780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2ad784: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ad784u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad788: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ad788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ad78c: 0xe4400068  swc1        $f0, 0x68($v0)
    ctx->pc = 0x2ad78cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 104), bits); }
    // 0x2ad790: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ad790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ad794: 0xa0400138  sb          $zero, 0x138($v0)
    ctx->pc = 0x2ad794u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 312), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ad798: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2ad798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2ad79c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ad79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ad7a0: 0xa0430139  sb          $v1, 0x139($v0)
    ctx->pc = 0x2ad7a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 313), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ad7a4: 0xc067654  jal         func_19D950
    ctx->pc = 0x2AD7A4u;
    SET_GPR_U32(ctx, 31, 0x2AD7ACu);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2AD7A4u, 0x2AD7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD7ACu;
label_2ad7ac:
    // 0x2ad7ac: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2ad7acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x2ad7b0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ad7b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ad7b4: 0x0  nop
    ctx->pc = 0x2ad7b4u;
    // NOP
    // 0x2ad7b8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ad7b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ad7bc: 0x3c03437a  lui         $v1, 0x437A
    ctx->pc = 0x2ad7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17274 << 16));
    // 0x2ad7c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ad7c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad7c4: 0x0  nop
    ctx->pc = 0x2ad7c4u;
    // NOP
    // 0x2ad7c8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ad7c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ad7cc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ad7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ad7d0: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2ad7d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2ad7d4: 0x3c033d23  lui         $v1, 0x3D23
    ctx->pc = 0x2ad7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15651 << 16));
    // 0x2ad7d8: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2ad7d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2ad7dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ad7dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad7e0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ad7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ad7e4: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2ad7e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2ad7e8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2ad7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ad7ec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ad7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ad7f0: 0xa064013a  sb          $a0, 0x13A($v1)
    ctx->pc = 0x2ad7f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 314), (uint8_t)GPR_U32(ctx, 4));
    // 0x2ad7f4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ad7f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ad7f8: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2ad7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2ad7fc: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2ad7fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ad800: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ad800u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ad804: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ad804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ad808: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2ad808u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ad80c: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2ad80cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2ad810: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ad810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ad814: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2ad814u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2ad818: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2ad818u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ad81c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ad81cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ad820: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ad820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ad824: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2ad824u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2ad828: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2ad828u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2ad82c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2ad82cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2ad830: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ad830u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ad834: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2ad834u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2ad838: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2ad838u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ad83c: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2ad83cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2ad840: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2ad840u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ad844: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ad844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ad848: 0xa064011a  sb          $a0, 0x11A($v1)
    ctx->pc = 0x2ad848u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 282), (uint8_t)GPR_U32(ctx, 4));
    // 0x2ad84c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2ad84cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ad850: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ad850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ad854: 0xa064011d  sb          $a0, 0x11D($v1)
    ctx->pc = 0x2ad854u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 285), (uint8_t)GPR_U32(ctx, 4));
    // 0x2ad858: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2ad858u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ad85c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2ad85cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2ad860: 0x3e00008  jr          $ra
    ctx->pc = 0x2AD860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD860u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AD868u;
}
