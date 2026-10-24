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

// Function: entry_00202fc0
// Address: 0x202fc0 - 0x203000
void entry_00202fc0_0x202fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00202fc0_0x202fc0");
#endif

    ctx->pc = 0x202fc0u;

    // 0x202fc0: 0x7260be28  paddub      $s7, $s3, $zero
    ctx->pc = 0x202fc0u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x202fc4: 0x7280f628  paddub      $fp, $s4, $zero
    ctx->pc = 0x202fc4u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x202fc8: 0xafb500ec  sw          $s5, 0xEC($sp)
    ctx->pc = 0x202fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 21));
    // 0x202fcc: 0xafb600f0  sw          $s6, 0xF0($sp)
    ctx->pc = 0x202fccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 22));
    // 0x202fd0: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x202fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x202fd4: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x202fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202fd8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x202fd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x202fdc: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x202fdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x202fe0: 0x2323021  addu        $a2, $s1, $s2
    ctx->pc = 0x202fe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x202fe4: 0x70c08e28  paddub      $s1, $a2, $zero
    ctx->pc = 0x202fe4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x202fe8: 0x938380d0  lbu         $v1, -0x7F30($gp)
    ctx->pc = 0x202fe8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934736)));
    // 0x202fec: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x202FECu;
    {
        const bool branch_taken_0x202fec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x202fec) {
            ctx->pc = 0x203000u;
            return;
        }
    }
    ctx->pc = 0x202FF4u;
    // 0x202ff4: 0x26030034  addiu       $v1, $s0, 0x34
    ctx->pc = 0x202ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
    // 0x202ff8: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x202ff8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x202ffc: 0x0  nop
    ctx->pc = 0x202ffcu;
    // NOP
    ctx->pc = 0x203000u;
}
