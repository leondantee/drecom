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

// Function: entry_00160e0c
// Address: 0x160e0c - 0x160e58
void entry_00160e0c_0x160e0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160e0c_0x160e0c");
#endif

    ctx->pc = 0x160e0cu;

    // 0x160e0c: 0xc6011388  lwc1        $f1, 0x1388($s0)
    ctx->pc = 0x160e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x160e10: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x160e10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x160e14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x160e14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160e18: 0x0  nop
    ctx->pc = 0x160e18u;
    // NOP
    // 0x160e1c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x160e1cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x160e20: 0x0  nop
    ctx->pc = 0x160e20u;
    // NOP
    // 0x160e24: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x160E24u;
    {
        const bool branch_taken_0x160e24 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x160e24) {
            ctx->pc = 0x160E58u;
            return;
        }
    }
    ctx->pc = 0x160E2Cu;
    // 0x160e2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x160e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160e30: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x160e30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x160e34: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x160e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x160e38: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x160e38u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x160e3c: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x160e3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x160e40: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x160e40u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x160e44: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x160e44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x160e48: 0xc6001380  lwc1        $f0, 0x1380($s0)
    ctx->pc = 0x160e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x160e4c: 0xe6001290  swc1        $f0, 0x1290($s0)
    ctx->pc = 0x160e4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4752), bits); }
    // 0x160e50: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x160E50u;
    {
        const bool branch_taken_0x160e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x160e50) {
            ctx->pc = 0x161024u;
            return;
        }
    }
    ctx->pc = 0x160E58u;
}
