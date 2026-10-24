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

// Function: entry_00150810
// Address: 0x150810 - 0x150944
void entry_00150810_0x150810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150810_0x150810");
#endif

    switch (ctx->pc) {
        case 0x150830u: goto label_150830;
        case 0x150894u: goto label_150894;
        case 0x1508d4u: goto label_1508d4;
        case 0x15090cu: goto label_15090c;
        default: break;
    }

    ctx->pc = 0x150810u;

    // 0x150810: 0x1529c0  sll         $a1, $s5, 7
    ctx->pc = 0x150810u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 21), 7));
    // 0x150814: 0x8fa600e8  lw          $a2, 0xE8($sp)
    ctx->pc = 0x150814u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x150818: 0xc53821  addu        $a3, $a2, $a1
    ctx->pc = 0x150818u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15081c: 0x24e41600  addiu       $a0, $a3, 0x1600
    ctx->pc = 0x15081cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 5632));
    // 0x150820: 0x8e650130  lw          $a1, 0x130($s3)
    ctx->pc = 0x150820u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 304)));
    // 0x150824: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x150824u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x150828: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x150828u;
    SET_GPR_U32(ctx, 31, 0x150830u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x150830u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x150830u) { return; }
    ctx->pc = 0x150830u;
label_150830:
    // 0x150830: 0x3c02c100  lui         $v0, 0xC100
    ctx->pc = 0x150830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49408 << 16));
    // 0x150834: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x150834u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150838: 0x0  nop
    ctx->pc = 0x150838u;
    // NOP
    // 0x15083c: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x15083cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x150840: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x150840u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150844: 0x0  nop
    ctx->pc = 0x150844u;
    // NOP
    // 0x150848: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x150848u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x15084c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x15084cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x150850: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x150850u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150854: 0x0  nop
    ctx->pc = 0x150854u;
    // NOP
    // 0x150858: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x150858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x15085c: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x15085cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x150860: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x150860u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150864: 0x0  nop
    ctx->pc = 0x150864u;
    // NOP
    // 0x150868: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x150868u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x15086c: 0x1529c0  sll         $a1, $s5, 7
    ctx->pc = 0x15086cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 21), 7));
    // 0x150870: 0x8fa600e8  lw          $a2, 0xE8($sp)
    ctx->pc = 0x150870u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x150874: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x150874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x150878: 0x24441610  addiu       $a0, $v0, 0x1610
    ctx->pc = 0x150878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5648));
    // 0x15087c: 0x8e660130  lw          $a2, 0x130($s3)
    ctx->pc = 0x15087cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 304)));
    // 0x150880: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x150880u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x150884: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x150884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x150888: 0x70603628  paddub      $a2, $v1, $zero
    ctx->pc = 0x150888u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x15088c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x15088Cu;
    SET_GPR_U32(ctx, 31, 0x150894u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x150894u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x150894u) { return; }
    ctx->pc = 0x150894u;
label_150894:
    // 0x150894: 0x153140  sll         $a2, $s5, 5
    ctx->pc = 0x150894u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 21), 5));
    // 0x150898: 0x8fa700e8  lw          $a3, 0xE8($sp)
    ctx->pc = 0x150898u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x15089c: 0xe61021  addu        $v0, $a3, $a2
    ctx->pc = 0x15089cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1508a0: 0x1521c0  sll         $a0, $s5, 7
    ctx->pc = 0x1508a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 7));
    // 0x1508a4: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x1508a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x1508a8: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x1508a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1508ac: 0x1421c0  sll         $a0, $s4, 7
    ctx->pc = 0x1508acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 7));
    // 0x1508b0: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x1508b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x1508b4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1508b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1508b8: 0x24451880  addiu       $a1, $v0, 0x1880
    ctx->pc = 0x1508b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 6272));
    // 0x1508bc: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1508bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1508c0: 0x24c61600  addiu       $a2, $a2, 0x1600
    ctx->pc = 0x1508c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5632));
    // 0x1508c4: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x1508c4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1508c8: 0x24661600  addiu       $a2, $v1, 0x1600
    ctx->pc = 0x1508c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 5632));
    // 0x1508cc: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1508CCu;
    SET_GPR_U32(ctx, 31, 0x1508D4u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1508CCu, 0x1508D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1508D4u;
label_1508d4:
    // 0x1508d4: 0x153140  sll         $a2, $s5, 5
    ctx->pc = 0x1508d4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 21), 5));
    // 0x1508d8: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x1508d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x1508dc: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x1508dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1508e0: 0x1531c0  sll         $a2, $s5, 7
    ctx->pc = 0x1508e0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 21), 7));
    // 0x1508e4: 0x8fa700e8  lw          $a3, 0xE8($sp)
    ctx->pc = 0x1508e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x1508e8: 0xe61021  addu        $v0, $a3, $a2
    ctx->pc = 0x1508e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1508ec: 0x1421c0  sll         $a0, $s4, 7
    ctx->pc = 0x1508ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 7));
    // 0x1508f0: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x1508f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x1508f4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1508f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1508f8: 0x24a41890  addiu       $a0, $a1, 0x1890
    ctx->pc = 0x1508f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 6288));
    // 0x1508fc: 0x24451610  addiu       $a1, $v0, 0x1610
    ctx->pc = 0x1508fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 5648));
    // 0x150900: 0x24661610  addiu       $a2, $v1, 0x1610
    ctx->pc = 0x150900u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 5648));
    // 0x150904: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x150904u;
    SET_GPR_U32(ctx, 31, 0x15090Cu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x150904u, 0x15090Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15090Cu;
label_15090c:
    // 0x15090c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x15090cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x150910: 0x1529c0  sll         $a1, $s5, 7
    ctx->pc = 0x150910u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 21), 7));
    // 0x150914: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x150914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x150918: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x150918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x15091c: 0x24701620  addiu       $s0, $v1, 0x1620
    ctx->pc = 0x15091cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 5664));
    // 0x150920: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x150920u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x150924: 0x24765510  addiu       $s6, $v1, 0x5510
    ctx->pc = 0x150924u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 21776));
    // 0x150928: 0x3c033f40  lui         $v1, 0x3F40
    ctx->pc = 0x150928u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16192 << 16));
    // 0x15092c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15092cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150930: 0x0  nop
    ctx->pc = 0x150930u;
    // NOP
    // 0x150934: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x150934u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x150938: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x150938u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15093c: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x15093Cu;
    {
        const bool branch_taken_0x15093c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15093c) {
            ctx->pc = 0x150A88u;
            return;
        }
    }
    ctx->pc = 0x150944u;
}
