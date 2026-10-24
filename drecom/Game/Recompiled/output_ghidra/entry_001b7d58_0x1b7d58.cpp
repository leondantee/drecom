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

// Function: entry_001b7d58
// Address: 0x1b7d58 - 0x1b7db4
void entry_001b7d58_0x1b7d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7d58_0x1b7d58");
#endif

    ctx->pc = 0x1b7d58u;

    // 0x1b7d58: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b7d58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7d5c: 0xc4a11b50  lwc1        $f1, 0x1B50($a1)
    ctx->pc = 0x1b7d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b7d60: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x1b7d60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x1b7d64: 0x3464cccd  ori         $a0, $v1, 0xCCCD
    ctx->pc = 0x1b7d64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1b7d68: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1b7d68u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b7d6c: 0x0  nop
    ctx->pc = 0x1b7d6cu;
    // NOP
    // 0x1b7d70: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b7d70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b7d74: 0xe4a01b50  swc1        $f0, 0x1B50($a1)
    ctx->pc = 0x1b7d74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 6992), bits); }
    // 0x1b7d78: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b7d78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7d7c: 0xc4a11b50  lwc1        $f1, 0x1B50($a1)
    ctx->pc = 0x1b7d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b7d80: 0x3c033fa6  lui         $v1, 0x3FA6
    ctx->pc = 0x1b7d80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16294 << 16));
    // 0x1b7d84: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x1b7d84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x1b7d88: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b7d88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b7d8c: 0x0  nop
    ctx->pc = 0x1b7d8cu;
    // NOP
    // 0x1b7d90: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b7d90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b7d94: 0x0  nop
    ctx->pc = 0x1b7d94u;
    // NOP
    // 0x1b7d98: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1B7D98u;
    {
        const bool branch_taken_0x1b7d98 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b7d98) {
            ctx->pc = 0x1B7DB4u;
            return;
        }
    }
    ctx->pc = 0x1B7DA0u;
    // 0x1b7da0: 0x3c033fa6  lui         $v1, 0x3FA6
    ctx->pc = 0x1b7da0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16294 << 16));
    // 0x1b7da4: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x1b7da4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x1b7da8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b7da8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b7dac: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b7dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7db0: 0xe4401b50  swc1        $f0, 0x1B50($v0)
    ctx->pc = 0x1b7db0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6992), bits); }
    ctx->pc = 0x1b7db4u;
}
