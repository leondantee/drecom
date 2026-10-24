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

// Function: entry_00363d80
// Address: 0x363d80 - 0x363ddc
void entry_00363d80_0x363d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00363d80_0x363d80");
#endif

    ctx->pc = 0x363d80u;

    // 0x363d80: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x363d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363d84: 0xc461128c  lwc1        $f1, 0x128C($v1)
    ctx->pc = 0x363d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x363d88: 0x3c034496  lui         $v1, 0x4496
    ctx->pc = 0x363d88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17558 << 16));
    // 0x363d8c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x363d8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x363d90: 0x0  nop
    ctx->pc = 0x363d90u;
    // NOP
    // 0x363d94: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x363d94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x363d98: 0x0  nop
    ctx->pc = 0x363d98u;
    // NOP
    // 0x363d9c: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x363D9Cu;
    {
        const bool branch_taken_0x363d9c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x363d9c) {
            ctx->pc = 0x363DDCu;
            return;
        }
    }
    ctx->pc = 0x363DA4u;
    // 0x363da4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x363da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x363da8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x363da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363dac: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x363dacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x363db0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x363db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x363db4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x363db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363db8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x363db8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x363dbc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x363dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363dc0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x363dc0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x363dc4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x363dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363dc8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x363dc8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x363dcc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x363dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363dd0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x363dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x363dd4: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x363DD4u;
    {
        const bool branch_taken_0x363dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x363dd4) {
            ctx->pc = 0x363DDCu;
            return;
        }
    }
    ctx->pc = 0x363DDCu;
}
