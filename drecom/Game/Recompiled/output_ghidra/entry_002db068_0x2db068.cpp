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

// Function: entry_002db068
// Address: 0x2db068 - 0x2db0c8
void entry_002db068_0x2db068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002db068_0x2db068");
#endif

    ctx->pc = 0x2db068u;

    // 0x2db068: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db06c: 0xc461128c  lwc1        $f1, 0x128C($v1)
    ctx->pc = 0x2db06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2db070: 0x3c0344bb  lui         $v1, 0x44BB
    ctx->pc = 0x2db070u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17595 << 16));
    // 0x2db074: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x2db074u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x2db078: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2db078u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2db07c: 0x0  nop
    ctx->pc = 0x2db07cu;
    // NOP
    // 0x2db080: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2db080u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2db084: 0x0  nop
    ctx->pc = 0x2db084u;
    // NOP
    // 0x2db088: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x2DB088u;
    {
        const bool branch_taken_0x2db088 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2db088) {
            ctx->pc = 0x2DB0C8u;
            return;
        }
    }
    ctx->pc = 0x2DB090u;
    // 0x2db090: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2db090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2db094: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db098: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2db098u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2db09c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2db09cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2db0a0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db0a4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2db0a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2db0a8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db0ac: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2db0acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2db0b0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db0b4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2db0b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2db0b8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db0bc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2db0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2db0c0: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x2DB0C0u;
    {
        const bool branch_taken_0x2db0c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db0c0) {
            ctx->pc = 0x2DB294u;
            return;
        }
    }
    ctx->pc = 0x2DB0C8u;
}
