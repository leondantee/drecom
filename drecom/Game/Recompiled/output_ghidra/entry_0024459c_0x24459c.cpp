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

// Function: entry_0024459c
// Address: 0x24459c - 0x244608
void entry_0024459c_0x24459c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024459c_0x24459c");
#endif

    ctx->pc = 0x24459cu;

    // 0x24459c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x24459cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2445a0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2445a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2445a4: 0x8463005c  lh          $v1, 0x5C($v1)
    ctx->pc = 0x2445a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x2445a8: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2445A8u;
    {
        const bool branch_taken_0x2445a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2445a8) {
            ctx->pc = 0x244608u;
            return;
        }
    }
    ctx->pc = 0x2445B0u;
    // 0x2445b0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2445b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2445b4: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x2445b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2445b8: 0x3c0344bb  lui         $v1, 0x44BB
    ctx->pc = 0x2445b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17595 << 16));
    // 0x2445bc: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x2445bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x2445c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2445c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2445c4: 0x0  nop
    ctx->pc = 0x2445c4u;
    // NOP
    // 0x2445c8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2445c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2445cc: 0x0  nop
    ctx->pc = 0x2445ccu;
    // NOP
    // 0x2445d0: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x2445D0u;
    {
        const bool branch_taken_0x2445d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2445d0) {
            ctx->pc = 0x244608u;
            return;
        }
    }
    ctx->pc = 0x2445D8u;
    // 0x2445d8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2445d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2445dc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2445dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2445e0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2445e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2445e4: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x2445e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2445e8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2445e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2445ec: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2445ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2445f0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2445f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2445f4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2445f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2445f8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2445f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2445fc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2445fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x244600: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x244600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x244604: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x244604u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x244608u;
}
