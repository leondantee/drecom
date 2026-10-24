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

// Function: entry_001227cc
// Address: 0x1227cc - 0x122828
void entry_001227cc_0x1227cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001227cc_0x1227cc");
#endif

    ctx->pc = 0x1227ccu;

    // 0x1227cc: 0xc7a1006c  lwc1        $f1, 0x6C($sp)
    ctx->pc = 0x1227ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1227d0: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x1227d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x1227d4: 0x34640fdb  ori         $a0, $v1, 0xFDB
    ctx->pc = 0x1227d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1227d8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1227d8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1227dc: 0x0  nop
    ctx->pc = 0x1227dcu;
    // NOP
    // 0x1227e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1227e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1227e4: 0x0  nop
    ctx->pc = 0x1227e4u;
    // NOP
    // 0x1227e8: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x1227E8u;
    {
        const bool branch_taken_0x1227e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1227e8) {
            ctx->pc = 0x122828u;
            return;
        }
    }
    ctx->pc = 0x1227F0u;
    // 0x1227f0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1227f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1227f4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1227f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1227f8: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x1227f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1227fc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1227fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x122800: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122804: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x122804u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x122808: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x122808u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12280c: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x12280cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x122810: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x122810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122814: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x122814u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x122818: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12281c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12281cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x122820: 0x10000143  b           . + 4 + (0x143 << 2)
    ctx->pc = 0x122820u;
    {
        const bool branch_taken_0x122820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x122820) {
            ctx->pc = 0x122D30u;
            return;
        }
    }
    ctx->pc = 0x122828u;
}
