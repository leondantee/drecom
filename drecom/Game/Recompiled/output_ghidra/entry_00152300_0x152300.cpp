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

// Function: entry_00152300
// Address: 0x152300 - 0x1523c4
void entry_00152300_0x152300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00152300_0x152300");
#endif

    switch (ctx->pc) {
        case 0x15238cu: goto label_15238c;
        default: break;
    }

    ctx->pc = 0x152300u;

    // 0x152300: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x152300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x152304: 0x104000b4  beqz        $v0, . + 4 + (0xB4 << 2)
    ctx->pc = 0x152304u;
    {
        const bool branch_taken_0x152304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x152304) {
            ctx->pc = 0x1525D8u;
            return;
        }
    }
    ctx->pc = 0x15230Cu;
    // 0x15230c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x15230cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x152310: 0x8c24b708  lw          $a0, -0x48F8($at)
    ctx->pc = 0x152310u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3EB708u));
    // 0x152314: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x152314u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x152318: 0x871025  or          $v0, $a0, $a3
    ctx->pc = 0x152318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x15231c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x15231cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x152320: 0xac22b708  sw          $v0, -0x48F8($at)
    ctx->pc = 0x152320u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EB708u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EB708u, _value); } while (0);
    // 0x152324: 0x3c024307  lui         $v0, 0x4307
    ctx->pc = 0x152324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17159 << 16));
    // 0x152328: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x152328u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15232c: 0x0  nop
    ctx->pc = 0x15232cu;
    // NOP
    // 0x152330: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x152330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x152334: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x152334u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152338: 0x0  nop
    ctx->pc = 0x152338u;
    // NOP
    // 0x15233c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x15233cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x152340: 0x3c044220  lui         $a0, 0x4220
    ctx->pc = 0x152340u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16928 << 16));
    // 0x152344: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x152344u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152348: 0x0  nop
    ctx->pc = 0x152348u;
    // NOP
    // 0x15234c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x15234cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x152350: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x152350u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x152354: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x152354u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152358: 0x0  nop
    ctx->pc = 0x152358u;
    // NOP
    // 0x15235c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x15235cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x152360: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x152360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x152364: 0x848515ec  lh          $a1, 0x15EC($a0)
    ctx->pc = 0x152364u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 5612)));
    // 0x152368: 0x10a00016  beqz        $a1, . + 4 + (0x16 << 2)
    ctx->pc = 0x152368u;
    {
        const bool branch_taken_0x152368 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x152368) {
            ctx->pc = 0x1523C4u;
            return;
        }
    }
    ctx->pc = 0x152370u;
    // 0x152370: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x152370u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x152374: 0x24e4b700  addiu       $a0, $a3, -0x4900
    ctx->pc = 0x152374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948608));
    // 0x152378: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x152378u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15237c: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x15237cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x152380: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x152380u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x152384: 0xc0bd0c8  jal         func_2F4320
    ctx->pc = 0x152384u;
    SET_GPR_U32(ctx, 31, 0x15238Cu);
    ctx->pc = 0x2F4320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4320u, 0x152384u, 0x15238Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15238Cu;
label_15238c:
    // 0x15238c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x15238cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x152390: 0x846415ec  lh          $a0, 0x15EC($v1)
    ctx->pc = 0x152390u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 5612)));
    // 0x152394: 0x2482ffa6  addiu       $v0, $a0, -0x5A
    ctx->pc = 0x152394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967206));
    // 0x152398: 0xa46215ec  sh          $v0, 0x15EC($v1)
    ctx->pc = 0x152398u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 5612), (uint16_t)GPR_U32(ctx, 2));
    // 0x15239c: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x15239cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1523a0: 0x84a615ec  lh          $a2, 0x15EC($a1)
    ctx->pc = 0x1523a0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 5612)));
    // 0x1523a4: 0x63c3c  dsll32      $a3, $a2, 16
    ctx->pc = 0x1523a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << (32 + 16));
    // 0x1523a8: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x1523a8u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x1523ac: 0x4e10230  bgez        $a3, . + 4 + (0x230 << 2)
    ctx->pc = 0x1523ACu;
    {
        const bool branch_taken_0x1523ac = (GPR_S32(ctx, 7) >= 0);
        if (branch_taken_0x1523ac) {
            ctx->pc = 0x152C70u;
            return;
        }
    }
    ctx->pc = 0x1523B4u;
    // 0x1523b4: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1523b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1523b8: 0xa48015ec  sh          $zero, 0x15EC($a0)
    ctx->pc = 0x1523b8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 5612), (uint16_t)GPR_U32(ctx, 0));
    // 0x1523bc: 0x1000022c  b           . + 4 + (0x22C << 2)
    ctx->pc = 0x1523BCu;
    {
        const bool branch_taken_0x1523bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1523bc) {
            ctx->pc = 0x152C70u;
            return;
        }
    }
    ctx->pc = 0x1523C4u;
}
