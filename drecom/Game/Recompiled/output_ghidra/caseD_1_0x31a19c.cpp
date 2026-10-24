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

// Function: caseD_1
// Address: 0x31a19c - 0x31a230
void caseD_1_0x31a19c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x31a19c");
#endif

    switch (ctx->pc) {
        case 0x31a218u: goto label_31a218;
        case 0x31a224u: goto label_31a224;
        default: break;
    }

    ctx->pc = 0x31a19cu;

    // 0x31a19c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x31a19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x31a1a0: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x31a1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x31a1a4: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x31a1a4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31a1a8: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x31a1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x31a1ac: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x31a1acu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x31a1b0: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x31a1b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31a1b4: 0x3c07c3fa  lui         $a3, 0xC3FA
    ctx->pc = 0x31a1b4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)50170 << 16));
    // 0x31a1b8: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x31a1b8u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31a1bc: 0x0  nop
    ctx->pc = 0x31a1bcu;
    // NOP
    // 0x31a1c0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x31a1c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x31a1c4: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x31a1c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x31a1c8: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x31a1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31a1cc: 0x3c0442c8  lui         $a0, 0x42C8
    ctx->pc = 0x31a1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17096 << 16));
    // 0x31a1d0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x31a1d0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31a1d4: 0x0  nop
    ctx->pc = 0x31a1d4u;
    // NOP
    // 0x31a1d8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x31a1d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x31a1dc: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x31a1dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x31a1e0: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x31a1e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31a1e4: 0x3c05c348  lui         $a1, 0xC348
    ctx->pc = 0x31a1e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49992 << 16));
    // 0x31a1e8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x31a1e8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31a1ec: 0x0  nop
    ctx->pc = 0x31a1ecu;
    // NOP
    // 0x31a1f0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x31a1f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x31a1f4: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x31a1f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x31a1f8: 0x24060301  addiu       $a2, $zero, 0x301
    ctx->pc = 0x31a1f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 769));
    // 0x31a1fc: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x31a1fcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x31a200: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31a200u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31a204: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x31a204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x31a208: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x31a208u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31a20c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x31a20cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31a210: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x31A210u;
    SET_GPR_U32(ctx, 31, 0x31A218u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31A210u, 0x31A218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A218u;
label_31a218:
    // 0x31a218: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31a218u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31a21c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x31A21Cu;
    SET_GPR_U32(ctx, 31, 0x31A224u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31A21Cu, 0x31A224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A224u;
label_31a224:
    // 0x31a224: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x31a224u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31a228: 0x1000018b  b           . + 4 + (0x18B << 2)
    ctx->pc = 0x31A228u;
    {
        const bool branch_taken_0x31a228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31a228) {
            ctx->pc = 0x31A858u;
            return;
        }
    }
    ctx->pc = 0x31A230u;
}
