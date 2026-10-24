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

// Function: entry_0013aad4
// Address: 0x13aad4 - 0x13ab10
void entry_0013aad4_0x13aad4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013aad4_0x13aad4");
#endif

    ctx->pc = 0x13aad4u;

    // 0x13aad4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13aad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13aad8: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x13aad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13aadc: 0x3c02be4c  lui         $v0, 0xBE4C
    ctx->pc = 0x13aadcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48716 << 16));
    // 0x13aae0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x13aae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x13aae4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13aae4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13aae8: 0x0  nop
    ctx->pc = 0x13aae8u;
    // NOP
    // 0x13aaec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13aaecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13aaf0: 0x0  nop
    ctx->pc = 0x13aaf0u;
    // NOP
    // 0x13aaf4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x13AAF4u;
    {
        const bool branch_taken_0x13aaf4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13aaf4) {
            ctx->pc = 0x13AB10u;
            return;
        }
    }
    ctx->pc = 0x13AAFCu;
    // 0x13aafc: 0x3c02be4c  lui         $v0, 0xBE4C
    ctx->pc = 0x13aafcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48716 << 16));
    // 0x13ab00: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x13ab00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x13ab04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13ab04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13ab08: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13ab08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13ab0c: 0xe4401b50  swc1        $f0, 0x1B50($v0)
    ctx->pc = 0x13ab0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6992), bits); }
    ctx->pc = 0x13ab10u;
}
