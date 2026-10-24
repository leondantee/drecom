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

// Function: entry_00238e14
// Address: 0x238e14 - 0x238e70
void entry_00238e14_0x238e14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00238e14_0x238e14");
#endif

    ctx->pc = 0x238e14u;

    // 0x238e14: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x238e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238e18: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x238e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x238e1c: 0xc461004c  lwc1        $f1, 0x4C($v1)
    ctx->pc = 0x238e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x238e20: 0x3c0345ab  lui         $v1, 0x45AB
    ctx->pc = 0x238e20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17835 << 16));
    // 0x238e24: 0x3463e000  ori         $v1, $v1, 0xE000
    ctx->pc = 0x238e24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57344);
    // 0x238e28: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x238e28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x238e2c: 0x0  nop
    ctx->pc = 0x238e2cu;
    // NOP
    // 0x238e30: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x238e30u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x238e34: 0x0  nop
    ctx->pc = 0x238e34u;
    // NOP
    // 0x238e38: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x238E38u;
    {
        const bool branch_taken_0x238e38 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x238e38) {
            ctx->pc = 0x238E70u;
            return;
        }
    }
    ctx->pc = 0x238E40u;
    // 0x238e40: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x238e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x238e44: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x238e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238e48: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x238e48u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x238e4c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x238e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x238e50: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x238e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238e54: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x238e54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x238e58: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x238e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238e5c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x238e5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x238e60: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x238e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238e64: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x238e64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x238e68: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x238e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238e6c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x238e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x238e70u;
}
