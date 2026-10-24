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

// Function: entry_0012a15c
// Address: 0x12a15c - 0x12a1d0
void entry_0012a15c_0x12a15c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012a15c_0x12a15c");
#endif

    ctx->pc = 0x12a15cu;

    // 0x12a15c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a15cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12a160: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x12a160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12a164: 0x3c03443b  lui         $v1, 0x443B
    ctx->pc = 0x12a164u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17467 << 16));
    // 0x12a168: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x12a168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x12a16c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12a16cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12a170: 0x0  nop
    ctx->pc = 0x12a170u;
    // NOP
    // 0x12a174: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x12a174u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12a178: 0x0  nop
    ctx->pc = 0x12a178u;
    // NOP
    // 0x12a17c: 0x45000043  bc1f        . + 4 + (0x43 << 2)
    ctx->pc = 0x12A17Cu;
    {
        const bool branch_taken_0x12a17c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12a17c) {
            ctx->pc = 0x12A28Cu;
            return;
        }
    }
    ctx->pc = 0x12A184u;
    // 0x12a184: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x12a184u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x12a188: 0x8c231a64  lw          $v1, 0x1A64($at)
    ctx->pc = 0x12a188u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x12a18c: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x12a18cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x12a190: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x12A190u;
    {
        const bool branch_taken_0x12a190 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a190) {
            ctx->pc = 0x12A1D0u;
            return;
        }
    }
    ctx->pc = 0x12A198u;
    // 0x12a198: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12a198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12a19c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a19cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12a1a0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12a1a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x12a1a4: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x12a1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x12a1a8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12a1ac: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12a1acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x12a1b0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12a1b4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12a1b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x12a1b8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12a1bc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12a1bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x12a1c0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12a1c4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12a1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x12a1c8: 0x100000da  b           . + 4 + (0xDA << 2)
    ctx->pc = 0x12A1C8u;
    {
        const bool branch_taken_0x12a1c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a1c8) {
            ctx->pc = 0x12A534u;
            return;
        }
    }
    ctx->pc = 0x12A1D0u;
}
