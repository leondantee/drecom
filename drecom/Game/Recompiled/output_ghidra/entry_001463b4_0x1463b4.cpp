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

// Function: entry_001463b4
// Address: 0x1463b4 - 0x14641c
void entry_001463b4_0x1463b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001463b4_0x1463b4");
#endif

    ctx->pc = 0x1463b4u;

    // 0x1463b4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1463b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1463b8: 0xc4611388  lwc1        $f1, 0x1388($v1)
    ctx->pc = 0x1463b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1463bc: 0x3c034240  lui         $v1, 0x4240
    ctx->pc = 0x1463bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16960 << 16));
    // 0x1463c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1463c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1463c4: 0x0  nop
    ctx->pc = 0x1463c4u;
    // NOP
    // 0x1463c8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1463c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1463cc: 0x0  nop
    ctx->pc = 0x1463ccu;
    // NOP
    // 0x1463d0: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x1463D0u;
    {
        const bool branch_taken_0x1463d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1463d0) {
            ctx->pc = 0x14641Cu;
            return;
        }
    }
    ctx->pc = 0x1463D8u;
    // 0x1463d8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1463d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1463dc: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1463dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1463e0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1463e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1463e4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1463e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1463e8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1463e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1463ec: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1463ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1463f0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1463f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1463f4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1463f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1463f8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1463f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1463fc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1463fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x146400: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x146400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x146404: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x146404u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x146408: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x146408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x14640c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x14640cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x146410: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x146410u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x146414: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x146414u;
    {
        const bool branch_taken_0x146414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x146414) {
            ctx->pc = 0x146500u;
            return;
        }
    }
    ctx->pc = 0x14641Cu;
}
