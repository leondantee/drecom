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

// Function: entry_00363d20
// Address: 0x363d20 - 0x363d80
void entry_00363d20_0x363d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00363d20_0x363d20");
#endif

    ctx->pc = 0x363d20u;

    // 0x363d20: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x363d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363d24: 0xc461128c  lwc1        $f1, 0x128C($v1)
    ctx->pc = 0x363d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x363d28: 0x3c034538  lui         $v1, 0x4538
    ctx->pc = 0x363d28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17720 << 16));
    // 0x363d2c: 0x34636000  ori         $v1, $v1, 0x6000
    ctx->pc = 0x363d2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)24576);
    // 0x363d30: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x363d30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x363d34: 0x0  nop
    ctx->pc = 0x363d34u;
    // NOP
    // 0x363d38: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x363d38u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x363d3c: 0x0  nop
    ctx->pc = 0x363d3cu;
    // NOP
    // 0x363d40: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x363D40u;
    {
        const bool branch_taken_0x363d40 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x363d40) {
            ctx->pc = 0x363D80u;
            return;
        }
    }
    ctx->pc = 0x363D48u;
    // 0x363d48: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x363d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x363d4c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x363d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363d50: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x363d50u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x363d54: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x363d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x363d58: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x363d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363d5c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x363d5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x363d60: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x363d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363d64: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x363d64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x363d68: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x363d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363d6c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x363d6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x363d70: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x363d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363d74: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x363d74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x363d78: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x363D78u;
    {
        const bool branch_taken_0x363d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x363d78) {
            ctx->pc = 0x363DDCu;
            return;
        }
    }
    ctx->pc = 0x363D80u;
}
