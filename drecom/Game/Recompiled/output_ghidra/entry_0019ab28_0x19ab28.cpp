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

// Function: entry_0019ab28
// Address: 0x19ab28 - 0x19abf8
void entry_0019ab28_0x19ab28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ab28_0x19ab28");
#endif

    switch (ctx->pc) {
        case 0x19abb4u: goto label_19abb4;
        case 0x19abd0u: goto label_19abd0;
        default: break;
    }

    ctx->pc = 0x19ab28u;

    // 0x19ab28: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x19ab28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x19ab2c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x19ab2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x19ab30: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x19ab30u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x19ab34: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x19ab34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x19ab38: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x19ab38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19ab3c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19ab3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19ab40: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19ab40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19ab44: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x19ab44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x19ab48: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x19ab48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x19ab4c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x19ab4cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x19ab50: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x19ab50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x19ab54: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x19ab54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19ab58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19ab58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19ab5c: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x19ab5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x19ab60: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x19ab60u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x19ab64: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x19ab64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x19ab68: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x19ab68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x19ab6c: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x19ab6cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x19ab70: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19ab70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19ab74: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19ab74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19ab78: 0x304b00ff  andi        $t3, $v0, 0xFF
    ctx->pc = 0x19ab78u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19ab7c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x19ab7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19ab80: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x19ab80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19ab84: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x19ab84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19ab88: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x19ab88u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19ab8c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x19ab8cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19ab90: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x19ab90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x19ab94: 0x2449d2f0  addiu       $t1, $v0, -0x2D10
    ctx->pc = 0x19ab94u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955760));
    // 0x19ab98: 0xc7ac007c  lwc1        $f12, 0x7C($sp)
    ctx->pc = 0x19ab98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19ab9c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19ab9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19aba0: 0xc42dd380  lwc1        $f13, -0x2C80($at)
    ctx->pc = 0x19aba0u;
    { uint32_t bits = FAST_READ32(0x5CD380u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x19aba4: 0xc7ae0078  lwc1        $f14, 0x78($sp)
    ctx->pc = 0x19aba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x19aba8: 0x27aa0040  addiu       $t2, $sp, 0x40
    ctx->pc = 0x19aba8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x19abac: 0xc0bb544  jal         func_2ED510
    ctx->pc = 0x19ABACu;
    SET_GPR_U32(ctx, 31, 0x19ABB4u);
    ctx->pc = 0x2ED510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED510u, 0x19ABACu, 0x19ABB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19ABB4u;
label_19abb4:
    // 0x19abb4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x19abb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19abb8: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x19abb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x19abbc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x19abbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x19abc0: 0x24450100  addiu       $a1, $v0, 0x100
    ctx->pc = 0x19abc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x19abc4: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x19abc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19abc8: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x19ABC8u;
    SET_GPR_U32(ctx, 31, 0x19ABD0u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x19ABD0u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x19ABD0u) { return; }
    ctx->pc = 0x19ABD0u;
label_19abd0:
    // 0x19abd0: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x19abd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x19abd4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x19abd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x19abd8: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x19abd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x19abdc: 0x2442d2f0  addiu       $v0, $v0, -0x2D10
    ctx->pc = 0x19abdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955760));
    // 0x19abe0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x19abe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x19abe4: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x19abe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19abe8: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x19abe8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x19abec: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x19abecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x19abf0: 0xc06c8e0  jal         func_1B2380
    ctx->pc = 0x19ABF0u;
    SET_GPR_U32(ctx, 31, 0x19ABF8u);
    ctx->pc = 0x1B2380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2380u, 0x19ABF0u, 0x19ABF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19ABF8u;
}
