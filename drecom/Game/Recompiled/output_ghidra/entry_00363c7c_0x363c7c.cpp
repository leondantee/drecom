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

// Function: entry_00363c7c
// Address: 0x363c7c - 0x363cd8
void entry_00363c7c_0x363c7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00363c7c_0x363c7c");
#endif

    ctx->pc = 0x363c7cu;

    // 0x363c7c: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x363c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x363c80: 0x3c033ec9  lui         $v1, 0x3EC9
    ctx->pc = 0x363c80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16073 << 16));
    // 0x363c84: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x363c84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x363c88: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x363c88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x363c8c: 0x0  nop
    ctx->pc = 0x363c8cu;
    // NOP
    // 0x363c90: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x363c90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x363c94: 0x0  nop
    ctx->pc = 0x363c94u;
    // NOP
    // 0x363c98: 0x45000021  bc1f        . + 4 + (0x21 << 2)
    ctx->pc = 0x363C98u;
    {
        const bool branch_taken_0x363c98 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x363c98) {
            ctx->pc = 0x363D20u;
            return;
        }
    }
    ctx->pc = 0x363CA0u;
    // 0x363ca0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x363ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x363ca4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x363ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363ca8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x363ca8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x363cac: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x363cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x363cb0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x363cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363cb4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x363cb4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x363cb8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x363cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363cbc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x363cbcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x363cc0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x363cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363cc4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x363cc4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x363cc8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x363cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363ccc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x363cccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x363cd0: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x363CD0u;
    {
        const bool branch_taken_0x363cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x363cd0) {
            ctx->pc = 0x363DDCu;
            return;
        }
    }
    ctx->pc = 0x363CD8u;
}
