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

// Function: e2d_id04_type2b
// Address: 0x2aea30 - 0x2aeb7c
void e2d_id04_type2b_0x2aea30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id04_type2b_0x2aea30");
#endif

    switch (ctx->pc) {
        case 0x2aeb30u: goto label_2aeb30;
        default: break;
    }

    ctx->pc = 0x2aea30u;

    // 0x2aea30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2aea30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2aea34: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2aea34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2aea38: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2aea38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2aea3c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2aea3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2aea40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aea40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aea44: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2aea44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aea48: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2aea48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2aea4c: 0x3c0242c4  lui         $v0, 0x42C4
    ctx->pc = 0x2aea4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17092 << 16));
    // 0x2aea50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aea50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aea54: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2aea54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aea58: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2aea58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2aea5c: 0x3c0242b0  lui         $v0, 0x42B0
    ctx->pc = 0x2aea5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17072 << 16));
    // 0x2aea60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aea60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aea64: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2aea64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aea68: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2aea68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2aea6c: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x2aea6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x2aea70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aea70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aea74: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2aea74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aea78: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2aea78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2aea7c: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x2aea7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x2aea80: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2aea80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2aea84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aea84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aea88: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2aea88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aea8c: 0xe44000ac  swc1        $f0, 0xAC($v0)
    ctx->pc = 0x2aea8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
    // 0x2aea90: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2aea90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aea94: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2aea94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aea98: 0xe4400050  swc1        $f0, 0x50($v0)
    ctx->pc = 0x2aea98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    // 0x2aea9c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2aea9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2aeaa0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aeaa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aeaa4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2aeaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aeaa8: 0xe4400054  swc1        $f0, 0x54($v0)
    ctx->pc = 0x2aeaa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x2aeaac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2aeaacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aeab0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2aeab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aeab4: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x2aeab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x2aeab8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2aeab8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2aeabc: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2aeabcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2aeac0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2aeac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2aeac4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2aeac4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2aeac8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2aeac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2aeacc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2aeaccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2aead0: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2aead0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2aead4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2aead4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2aead8: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2aead8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2aeadc: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2aeadcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2aeae0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2aeae0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2aeae4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2aeae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2aeae8: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2aeae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2aeaec: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2aeaecu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2aeaf0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2aeaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2aeaf4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2aeaf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2aeaf8: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2aeaf8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2aeafc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2aeafcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2aeb00: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2aeb00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2aeb04: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x2aeb04u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2aeb08: 0x0  nop
    ctx->pc = 0x2aeb08u;
    // NOP
    // 0x2aeb0c: 0x0  nop
    ctx->pc = 0x2aeb0cu;
    // NOP
    // 0x2aeb10: 0x1010  mfhi        $v0
    ctx->pc = 0x2aeb10u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2aeb14: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2aeb14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2aeb18: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2aeb18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aeb1c: 0xa0430138  sb          $v1, 0x138($v0)
    ctx->pc = 0x2aeb1cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 312), (uint8_t)GPR_U32(ctx, 3));
    // 0x2aeb20: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2aeb20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aeb24: 0xa0400139  sb          $zero, 0x139($v0)
    ctx->pc = 0x2aeb24u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 313), (uint8_t)GPR_U32(ctx, 0));
    // 0x2aeb28: 0xc067654  jal         func_19D950
    ctx->pc = 0x2AEB28u;
    SET_GPR_U32(ctx, 31, 0x2AEB30u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2AEB28u, 0x2AEB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEB30u;
label_2aeb30:
    // 0x2aeb30: 0x3c03428c  lui         $v1, 0x428C
    ctx->pc = 0x2aeb30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17036 << 16));
    // 0x2aeb34: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2aeb34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2aeb38: 0x0  nop
    ctx->pc = 0x2aeb38u;
    // NOP
    // 0x2aeb3c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2aeb3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2aeb40: 0x3c034316  lui         $v1, 0x4316
    ctx->pc = 0x2aeb40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17174 << 16));
    // 0x2aeb44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2aeb44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aeb48: 0x0  nop
    ctx->pc = 0x2aeb48u;
    // NOP
    // 0x2aeb4c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2aeb4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2aeb50: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2aeb50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aeb54: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2aeb54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2aeb58: 0x3c033cf5  lui         $v1, 0x3CF5
    ctx->pc = 0x2aeb58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15605 << 16));
    // 0x2aeb5c: 0x3463c28f  ori         $v1, $v1, 0xC28F
    ctx->pc = 0x2aeb5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49807);
    // 0x2aeb60: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2aeb60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aeb64: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2aeb64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2aeb68: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2aeb68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2aeb6c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2aeb6cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aeb70: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2aeb70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2aeb74: 0x3e00008  jr          $ra
    ctx->pc = 0x2AEB74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AEB74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AEB7Cu;
}
