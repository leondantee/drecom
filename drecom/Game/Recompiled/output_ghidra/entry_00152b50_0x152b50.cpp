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

// Function: entry_00152b50
// Address: 0x152b50 - 0x152bf0
void entry_00152b50_0x152b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00152b50_0x152b50");
#endif

    switch (ctx->pc) {
        case 0x152bb8u: goto label_152bb8;
        default: break;
    }

    ctx->pc = 0x152b50u;

    // 0x152b50: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x152b50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x152b54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x152b54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152b58: 0x0  nop
    ctx->pc = 0x152b58u;
    // NOP
    // 0x152b5c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x152b5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x152b60: 0x3c02c1f0  lui         $v0, 0xC1F0
    ctx->pc = 0x152b60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49648 << 16));
    // 0x152b64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x152b64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152b68: 0x0  nop
    ctx->pc = 0x152b68u;
    // NOP
    // 0x152b6c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x152b6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x152b70: 0x3c044220  lui         $a0, 0x4220
    ctx->pc = 0x152b70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16928 << 16));
    // 0x152b74: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x152b74u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152b78: 0x0  nop
    ctx->pc = 0x152b78u;
    // NOP
    // 0x152b7c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x152b7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x152b80: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x152b80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x152b84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x152b84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152b88: 0x0  nop
    ctx->pc = 0x152b88u;
    // NOP
    // 0x152b8c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x152b8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x152b90: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x152b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x152b94: 0x844215ec  lh          $v0, 0x15EC($v0)
    ctx->pc = 0x152b94u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 5612)));
    // 0x152b98: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x152B98u;
    {
        const bool branch_taken_0x152b98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x152b98) {
            ctx->pc = 0x152BF0u;
            return;
        }
    }
    ctx->pc = 0x152BA0u;
    // 0x152ba0: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x152ba0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x152ba4: 0x24e4a4a0  addiu       $a0, $a3, -0x5B60
    ctx->pc = 0x152ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294943904));
    // 0x152ba8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x152ba8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x152bac: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x152bacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x152bb0: 0xc0bd0c8  jal         func_2F4320
    ctx->pc = 0x152BB0u;
    SET_GPR_U32(ctx, 31, 0x152BB8u);
    ctx->pc = 0x2F4320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4320u, 0x152BB0u, 0x152BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152BB8u;
label_152bb8:
    // 0x152bb8: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x152bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x152bbc: 0x84a415ec  lh          $a0, 0x15EC($a1)
    ctx->pc = 0x152bbcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 5612)));
    // 0x152bc0: 0x2483fc7c  addiu       $v1, $a0, -0x384
    ctx->pc = 0x152bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966396));
    // 0x152bc4: 0xa4a315ec  sh          $v1, 0x15EC($a1)
    ctx->pc = 0x152bc4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 5612), (uint16_t)GPR_U32(ctx, 3));
    // 0x152bc8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x152bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x152bcc: 0x846315ec  lh          $v1, 0x15EC($v1)
    ctx->pc = 0x152bccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 5612)));
    // 0x152bd0: 0x33c3c  dsll32      $a3, $v1, 16
    ctx->pc = 0x152bd0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 16));
    // 0x152bd4: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x152bd4u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x152bd8: 0x4e10025  bgez        $a3, . + 4 + (0x25 << 2)
    ctx->pc = 0x152BD8u;
    {
        const bool branch_taken_0x152bd8 = (GPR_S32(ctx, 7) >= 0);
        if (branch_taken_0x152bd8) {
            ctx->pc = 0x152C70u;
            return;
        }
    }
    ctx->pc = 0x152BE0u;
    // 0x152be0: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x152be0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x152be4: 0xa4c015ec  sh          $zero, 0x15EC($a2)
    ctx->pc = 0x152be4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 5612), (uint16_t)GPR_U32(ctx, 0));
    // 0x152be8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x152BE8u;
    {
        const bool branch_taken_0x152be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x152be8) {
            ctx->pc = 0x152C70u;
            return;
        }
    }
    ctx->pc = 0x152BF0u;
}
