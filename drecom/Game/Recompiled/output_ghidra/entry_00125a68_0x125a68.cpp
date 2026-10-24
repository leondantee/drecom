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

// Function: entry_00125a68
// Address: 0x125a68 - 0x125adc
void entry_00125a68_0x125a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00125a68_0x125a68");
#endif

    ctx->pc = 0x125a68u;

    // 0x125a68: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x125a6c: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x125a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x125a70: 0x3c03443b  lui         $v1, 0x443B
    ctx->pc = 0x125a70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17467 << 16));
    // 0x125a74: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x125a74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x125a78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x125a78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x125a7c: 0x0  nop
    ctx->pc = 0x125a7cu;
    // NOP
    // 0x125a80: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x125a80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x125a84: 0x0  nop
    ctx->pc = 0x125a84u;
    // NOP
    // 0x125a88: 0x45000043  bc1f        . + 4 + (0x43 << 2)
    ctx->pc = 0x125A88u;
    {
        const bool branch_taken_0x125a88 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x125a88) {
            ctx->pc = 0x125B98u;
            return;
        }
    }
    ctx->pc = 0x125A90u;
    // 0x125a90: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x125a90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x125a94: 0x8c231a64  lw          $v1, 0x1A64($at)
    ctx->pc = 0x125a94u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x125a98: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x125a98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x125a9c: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x125A9Cu;
    {
        const bool branch_taken_0x125a9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x125a9c) {
            ctx->pc = 0x125ADCu;
            return;
        }
    }
    ctx->pc = 0x125AA4u;
    // 0x125aa4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x125aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x125aa8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x125aac: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x125aacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x125ab0: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x125ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x125ab4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x125ab8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x125ab8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x125abc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x125ac0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x125ac0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x125ac4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x125ac8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x125ac8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x125acc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x125ad0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x125ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x125ad4: 0x100000b1  b           . + 4 + (0xB1 << 2)
    ctx->pc = 0x125AD4u;
    {
        const bool branch_taken_0x125ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x125ad4) {
            ctx->pc = 0x125D9Cu;
            return;
        }
    }
    ctx->pc = 0x125ADCu;
}
