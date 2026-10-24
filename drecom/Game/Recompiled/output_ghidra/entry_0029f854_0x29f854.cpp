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

// Function: entry_0029f854
// Address: 0x29f854 - 0x29f8a8
void entry_0029f854_0x29f854(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029f854_0x29f854");
#endif

    ctx->pc = 0x29f854u;

    // 0x29f854: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29f854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29f858: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x29f858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29f85c: 0x3c03457a  lui         $v1, 0x457A
    ctx->pc = 0x29f85cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17786 << 16));
    // 0x29f860: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29f860u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29f864: 0x0  nop
    ctx->pc = 0x29f864u;
    // NOP
    // 0x29f868: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29f868u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29f86c: 0x0  nop
    ctx->pc = 0x29f86cu;
    // NOP
    // 0x29f870: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x29F870u;
    {
        const bool branch_taken_0x29f870 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29f870) {
            ctx->pc = 0x29F8A8u;
            return;
        }
    }
    ctx->pc = 0x29F878u;
    // 0x29f878: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29f878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29f87c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29f87cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29f880: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x29f880u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x29f884: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x29f884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29f888: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29f888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29f88c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x29f88cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x29f890: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29f890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29f894: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x29f894u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x29f898: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29f898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29f89c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x29f89cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x29f8a0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29f8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29f8a4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x29f8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x29f8a8u;
}
