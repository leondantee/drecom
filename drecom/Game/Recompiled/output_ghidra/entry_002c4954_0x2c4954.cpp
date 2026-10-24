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

// Function: entry_002c4954
// Address: 0x2c4954 - 0x2c49a0
void entry_002c4954_0x2c4954(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c4954_0x2c4954");
#endif

    ctx->pc = 0x2c4954u;

    // 0x2c4954: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2c4954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2c4958: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c4958u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c495c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c495cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2c4960: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c4960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c4964: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x2c4964u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x2c4968: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c4968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2c496c: 0xc4410188  lwc1        $f1, 0x188($v0)
    ctx->pc = 0x2c496cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c4970: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2c4970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2c4974: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c4974u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c4978: 0x0  nop
    ctx->pc = 0x2c4978u;
    // NOP
    // 0x2c497c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2c497cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c4980: 0x0  nop
    ctx->pc = 0x2c4980u;
    // NOP
    // 0x2c4984: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x2C4984u;
    {
        const bool branch_taken_0x2c4984 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c4984) {
            ctx->pc = 0x2C49A0u;
            return;
        }
    }
    ctx->pc = 0x2C498Cu;
    // 0x2c498c: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2c498cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2c4990: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c4990u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c4994: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2c4994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2c4998: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c4998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c499c: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x2c499cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    ctx->pc = 0x2c49a0u;
}
