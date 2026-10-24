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

// Function: entry_002c7450
// Address: 0x2c7450 - 0x2c7498
void entry_002c7450_0x2c7450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c7450_0x2c7450");
#endif

    ctx->pc = 0x2c7450u;

    // 0x2c7450: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c7450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c7454: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c7454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c7458: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2c7458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c745c: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2C745Cu;
    {
        const bool branch_taken_0x2c745c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c745c) {
            ctx->pc = 0x2C7498u;
            return;
        }
    }
    ctx->pc = 0x2C7464u;
    // 0x2c7464: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c7464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c7468: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c7468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c746c: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x2c746cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7470: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c7470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c7474: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x2c7474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7478: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2c7478u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c747c: 0x0  nop
    ctx->pc = 0x2c747cu;
    // NOP
    // 0x2c7480: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2C7480u;
    {
        const bool branch_taken_0x2c7480 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c7480) {
            ctx->pc = 0x2C7498u;
            return;
        }
    }
    ctx->pc = 0x2C7488u;
    // 0x2c7488: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c7488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c748c: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x2c748cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2c7490: 0x14600060  bnez        $v1, . + 4 + (0x60 << 2)
    ctx->pc = 0x2C7490u;
    {
        const bool branch_taken_0x2c7490 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c7490) {
            ctx->pc = 0x2C7614u;
            return;
        }
    }
    ctx->pc = 0x2C7498u;
}
