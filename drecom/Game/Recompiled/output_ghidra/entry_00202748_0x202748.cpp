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

// Function: entry_00202748
// Address: 0x202748 - 0x202880
void entry_00202748_0x202748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00202748_0x202748");
#endif

    switch (ctx->pc) {
        case 0x20279cu: goto label_20279c;
        case 0x202878u: goto label_202878;
        default: break;
    }

    ctx->pc = 0x202748u;

    // 0x202748: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x202748u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20274c: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x20274cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x202750: 0xc4604854  lwc1        $f0, 0x4854($v1)
    ctx->pc = 0x202750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 18516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202754: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x202754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x202758: 0x8fb50100  lw          $s5, 0x100($sp)
    ctx->pc = 0x202758u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x20275c: 0x8ea64838  lw          $a2, 0x4838($s5)
    ctx->pc = 0x20275cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18488)));
    // 0x202760: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x202760u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x202764: 0x0  nop
    ctx->pc = 0x202764u;
    // NOP
    // 0x202768: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x202768u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x20276c: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x20276cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x202770: 0xc4209fa0  lwc1        $f0, -0x6060($at)
    ctx->pc = 0x202770u;
    { uint32_t bits = FAST_READ32(0x389FA0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202774: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x202774u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x202778: 0x240300e0  addiu       $v1, $zero, 0xE0
    ctx->pc = 0x202778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x20277c: 0x8fb600e4  lw          $s6, 0xE4($sp)
    ctx->pc = 0x20277cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x202780: 0x761823  subu        $v1, $v1, $s6
    ctx->pc = 0x202780u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x202784: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x202784u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x202788: 0x0  nop
    ctx->pc = 0x202788u;
    // NOP
    // 0x20278c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x20278cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x202790: 0x46010301  sub.s       $f12, $f0, $f1
    ctx->pc = 0x202790u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x202794: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x202794u;
    SET_GPR_U32(ctx, 31, 0x20279Cu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x202794u, 0x20279Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20279Cu;
label_20279c:
    // 0x20279c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x20279cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2027a0: 0xafa300e8  sw          $v1, 0xE8($sp)
    ctx->pc = 0x2027a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 3));
    // 0x2027a4: 0x240601c0  addiu       $a2, $zero, 0x1C0
    ctx->pc = 0x2027a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x2027a8: 0x8fa300e4  lw          $v1, 0xE4($sp)
    ctx->pc = 0x2027a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x2027ac: 0xc33023  subu        $a2, $a2, $v1
    ctx->pc = 0x2027acu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2027b0: 0x8fa70100  lw          $a3, 0x100($sp)
    ctx->pc = 0x2027b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2027b4: 0x8ce34834  lw          $v1, 0x4834($a3)
    ctx->pc = 0x2027b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 18484)));
    // 0x2027b8: 0xc33023  subu        $a2, $a2, $v1
    ctx->pc = 0x2027b8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2027bc: 0x2623ff00  addiu       $v1, $s1, -0x100
    ctx->pc = 0x2027bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967040));
    // 0x2027c0: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x2027c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2027c4: 0x319c3  sra         $v1, $v1, 7
    ctx->pc = 0x2027c4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 7));
    // 0x2027c8: 0x2233021  addu        $a2, $s1, $v1
    ctx->pc = 0x2027c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2027cc: 0x70c0be28  paddub      $s7, $a2, $zero
    ctx->pc = 0x2027ccu;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2027d0: 0x8fa300e4  lw          $v1, 0xE4($sp)
    ctx->pc = 0x2027d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x2027d4: 0x7060f628  paddub      $fp, $v1, $zero
    ctx->pc = 0x2027d4u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2027d8: 0x240301c0  addiu       $v1, $zero, 0x1C0
    ctx->pc = 0x2027d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x2027dc: 0x8fa700e4  lw          $a3, 0xE4($sp)
    ctx->pc = 0x2027dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x2027e0: 0x673023  subu        $a2, $v1, $a3
    ctx->pc = 0x2027e0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2027e4: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2027e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2027e8: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x2027e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2027ec: 0x8fa60100  lw          $a2, 0x100($sp)
    ctx->pc = 0x2027ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2027f0: 0x8cc64834  lw          $a2, 0x4834($a2)
    ctx->pc = 0x2027f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 18484)));
    // 0x2027f4: 0x663023  subu        $a2, $v1, $a2
    ctx->pc = 0x2027f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2027f8: 0x2623ff00  addiu       $v1, $s1, -0x100
    ctx->pc = 0x2027f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967040));
    // 0x2027fc: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x2027fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x202800: 0x319c3  sra         $v1, $v1, 7
    ctx->pc = 0x202800u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 7));
    // 0x202804: 0x2233021  addu        $a2, $s1, $v1
    ctx->pc = 0x202804u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x202808: 0xafa600ec  sw          $a2, 0xEC($sp)
    ctx->pc = 0x202808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 6));
    // 0x20280c: 0x8fa300e4  lw          $v1, 0xE4($sp)
    ctx->pc = 0x20280cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x202810: 0x8fa700c8  lw          $a3, 0xC8($sp)
    ctx->pc = 0x202810u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x202814: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x202814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x202818: 0xafa300f0  sw          $v1, 0xF0($sp)
    ctx->pc = 0x202818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
    // 0x20281c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x20281cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x202820: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x202820u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x202824: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x202824u;
    {
        const bool branch_taken_0x202824 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x202824) {
            ctx->pc = 0x202880u;
            return;
        }
    }
    ctx->pc = 0x20282Cu;
    // 0x20282c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x20282cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x202830: 0x8c230ab0  lw          $v1, 0xAB0($at)
    ctx->pc = 0x202830u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB0u));
    // 0x202834: 0x24630013  addiu       $v1, $v1, 0x13
    ctx->pc = 0x202834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19));
    // 0x202838: 0x3383c  dsll32      $a3, $v1, 0
    ctx->pc = 0x202838u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 0));
    // 0x20283c: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x20283cu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x202840: 0x3c060007  lui         $a2, 0x7
    ctx->pc = 0x202840u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)7 << 16));
    // 0x202844: 0x34c60808  ori         $a2, $a2, 0x808
    ctx->pc = 0x202844u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2056);
    // 0x202848: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x202848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x20284c: 0x3c061d07  lui         $a2, 0x1D07
    ctx->pc = 0x20284cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)7431 << 16));
    // 0x202850: 0x34c60a00  ori         $a2, $a2, 0xA00
    ctx->pc = 0x202850u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2560);
    // 0x202854: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x202854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x202858: 0xe31825  or          $v1, $a3, $v1
    ctx->pc = 0x202858u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x20285c: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x20285cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x202860: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x202860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x202864: 0x24450da0  addiu       $a1, $v0, 0xDA0
    ctx->pc = 0x202864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 3488));
    // 0x202868: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x202868u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x20286c: 0x8c260ab8  lw          $a2, 0xAB8($at)
    ctx->pc = 0x20286cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x600AB8u));
    // 0x202870: 0xc059b14  jal         func_166C50
    ctx->pc = 0x202870u;
    SET_GPR_U32(ctx, 31, 0x202878u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x202870u, 0x202878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202878u;
label_202878:
    // 0x202878: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x202878u;
    {
        const bool branch_taken_0x202878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x202878) {
            ctx->pc = 0x2028C8u;
            return;
        }
    }
    ctx->pc = 0x202880u;
}
