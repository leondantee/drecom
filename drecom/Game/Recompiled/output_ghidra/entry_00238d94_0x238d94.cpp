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

// Function: entry_00238d94
// Address: 0x238d94 - 0x238e14
void entry_00238d94_0x238d94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00238d94_0x238d94");
#endif

    ctx->pc = 0x238d94u;

    // 0x238d94: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x238d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238d98: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x238d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x238d9c: 0xc461004c  lwc1        $f1, 0x4C($v1)
    ctx->pc = 0x238d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x238da0: 0x3c03455a  lui         $v1, 0x455A
    ctx->pc = 0x238da0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17754 << 16));
    // 0x238da4: 0x3463c000  ori         $v1, $v1, 0xC000
    ctx->pc = 0x238da4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
    // 0x238da8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x238da8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x238dac: 0x0  nop
    ctx->pc = 0x238dacu;
    // NOP
    // 0x238db0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x238db0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x238db4: 0x0  nop
    ctx->pc = 0x238db4u;
    // NOP
    // 0x238db8: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x238DB8u;
    {
        const bool branch_taken_0x238db8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x238db8) {
            ctx->pc = 0x238E14u;
            return;
        }
    }
    ctx->pc = 0x238DC0u;
    // 0x238dc0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x238dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238dc4: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x238dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x238dc8: 0x3c0344fa  lui         $v1, 0x44FA
    ctx->pc = 0x238dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17658 << 16));
    // 0x238dcc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x238dccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x238dd0: 0x0  nop
    ctx->pc = 0x238dd0u;
    // NOP
    // 0x238dd4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x238dd4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x238dd8: 0x0  nop
    ctx->pc = 0x238dd8u;
    // NOP
    // 0x238ddc: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x238DDCu;
    {
        const bool branch_taken_0x238ddc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x238ddc) {
            ctx->pc = 0x238E14u;
            return;
        }
    }
    ctx->pc = 0x238DE4u;
    // 0x238de4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x238de4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x238de8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x238de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238dec: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x238decu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x238df0: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x238df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x238df4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x238df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238df8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x238df8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x238dfc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x238dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238e00: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x238e00u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x238e04: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x238e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238e08: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x238e08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x238e0c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x238e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238e10: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x238e10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x238e14u;
}
