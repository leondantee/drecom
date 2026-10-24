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

// Function: entry_00241060
// Address: 0x241060 - 0x241100
void entry_00241060_0x241060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00241060_0x241060");
#endif

    switch (ctx->pc) {
        case 0x2410fcu: goto label_2410fc;
        default: break;
    }

    ctx->pc = 0x241060u;

    // 0x241060: 0x260a0150  addiu       $t2, $s0, 0x150
    ctx->pc = 0x241060u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x241064: 0xc5410010  lwc1        $f1, 0x10($t2)
    ctx->pc = 0x241064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x241068: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x241068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24106c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x24106cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x241070: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x241070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x241074: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x241074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x241078: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x241078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24107c: 0x3c083e99  lui         $t0, 0x3E99
    ctx->pc = 0x24107cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16025 << 16));
    // 0x241080: 0x3507999a  ori         $a3, $t0, 0x999A
    ctx->pc = 0x241080u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)39322);
    // 0x241084: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x241084u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x241088: 0x0  nop
    ctx->pc = 0x241088u;
    // NOP
    // 0x24108c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x24108cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x241090: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x241090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x241094: 0x26090150  addiu       $t1, $s0, 0x150
    ctx->pc = 0x241094u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x241098: 0xc521000c  lwc1        $f1, 0xC($t1)
    ctx->pc = 0x241098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24109c: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x24109cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2410a0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2410a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2410a4: 0x0  nop
    ctx->pc = 0x2410a4u;
    // NOP
    // 0x2410a8: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x2410A8u;
    {
        const bool branch_taken_0x2410a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2410a8) {
            ctx->pc = 0x241100u;
            return;
        }
    }
    ctx->pc = 0x2410B0u;
    // 0x2410b0: 0x260a0150  addiu       $t2, $s0, 0x150
    ctx->pc = 0x2410b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2410b4: 0xc540000c  lwc1        $f0, 0xC($t2)
    ctx->pc = 0x2410b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2410b8: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x2410b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x2410bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2410bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2410c0: 0x26080150  addiu       $t0, $s0, 0x150
    ctx->pc = 0x2410c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2410c4: 0xe5000010  swc1        $f0, 0x10($t0)
    ctx->pc = 0x2410c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 16), bits); }
    // 0x2410c8: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x2410c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2410cc: 0x260a0150  addiu       $t2, $s0, 0x150
    ctx->pc = 0x2410ccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2410d0: 0xa1490001  sb          $t1, 0x1($t2)
    ctx->pc = 0x2410d0u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 1), (uint8_t)GPR_U32(ctx, 9));
    // 0x2410d4: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x2410d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2410d8: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x2410d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2410dc: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x2410dcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2410e0: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x2410e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2410e4: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x2410e4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2410e8: 0x2409003c  addiu       $t1, $zero, 0x3C
    ctx->pc = 0x2410e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2410ec: 0x71203628  paddub      $a2, $t1, $zero
    ctx->pc = 0x2410ecu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2410f0: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x2410f0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2410f4: 0xc065580  jal         func_195600
    ctx->pc = 0x2410F4u;
    SET_GPR_U32(ctx, 31, 0x2410FCu);
    ctx->pc = 0x195600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195600u, 0x2410F4u, 0x2410FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2410FCu;
label_2410fc:
    // 0x2410fc: 0x70405628  paddub      $t2, $v0, $zero
    ctx->pc = 0x2410fcu;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x241100u;
}
