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

// Function: e2d_id04_type02
// Address: 0x2ad4a0 - 0x2ad64c
void e2d_id04_type02_0x2ad4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id04_type02_0x2ad4a0");
#endif

    switch (ctx->pc) {
        case 0x2ad590u: goto label_2ad590;
        default: break;
    }

    ctx->pc = 0x2ad4a0u;

    // 0x2ad4a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ad4a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ad4a4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2ad4a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2ad4a8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2ad4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2ad4ac: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2ad4acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2ad4b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ad4b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad4b4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ad4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ad4b8: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2ad4b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2ad4bc: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2ad4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2ad4c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ad4c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad4c4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ad4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ad4c8: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2ad4c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2ad4cc: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2ad4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2ad4d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ad4d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad4d4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ad4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ad4d8: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2ad4d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2ad4dc: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2ad4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2ad4e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ad4e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad4e4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ad4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ad4e8: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2ad4e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2ad4ec: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x2ad4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x2ad4f0: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x2ad4f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x2ad4f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ad4f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad4f8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ad4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ad4fc: 0xe44000ac  swc1        $f0, 0xAC($v0)
    ctx->pc = 0x2ad4fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
    // 0x2ad500: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2ad500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2ad504: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ad504u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad508: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ad508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ad50c: 0xe4400060  swc1        $f0, 0x60($v0)
    ctx->pc = 0x2ad50cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 96), bits); }
    // 0x2ad510: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2ad510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2ad514: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ad514u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad518: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ad518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ad51c: 0xe4400064  swc1        $f0, 0x64($v0)
    ctx->pc = 0x2ad51cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 100), bits); }
    // 0x2ad520: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2ad520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2ad524: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ad524u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad528: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ad528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ad52c: 0xe4400068  swc1        $f0, 0x68($v0)
    ctx->pc = 0x2ad52cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 104), bits); }
    // 0x2ad530: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2ad530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2ad534: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ad534u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad538: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ad538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ad53c: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x2ad53cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x2ad540: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x2ad540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x2ad544: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x2ad544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x2ad548: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ad548u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad54c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ad54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ad550: 0xe4400070  swc1        $f0, 0x70($v0)
    ctx->pc = 0x2ad550u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
    // 0x2ad554: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x2ad554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x2ad558: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x2ad558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x2ad55c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ad55cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad560: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ad560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ad564: 0xe4400078  swc1        $f0, 0x78($v0)
    ctx->pc = 0x2ad564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 120), bits); }
    // 0x2ad568: 0x3c02bf19  lui         $v0, 0xBF19
    ctx->pc = 0x2ad568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48921 << 16));
    // 0x2ad56c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2ad56cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2ad570: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ad570u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad574: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ad574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ad578: 0xe4400084  swc1        $f0, 0x84($v0)
    ctx->pc = 0x2ad578u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 132), bits); }
    // 0x2ad57c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2ad57cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2ad580: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ad580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ad584: 0xa0430139  sb          $v1, 0x139($v0)
    ctx->pc = 0x2ad584u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 313), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ad588: 0xc067654  jal         func_19D950
    ctx->pc = 0x2AD588u;
    SET_GPR_U32(ctx, 31, 0x2AD590u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2AD588u, 0x2AD590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD590u;
label_2ad590:
    // 0x2ad590: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2ad590u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x2ad594: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ad594u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ad598: 0x0  nop
    ctx->pc = 0x2ad598u;
    // NOP
    // 0x2ad59c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ad59cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ad5a0: 0x3c034316  lui         $v1, 0x4316
    ctx->pc = 0x2ad5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17174 << 16));
    // 0x2ad5a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ad5a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad5a8: 0x0  nop
    ctx->pc = 0x2ad5a8u;
    // NOP
    // 0x2ad5ac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ad5acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ad5b0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ad5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ad5b4: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2ad5b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2ad5b8: 0x3c033d23  lui         $v1, 0x3D23
    ctx->pc = 0x2ad5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15651 << 16));
    // 0x2ad5bc: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2ad5bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2ad5c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ad5c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad5c4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ad5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ad5c8: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2ad5c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2ad5cc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2ad5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ad5d0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ad5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ad5d4: 0xa064013a  sb          $a0, 0x13A($v1)
    ctx->pc = 0x2ad5d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 314), (uint8_t)GPR_U32(ctx, 4));
    // 0x2ad5d8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ad5d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ad5dc: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2ad5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2ad5e0: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2ad5e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ad5e4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ad5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ad5e8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ad5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ad5ec: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2ad5ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ad5f0: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2ad5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2ad5f4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ad5f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ad5f8: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2ad5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2ad5fc: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2ad5fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ad600: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ad600u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ad604: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ad604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ad608: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2ad608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2ad60c: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2ad60cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2ad610: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2ad610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2ad614: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ad614u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ad618: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2ad618u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2ad61c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2ad61cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ad620: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2ad620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2ad624: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2ad624u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ad628: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ad628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ad62c: 0xa064011a  sb          $a0, 0x11A($v1)
    ctx->pc = 0x2ad62cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 282), (uint8_t)GPR_U32(ctx, 4));
    // 0x2ad630: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2ad630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ad634: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ad634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ad638: 0xa064011d  sb          $a0, 0x11D($v1)
    ctx->pc = 0x2ad638u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 285), (uint8_t)GPR_U32(ctx, 4));
    // 0x2ad63c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2ad63cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ad640: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2ad640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2ad644: 0x3e00008  jr          $ra
    ctx->pc = 0x2AD644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD644u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AD64Cu;
}
