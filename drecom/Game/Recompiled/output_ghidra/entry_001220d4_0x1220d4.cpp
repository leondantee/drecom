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

// Function: entry_001220d4
// Address: 0x1220d4 - 0x122130
void entry_001220d4_0x1220d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001220d4_0x1220d4");
#endif

    ctx->pc = 0x1220d4u;

    // 0x1220d4: 0xc7a1006c  lwc1        $f1, 0x6C($sp)
    ctx->pc = 0x1220d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1220d8: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x1220d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x1220dc: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1220dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1220e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1220e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1220e4: 0x0  nop
    ctx->pc = 0x1220e4u;
    // NOP
    // 0x1220e8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1220e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1220ec: 0x0  nop
    ctx->pc = 0x1220ecu;
    // NOP
    // 0x1220f0: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x1220F0u;
    {
        const bool branch_taken_0x1220f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1220f0) {
            ctx->pc = 0x122130u;
            return;
        }
    }
    ctx->pc = 0x1220F8u;
    // 0x1220f8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1220f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1220fc: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1220fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122100: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x122100u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x122104: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x122104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x122108: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12210c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12210cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x122110: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x122110u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122114: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x122114u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x122118: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12211c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12211cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x122120: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x122120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122124: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x122124u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x122128: 0x10000301  b           . + 4 + (0x301 << 2)
    ctx->pc = 0x122128u;
    {
        const bool branch_taken_0x122128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x122128) {
            ctx->pc = 0x122D30u;
            return;
        }
    }
    ctx->pc = 0x122130u;
}
