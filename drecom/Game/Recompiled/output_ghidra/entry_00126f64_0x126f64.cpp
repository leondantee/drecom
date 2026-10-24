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

// Function: entry_00126f64
// Address: 0x126f64 - 0x126fe0
void entry_00126f64_0x126f64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00126f64_0x126f64");
#endif

    ctx->pc = 0x126f64u;

    // 0x126f64: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126f68: 0x9463000e  lhu         $v1, 0xE($v1)
    ctx->pc = 0x126f68u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x126f6c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x126f6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x126f70: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x126f70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x126f74: 0x1060006d  beqz        $v1, . + 4 + (0x6D << 2)
    ctx->pc = 0x126F74u;
    {
        const bool branch_taken_0x126f74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x126f74) {
            ctx->pc = 0x12712Cu;
            return;
        }
    }
    ctx->pc = 0x126F7Cu;
    // 0x126f7c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126f80: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x126f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x126f84: 0x3c03443b  lui         $v1, 0x443B
    ctx->pc = 0x126f84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17467 << 16));
    // 0x126f88: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x126f88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x126f8c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x126f8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x126f90: 0x0  nop
    ctx->pc = 0x126f90u;
    // NOP
    // 0x126f94: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x126f94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x126f98: 0x0  nop
    ctx->pc = 0x126f98u;
    // NOP
    // 0x126f9c: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x126F9Cu;
    {
        const bool branch_taken_0x126f9c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x126f9c) {
            ctx->pc = 0x126FE8u;
            return;
        }
    }
    ctx->pc = 0x126FA4u;
    // 0x126fa4: 0x2e210002  sltiu       $at, $s1, 0x2
    ctx->pc = 0x126fa4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x126fa8: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x126FA8u;
    {
        const bool branch_taken_0x126fa8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x126fa8) {
            ctx->pc = 0x126FE0u;
            return;
        }
    }
    ctx->pc = 0x126FB0u;
    // 0x126fb0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x126fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x126fb4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126fb8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x126fb8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x126fbc: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x126fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x126fc0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126fc4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x126fc4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x126fc8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126fcc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x126fccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x126fd0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126fd4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x126fd4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x126fd8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126fdc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x126fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x126fe0u;
}
