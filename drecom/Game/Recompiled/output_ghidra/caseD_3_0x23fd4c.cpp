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

// Function: caseD_3
// Address: 0x23fd4c - 0x23fd94
void caseD_3_0x23fd4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x23fd4c");
#endif

    ctx->pc = 0x23fd4cu;

    // 0x23fd4c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x23fd4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x23fd50: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x23fd50u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23fd54: 0x3c0346ea  lui         $v1, 0x46EA
    ctx->pc = 0x23fd54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18154 << 16));
    // 0x23fd58: 0x34636000  ori         $v1, $v1, 0x6000
    ctx->pc = 0x23fd58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)24576);
    // 0x23fd5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23fd5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23fd60: 0x0  nop
    ctx->pc = 0x23fd60u;
    // NOP
    // 0x23fd64: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x23fd64u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x23fd68: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23fd68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23fd6c: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x23fd6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x23fd70: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x23fd70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23fd74: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x23fd74u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x23fd78: 0x2472ffff  addiu       $s2, $v1, -0x1
    ctx->pc = 0x23fd78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x23fd7c: 0xa4921278  sh          $s2, 0x1278($a0)
    ctx->pc = 0x23fd7cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 18));
    // 0x23fd80: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x23FD80u;
    {
        const bool branch_taken_0x23fd80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23fd80) {
            ctx->pc = 0x23FD94u;
            return;
        }
    }
    ctx->pc = 0x23FD88u;
    // 0x23fd88: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x23fd88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x23fd8c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23fd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23fd90: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x23fd90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x23fd94u;
}
