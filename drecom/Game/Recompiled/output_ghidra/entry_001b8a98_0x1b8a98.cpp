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

// Function: entry_001b8a98
// Address: 0x1b8a98 - 0x1b8af4
void entry_001b8a98_0x1b8a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b8a98_0x1b8a98");
#endif

    ctx->pc = 0x1b8a98u;

    // 0x1b8a98: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b8a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8a9c: 0xc4611b50  lwc1        $f1, 0x1B50($v1)
    ctx->pc = 0x1b8a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b8aa0: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1b8aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x1b8aa4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1b8aa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1b8aa8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b8aa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b8aac: 0x0  nop
    ctx->pc = 0x1b8aacu;
    // NOP
    // 0x1b8ab0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b8ab0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b8ab4: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x1b8ab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
    // 0x1b8ab8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b8ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8abc: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x1b8abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b8ac0: 0x3c033fa6  lui         $v1, 0x3FA6
    ctx->pc = 0x1b8ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16294 << 16));
    // 0x1b8ac4: 0x34626666  ori         $v0, $v1, 0x6666
    ctx->pc = 0x1b8ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x1b8ac8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b8ac8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b8acc: 0x0  nop
    ctx->pc = 0x1b8accu;
    // NOP
    // 0x1b8ad0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b8ad0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b8ad4: 0x0  nop
    ctx->pc = 0x1b8ad4u;
    // NOP
    // 0x1b8ad8: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1B8AD8u;
    {
        const bool branch_taken_0x1b8ad8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b8ad8) {
            ctx->pc = 0x1B8AF4u;
            return;
        }
    }
    ctx->pc = 0x1B8AE0u;
    // 0x1b8ae0: 0x3c023fa6  lui         $v0, 0x3FA6
    ctx->pc = 0x1b8ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
    // 0x1b8ae4: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x1b8ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x1b8ae8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b8ae8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b8aec: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b8aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8af0: 0xe4401b50  swc1        $f0, 0x1B50($v0)
    ctx->pc = 0x1b8af0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6992), bits); }
    ctx->pc = 0x1b8af4u;
}
