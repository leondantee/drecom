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

// Function: entry_00285dd8
// Address: 0x285dd8 - 0x285e40
void entry_00285dd8_0x285dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00285dd8_0x285dd8");
#endif

    switch (ctx->pc) {
        case 0x285e34u: goto label_285e34;
        default: break;
    }

    ctx->pc = 0x285dd8u;

    // 0x285dd8: 0xc6216620  lwc1        $f1, 0x6620($s1)
    ctx->pc = 0x285dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 26144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x285ddc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x285ddcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x285de0: 0x0  nop
    ctx->pc = 0x285de0u;
    // NOP
    // 0x285de4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x285de4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x285de8: 0x0  nop
    ctx->pc = 0x285de8u;
    // NOP
    // 0x285dec: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x285DECu;
    {
        const bool branch_taken_0x285dec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x285dec) {
            ctx->pc = 0x285E40u;
            return;
        }
    }
    ctx->pc = 0x285DF4u;
    // 0x285df4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x285df4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x285df8: 0x0  nop
    ctx->pc = 0x285df8u;
    // NOP
    // 0x285dfc: 0xe6206620  swc1        $f0, 0x6620($s1)
    ctx->pc = 0x285dfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 26144), bits); }
    // 0x285e00: 0xa220660d  sb          $zero, 0x660D($s1)
    ctx->pc = 0x285e00u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 26125), (uint8_t)GPR_U32(ctx, 0));
    // 0x285e04: 0xa2206624  sb          $zero, 0x6624($s1)
    ctx->pc = 0x285e04u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 26148), (uint8_t)GPR_U32(ctx, 0));
    // 0x285e08: 0x9226683f  lbu         $a2, 0x683F($s1)
    ctx->pc = 0x285e08u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 26687)));
    // 0x285e0c: 0x63e3c  dsll32      $a3, $a2, 24
    ctx->pc = 0x285e0cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << (32 + 24));
    // 0x285e10: 0x73e3f  dsra32      $a3, $a3, 24
    ctx->pc = 0x285e10u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 24));
    // 0x285e14: 0x7963c  dsll32      $s2, $a3, 24
    ctx->pc = 0x285e14u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 7) << (32 + 24));
    // 0x285e18: 0x12963f  dsra32      $s2, $s2, 24
    ctx->pc = 0x285e18u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 24));
    // 0x285e1c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x285e1cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x285e20: 0x24090007  addiu       $t1, $zero, 0x7
    ctx->pc = 0x285e20u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x285e24: 0x71202e28  paddub      $a1, $t1, $zero
    ctx->pc = 0x285e24u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x285e28: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x285e28u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x285e2c: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x285E2Cu;
    SET_GPR_U32(ctx, 31, 0x285E34u);
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x285E2Cu, 0x285E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285E34u;
label_285e34:
    // 0x285e34: 0x8e23685c  lw          $v1, 0x685C($s1)
    ctx->pc = 0x285e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26716)));
    // 0x285e38: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x285e38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x285e3c: 0xae23685c  sw          $v1, 0x685C($s1)
    ctx->pc = 0x285e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 26716), GPR_U32(ctx, 3));
    ctx->pc = 0x285e40u;
}
