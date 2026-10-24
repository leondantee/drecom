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

// Function: entry_001b8f28
// Address: 0x1b8f28 - 0x1b8f84
void entry_001b8f28_0x1b8f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b8f28_0x1b8f28");
#endif

    ctx->pc = 0x1b8f28u;

    // 0x1b8f28: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b8f28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8f2c: 0xc4811b50  lwc1        $f1, 0x1B50($a0)
    ctx->pc = 0x1b8f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b8f30: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x1b8f30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x1b8f34: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1b8f34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1b8f38: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b8f38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b8f3c: 0x0  nop
    ctx->pc = 0x1b8f3cu;
    // NOP
    // 0x1b8f40: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b8f40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b8f44: 0xe4801b50  swc1        $f0, 0x1B50($a0)
    ctx->pc = 0x1b8f44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 6992), bits); }
    // 0x1b8f48: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b8f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8f4c: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x1b8f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b8f50: 0x3c033fa6  lui         $v1, 0x3FA6
    ctx->pc = 0x1b8f50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16294 << 16));
    // 0x1b8f54: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x1b8f54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x1b8f58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b8f58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b8f5c: 0x0  nop
    ctx->pc = 0x1b8f5cu;
    // NOP
    // 0x1b8f60: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b8f60u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b8f64: 0x0  nop
    ctx->pc = 0x1b8f64u;
    // NOP
    // 0x1b8f68: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1B8F68u;
    {
        const bool branch_taken_0x1b8f68 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b8f68) {
            ctx->pc = 0x1B8F84u;
            return;
        }
    }
    ctx->pc = 0x1B8F70u;
    // 0x1b8f70: 0x3c043fa6  lui         $a0, 0x3FA6
    ctx->pc = 0x1b8f70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16294 << 16));
    // 0x1b8f74: 0x34836666  ori         $v1, $a0, 0x6666
    ctx->pc = 0x1b8f74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26214);
    // 0x1b8f78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b8f78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b8f7c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b8f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8f80: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x1b8f80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
    ctx->pc = 0x1b8f84u;
}
