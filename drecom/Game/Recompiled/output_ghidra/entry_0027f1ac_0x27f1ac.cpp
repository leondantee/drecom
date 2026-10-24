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

// Function: entry_0027f1ac
// Address: 0x27f1ac - 0x27f218
void entry_0027f1ac_0x27f1ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027f1ac_0x27f1ac");
#endif

    switch (ctx->pc) {
        case 0x27f208u: goto label_27f208;
        case 0x27f214u: goto label_27f214;
        default: break;
    }

    ctx->pc = 0x27f1acu;

    // 0x27f1ac: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x27f1acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x27f1b0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27f1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27f1b4: 0x24421cb0  addiu       $v0, $v0, 0x1CB0
    ctx->pc = 0x27f1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7344));
    // 0x27f1b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27f1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27f1bc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x27f1bcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27f1c0: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x27f1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x27f1c4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x27f1c4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x27f1c8: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x27f1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27f1cc: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x27f1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x27f1d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27f1d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27f1d4: 0x0  nop
    ctx->pc = 0x27f1d4u;
    // NOP
    // 0x27f1d8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x27f1d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x27f1dc: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x27f1dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x27f1e0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x27f1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x27f1e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27f1e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27f1e8: 0x0  nop
    ctx->pc = 0x27f1e8u;
    // NOP
    // 0x27f1ec: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x27f1ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x27f1f0: 0x2404171c  addiu       $a0, $zero, 0x171C
    ctx->pc = 0x27f1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5916));
    // 0x27f1f4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27f1f4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27f1f8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x27f1f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x27f1fc: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x27f1fcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27f200: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x27F200u;
    SET_GPR_U32(ctx, 31, 0x27F208u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x27F200u, 0x27F208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F208u;
label_27f208:
    // 0x27f208: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x27f208u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x27f20c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x27F20Cu;
    SET_GPR_U32(ctx, 31, 0x27F214u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x27F20Cu, 0x27F214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F214u;
label_27f214:
    // 0x27f214: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x27f214u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x27f218u;
}
