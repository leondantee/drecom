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

// Function: entry_00364878
// Address: 0x364878 - 0x3648d4
void entry_00364878_0x364878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00364878_0x364878");
#endif

    ctx->pc = 0x364878u;

    // 0x364878: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x364878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36487c: 0x3c033f49  lui         $v1, 0x3F49
    ctx->pc = 0x36487cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16201 << 16));
    // 0x364880: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x364880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x364884: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x364884u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x364888: 0x0  nop
    ctx->pc = 0x364888u;
    // NOP
    // 0x36488c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x36488cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x364890: 0x0  nop
    ctx->pc = 0x364890u;
    // NOP
    // 0x364894: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x364894u;
    {
        const bool branch_taken_0x364894 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x364894) {
            ctx->pc = 0x364924u;
            return;
        }
    }
    ctx->pc = 0x36489Cu;
    // 0x36489c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x36489cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3648a0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3648a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3648a4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3648a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3648a8: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x3648a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x3648ac: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3648acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3648b0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x3648b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x3648b4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3648b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3648b8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x3648b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3648bc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3648bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3648c0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x3648c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3648c4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3648c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3648c8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3648c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x3648cc: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x3648CCu;
    {
        const bool branch_taken_0x3648cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3648cc) {
            ctx->pc = 0x364A7Cu;
            return;
        }
    }
    ctx->pc = 0x3648D4u;
}
