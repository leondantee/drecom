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

// Function: e2d_id48_type07
// Address: 0x2b5cd0 - 0x2b5eec
void e2d_id48_type07_0x2b5cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id48_type07_0x2b5cd0");
#endif

    switch (ctx->pc) {
        case 0x2b5e30u: goto label_2b5e30;
        default: break;
    }

    ctx->pc = 0x2b5cd0u;

    // 0x2b5cd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b5cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b5cd4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2b5cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2b5cd8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2b5cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2b5cdc: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2b5cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2b5ce0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b5ce0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b5ce4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b5ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b5ce8: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2b5ce8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2b5cec: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2b5cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2b5cf0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b5cf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b5cf4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b5cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b5cf8: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2b5cf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2b5cfc: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2b5cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2b5d00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b5d00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b5d04: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b5d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b5d08: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2b5d08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2b5d0c: 0x3c02432a  lui         $v0, 0x432A
    ctx->pc = 0x2b5d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17194 << 16));
    // 0x2b5d10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b5d10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b5d14: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b5d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b5d18: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2b5d18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2b5d1c: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x2b5d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x2b5d20: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2b5d20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2b5d24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b5d24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b5d28: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b5d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b5d2c: 0xe44000ac  swc1        $f0, 0xAC($v0)
    ctx->pc = 0x2b5d2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
    // 0x2b5d30: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x2b5d30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x2b5d34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b5d34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b5d38: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b5d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b5d3c: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x2b5d3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x2b5d40: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x2b5d40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x2b5d44: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x2b5d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
    // 0x2b5d48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b5d48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b5d4c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b5d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b5d50: 0xe4400070  swc1        $f0, 0x70($v0)
    ctx->pc = 0x2b5d50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
    // 0x2b5d54: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x2b5d54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x2b5d58: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x2b5d58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
    // 0x2b5d5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b5d5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b5d60: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b5d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b5d64: 0xe4400074  swc1        $f0, 0x74($v0)
    ctx->pc = 0x2b5d64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x2b5d68: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x2b5d68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x2b5d6c: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x2b5d6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
    // 0x2b5d70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b5d70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b5d74: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b5d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b5d78: 0xe4400078  swc1        $f0, 0x78($v0)
    ctx->pc = 0x2b5d78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 120), bits); }
    // 0x2b5d7c: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x2b5d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x2b5d80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b5d80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b5d84: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b5d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b5d88: 0xe4400060  swc1        $f0, 0x60($v0)
    ctx->pc = 0x2b5d88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 96), bits); }
    // 0x2b5d8c: 0x3c024110  lui         $v0, 0x4110
    ctx->pc = 0x2b5d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16656 << 16));
    // 0x2b5d90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b5d90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b5d94: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b5d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b5d98: 0xe4400064  swc1        $f0, 0x64($v0)
    ctx->pc = 0x2b5d98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 100), bits); }
    // 0x2b5d9c: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x2b5d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x2b5da0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b5da0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b5da4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b5da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b5da8: 0xe4400068  swc1        $f0, 0x68($v0)
    ctx->pc = 0x2b5da8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 104), bits); }
    // 0x2b5dac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2b5dacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2b5db0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b5db0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b5db4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b5db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b5db8: 0xe4400084  swc1        $f0, 0x84($v0)
    ctx->pc = 0x2b5db8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 132), bits); }
    // 0x2b5dbc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b5dbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b5dc0: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2b5dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2b5dc4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2b5dc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2b5dc8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2b5dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b5dcc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b5dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b5dd0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2b5dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b5dd4: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2b5dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2b5dd8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b5dd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b5ddc: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2b5ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2b5de0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2b5de0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2b5de4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2b5de4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b5de8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b5de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b5dec: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2b5decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2b5df0: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2b5df0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2b5df4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2b5df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2b5df8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b5df8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b5dfc: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2b5dfcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2b5e00: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2b5e00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b5e04: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2b5e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2b5e08: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x2b5e08u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2b5e0c: 0x0  nop
    ctx->pc = 0x2b5e0cu;
    // NOP
    // 0x2b5e10: 0x0  nop
    ctx->pc = 0x2b5e10u;
    // NOP
    // 0x2b5e14: 0x1010  mfhi        $v0
    ctx->pc = 0x2b5e14u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2b5e18: 0x24420005  addiu       $v0, $v0, 0x5
    ctx->pc = 0x2b5e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x2b5e1c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2b5e1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b5e20: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b5e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b5e24: 0xa0430139  sb          $v1, 0x139($v0)
    ctx->pc = 0x2b5e24u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 313), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b5e28: 0xc067654  jal         func_19D950
    ctx->pc = 0x2B5E28u;
    SET_GPR_U32(ctx, 31, 0x2B5E30u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2B5E28u, 0x2B5E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5E30u;
label_2b5e30:
    // 0x2b5e30: 0x3c0342f0  lui         $v1, 0x42F0
    ctx->pc = 0x2b5e30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17136 << 16));
    // 0x2b5e34: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b5e34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b5e38: 0x0  nop
    ctx->pc = 0x2b5e38u;
    // NOP
    // 0x2b5e3c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b5e3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b5e40: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x2b5e40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x2b5e44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b5e44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b5e48: 0x0  nop
    ctx->pc = 0x2b5e48u;
    // NOP
    // 0x2b5e4c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b5e4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b5e50: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b5e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b5e54: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b5e54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b5e58: 0x3c033d23  lui         $v1, 0x3D23
    ctx->pc = 0x2b5e58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15651 << 16));
    // 0x2b5e5c: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2b5e5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2b5e60: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b5e60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b5e64: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b5e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b5e68: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2b5e68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2b5e6c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b5e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b5e70: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b5e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b5e74: 0xa064013a  sb          $a0, 0x13A($v1)
    ctx->pc = 0x2b5e74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 314), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b5e78: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b5e78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b5e7c: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2b5e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2b5e80: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2b5e80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b5e84: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b5e84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b5e88: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b5e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b5e8c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b5e8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b5e90: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2b5e90u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2b5e94: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b5e94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b5e98: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2b5e98u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2b5e9c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2b5e9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b5ea0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b5ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b5ea4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b5ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b5ea8: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2b5ea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2b5eac: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2b5eacu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2b5eb0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2b5eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2b5eb4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b5eb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b5eb8: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2b5eb8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2b5ebc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b5ebcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b5ec0: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2b5ec0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2b5ec4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2b5ec4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b5ec8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b5ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b5ecc: 0xa064011a  sb          $a0, 0x11A($v1)
    ctx->pc = 0x2b5eccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 282), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b5ed0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2b5ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b5ed4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b5ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b5ed8: 0xa064011d  sb          $a0, 0x11D($v1)
    ctx->pc = 0x2b5ed8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 285), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b5edc: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2b5edcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b5ee0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b5ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b5ee4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5EE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5EE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B5EECu;
}
