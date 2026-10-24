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

// Function: entry_00121f68
// Address: 0x121f68 - 0x121fc4
void entry_00121f68_0x121f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121f68_0x121f68");
#endif

    ctx->pc = 0x121f68u;

    // 0x121f68: 0xc7a1006c  lwc1        $f1, 0x6C($sp)
    ctx->pc = 0x121f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x121f6c: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x121f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x121f70: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x121f70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x121f74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x121f74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x121f78: 0x0  nop
    ctx->pc = 0x121f78u;
    // NOP
    // 0x121f7c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x121f7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x121f80: 0x0  nop
    ctx->pc = 0x121f80u;
    // NOP
    // 0x121f84: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x121F84u;
    {
        const bool branch_taken_0x121f84 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x121f84) {
            ctx->pc = 0x121FC4u;
            return;
        }
    }
    ctx->pc = 0x121F8Cu;
    // 0x121f8c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x121f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x121f90: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x121f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121f94: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x121f94u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x121f98: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x121f98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x121f9c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x121f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121fa0: 0xa0850001  sb          $a1, 0x1($a0)
    ctx->pc = 0x121fa0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x121fa4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121fa8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x121fa8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x121fac: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121fb0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x121fb0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x121fb4: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x121fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121fb8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x121fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x121fbc: 0x1000035c  b           . + 4 + (0x35C << 2)
    ctx->pc = 0x121FBCu;
    {
        const bool branch_taken_0x121fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x121fbc) {
            ctx->pc = 0x122D30u;
            return;
        }
    }
    ctx->pc = 0x121FC4u;
}
