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

// Function: entry_001818dc
// Address: 0x1818dc - 0x1819ac
void entry_001818dc_0x1818dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001818dc_0x1818dc");
#endif

    switch (ctx->pc) {
        case 0x18197cu: goto label_18197c;
        default: break;
    }

    ctx->pc = 0x1818dcu;

    // 0x1818dc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1818dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1818e0: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x1818e0u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x1818e4: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x1818e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1818e8: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x1818e8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x1818ec: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x1818ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1818f0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1818f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1818f4: 0x33940  sll         $a3, $v1, 5
    ctx->pc = 0x1818f4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1818f8: 0x3c06004a  lui         $a2, 0x4A
    ctx->pc = 0x1818f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)74 << 16));
    // 0x1818fc: 0x24c31380  addiu       $v1, $a2, 0x1380
    ctx->pc = 0x1818fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4992));
    // 0x181900: 0x673021  addu        $a2, $v1, $a3
    ctx->pc = 0x181900u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x181904: 0x3c0341b2  lui         $v1, 0x41B2
    ctx->pc = 0x181904u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16818 << 16));
    // 0x181908: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x181908u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18190c: 0xc4c00178  lwc1        $f0, 0x178($a2)
    ctx->pc = 0x18190cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181910: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x181910u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x181914: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181914u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181918: 0xc420f1d8  lwc1        $f0, -0xE28($at)
    ctx->pc = 0x181918u;
    { uint32_t bits = FAST_READ32(0x47F1D8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18191c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x18191cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x181920: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x181920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x181924: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181924u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181928: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x181928u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x18192c: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x18192cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x181930: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x181930u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x181934: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x181934u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x181938: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x181938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x18193c: 0x33140  sll         $a2, $v1, 5
    ctx->pc = 0x18193cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x181940: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x181940u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x181944: 0x24631380  addiu       $v1, $v1, 0x1380
    ctx->pc = 0x181944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x181948: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x181948u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x18194c: 0x3c0341b2  lui         $v1, 0x41B2
    ctx->pc = 0x18194cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16818 << 16));
    // 0x181950: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x181950u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x181954: 0xc4c00178  lwc1        $f0, 0x178($a2)
    ctx->pc = 0x181954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181958: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x181958u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x18195c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x18195cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181960: 0xc420f1d8  lwc1        $f0, -0xE28($at)
    ctx->pc = 0x181960u;
    { uint32_t bits = FAST_READ32(0x47F1D8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181964: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x181964u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x181968: 0x0  nop
    ctx->pc = 0x181968u;
    // NOP
    // 0x18196c: 0x0  nop
    ctx->pc = 0x18196cu;
    // NOP
    // 0x181970: 0x0  nop
    ctx->pc = 0x181970u;
    // NOP
    // 0x181974: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x181974u;
    SET_GPR_U32(ctx, 31, 0x18197Cu);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x181974u, 0x18197Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18197Cu;
label_18197c:
    // 0x18197c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x18197cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x181980: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181984: 0xac23f210  sw          $v1, -0xDF0($at)
    ctx->pc = 0x181984u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x47F210u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F210u, _value); } while (0);
    // 0x181988: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181988u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x18198c: 0x8c26f210  lw          $a2, -0xDF0($at)
    ctx->pc = 0x18198cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x47F210u));
    // 0x181990: 0x4c00006  bltz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x181990u;
    {
        const bool branch_taken_0x181990 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x181990) {
            ctx->pc = 0x1819ACu;
            return;
        }
    }
    ctx->pc = 0x181998u;
    // 0x181998: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x181998u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18199c: 0x0  nop
    ctx->pc = 0x18199cu;
    // NOP
    // 0x1819a0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1819a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1819a4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1819A4u;
    {
        const bool branch_taken_0x1819a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1819a4) {
            ctx->pc = 0x1819C8u;
            return;
        }
    }
    ctx->pc = 0x1819ACu;
}
