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

// Function: entry_003090d4
// Address: 0x3090d4 - 0x309130
void entry_003090d4_0x3090d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003090d4_0x3090d4");
#endif

    ctx->pc = 0x3090d4u;

    // 0x3090d4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3090d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3090d8: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x3090d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3090dc: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x3090dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x3090e0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3090e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3090e4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x3090e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x3090e8: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x3090e8u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3090ec: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3090ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3090f0: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x3090f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3090f4: 0x0  nop
    ctx->pc = 0x3090f4u;
    // NOP
    // 0x3090f8: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x3090F8u;
    {
        const bool branch_taken_0x3090f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3090f8) {
            ctx->pc = 0x309130u;
            return;
        }
    }
    ctx->pc = 0x309100u;
    // 0x309100: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x309100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x309104: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x309104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309108: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x309108u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x30910c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x30910cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x309110: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x309110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309114: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x309114u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x309118: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x309118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30911c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x30911cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x309120: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x309120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309124: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x309124u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x309128: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x309128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30912c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x30912cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x309130u;
}
