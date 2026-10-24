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

// Function: entry_001528cc
// Address: 0x1528cc - 0x152974
void entry_001528cc_0x1528cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001528cc_0x1528cc");
#endif

    switch (ctx->pc) {
        case 0x152938u: goto label_152938;
        default: break;
    }

    ctx->pc = 0x1528ccu;

    // 0x1528cc: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x1528ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x1528d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1528d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1528d4: 0x0  nop
    ctx->pc = 0x1528d4u;
    // NOP
    // 0x1528d8: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1528d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1528dc: 0x3c02c1f0  lui         $v0, 0xC1F0
    ctx->pc = 0x1528dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49648 << 16));
    // 0x1528e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1528e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1528e4: 0x0  nop
    ctx->pc = 0x1528e4u;
    // NOP
    // 0x1528e8: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x1528e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1528ec: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x1528ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x1528f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1528f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1528f4: 0x0  nop
    ctx->pc = 0x1528f4u;
    // NOP
    // 0x1528f8: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x1528f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1528fc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1528fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x152900: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x152900u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152904: 0x0  nop
    ctx->pc = 0x152904u;
    // NOP
    // 0x152908: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x152908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x15290c: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x15290cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x152910: 0x84a315ec  lh          $v1, 0x15EC($a1)
    ctx->pc = 0x152910u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 5612)));
    // 0x152914: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x152914u;
    {
        const bool branch_taken_0x152914 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x152914) {
            ctx->pc = 0x152974u;
            return;
        }
    }
    ctx->pc = 0x15291Cu;
    // 0x15291c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x15291cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x152920: 0x2442a4a0  addiu       $v0, $v0, -0x5B60
    ctx->pc = 0x152920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943904));
    // 0x152924: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x152924u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x152928: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x152928u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15292c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x15292cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x152930: 0xc0bd0c8  jal         func_2F4320
    ctx->pc = 0x152930u;
    SET_GPR_U32(ctx, 31, 0x152938u);
    ctx->pc = 0x2F4320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4320u, 0x152930u, 0x152938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152938u;
label_152938:
    // 0x152938: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x152938u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x15293c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x15293cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x152940: 0x848615ec  lh          $a2, 0x15EC($a0)
    ctx->pc = 0x152940u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 5612)));
    // 0x152944: 0x24c2fe3e  addiu       $v0, $a2, -0x1C2
    ctx->pc = 0x152944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966846));
    // 0x152948: 0xa48215ec  sh          $v0, 0x15EC($a0)
    ctx->pc = 0x152948u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 5612), (uint16_t)GPR_U32(ctx, 2));
    // 0x15294c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x15294cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x152950: 0x846315ec  lh          $v1, 0x15EC($v1)
    ctx->pc = 0x152950u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 5612)));
    // 0x152954: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x152954u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x152958: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x152958u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x15295c: 0x4c100c4  bgez        $a2, . + 4 + (0xC4 << 2)
    ctx->pc = 0x15295Cu;
    {
        const bool branch_taken_0x15295c = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x15295c) {
            ctx->pc = 0x152C70u;
            return;
        }
    }
    ctx->pc = 0x152964u;
    // 0x152964: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x152964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x152968: 0xa46015ec  sh          $zero, 0x15EC($v1)
    ctx->pc = 0x152968u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 5612), (uint16_t)GPR_U32(ctx, 0));
    // 0x15296c: 0x100000c0  b           . + 4 + (0xC0 << 2)
    ctx->pc = 0x15296Cu;
    {
        const bool branch_taken_0x15296c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15296c) {
            ctx->pc = 0x152C70u;
            return;
        }
    }
    ctx->pc = 0x152974u;
}
