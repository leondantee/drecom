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

// Function: e2d_id04_type2a
// Address: 0x2ae880 - 0x2aea28
void e2d_id04_type2a_0x2ae880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id04_type2a_0x2ae880");
#endif

    switch (ctx->pc) {
        case 0x2ae978u: goto label_2ae978;
        default: break;
    }

    ctx->pc = 0x2ae880u;

    // 0x2ae880: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ae880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ae884: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2ae884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2ae888: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2ae888u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2ae88c: 0x3c02429e  lui         $v0, 0x429E
    ctx->pc = 0x2ae88cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17054 << 16));
    // 0x2ae890: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ae890u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae894: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ae894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ae898: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2ae898u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2ae89c: 0x3c024238  lui         $v0, 0x4238
    ctx->pc = 0x2ae89cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16952 << 16));
    // 0x2ae8a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ae8a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae8a4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ae8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ae8a8: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2ae8a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2ae8ac: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x2ae8acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
    // 0x2ae8b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ae8b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae8b4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ae8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ae8b8: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2ae8b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2ae8bc: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x2ae8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x2ae8c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ae8c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae8c4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ae8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ae8c8: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2ae8c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2ae8cc: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x2ae8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x2ae8d0: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2ae8d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2ae8d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ae8d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae8d8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ae8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ae8dc: 0xe44000ac  swc1        $f0, 0xAC($v0)
    ctx->pc = 0x2ae8dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
    // 0x2ae8e0: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x2ae8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x2ae8e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ae8e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae8e8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ae8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ae8ec: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x2ae8ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x2ae8f0: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x2ae8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x2ae8f4: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x2ae8f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
    // 0x2ae8f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ae8f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae8fc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ae8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ae900: 0xe4400070  swc1        $f0, 0x70($v0)
    ctx->pc = 0x2ae900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
    // 0x2ae904: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x2ae904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x2ae908: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x2ae908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
    // 0x2ae90c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ae90cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae910: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ae910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ae914: 0xe4400074  swc1        $f0, 0x74($v0)
    ctx->pc = 0x2ae914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x2ae918: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x2ae918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x2ae91c: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x2ae91cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
    // 0x2ae920: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ae920u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae924: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ae924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ae928: 0xe4400078  swc1        $f0, 0x78($v0)
    ctx->pc = 0x2ae928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 120), bits); }
    // 0x2ae92c: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x2ae92cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x2ae930: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ae930u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae934: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ae934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ae938: 0xe4400060  swc1        $f0, 0x60($v0)
    ctx->pc = 0x2ae938u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 96), bits); }
    // 0x2ae93c: 0x3c024110  lui         $v0, 0x4110
    ctx->pc = 0x2ae93cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16656 << 16));
    // 0x2ae940: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ae940u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae944: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ae944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ae948: 0xe4400064  swc1        $f0, 0x64($v0)
    ctx->pc = 0x2ae948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 100), bits); }
    // 0x2ae94c: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x2ae94cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x2ae950: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ae950u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae954: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ae954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ae958: 0xe4400068  swc1        $f0, 0x68($v0)
    ctx->pc = 0x2ae958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 104), bits); }
    // 0x2ae95c: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x2ae95cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x2ae960: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2ae960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2ae964: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ae964u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae968: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ae968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ae96c: 0xe4400084  swc1        $f0, 0x84($v0)
    ctx->pc = 0x2ae96cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 132), bits); }
    // 0x2ae970: 0xc067654  jal         func_19D950
    ctx->pc = 0x2AE970u;
    SET_GPR_U32(ctx, 31, 0x2AE978u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2AE970u, 0x2AE978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE978u;
label_2ae978:
    // 0x2ae978: 0x3c0342f0  lui         $v1, 0x42F0
    ctx->pc = 0x2ae978u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17136 << 16));
    // 0x2ae97c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ae97cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ae980: 0x0  nop
    ctx->pc = 0x2ae980u;
    // NOP
    // 0x2ae984: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ae984u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ae988: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x2ae988u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x2ae98c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ae98cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae990: 0x0  nop
    ctx->pc = 0x2ae990u;
    // NOP
    // 0x2ae994: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ae994u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ae998: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ae998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ae99c: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2ae99cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2ae9a0: 0x3c033d23  lui         $v1, 0x3D23
    ctx->pc = 0x2ae9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15651 << 16));
    // 0x2ae9a4: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2ae9a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2ae9a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ae9a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae9ac: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ae9acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ae9b0: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2ae9b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2ae9b4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2ae9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ae9b8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ae9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ae9bc: 0xa064013a  sb          $a0, 0x13A($v1)
    ctx->pc = 0x2ae9bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 314), (uint8_t)GPR_U32(ctx, 4));
    // 0x2ae9c0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ae9c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ae9c4: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2ae9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2ae9c8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2ae9c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ae9cc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ae9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ae9d0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ae9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ae9d4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2ae9d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ae9d8: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2ae9d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2ae9dc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ae9dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ae9e0: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2ae9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2ae9e4: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2ae9e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ae9e8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ae9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ae9ec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ae9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ae9f0: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2ae9f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2ae9f4: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2ae9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2ae9f8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2ae9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2ae9fc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ae9fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2aea00: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2aea00u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2aea04: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2aea04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2aea08: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2aea08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2aea0c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2aea0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2aea10: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2aea10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aea14: 0xa064011a  sb          $a0, 0x11A($v1)
    ctx->pc = 0x2aea14u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 282), (uint8_t)GPR_U32(ctx, 4));
    // 0x2aea18: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2aea18u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aea1c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2aea1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2aea20: 0x3e00008  jr          $ra
    ctx->pc = 0x2AEA20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AEA20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AEA28u;
}
