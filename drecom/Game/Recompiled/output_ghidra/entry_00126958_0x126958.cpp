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

// Function: entry_00126958
// Address: 0x126958 - 0x1269cc
void entry_00126958_0x126958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00126958_0x126958");
#endif

    ctx->pc = 0x126958u;

    // 0x126958: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12695c: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x12695cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x126960: 0x3c03443b  lui         $v1, 0x443B
    ctx->pc = 0x126960u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17467 << 16));
    // 0x126964: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x126964u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x126968: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x126968u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12696c: 0x0  nop
    ctx->pc = 0x12696cu;
    // NOP
    // 0x126970: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x126970u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x126974: 0x0  nop
    ctx->pc = 0x126974u;
    // NOP
    // 0x126978: 0x45000043  bc1f        . + 4 + (0x43 << 2)
    ctx->pc = 0x126978u;
    {
        const bool branch_taken_0x126978 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x126978) {
            ctx->pc = 0x126A88u;
            return;
        }
    }
    ctx->pc = 0x126980u;
    // 0x126980: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x126980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x126984: 0x8c231a64  lw          $v1, 0x1A64($at)
    ctx->pc = 0x126984u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x126988: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x126988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x12698c: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x12698Cu;
    {
        const bool branch_taken_0x12698c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12698c) {
            ctx->pc = 0x1269CCu;
            return;
        }
    }
    ctx->pc = 0x126994u;
    // 0x126994: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x126994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x126998: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12699c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12699cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1269a0: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1269a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1269a4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1269a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1269a8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1269a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1269ac: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1269acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1269b0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1269b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1269b4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1269b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1269b8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1269b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1269bc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1269bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1269c0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1269c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1269c4: 0x10000105  b           . + 4 + (0x105 << 2)
    ctx->pc = 0x1269C4u;
    {
        const bool branch_taken_0x1269c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1269c4) {
            ctx->pc = 0x126DDCu;
            return;
        }
    }
    ctx->pc = 0x1269CCu;
}
