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

// Function: e2d_id48_type06
// Address: 0x2b5880 - 0x2b5a9c
void e2d_id48_type06_0x2b5880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id48_type06_0x2b5880");
#endif

    switch (ctx->pc) {
        case 0x2b59e0u: goto label_2b59e0;
        default: break;
    }

    ctx->pc = 0x2b5880u;

    // 0x2b5880: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b5880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b5884: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2b5884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2b5888: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2b5888u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2b588c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2b588cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2b5890: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b5890u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b5894: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b5894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b5898: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2b5898u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2b589c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2b589cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2b58a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b58a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b58a4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b58a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b58a8: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2b58a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2b58ac: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2b58acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2b58b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b58b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b58b4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b58b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b58b8: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2b58b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2b58bc: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2b58bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2b58c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b58c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b58c4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b58c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b58c8: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2b58c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2b58cc: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x2b58ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x2b58d0: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2b58d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2b58d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b58d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b58d8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b58d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b58dc: 0xe44000ac  swc1        $f0, 0xAC($v0)
    ctx->pc = 0x2b58dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
    // 0x2b58e0: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x2b58e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x2b58e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b58e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b58e8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b58e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b58ec: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x2b58ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x2b58f0: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x2b58f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x2b58f4: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x2b58f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
    // 0x2b58f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b58f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b58fc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b58fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b5900: 0xe4400070  swc1        $f0, 0x70($v0)
    ctx->pc = 0x2b5900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
    // 0x2b5904: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x2b5904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x2b5908: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x2b5908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
    // 0x2b590c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b590cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b5910: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b5910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b5914: 0xe4400074  swc1        $f0, 0x74($v0)
    ctx->pc = 0x2b5914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x2b5918: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x2b5918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x2b591c: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x2b591cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
    // 0x2b5920: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b5920u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b5924: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b5924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b5928: 0xe4400078  swc1        $f0, 0x78($v0)
    ctx->pc = 0x2b5928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 120), bits); }
    // 0x2b592c: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x2b592cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x2b5930: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b5930u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b5934: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b5934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b5938: 0xe4400060  swc1        $f0, 0x60($v0)
    ctx->pc = 0x2b5938u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 96), bits); }
    // 0x2b593c: 0x3c024110  lui         $v0, 0x4110
    ctx->pc = 0x2b593cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16656 << 16));
    // 0x2b5940: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b5940u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b5944: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b5944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b5948: 0xe4400064  swc1        $f0, 0x64($v0)
    ctx->pc = 0x2b5948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 100), bits); }
    // 0x2b594c: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x2b594cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x2b5950: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b5950u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b5954: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b5954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b5958: 0xe4400068  swc1        $f0, 0x68($v0)
    ctx->pc = 0x2b5958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 104), bits); }
    // 0x2b595c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2b595cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2b5960: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b5960u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b5964: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b5964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b5968: 0xe4400084  swc1        $f0, 0x84($v0)
    ctx->pc = 0x2b5968u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 132), bits); }
    // 0x2b596c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b596cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b5970: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2b5970u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2b5974: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2b5974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2b5978: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2b5978u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b597c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b597cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b5980: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2b5980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b5984: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2b5984u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2b5988: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b5988u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b598c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2b598cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2b5990: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2b5990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2b5994: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2b5994u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b5998: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b5998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b599c: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2b599cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2b59a0: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2b59a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2b59a4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2b59a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2b59a8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b59a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b59ac: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2b59acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2b59b0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2b59b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b59b4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2b59b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2b59b8: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x2b59b8u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2b59bc: 0x0  nop
    ctx->pc = 0x2b59bcu;
    // NOP
    // 0x2b59c0: 0x0  nop
    ctx->pc = 0x2b59c0u;
    // NOP
    // 0x2b59c4: 0x1010  mfhi        $v0
    ctx->pc = 0x2b59c4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2b59c8: 0x24420005  addiu       $v0, $v0, 0x5
    ctx->pc = 0x2b59c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x2b59cc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2b59ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b59d0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b59d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b59d4: 0xa0430139  sb          $v1, 0x139($v0)
    ctx->pc = 0x2b59d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 313), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b59d8: 0xc067654  jal         func_19D950
    ctx->pc = 0x2B59D8u;
    SET_GPR_U32(ctx, 31, 0x2B59E0u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2B59D8u, 0x2B59E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B59E0u;
label_2b59e0:
    // 0x2b59e0: 0x3c0342f0  lui         $v1, 0x42F0
    ctx->pc = 0x2b59e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17136 << 16));
    // 0x2b59e4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b59e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b59e8: 0x0  nop
    ctx->pc = 0x2b59e8u;
    // NOP
    // 0x2b59ec: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b59ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b59f0: 0x3c03430c  lui         $v1, 0x430C
    ctx->pc = 0x2b59f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17164 << 16));
    // 0x2b59f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b59f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b59f8: 0x0  nop
    ctx->pc = 0x2b59f8u;
    // NOP
    // 0x2b59fc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b59fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b5a00: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b5a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b5a04: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b5a04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b5a08: 0x3c033d23  lui         $v1, 0x3D23
    ctx->pc = 0x2b5a08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15651 << 16));
    // 0x2b5a0c: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2b5a0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2b5a10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b5a10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b5a14: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b5a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b5a18: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2b5a18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2b5a1c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b5a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b5a20: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b5a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b5a24: 0xa064013a  sb          $a0, 0x13A($v1)
    ctx->pc = 0x2b5a24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 314), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b5a28: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b5a28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b5a2c: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2b5a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2b5a30: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2b5a30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b5a34: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b5a34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b5a38: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b5a38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b5a3c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b5a3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b5a40: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2b5a40u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2b5a44: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b5a44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b5a48: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2b5a48u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2b5a4c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2b5a4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b5a50: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b5a50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b5a54: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b5a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b5a58: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2b5a58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2b5a5c: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2b5a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2b5a60: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2b5a60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2b5a64: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b5a64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b5a68: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2b5a68u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2b5a6c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b5a6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b5a70: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2b5a70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2b5a74: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2b5a74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b5a78: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b5a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b5a7c: 0xa064011a  sb          $a0, 0x11A($v1)
    ctx->pc = 0x2b5a7cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 282), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b5a80: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2b5a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b5a84: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b5a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b5a88: 0xa064011d  sb          $a0, 0x11D($v1)
    ctx->pc = 0x2b5a88u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 285), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b5a8c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2b5a8cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b5a90: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b5a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b5a94: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5A94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5A94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B5A9Cu;
}
