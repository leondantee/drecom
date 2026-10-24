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

// Function: entry_0015ecac
// Address: 0x15ecac - 0x15ecfc
void entry_0015ecac_0x15ecac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015ecac_0x15ecac");
#endif

    ctx->pc = 0x15ecacu;

    // 0x15ecac: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x15ecacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15ecb0: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x15ecb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x15ecb4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x15ecb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x15ecb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15ecb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15ecbc: 0x0  nop
    ctx->pc = 0x15ecbcu;
    // NOP
    // 0x15ecc0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x15ecc0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15ecc4: 0x0  nop
    ctx->pc = 0x15ecc4u;
    // NOP
    // 0x15ecc8: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x15ECC8u;
    {
        const bool branch_taken_0x15ecc8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15ecc8) {
            ctx->pc = 0x15ECFCu;
            return;
        }
    }
    ctx->pc = 0x15ECD0u;
    // 0x15ecd0: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x15ecd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15ecd4: 0xe6001290  swc1        $f0, 0x1290($s0)
    ctx->pc = 0x15ecd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4752), bits); }
    // 0x15ecd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15ecd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15ecdc: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x15ecdcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x15ece0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x15ece0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x15ece4: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x15ece4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x15ece8: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x15ece8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x15ecec: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x15ececu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x15ecf0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x15ecf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x15ecf4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x15ECF4u;
    {
        const bool branch_taken_0x15ecf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ecf4) {
            ctx->pc = 0x15ED38u;
            return;
        }
    }
    ctx->pc = 0x15ECFCu;
}
