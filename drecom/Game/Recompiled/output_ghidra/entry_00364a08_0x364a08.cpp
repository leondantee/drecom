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

// Function: entry_00364a08
// Address: 0x364a08 - 0x364a74
void entry_00364a08_0x364a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00364a08_0x364a08");
#endif

    ctx->pc = 0x364a08u;

    // 0x364a08: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x364a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x364a0c: 0x3c033f49  lui         $v1, 0x3F49
    ctx->pc = 0x364a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16201 << 16));
    // 0x364a10: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x364a10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x364a14: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x364a14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x364a18: 0x0  nop
    ctx->pc = 0x364a18u;
    // NOP
    // 0x364a1c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x364a1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x364a20: 0x0  nop
    ctx->pc = 0x364a20u;
    // NOP
    // 0x364a24: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x364A24u;
    {
        const bool branch_taken_0x364a24 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x364a24) {
            ctx->pc = 0x364A7Cu;
            return;
        }
    }
    ctx->pc = 0x364A2Cu;
    // 0x364a2c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364a30: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x364a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x364a34: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x364a34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x364a38: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x364a38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x364a3c: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x364A3Cu;
    {
        const bool branch_taken_0x364a3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x364a3c) {
            ctx->pc = 0x364A74u;
            return;
        }
    }
    ctx->pc = 0x364A44u;
    // 0x364a44: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x364a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x364a48: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364a4c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x364a4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x364a50: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x364a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x364a54: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364a58: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x364a58u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x364a5c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364a60: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x364a60u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x364a64: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364a68: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x364a68u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x364a6c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364a70: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x364a70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x364a74u;
}
