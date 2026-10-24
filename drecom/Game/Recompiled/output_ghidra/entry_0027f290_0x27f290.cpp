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

// Function: entry_0027f290
// Address: 0x27f290 - 0x27f300
void entry_0027f290_0x27f290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027f290_0x27f290");
#endif

    switch (ctx->pc) {
        case 0x27f2ecu: goto label_27f2ec;
        case 0x27f2f8u: goto label_27f2f8;
        default: break;
    }

    ctx->pc = 0x27f290u;

    // 0x27f290: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x27f290u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x27f294: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27f294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27f298: 0x24421dd0  addiu       $v0, $v0, 0x1DD0
    ctx->pc = 0x27f298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7632));
    // 0x27f29c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27f29cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27f2a0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x27f2a0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27f2a4: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x27f2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x27f2a8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x27f2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x27f2ac: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x27f2acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27f2b0: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x27f2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x27f2b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27f2b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27f2b8: 0x0  nop
    ctx->pc = 0x27f2b8u;
    // NOP
    // 0x27f2bc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x27f2bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x27f2c0: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x27f2c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x27f2c4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x27f2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x27f2c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27f2c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27f2cc: 0x0  nop
    ctx->pc = 0x27f2ccu;
    // NOP
    // 0x27f2d0: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x27f2d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x27f2d4: 0x24041718  addiu       $a0, $zero, 0x1718
    ctx->pc = 0x27f2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5912));
    // 0x27f2d8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27f2d8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27f2dc: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x27f2dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x27f2e0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x27f2e0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27f2e4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x27F2E4u;
    SET_GPR_U32(ctx, 31, 0x27F2ECu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x27F2E4u, 0x27F2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F2ECu;
label_27f2ec:
    // 0x27f2ec: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x27f2ecu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x27f2f0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x27F2F0u;
    SET_GPR_U32(ctx, 31, 0x27F2F8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x27F2F0u, 0x27F2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F2F8u;
label_27f2f8:
    // 0x27f2f8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x27f2f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x27f2fc: 0x0  nop
    ctx->pc = 0x27f2fcu;
    // NOP
    ctx->pc = 0x27f300u;
}
