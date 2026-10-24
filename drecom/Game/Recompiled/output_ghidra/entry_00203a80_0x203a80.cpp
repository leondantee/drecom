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

// Function: entry_00203a80
// Address: 0x203a80 - 0x203ac0
void entry_00203a80_0x203a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203a80_0x203a80");
#endif

    ctx->pc = 0x203a80u;

    // 0x203a80: 0x7260be28  paddub      $s7, $s3, $zero
    ctx->pc = 0x203a80u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x203a84: 0x7280f628  paddub      $fp, $s4, $zero
    ctx->pc = 0x203a84u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x203a88: 0xafb500e4  sw          $s5, 0xE4($sp)
    ctx->pc = 0x203a88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 21));
    // 0x203a8c: 0xafb600e8  sw          $s6, 0xE8($sp)
    ctx->pc = 0x203a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 22));
    // 0x203a90: 0xc7a100cc  lwc1        $f1, 0xCC($sp)
    ctx->pc = 0x203a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x203a94: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x203a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x203a98: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x203a98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x203a9c: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x203a9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x203aa0: 0x2321821  addu        $v1, $s1, $s2
    ctx->pc = 0x203aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x203aa4: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x203aa4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x203aa8: 0x938680d0  lbu         $a2, -0x7F30($gp)
    ctx->pc = 0x203aa8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934736)));
    // 0x203aac: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x203AACu;
    {
        const bool branch_taken_0x203aac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x203aac) {
            ctx->pc = 0x203AC0u;
            return;
        }
    }
    ctx->pc = 0x203AB4u;
    // 0x203ab4: 0x26030034  addiu       $v1, $s0, 0x34
    ctx->pc = 0x203ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
    // 0x203ab8: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x203ab8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x203abc: 0x0  nop
    ctx->pc = 0x203abcu;
    // NOP
    ctx->pc = 0x203ac0u;
}
