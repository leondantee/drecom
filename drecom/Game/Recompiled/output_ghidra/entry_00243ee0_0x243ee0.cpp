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

// Function: entry_00243ee0
// Address: 0x243ee0 - 0x243f4c
void entry_00243ee0_0x243ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00243ee0_0x243ee0");
#endif

    ctx->pc = 0x243ee0u;

    // 0x243ee0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x243ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243ee4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x243ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x243ee8: 0x8463005c  lh          $v1, 0x5C($v1)
    ctx->pc = 0x243ee8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x243eec: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x243EECu;
    {
        const bool branch_taken_0x243eec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x243eec) {
            ctx->pc = 0x243F4Cu;
            return;
        }
    }
    ctx->pc = 0x243EF4u;
    // 0x243ef4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x243ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243ef8: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x243ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x243efc: 0x3c0344bb  lui         $v1, 0x44BB
    ctx->pc = 0x243efcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17595 << 16));
    // 0x243f00: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x243f00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x243f04: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x243f04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x243f08: 0x0  nop
    ctx->pc = 0x243f08u;
    // NOP
    // 0x243f0c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x243f0cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x243f10: 0x0  nop
    ctx->pc = 0x243f10u;
    // NOP
    // 0x243f14: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x243F14u;
    {
        const bool branch_taken_0x243f14 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x243f14) {
            ctx->pc = 0x243F4Cu;
            return;
        }
    }
    ctx->pc = 0x243F1Cu;
    // 0x243f1c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x243f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x243f20: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x243f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243f24: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x243f24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x243f28: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x243f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x243f2c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x243f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243f30: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x243f30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x243f34: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x243f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243f38: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x243f38u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x243f3c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x243f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243f40: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x243f40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x243f44: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x243f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243f48: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x243f48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x243f4cu;
}
