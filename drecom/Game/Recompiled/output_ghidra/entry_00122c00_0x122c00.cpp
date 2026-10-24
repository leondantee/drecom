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

// Function: entry_00122c00
// Address: 0x122c00 - 0x122c5c
void entry_00122c00_0x122c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00122c00_0x122c00");
#endif

    ctx->pc = 0x122c00u;

    // 0x122c00: 0xc7a1006c  lwc1        $f1, 0x6C($sp)
    ctx->pc = 0x122c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x122c04: 0x3c053fc9  lui         $a1, 0x3FC9
    ctx->pc = 0x122c04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16329 << 16));
    // 0x122c08: 0x34a30fdb  ori         $v1, $a1, 0xFDB
    ctx->pc = 0x122c08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
    // 0x122c0c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x122c0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x122c10: 0x0  nop
    ctx->pc = 0x122c10u;
    // NOP
    // 0x122c14: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x122c14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x122c18: 0x0  nop
    ctx->pc = 0x122c18u;
    // NOP
    // 0x122c1c: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x122C1Cu;
    {
        const bool branch_taken_0x122c1c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x122c1c) {
            ctx->pc = 0x122C5Cu;
            return;
        }
    }
    ctx->pc = 0x122C24u;
    // 0x122c24: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x122c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x122c28: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122c2c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x122c2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x122c30: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x122c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x122c34: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x122c34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122c38: 0xa0a40001  sb          $a0, 0x1($a1)
    ctx->pc = 0x122c38u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x122c3c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122c40: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x122c40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x122c44: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x122c44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122c48: 0xa0a00003  sb          $zero, 0x3($a1)
    ctx->pc = 0x122c48u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x122c4c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122c50: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x122c50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x122c54: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x122C54u;
    {
        const bool branch_taken_0x122c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x122c54) {
            ctx->pc = 0x122D30u;
            return;
        }
    }
    ctx->pc = 0x122C5Cu;
}
