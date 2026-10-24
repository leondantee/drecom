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

// Function: entry_0013aa98
// Address: 0x13aa98 - 0x13aad4
void entry_0013aa98_0x13aa98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013aa98_0x13aa98");
#endif

    ctx->pc = 0x13aa98u;

    // 0x13aa98: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13aa98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13aa9c: 0xc4411b54  lwc1        $f1, 0x1B54($v0)
    ctx->pc = 0x13aa9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13aaa0: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x13aaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x13aaa4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x13aaa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x13aaa8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13aaa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13aaac: 0x0  nop
    ctx->pc = 0x13aaacu;
    // NOP
    // 0x13aab0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x13aab0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13aab4: 0x0  nop
    ctx->pc = 0x13aab4u;
    // NOP
    // 0x13aab8: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x13AAB8u;
    {
        const bool branch_taken_0x13aab8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13aab8) {
            ctx->pc = 0x13AAD4u;
            return;
        }
    }
    ctx->pc = 0x13AAC0u;
    // 0x13aac0: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x13aac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x13aac4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x13aac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x13aac8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13aac8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13aacc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13aaccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13aad0: 0xe4401b54  swc1        $f0, 0x1B54($v0)
    ctx->pc = 0x13aad0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6996), bits); }
    ctx->pc = 0x13aad4u;
}
