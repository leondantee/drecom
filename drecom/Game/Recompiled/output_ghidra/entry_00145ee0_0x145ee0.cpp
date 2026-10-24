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

// Function: entry_00145ee0
// Address: 0x145ee0 - 0x145f48
void entry_00145ee0_0x145ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00145ee0_0x145ee0");
#endif

    ctx->pc = 0x145ee0u;

    // 0x145ee0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x145ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145ee4: 0xc4611388  lwc1        $f1, 0x1388($v1)
    ctx->pc = 0x145ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x145ee8: 0x3c034240  lui         $v1, 0x4240
    ctx->pc = 0x145ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16960 << 16));
    // 0x145eec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x145eecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x145ef0: 0x0  nop
    ctx->pc = 0x145ef0u;
    // NOP
    // 0x145ef4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x145ef4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x145ef8: 0x0  nop
    ctx->pc = 0x145ef8u;
    // NOP
    // 0x145efc: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x145EFCu;
    {
        const bool branch_taken_0x145efc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x145efc) {
            ctx->pc = 0x145F48u;
            return;
        }
    }
    ctx->pc = 0x145F04u;
    // 0x145f04: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x145f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x145f08: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x145f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145f0c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x145f0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x145f10: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x145f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x145f14: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x145f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145f18: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x145f18u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x145f1c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x145f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145f20: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x145f20u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x145f24: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x145f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145f28: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x145f28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x145f2c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x145f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145f30: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x145f30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x145f34: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x145f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x145f38: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x145f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145f3c: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x145f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x145f40: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x145F40u;
    {
        const bool branch_taken_0x145f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x145f40) {
            ctx->pc = 0x145FD8u;
            return;
        }
    }
    ctx->pc = 0x145F48u;
}
