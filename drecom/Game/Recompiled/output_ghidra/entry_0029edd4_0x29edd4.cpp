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

// Function: entry_0029edd4
// Address: 0x29edd4 - 0x29ee2c
void entry_0029edd4_0x29edd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029edd4_0x29edd4");
#endif

    ctx->pc = 0x29edd4u;

    // 0x29edd4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29edd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29edd8: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x29edd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29eddc: 0x3c03453b  lui         $v1, 0x453B
    ctx->pc = 0x29eddcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17723 << 16));
    // 0x29ede0: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x29ede0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x29ede4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29ede4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29ede8: 0x0  nop
    ctx->pc = 0x29ede8u;
    // NOP
    // 0x29edec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29edecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29edf0: 0x0  nop
    ctx->pc = 0x29edf0u;
    // NOP
    // 0x29edf4: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x29EDF4u;
    {
        const bool branch_taken_0x29edf4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29edf4) {
            ctx->pc = 0x29EE2Cu;
            return;
        }
    }
    ctx->pc = 0x29EDFCu;
    // 0x29edfc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29edfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29ee00: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29ee00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29ee04: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x29ee04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x29ee08: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x29ee08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29ee0c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29ee0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29ee10: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x29ee10u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x29ee14: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29ee14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29ee18: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x29ee18u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x29ee1c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29ee1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29ee20: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x29ee20u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x29ee24: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29ee24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29ee28: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x29ee28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x29ee2cu;
}
