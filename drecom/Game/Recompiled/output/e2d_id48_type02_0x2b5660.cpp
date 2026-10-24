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

// Function: e2d_id48_type02
// Address: 0x2b5660 - 0x2b587c
void e2d_id48_type02_0x2b5660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id48_type02_0x2b5660");
#endif

    switch (ctx->pc) {
        case 0x2b57c0u: goto label_2b57c0;
        default: break;
    }

    ctx->pc = 0x2b5660u;

    // 0x2b5660: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b5660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b5664: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2b5664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2b5668: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2b5668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2b566c: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2b566cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2b5670: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b5670u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b5674: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b5674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b5678: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2b5678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2b567c: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x2b567cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
    // 0x2b5680: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b5680u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b5684: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b5684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b5688: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2b5688u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2b568c: 0x3c024190  lui         $v0, 0x4190
    ctx->pc = 0x2b568cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16784 << 16));
    // 0x2b5690: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b5690u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b5694: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b5694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b5698: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2b5698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2b569c: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2b569cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2b56a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b56a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b56a4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b56a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b56a8: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2b56a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2b56ac: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x2b56acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x2b56b0: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2b56b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2b56b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b56b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b56b8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b56b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b56bc: 0xe44000ac  swc1        $f0, 0xAC($v0)
    ctx->pc = 0x2b56bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
    // 0x2b56c0: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x2b56c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x2b56c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b56c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b56c8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b56c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b56cc: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x2b56ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x2b56d0: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x2b56d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x2b56d4: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x2b56d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
    // 0x2b56d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b56d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b56dc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b56dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b56e0: 0xe4400070  swc1        $f0, 0x70($v0)
    ctx->pc = 0x2b56e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
    // 0x2b56e4: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x2b56e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x2b56e8: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x2b56e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
    // 0x2b56ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b56ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b56f0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b56f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b56f4: 0xe4400074  swc1        $f0, 0x74($v0)
    ctx->pc = 0x2b56f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x2b56f8: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x2b56f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x2b56fc: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x2b56fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
    // 0x2b5700: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b5700u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b5704: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b5704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b5708: 0xe4400078  swc1        $f0, 0x78($v0)
    ctx->pc = 0x2b5708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 120), bits); }
    // 0x2b570c: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x2b570cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x2b5710: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b5710u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b5714: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b5714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b5718: 0xe4400060  swc1        $f0, 0x60($v0)
    ctx->pc = 0x2b5718u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 96), bits); }
    // 0x2b571c: 0x3c024110  lui         $v0, 0x4110
    ctx->pc = 0x2b571cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16656 << 16));
    // 0x2b5720: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b5720u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b5724: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b5724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b5728: 0xe4400064  swc1        $f0, 0x64($v0)
    ctx->pc = 0x2b5728u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 100), bits); }
    // 0x2b572c: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x2b572cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x2b5730: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b5730u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b5734: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b5734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b5738: 0xe4400068  swc1        $f0, 0x68($v0)
    ctx->pc = 0x2b5738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 104), bits); }
    // 0x2b573c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2b573cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2b5740: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b5740u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b5744: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b5744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b5748: 0xe4400084  swc1        $f0, 0x84($v0)
    ctx->pc = 0x2b5748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 132), bits); }
    // 0x2b574c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b574cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b5750: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2b5750u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2b5754: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2b5754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2b5758: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2b5758u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b575c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b575cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b5760: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2b5760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b5764: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2b5764u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2b5768: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b5768u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b576c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2b576cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2b5770: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2b5770u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2b5774: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2b5774u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b5778: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b5778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b577c: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2b577cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2b5780: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2b5780u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2b5784: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2b5784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2b5788: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b5788u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b578c: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2b578cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2b5790: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2b5790u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b5794: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2b5794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2b5798: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x2b5798u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2b579c: 0x0  nop
    ctx->pc = 0x2b579cu;
    // NOP
    // 0x2b57a0: 0x0  nop
    ctx->pc = 0x2b57a0u;
    // NOP
    // 0x2b57a4: 0x1010  mfhi        $v0
    ctx->pc = 0x2b57a4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2b57a8: 0x24420005  addiu       $v0, $v0, 0x5
    ctx->pc = 0x2b57a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x2b57ac: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2b57acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b57b0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b57b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b57b4: 0xa0430139  sb          $v1, 0x139($v0)
    ctx->pc = 0x2b57b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 313), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b57b8: 0xc067654  jal         func_19D950
    ctx->pc = 0x2B57B8u;
    SET_GPR_U32(ctx, 31, 0x2B57C0u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2B57B8u, 0x2B57C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B57C0u;
label_2b57c0:
    // 0x2b57c0: 0x3c0342f0  lui         $v1, 0x42F0
    ctx->pc = 0x2b57c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17136 << 16));
    // 0x2b57c4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b57c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b57c8: 0x0  nop
    ctx->pc = 0x2b57c8u;
    // NOP
    // 0x2b57cc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b57ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b57d0: 0x3c034302  lui         $v1, 0x4302
    ctx->pc = 0x2b57d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17154 << 16));
    // 0x2b57d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b57d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b57d8: 0x0  nop
    ctx->pc = 0x2b57d8u;
    // NOP
    // 0x2b57dc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b57dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b57e0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b57e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b57e4: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b57e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b57e8: 0x3c033d23  lui         $v1, 0x3D23
    ctx->pc = 0x2b57e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15651 << 16));
    // 0x2b57ec: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2b57ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2b57f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b57f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b57f4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b57f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b57f8: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2b57f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2b57fc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b57fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b5800: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b5800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b5804: 0xa064013a  sb          $a0, 0x13A($v1)
    ctx->pc = 0x2b5804u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 314), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b5808: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b5808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b580c: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2b580cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2b5810: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2b5810u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b5814: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b5814u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b5818: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b5818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b581c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b581cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b5820: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2b5820u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2b5824: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b5824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b5828: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2b5828u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2b582c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2b582cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b5830: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b5830u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b5834: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b5834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b5838: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2b5838u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2b583c: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2b583cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2b5840: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2b5840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2b5844: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b5844u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b5848: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2b5848u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2b584c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b584cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b5850: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2b5850u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2b5854: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2b5854u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b5858: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b5858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b585c: 0xa064011a  sb          $a0, 0x11A($v1)
    ctx->pc = 0x2b585cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 282), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b5860: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2b5860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b5864: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b5864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b5868: 0xa064011d  sb          $a0, 0x11D($v1)
    ctx->pc = 0x2b5868u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 285), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b586c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2b586cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b5870: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b5870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b5874: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5874u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B587Cu;
}
