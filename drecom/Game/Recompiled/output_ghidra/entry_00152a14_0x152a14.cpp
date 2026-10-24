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

// Function: entry_00152a14
// Address: 0x152a14 - 0x152abc
void entry_00152a14_0x152a14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00152a14_0x152a14");
#endif

    switch (ctx->pc) {
        case 0x152a84u: goto label_152a84;
        default: break;
    }

    ctx->pc = 0x152a14u;

    // 0x152a14: 0x3c064396  lui         $a2, 0x4396
    ctx->pc = 0x152a14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17302 << 16));
    // 0x152a18: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x152a18u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152a1c: 0x0  nop
    ctx->pc = 0x152a1cu;
    // NOP
    // 0x152a20: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x152a20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x152a24: 0x3c04c1f0  lui         $a0, 0xC1F0
    ctx->pc = 0x152a24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49648 << 16));
    // 0x152a28: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x152a28u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152a2c: 0x0  nop
    ctx->pc = 0x152a2cu;
    // NOP
    // 0x152a30: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x152a30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x152a34: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x152a34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x152a38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x152a38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152a3c: 0x0  nop
    ctx->pc = 0x152a3cu;
    // NOP
    // 0x152a40: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x152a40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x152a44: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x152a44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x152a48: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x152a48u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152a4c: 0x0  nop
    ctx->pc = 0x152a4cu;
    // NOP
    // 0x152a50: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x152a50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x152a54: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x152a54u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x152a58: 0x84e415ec  lh          $a0, 0x15EC($a3)
    ctx->pc = 0x152a58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 5612)));
    // 0x152a5c: 0x10800017  beqz        $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x152A5Cu;
    {
        const bool branch_taken_0x152a5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x152a5c) {
            ctx->pc = 0x152ABCu;
            return;
        }
    }
    ctx->pc = 0x152A64u;
    // 0x152a64: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x152a64u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
    // 0x152a68: 0x24c2a4a0  addiu       $v0, $a2, -0x5B60
    ctx->pc = 0x152a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943904));
    // 0x152a6c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x152a6cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x152a70: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x152a70u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x152a74: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x152a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x152a78: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x152a78u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x152a7c: 0xc0bd0c8  jal         func_2F4320
    ctx->pc = 0x152A7Cu;
    SET_GPR_U32(ctx, 31, 0x152A84u);
    ctx->pc = 0x2F4320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4320u, 0x152A7Cu, 0x152A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152A84u;
label_152a84:
    // 0x152a84: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x152a84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x152a88: 0x848615ec  lh          $a2, 0x15EC($a0)
    ctx->pc = 0x152a88u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 5612)));
    // 0x152a8c: 0x24c2fe3e  addiu       $v0, $a2, -0x1C2
    ctx->pc = 0x152a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966846));
    // 0x152a90: 0xa48215ec  sh          $v0, 0x15EC($a0)
    ctx->pc = 0x152a90u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 5612), (uint16_t)GPR_U32(ctx, 2));
    // 0x152a94: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x152a94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x152a98: 0x849115ec  lh          $s1, 0x15EC($a0)
    ctx->pc = 0x152a98u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 5612)));
    // 0x152a9c: 0x118c3c  dsll32      $s1, $s1, 16
    ctx->pc = 0x152a9cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 16));
    // 0x152aa0: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x152aa0u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x152aa4: 0x6210072  bgez        $s1, . + 4 + (0x72 << 2)
    ctx->pc = 0x152AA4u;
    {
        const bool branch_taken_0x152aa4 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x152aa4) {
            ctx->pc = 0x152C70u;
            return;
        }
    }
    ctx->pc = 0x152AACu;
    // 0x152aac: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x152aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x152ab0: 0xa44015ec  sh          $zero, 0x15EC($v0)
    ctx->pc = 0x152ab0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 5612), (uint16_t)GPR_U32(ctx, 0));
    // 0x152ab4: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x152AB4u;
    {
        const bool branch_taken_0x152ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x152ab4) {
            ctx->pc = 0x152C70u;
            return;
        }
    }
    ctx->pc = 0x152ABCu;
}
