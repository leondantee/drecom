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

// Function: entry_0012fbbc
// Address: 0x12fbbc - 0x12fc28
void entry_0012fbbc_0x12fbbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012fbbc_0x12fbbc");
#endif

    ctx->pc = 0x12fbbcu;

    // 0x12fbbc: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x12fbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12fbc0: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x12fbc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12fbc4: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x12fbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x12fbc8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12fbc8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12fbcc: 0x0  nop
    ctx->pc = 0x12fbccu;
    // NOP
    // 0x12fbd0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x12fbd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12fbd4: 0x0  nop
    ctx->pc = 0x12fbd4u;
    // NOP
    // 0x12fbd8: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x12FBD8u;
    {
        const bool branch_taken_0x12fbd8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12fbd8) {
            ctx->pc = 0x12FC28u;
            return;
        }
    }
    ctx->pc = 0x12FBE0u;
    // 0x12fbe0: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x12fbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x12fbe4: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x12fbe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x12fbe8: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x12fbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x12fbec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12fbecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12fbf0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x12fbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12fbf4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12fbf4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x12fbf8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x12fbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x12fbfc: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x12fbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12fc00: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12fc00u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x12fc04: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x12fc04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12fc08: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12fc08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x12fc0c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x12fc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12fc10: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12fc10u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x12fc14: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x12fc14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12fc18: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12fc18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x12fc1c: 0xa600007c  sh          $zero, 0x7C($s0)
    ctx->pc = 0x12fc1cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 124), (uint16_t)GPR_U32(ctx, 0));
    // 0x12fc20: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x12FC20u;
    {
        const bool branch_taken_0x12fc20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12fc20) {
            ctx->pc = 0x12FD84u;
            return;
        }
    }
    ctx->pc = 0x12FC28u;
}
