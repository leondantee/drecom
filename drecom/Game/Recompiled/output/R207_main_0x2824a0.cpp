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

// Function: R207_main
// Address: 0x2824a0 - 0x282580
void R207_main_0x2824a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R207_main_0x2824a0");
#endif

    ctx->pc = 0x2824a0u;

    // 0x2824a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2824a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2824a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2824a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2824a8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2824a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2824ac: 0x8c30f9e0  lw          $s0, -0x620($at)
    ctx->pc = 0x2824acu;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x61F9E0u));
    // 0x2824b0: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x2824b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2824b4: 0x3c033951  lui         $v1, 0x3951
    ctx->pc = 0x2824b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14673 << 16));
    // 0x2824b8: 0x3463b717  ori         $v1, $v1, 0xB717
    ctx->pc = 0x2824b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46871);
    // 0x2824bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2824bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2824c0: 0x0  nop
    ctx->pc = 0x2824c0u;
    // NOP
    // 0x2824c4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2824c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2824c8: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x2824c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x2824cc: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x2824ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2824d0: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x2824d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x2824d4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x2824d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x2824d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2824d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2824dc: 0x0  nop
    ctx->pc = 0x2824dcu;
    // NOP
    // 0x2824e0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2824e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2824e4: 0x0  nop
    ctx->pc = 0x2824e4u;
    // NOP
    // 0x2824e8: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x2824E8u;
    {
        const bool branch_taken_0x2824e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2824e8) {
            ctx->pc = 0x28250Cu;
            goto label_28250c;
        }
    }
    ctx->pc = 0x2824F0u;
    // 0x2824f0: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x2824f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2824f4: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x2824f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x2824f8: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x2824f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x2824fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2824fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x282500: 0x0  nop
    ctx->pc = 0x282500u;
    // NOP
    // 0x282504: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x282504u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x282508: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x282508u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_28250c:
    // 0x28250c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28250cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x282510: 0x8c30f9e4  lw          $s0, -0x61C($at)
    ctx->pc = 0x282510u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x61F9E4u));
    // 0x282514: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x282514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x282518: 0x3c033a03  lui         $v1, 0x3A03
    ctx->pc = 0x282518u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14851 << 16));
    // 0x28251c: 0x3463126f  ori         $v1, $v1, 0x126F
    ctx->pc = 0x28251cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4719);
    // 0x282520: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x282520u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x282524: 0x0  nop
    ctx->pc = 0x282524u;
    // NOP
    // 0x282528: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x282528u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x28252c: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x28252cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x282530: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x282530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x282534: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x282534u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x282538: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x282538u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x28253c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28253cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x282540: 0x0  nop
    ctx->pc = 0x282540u;
    // NOP
    // 0x282544: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x282544u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x282548: 0x0  nop
    ctx->pc = 0x282548u;
    // NOP
    // 0x28254c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x28254Cu;
    {
        const bool branch_taken_0x28254c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28254c) {
            ctx->pc = 0x282570u;
            goto label_282570;
        }
    }
    ctx->pc = 0x282554u;
    // 0x282554: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x282554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x282558: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x282558u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x28255c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x28255cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x282560: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x282560u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x282564: 0x0  nop
    ctx->pc = 0x282564u;
    // NOP
    // 0x282568: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x282568u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x28256c: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x28256cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_282570:
    // 0x282570: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x282570u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x282574: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x282574u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x282578: 0x3e00008  jr          $ra
    ctx->pc = 0x282578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282578u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x282580u;
}
