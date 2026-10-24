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

// Function: entry_00246508
// Address: 0x246508 - 0x2465cc
void entry_00246508_0x246508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00246508_0x246508");
#endif

    switch (ctx->pc) {
        case 0x2465a0u: goto label_2465a0;
        case 0x2465acu: goto label_2465ac;
        default: break;
    }

    ctx->pc = 0x246508u;

    // 0x246508: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x246508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x24650c: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x24650cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x246510: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x246510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x246514: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x246514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x246518: 0x1060009b  beqz        $v1, . + 4 + (0x9B << 2)
    ctx->pc = 0x246518u;
    {
        const bool branch_taken_0x246518 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x246518) {
            ctx->pc = 0x246788u;
            return;
        }
    }
    ctx->pc = 0x246520u;
    // 0x246520: 0x3c02c3b9  lui         $v0, 0xC3B9
    ctx->pc = 0x246520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50105 << 16));
    // 0x246524: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x246524u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x246528: 0x0  nop
    ctx->pc = 0x246528u;
    // NOP
    // 0x24652c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x24652cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x246530: 0x3c034416  lui         $v1, 0x4416
    ctx->pc = 0x246530u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17430 << 16));
    // 0x246534: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x246534u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x246538: 0x0  nop
    ctx->pc = 0x246538u;
    // NOP
    // 0x24653c: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x24653cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x246540: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x246540u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x246544: 0x0  nop
    ctx->pc = 0x246544u;
    // NOP
    // 0x246548: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x246548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x24654c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x24654cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x246550: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x246550u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x246554: 0x0  nop
    ctx->pc = 0x246554u;
    // NOP
    // 0x246558: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x246558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x24655c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x24655cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x246560: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x246560u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x246564: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x246564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x246568: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x246568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24656c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24656cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x246570: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x246570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x246574: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x246574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x246578: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x246578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24657c: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x24657cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x246580: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x246580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x246584: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x246584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x246588: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x246588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x24658c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x24658cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x246590: 0x24470880  addiu       $a3, $v0, 0x880
    ctx->pc = 0x246590u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x246594: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x246594u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x246598: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x246598u;
    SET_GPR_U32(ctx, 31, 0x2465A0u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x246598u, 0x2465A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2465A0u;
label_2465a0:
    // 0x2465a0: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2465a0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2465a4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2465A4u;
    SET_GPR_U32(ctx, 31, 0x2465ACu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2465A4u, 0x2465ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2465ACu;
label_2465ac:
    // 0x2465ac: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x2465acu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2465b0: 0x4e00006  bltz        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x2465B0u;
    {
        const bool branch_taken_0x2465b0 = (GPR_S32(ctx, 7) < 0);
        if (branch_taken_0x2465b0) {
            ctx->pc = 0x2465CCu;
            return;
        }
    }
    ctx->pc = 0x2465B8u;
    // 0x2465b8: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2465b8u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2465bc: 0x0  nop
    ctx->pc = 0x2465bcu;
    // NOP
    // 0x2465c0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2465c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2465c4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2465C4u;
    {
        const bool branch_taken_0x2465c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2465c4) {
            ctx->pc = 0x2465E8u;
            return;
        }
    }
    ctx->pc = 0x2465CCu;
}
