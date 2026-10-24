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

// Function: entry_001c7388
// Address: 0x1c7388 - 0x1c73f8
void entry_001c7388_0x1c7388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c7388_0x1c7388");
#endif

    ctx->pc = 0x1c7388u;

    // 0x1c7388: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x1c7388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c738c: 0x3c044016  lui         $a0, 0x4016
    ctx->pc = 0x1c738cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16406 << 16));
    // 0x1c7390: 0x3486cbe4  ori         $a2, $a0, 0xCBE4
    ctx->pc = 0x1c7390u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52196);
    // 0x1c7394: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1c7394u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c7398: 0x0  nop
    ctx->pc = 0x1c7398u;
    // NOP
    // 0x1c739c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c739cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c73a0: 0x0  nop
    ctx->pc = 0x1c73a0u;
    // NOP
    // 0x1c73a4: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x1C73A4u;
    {
        const bool branch_taken_0x1c73a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c73a4) {
            ctx->pc = 0x1C73F8u;
            return;
        }
    }
    ctx->pc = 0x1C73ACu;
    // 0x1c73ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c73acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c73b0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c73b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c73b4: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x1c73b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1c73b8: 0x24060013  addiu       $a2, $zero, 0x13
    ctx->pc = 0x1c73b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1c73bc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c73bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c73c0: 0xa0860001  sb          $a2, 0x1($a0)
    ctx->pc = 0x1c73c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 6));
    // 0x1c73c4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c73c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c73c8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1c73c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c73cc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c73ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c73d0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1c73d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c73d4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1c73d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c73d8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c73d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c73dc: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1c73dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x1c73e0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c73e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c73e4: 0xc48000d4  lwc1        $f0, 0xD4($a0)
    ctx->pc = 0x1c73e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c73e8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c73e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c73ec: 0xe4601290  swc1        $f0, 0x1290($v1)
    ctx->pc = 0x1c73ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4752), bits); }
    // 0x1c73f0: 0x100003dc  b           . + 4 + (0x3DC << 2)
    ctx->pc = 0x1C73F0u;
    {
        const bool branch_taken_0x1c73f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c73f0) {
            ctx->pc = 0x1C8364u;
            return;
        }
    }
    ctx->pc = 0x1C73F8u;
}
