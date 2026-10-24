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

// Function: entry_002c93b8
// Address: 0x2c93b8 - 0x2c9400
void entry_002c93b8_0x2c93b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c93b8_0x2c93b8");
#endif

    ctx->pc = 0x2c93b8u;

    // 0x2c93b8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c93b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c93bc: 0x24671330  addiu       $a3, $v1, 0x1330
    ctx->pc = 0x2c93bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c93c0: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x2c93c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2c93c4: 0x1480000e  bnez        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x2C93C4u;
    {
        const bool branch_taken_0x2c93c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c93c4) {
            ctx->pc = 0x2C9400u;
            return;
        }
    }
    ctx->pc = 0x2C93CCu;
    // 0x2c93cc: 0x8fa60088  lw          $a2, 0x88($sp)
    ctx->pc = 0x2c93ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c93d0: 0x24c41330  addiu       $a0, $a2, 0x1330
    ctx->pc = 0x2c93d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4912));
    // 0x2c93d4: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x2c93d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c93d8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c93d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c93dc: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x2c93dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c93e0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2c93e0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c93e4: 0x0  nop
    ctx->pc = 0x2c93e4u;
    // NOP
    // 0x2c93e8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2C93E8u;
    {
        const bool branch_taken_0x2c93e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c93e8) {
            ctx->pc = 0x2C9400u;
            return;
        }
    }
    ctx->pc = 0x2C93F0u;
    // 0x2c93f0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c93f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c93f4: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x2c93f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2c93f8: 0x14600065  bnez        $v1, . + 4 + (0x65 << 2)
    ctx->pc = 0x2C93F8u;
    {
        const bool branch_taken_0x2c93f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c93f8) {
            ctx->pc = 0x2C9590u;
            return;
        }
    }
    ctx->pc = 0x2C9400u;
}
