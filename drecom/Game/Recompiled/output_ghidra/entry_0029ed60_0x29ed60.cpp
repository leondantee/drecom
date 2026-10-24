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

// Function: entry_0029ed60
// Address: 0x29ed60 - 0x29edd4
void entry_0029ed60_0x29ed60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029ed60_0x29ed60");
#endif

    ctx->pc = 0x29ed60u;

    // 0x29ed60: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29ed60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29ed64: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x29ed64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x29ed68: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x29ed68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x29ed6c: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x29ed6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x29ed70: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x29ED70u;
    {
        const bool branch_taken_0x29ed70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ed70) {
            ctx->pc = 0x29EDD4u;
            return;
        }
    }
    ctx->pc = 0x29ED78u;
    // 0x29ed78: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29ed78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29ed7c: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x29ed7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29ed80: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x29ed80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x29ed84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29ed84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29ed88: 0x0  nop
    ctx->pc = 0x29ed88u;
    // NOP
    // 0x29ed8c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29ed8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29ed90: 0x0  nop
    ctx->pc = 0x29ed90u;
    // NOP
    // 0x29ed94: 0x45000025  bc1f        . + 4 + (0x25 << 2)
    ctx->pc = 0x29ED94u;
    {
        const bool branch_taken_0x29ed94 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29ed94) {
            ctx->pc = 0x29EE2Cu;
            return;
        }
    }
    ctx->pc = 0x29ED9Cu;
    // 0x29ed9c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29ed9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29eda0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29eda0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29eda4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x29eda4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x29eda8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x29eda8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29edac: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29edacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29edb0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x29edb0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x29edb4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29edb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29edb8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x29edb8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x29edbc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29edbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29edc0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x29edc0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x29edc4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29edc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29edc8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x29edc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x29edcc: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x29EDCCu;
    {
        const bool branch_taken_0x29edcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29edcc) {
            ctx->pc = 0x29EE2Cu;
            return;
        }
    }
    ctx->pc = 0x29EDD4u;
}
