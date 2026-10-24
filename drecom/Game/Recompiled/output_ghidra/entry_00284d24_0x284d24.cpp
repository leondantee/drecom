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

// Function: entry_00284d24
// Address: 0x284d24 - 0x284de4
void entry_00284d24_0x284d24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00284d24_0x284d24");
#endif

    ctx->pc = 0x284d24u;

    // 0x284d24: 0x928313a6  lbu         $v1, 0x13A6($s4)
    ctx->pc = 0x284d24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 5030)));
    // 0x284d28: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x284d28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x284d2c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x284d2cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x284d30: 0xa2035de9  sb          $v1, 0x5DE9($s0)
    ctx->pc = 0x284d30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24041), (uint8_t)GPR_U32(ctx, 3));
    // 0x284d34: 0xa2006624  sb          $zero, 0x6624($s0)
    ctx->pc = 0x284d34u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26148), (uint8_t)GPR_U32(ctx, 0));
    // 0x284d38: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x284d38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x284d3c: 0x0  nop
    ctx->pc = 0x284d3cu;
    // NOP
    // 0x284d40: 0xe6006620  swc1        $f0, 0x6620($s0)
    ctx->pc = 0x284d40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 26144), bits); }
    // 0x284d44: 0xa200660c  sb          $zero, 0x660C($s0)
    ctx->pc = 0x284d44u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26124), (uint8_t)GPR_U32(ctx, 0));
    // 0x284d48: 0x300300ff  andi        $v1, $zero, 0xFF
    ctx->pc = 0x284d48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)255);
    // 0x284d4c: 0xa203660d  sb          $v1, 0x660D($s0)
    ctx->pc = 0x284d4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26125), (uint8_t)GPR_U32(ctx, 3));
    // 0x284d50: 0x82035dea  lb          $v1, 0x5DEA($s0)
    ctx->pc = 0x284d50u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24042)));
    // 0x284d54: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x284d54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x284d58: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x284d58u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x284d5c: 0x18600021  blez        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x284D5Cu;
    {
        const bool branch_taken_0x284d5c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x284d5c) {
            ctx->pc = 0x284DE4u;
            return;
        }
    }
    ctx->pc = 0x284D64u;
    // 0x284d64: 0x82025dea  lb          $v0, 0x5DEA($s0)
    ctx->pc = 0x284d64u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24042)));
    // 0x284d68: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x284d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x284d6c: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x284d6cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x284d70: 0x2457ffff  addiu       $s7, $v0, -0x1
    ctx->pc = 0x284d70u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x284d74: 0x171080  sll         $v0, $s7, 2
    ctx->pc = 0x284d74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x284d78: 0x202a821  addu        $s5, $s0, $v0
    ctx->pc = 0x284d78u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x284d7c: 0x92a6663e  lbu         $a2, 0x663E($s5)
    ctx->pc = 0x284d7cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 26174)));
    // 0x284d80: 0x30c500ff  andi        $a1, $a2, 0xFF
    ctx->pc = 0x284d80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x284d84: 0xafa500a4  sw          $a1, 0xA4($sp)
    ctx->pc = 0x284d84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 5));
    // 0x284d88: 0x82025dea  lb          $v0, 0x5DEA($s0)
    ctx->pc = 0x284d88u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24042)));
    // 0x284d8c: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x284d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x284d90: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x284d90u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x284d94: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x284d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x284d98: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x284d98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x284d9c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x284d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x284da0: 0x9063663f  lbu         $v1, 0x663F($v1)
    ctx->pc = 0x284da0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26175)));
    // 0x284da4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x284da4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x284da8: 0xafa300a8  sw          $v1, 0xA8($sp)
    ctx->pc = 0x284da8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 3));
    // 0x284dac: 0x82035dea  lb          $v1, 0x5DEA($s0)
    ctx->pc = 0x284dacu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24042)));
    // 0x284db0: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x284db0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x284db4: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x284db4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x284db8: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x284db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x284dbc: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x284dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x284dc0: 0x92036624  lbu         $v1, 0x6624($s0)
    ctx->pc = 0x284dc0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x284dc4: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x284dc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x284dc8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x284DC8u;
    {
        const bool branch_taken_0x284dc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x284dc8) {
            ctx->pc = 0x284DE4u;
            return;
        }
    }
    ctx->pc = 0x284DD0u;
    // 0x284dd0: 0x8fa500ac  lw          $a1, 0xAC($sp)
    ctx->pc = 0x284dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x284dd4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x284dd4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x284dd8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x284dd8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x284ddc: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x284DDCu;
    SET_GPR_U32(ctx, 31, 0x284DE4u);
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x284DDCu, 0x284DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284DE4u;
}
