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

// Function: caseD_4
// Address: 0x27be40 - 0x27bea0
void caseD_4_0x27be40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x27be40");
#endif

    ctx->pc = 0x27be40u;

    // 0x27be40: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27be40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27be44: 0xc4211b40  lwc1        $f1, 0x1B40($at)
    ctx->pc = 0x27be44u;
    { uint32_t bits = FAST_READ32(0x621B40u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27be48: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x27be48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x27be4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27be4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27be50: 0x0  nop
    ctx->pc = 0x27be50u;
    // NOP
    // 0x27be54: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x27be54u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x27be58: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27be58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27be5c: 0xe4201b40  swc1        $f0, 0x1B40($at)
    ctx->pc = 0x27be5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x621B40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621B40u, _value); } while (0); }
    // 0x27be60: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27be60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27be64: 0xc4211b40  lwc1        $f1, 0x1B40($at)
    ctx->pc = 0x27be64u;
    { uint32_t bits = FAST_READ32(0x621B40u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27be68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x27be68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27be6c: 0x0  nop
    ctx->pc = 0x27be6cu;
    // NOP
    // 0x27be70: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27be70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27be74: 0x0  nop
    ctx->pc = 0x27be74u;
    // NOP
    // 0x27be78: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x27BE78u;
    {
        const bool branch_taken_0x27be78 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27be78) {
            ctx->pc = 0x27BEA0u;
            return;
        }
    }
    ctx->pc = 0x27BE80u;
    // 0x27be80: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x27be80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27be84: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27be84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27be88: 0xe4201b40  swc1        $f0, 0x1B40($at)
    ctx->pc = 0x27be88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x621B40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621B40u, _value); } while (0); }
    // 0x27be8c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27be8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27be90: 0x90221b48  lbu         $v0, 0x1B48($at)
    ctx->pc = 0x27be90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x621B48u));
    // 0x27be94: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27be94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27be98: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27be98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27be9c: 0xa0221b48  sb          $v0, 0x1B48($at)
    ctx->pc = 0x27be9cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x621B48u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x621B48u, _value); } while (0);
    ctx->pc = 0x27bea0u;
}
