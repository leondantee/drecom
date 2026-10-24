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

// Function: entry_001e1e74
// Address: 0x1e1e74 - 0x1e1f28
void entry_001e1e74_0x1e1e74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e1e74_0x1e1e74");
#endif

    switch (ctx->pc) {
        case 0x1e1ed0u: goto label_1e1ed0;
        default: break;
    }

    ctx->pc = 0x1e1e74u;

    // 0x1e1e74: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x1e1e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e1e78: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1e1e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1e1e7c: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x1E1E7Cu;
    {
        const bool branch_taken_0x1e1e7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e1e7c) {
            ctx->pc = 0x1E1F28u;
            return;
        }
    }
    ctx->pc = 0x1E1E84u;
    // 0x1e1e84: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1e1e84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1e1e88: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1e1e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1e1e8c: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x1e1e8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x1e1e90: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x1e1e90u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1e1e94: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x1e1e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x1e1e98: 0x8c430134  lw          $v1, 0x134($v0)
    ctx->pc = 0x1e1e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
    // 0x1e1e9c: 0x141082  srl         $v0, $s4, 2
    ctx->pc = 0x1e1e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 20), 2));
    // 0x1e1ea0: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1e1ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1e1ea4: 0x62b021  addu        $s6, $v1, $v0
    ctx->pc = 0x1e1ea4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e1ea8: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x1e1ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x1e1eac: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x1e1eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1e1eb0: 0x141082  srl         $v0, $s4, 2
    ctx->pc = 0x1e1eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 20), 2));
    // 0x1e1eb4: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1e1eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1e1eb8: 0x62f021  addu        $fp, $v1, $v0
    ctx->pc = 0x1e1eb8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e1ebc: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1e1ebcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e1ec0: 0x72c02e28  paddub      $a1, $s6, $zero
    ctx->pc = 0x1e1ec0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x1e1ec4: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x1e1ec4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e1ec8: 0xc040c00  jal         func_103000
    ctx->pc = 0x1E1EC8u;
    SET_GPR_U32(ctx, 31, 0x1E1ED0u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x1E1ED0u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E1ED0u) { return; }
    ctx->pc = 0x1E1ED0u;
label_1e1ed0:
    // 0x1e1ed0: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x1e1ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e1ed4: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1e1ed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1e1ed8: 0xae020108  sw          $v0, 0x108($s0)
    ctx->pc = 0x1e1ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 2));
    // 0x1e1edc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e1edcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e1ee0: 0x0  nop
    ctx->pc = 0x1e1ee0u;
    // NOP
    // 0x1e1ee4: 0xe60000c0  swc1        $f0, 0xC0($s0)
    ctx->pc = 0x1e1ee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
    // 0x1e1ee8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e1ee8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e1eec: 0x0  nop
    ctx->pc = 0x1e1eecu;
    // NOP
    // 0x1e1ef0: 0xe60000c4  swc1        $f0, 0xC4($s0)
    ctx->pc = 0x1e1ef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 196), bits); }
    // 0x1e1ef4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e1ef4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e1ef8: 0x0  nop
    ctx->pc = 0x1e1ef8u;
    // NOP
    // 0x1e1efc: 0xe60000c8  swc1        $f0, 0xC8($s0)
    ctx->pc = 0x1e1efcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 200), bits); }
    // 0x1e1f00: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e1f00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e1f04: 0x0  nop
    ctx->pc = 0x1e1f04u;
    // NOP
    // 0x1e1f08: 0xe60000f0  swc1        $f0, 0xF0($s0)
    ctx->pc = 0x1e1f08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 240), bits); }
    // 0x1e1f0c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e1f0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e1f10: 0x0  nop
    ctx->pc = 0x1e1f10u;
    // NOP
    // 0x1e1f14: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x1e1f14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x1e1f18: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e1f18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e1f1c: 0x0  nop
    ctx->pc = 0x1e1f1cu;
    // NOP
    // 0x1e1f20: 0xe60000f8  swc1        $f0, 0xF8($s0)
    ctx->pc = 0x1e1f20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 248), bits); }
    // 0x1e1f24: 0x0  nop
    ctx->pc = 0x1e1f24u;
    // NOP
    ctx->pc = 0x1e1f28u;
}
