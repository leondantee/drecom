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

// Function: entry_00181764
// Address: 0x181764 - 0x181898
void entry_00181764_0x181764(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00181764_0x181764");
#endif

    switch (ctx->pc) {
        case 0x181868u: goto label_181868;
        default: break;
    }

    ctx->pc = 0x181764u;

    // 0x181764: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181764u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181768: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x181768u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x18176c: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x18176cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x181770: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x181770u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x181774: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x181774u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x181778: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x181778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x18177c: 0x33140  sll         $a2, $v1, 5
    ctx->pc = 0x18177cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x181780: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x181780u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x181784: 0x24631380  addiu       $v1, $v1, 0x1380
    ctx->pc = 0x181784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x181788: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x181788u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x18178c: 0x3c0341b2  lui         $v1, 0x41B2
    ctx->pc = 0x18178cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16818 << 16));
    // 0x181790: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x181790u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x181794: 0xc4c00178  lwc1        $f0, 0x178($a2)
    ctx->pc = 0x181794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181798: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x181798u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x18179c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x18179cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1817a0: 0xc420f1d8  lwc1        $f0, -0xE28($at)
    ctx->pc = 0x1817a0u;
    { uint32_t bits = FAST_READ32(0x47F1D8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1817a4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1817a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1817a8: 0x0  nop
    ctx->pc = 0x1817a8u;
    // NOP
    // 0x1817ac: 0x45000092  bc1f        . + 4 + (0x92 << 2)
    ctx->pc = 0x1817ACu;
    {
        const bool branch_taken_0x1817ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1817ac) {
            ctx->pc = 0x1819F8u;
            return;
        }
    }
    ctx->pc = 0x1817B4u;
    // 0x1817b4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1817b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1817b8: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x1817b8u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x1817bc: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x1817bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1817c0: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x1817c0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x1817c4: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x1817c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1817c8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1817c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1817cc: 0x33140  sll         $a2, $v1, 5
    ctx->pc = 0x1817ccu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1817d0: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x1817d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x1817d4: 0x24671380  addiu       $a3, $v1, 0x1380
    ctx->pc = 0x1817d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x1817d8: 0xe61821  addu        $v1, $a3, $a2
    ctx->pc = 0x1817d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1817dc: 0x3c0641b2  lui         $a2, 0x41B2
    ctx->pc = 0x1817dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16818 << 16));
    // 0x1817e0: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x1817e0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1817e4: 0xc4600178  lwc1        $f0, 0x178($v1)
    ctx->pc = 0x1817e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1817e8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1817e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1817ec: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1817ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1817f0: 0xc420f1d8  lwc1        $f0, -0xE28($at)
    ctx->pc = 0x1817f0u;
    { uint32_t bits = FAST_READ32(0x47F1D8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1817f4: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x1817f4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1817f8: 0x3c0342b4  lui         $v1, 0x42B4
    ctx->pc = 0x1817f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17076 << 16));
    // 0x1817fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1817fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x181800: 0x0  nop
    ctx->pc = 0x181800u;
    // NOP
    // 0x181804: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x181804u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x181808: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x181808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x18180c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x18180cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181810: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x181810u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x181814: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x181814u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x181818: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x181818u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x18181c: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x18181cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x181820: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x181820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x181824: 0x33140  sll         $a2, $v1, 5
    ctx->pc = 0x181824u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x181828: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x181828u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x18182c: 0x24631380  addiu       $v1, $v1, 0x1380
    ctx->pc = 0x18182cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x181830: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x181830u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x181834: 0x3c0341b2  lui         $v1, 0x41B2
    ctx->pc = 0x181834u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16818 << 16));
    // 0x181838: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x181838u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18183c: 0xc4c00178  lwc1        $f0, 0x178($a2)
    ctx->pc = 0x18183cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181840: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x181840u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x181844: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181844u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181848: 0xc420f1d8  lwc1        $f0, -0xE28($at)
    ctx->pc = 0x181848u;
    { uint32_t bits = FAST_READ32(0x47F1D8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18184c: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x18184cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x181850: 0x3c0342b4  lui         $v1, 0x42B4
    ctx->pc = 0x181850u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17076 << 16));
    // 0x181854: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x181854u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x181858: 0x0  nop
    ctx->pc = 0x181858u;
    // NOP
    // 0x18185c: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x18185cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x181860: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x181860u;
    SET_GPR_U32(ctx, 31, 0x181868u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x181860u, 0x181868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181868u;
label_181868:
    // 0x181868: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x181868u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x18186c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x18186cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181870: 0xac26f218  sw          $a2, -0xDE8($at)
    ctx->pc = 0x181870u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x47F218u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F218u, _value); } while (0);
    // 0x181874: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181878: 0x8c23f218  lw          $v1, -0xDE8($at)
    ctx->pc = 0x181878u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x47F218u));
    // 0x18187c: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x18187Cu;
    {
        const bool branch_taken_0x18187c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x18187c) {
            ctx->pc = 0x181898u;
            return;
        }
    }
    ctx->pc = 0x181884u;
    // 0x181884: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x181884u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x181888: 0x0  nop
    ctx->pc = 0x181888u;
    // NOP
    // 0x18188c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x18188cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x181890: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x181890u;
    {
        const bool branch_taken_0x181890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x181890) {
            ctx->pc = 0x1818B4u;
            return;
        }
    }
    ctx->pc = 0x181898u;
}
