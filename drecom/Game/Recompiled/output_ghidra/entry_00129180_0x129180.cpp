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

// Function: entry_00129180
// Address: 0x129180 - 0x1291f4
void entry_00129180_0x129180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00129180_0x129180");
#endif

    ctx->pc = 0x129180u;

    // 0x129180: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129184: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x129184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x129188: 0x3c03443b  lui         $v1, 0x443B
    ctx->pc = 0x129188u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17467 << 16));
    // 0x12918c: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x12918cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x129190: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x129190u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x129194: 0x0  nop
    ctx->pc = 0x129194u;
    // NOP
    // 0x129198: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x129198u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12919c: 0x0  nop
    ctx->pc = 0x12919cu;
    // NOP
    // 0x1291a0: 0x45000043  bc1f        . + 4 + (0x43 << 2)
    ctx->pc = 0x1291A0u;
    {
        const bool branch_taken_0x1291a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1291a0) {
            ctx->pc = 0x1292B0u;
            return;
        }
    }
    ctx->pc = 0x1291A8u;
    // 0x1291a8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1291a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1291ac: 0x8c231a64  lw          $v1, 0x1A64($at)
    ctx->pc = 0x1291acu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x1291b0: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x1291b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x1291b4: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1291B4u;
    {
        const bool branch_taken_0x1291b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1291b4) {
            ctx->pc = 0x1291F4u;
            return;
        }
    }
    ctx->pc = 0x1291BCu;
    // 0x1291bc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1291bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1291c0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1291c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1291c4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1291c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1291c8: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1291c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1291cc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1291ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1291d0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1291d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1291d4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1291d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1291d8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1291d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1291dc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1291dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1291e0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1291e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1291e4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1291e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1291e8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1291e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1291ec: 0x100000f0  b           . + 4 + (0xF0 << 2)
    ctx->pc = 0x1291ECu;
    {
        const bool branch_taken_0x1291ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1291ec) {
            ctx->pc = 0x1295B0u;
            return;
        }
    }
    ctx->pc = 0x1291F4u;
}
