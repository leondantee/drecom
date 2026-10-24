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

// Function: entry_0029fc10
// Address: 0x29fc10 - 0x29fc64
void entry_0029fc10_0x29fc10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029fc10_0x29fc10");
#endif

    ctx->pc = 0x29fc10u;

    // 0x29fc10: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29fc10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29fc14: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x29fc14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29fc18: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x29fc18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x29fc1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29fc1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29fc20: 0x0  nop
    ctx->pc = 0x29fc20u;
    // NOP
    // 0x29fc24: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29fc24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29fc28: 0x0  nop
    ctx->pc = 0x29fc28u;
    // NOP
    // 0x29fc2c: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x29FC2Cu;
    {
        const bool branch_taken_0x29fc2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29fc2c) {
            ctx->pc = 0x29FC64u;
            return;
        }
    }
    ctx->pc = 0x29FC34u;
    // 0x29fc34: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29fc34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29fc38: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29fc38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29fc3c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x29fc3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x29fc40: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x29fc40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x29fc44: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29fc44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29fc48: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x29fc48u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x29fc4c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29fc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29fc50: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x29fc50u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x29fc54: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29fc54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29fc58: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x29fc58u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x29fc5c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29fc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29fc60: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x29fc60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x29fc64u;
}
