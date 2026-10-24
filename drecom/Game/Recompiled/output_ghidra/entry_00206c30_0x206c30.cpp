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

// Function: entry_00206c30
// Address: 0x206c30 - 0x206cd4
void entry_00206c30_0x206c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00206c30_0x206c30");
#endif

    ctx->pc = 0x206c30u;

    // 0x206c30: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x206c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x206c34: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x206c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x206c38: 0x3c0345cb  lui         $v1, 0x45CB
    ctx->pc = 0x206c38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17867 << 16));
    // 0x206c3c: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x206c3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x206c40: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x206c40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x206c44: 0x0  nop
    ctx->pc = 0x206c44u;
    // NOP
    // 0x206c48: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x206c48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x206c4c: 0x0  nop
    ctx->pc = 0x206c4cu;
    // NOP
    // 0x206c50: 0x45000020  bc1f        . + 4 + (0x20 << 2)
    ctx->pc = 0x206C50u;
    {
        const bool branch_taken_0x206c50 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x206c50) {
            ctx->pc = 0x206CD4u;
            return;
        }
    }
    ctx->pc = 0x206C58u;
    // 0x206c58: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x206c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x206c5c: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x206c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x206c60: 0x3c03465a  lui         $v1, 0x465A
    ctx->pc = 0x206c60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18010 << 16));
    // 0x206c64: 0x3463c000  ori         $v1, $v1, 0xC000
    ctx->pc = 0x206c64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
    // 0x206c68: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x206c68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x206c6c: 0x0  nop
    ctx->pc = 0x206c6cu;
    // NOP
    // 0x206c70: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x206c70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x206c74: 0x0  nop
    ctx->pc = 0x206c74u;
    // NOP
    // 0x206c78: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x206C78u;
    {
        const bool branch_taken_0x206c78 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x206c78) {
            ctx->pc = 0x206CD4u;
            return;
        }
    }
    ctx->pc = 0x206C80u;
    // 0x206c80: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x206c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x206c84: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x206c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x206c88: 0x3c0345fa  lui         $v1, 0x45FA
    ctx->pc = 0x206c88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17914 << 16));
    // 0x206c8c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x206c8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x206c90: 0x0  nop
    ctx->pc = 0x206c90u;
    // NOP
    // 0x206c94: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x206c94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x206c98: 0x0  nop
    ctx->pc = 0x206c98u;
    // NOP
    // 0x206c9c: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x206C9Cu;
    {
        const bool branch_taken_0x206c9c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x206c9c) {
            ctx->pc = 0x206CD4u;
            return;
        }
    }
    ctx->pc = 0x206CA4u;
    // 0x206ca4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x206ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x206ca8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x206ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x206cac: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x206cacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x206cb0: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x206cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x206cb4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x206cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x206cb8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x206cb8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x206cbc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x206cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x206cc0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x206cc0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x206cc4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x206cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x206cc8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x206cc8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x206ccc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x206cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x206cd0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x206cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x206cd4u;
}
