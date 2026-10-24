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

// Function: entry_00208924
// Address: 0x208924 - 0x20897c
void entry_00208924_0x208924(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00208924_0x208924");
#endif

    ctx->pc = 0x208924u;

    // 0x208924: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x208924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x208928: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x208928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20892c: 0x3c03466a  lui         $v1, 0x466A
    ctx->pc = 0x20892cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18026 << 16));
    // 0x208930: 0x34636000  ori         $v1, $v1, 0x6000
    ctx->pc = 0x208930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)24576);
    // 0x208934: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x208934u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x208938: 0x0  nop
    ctx->pc = 0x208938u;
    // NOP
    // 0x20893c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x20893cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x208940: 0x0  nop
    ctx->pc = 0x208940u;
    // NOP
    // 0x208944: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x208944u;
    {
        const bool branch_taken_0x208944 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x208944) {
            ctx->pc = 0x20897Cu;
            return;
        }
    }
    ctx->pc = 0x20894Cu;
    // 0x20894c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20894cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x208950: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x208950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x208954: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x208954u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x208958: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x208958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x20895c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x20895cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x208960: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x208960u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x208964: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x208964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x208968: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x208968u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x20896c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x20896cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x208970: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x208970u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x208974: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x208974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x208978: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x208978u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x20897cu;
}
