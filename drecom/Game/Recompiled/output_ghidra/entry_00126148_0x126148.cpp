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

// Function: entry_00126148
// Address: 0x126148 - 0x1261bc
void entry_00126148_0x126148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00126148_0x126148");
#endif

    ctx->pc = 0x126148u;

    // 0x126148: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12614c: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x12614cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x126150: 0x3c03443b  lui         $v1, 0x443B
    ctx->pc = 0x126150u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17467 << 16));
    // 0x126154: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x126154u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x126158: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x126158u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12615c: 0x0  nop
    ctx->pc = 0x12615cu;
    // NOP
    // 0x126160: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x126160u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x126164: 0x0  nop
    ctx->pc = 0x126164u;
    // NOP
    // 0x126168: 0x45000043  bc1f        . + 4 + (0x43 << 2)
    ctx->pc = 0x126168u;
    {
        const bool branch_taken_0x126168 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x126168) {
            ctx->pc = 0x126278u;
            return;
        }
    }
    ctx->pc = 0x126170u;
    // 0x126170: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x126170u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x126174: 0x8c231a64  lw          $v1, 0x1A64($at)
    ctx->pc = 0x126174u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x126178: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x126178u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x12617c: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x12617Cu;
    {
        const bool branch_taken_0x12617c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12617c) {
            ctx->pc = 0x1261BCu;
            return;
        }
    }
    ctx->pc = 0x126184u;
    // 0x126184: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x126184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x126188: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12618c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12618cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x126190: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x126190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x126194: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126198: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x126198u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x12619c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12619cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1261a0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1261a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1261a4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1261a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1261a8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1261a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1261ac: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1261acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1261b0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1261b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1261b4: 0x100000e4  b           . + 4 + (0xE4 << 2)
    ctx->pc = 0x1261B4u;
    {
        const bool branch_taken_0x1261b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1261b4) {
            ctx->pc = 0x126548u;
            return;
        }
    }
    ctx->pc = 0x1261BCu;
}
