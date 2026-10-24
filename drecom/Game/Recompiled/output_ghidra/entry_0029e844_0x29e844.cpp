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

// Function: entry_0029e844
// Address: 0x29e844 - 0x29e89c
void entry_0029e844_0x29e844(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029e844_0x29e844");
#endif

    ctx->pc = 0x29e844u;

    // 0x29e844: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29e844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29e848: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x29e848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29e84c: 0x3c03453b  lui         $v1, 0x453B
    ctx->pc = 0x29e84cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17723 << 16));
    // 0x29e850: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x29e850u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x29e854: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29e854u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29e858: 0x0  nop
    ctx->pc = 0x29e858u;
    // NOP
    // 0x29e85c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29e85cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29e860: 0x0  nop
    ctx->pc = 0x29e860u;
    // NOP
    // 0x29e864: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x29E864u;
    {
        const bool branch_taken_0x29e864 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29e864) {
            ctx->pc = 0x29E89Cu;
            return;
        }
    }
    ctx->pc = 0x29E86Cu;
    // 0x29e86c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29e86cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29e870: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29e870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29e874: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x29e874u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x29e878: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x29e878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29e87c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29e87cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29e880: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x29e880u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x29e884: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29e884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29e888: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x29e888u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x29e88c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29e88cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29e890: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x29e890u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x29e894: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29e894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29e898: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x29e898u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x29e89cu;
}
