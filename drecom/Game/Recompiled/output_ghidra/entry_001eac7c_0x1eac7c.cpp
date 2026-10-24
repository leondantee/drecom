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

// Function: entry_001eac7c
// Address: 0x1eac7c - 0x1ead7c
void entry_001eac7c_0x1eac7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eac7c_0x1eac7c");
#endif

    switch (ctx->pc) {
        case 0x1eac9cu: goto label_1eac9c;
        case 0x1eacc4u: goto label_1eacc4;
        case 0x1ead20u: goto label_1ead20;
        default: break;
    }

    ctx->pc = 0x1eac7cu;

    // 0x1eac7c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1eac7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1eac80: 0xac200aa0  sw          $zero, 0xAA0($at)
    ctx->pc = 0x1eac80u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x600AA0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600AA0u, _value); } while (0);
    // 0x1eac84: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x1eac84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eac88: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1eac88u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1eac8c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1eac8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1eac90: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x1eac90u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1eac94: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1EAC94u;
    SET_GPR_U32(ctx, 31, 0x1EAC9Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1EAC94u, 0x1EAC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAC9Cu;
label_1eac9c:
    // 0x1eac9c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x1eac9cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1eaca0: 0x8fb30138  lw          $s3, 0x138($sp)
    ctx->pc = 0x1eaca0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eaca4: 0xc6600124  lwc1        $f0, 0x124($s3)
    ctx->pc = 0x1eaca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eaca8: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1eaca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eacac: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1eacacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1eacb0: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x1eacb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x1eacb4: 0x8fb00138  lw          $s0, 0x138($sp)
    ctx->pc = 0x1eacb4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eacb8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1eacb8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1eacbc: 0xc07e3b0  jal         func_1F8EC0
    ctx->pc = 0x1EACBCu;
    SET_GPR_U32(ctx, 31, 0x1EACC4u);
    ctx->pc = 0x1F8EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8EC0u, 0x1EACBCu, 0x1EACC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EACC4u;
label_1eacc4:
    // 0x1eacc4: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x1eacc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eacc8: 0x8ca20058  lw          $v0, 0x58($a1)
    ctx->pc = 0x1eacc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x1eaccc: 0x24500630  addiu       $s0, $v0, 0x630
    ctx->pc = 0x1eacccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1584));
    // 0x1eacd0: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x1eacd0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1eacd4: 0x8fb30138  lw          $s3, 0x138($sp)
    ctx->pc = 0x1eacd4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eacd8: 0x9663000e  lhu         $v1, 0xE($s3)
    ctx->pc = 0x1eacd8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 14)));
    // 0x1eacdc: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x1eacdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1eace0: 0x30420700  andi        $v0, $v0, 0x700
    ctx->pc = 0x1eace0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1792);
    // 0x1eace4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1eace4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1eace8: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x1eace8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1eacec: 0x7040be28  paddub      $s7, $v0, $zero
    ctx->pc = 0x1eacecu;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1eacf0: 0x32e3ffff  andi        $v1, $s7, 0xFFFF
    ctx->pc = 0x1eacf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65535);
    // 0x1eacf4: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x1eacf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1eacf8: 0x14620020  bne         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1EACF8u;
    {
        const bool branch_taken_0x1eacf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1eacf8) {
            ctx->pc = 0x1EAD7Cu;
            return;
        }
    }
    ctx->pc = 0x1EAD00u;
    // 0x1ead00: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1ead00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1ead04: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x1ead04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1ead08: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1ead08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1ead0c: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x1ead0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1ead10: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1ead10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ead14: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1ead14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1ead18: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1EAD18u;
    SET_GPR_U32(ctx, 31, 0x1EAD20u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1EAD18u, 0x1EAD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAD20u;
label_1ead20:
    // 0x1ead20: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ead20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ead24: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1ead24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1ead28: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1ead28u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ead2c: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x1ead2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1ead30: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1ead30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1ead34: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1ead34u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ead38: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x1ead38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1ead3c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1ead3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ead40: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1ead40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1ead44: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x1ead44u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ead48: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1ead48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1ead4c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1ead4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1ead50: 0x8fb20138  lw          $s2, 0x138($sp)
    ctx->pc = 0x1ead50u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1ead54: 0x26441330  addiu       $a0, $s2, 0x1330
    ctx->pc = 0x1ead54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4912));
    // 0x1ead58: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x1ead58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1ead5c: 0x34a72018  ori         $a3, $a1, 0x2018
    ctx->pc = 0x1ead5cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8216);
    // 0x1ead60: 0xac870030  sw          $a3, 0x30($a0)
    ctx->pc = 0x1ead60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 7));
    // 0x1ead64: 0x8fa80138  lw          $t0, 0x138($sp)
    ctx->pc = 0x1ead64u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1ead68: 0x25021330  addiu       $v0, $t0, 0x1330
    ctx->pc = 0x1ead68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4912));
    // 0x1ead6c: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1ead6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1ead70: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x1ead70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x1ead74: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1ead74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1ead78: 0xac430030  sw          $v1, 0x30($v0)
    ctx->pc = 0x1ead78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 3));
    ctx->pc = 0x1ead7cu;
}
