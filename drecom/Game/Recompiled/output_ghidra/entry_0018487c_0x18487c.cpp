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

// Function: entry_0018487c
// Address: 0x18487c - 0x1848b8
void entry_0018487c_0x18487c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018487c_0x18487c");
#endif

    ctx->pc = 0x18487cu;

    // 0x18487c: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x18487cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x184880: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x184880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x184884: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x184884u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x184888: 0x0  nop
    ctx->pc = 0x184888u;
    // NOP
    // 0x18488c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x18488Cu;
    {
        const bool branch_taken_0x18488c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18488c) {
            ctx->pc = 0x1848B8u;
            return;
        }
    }
    ctx->pc = 0x184894u;
    // 0x184894: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x184894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x184898: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x184898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x18489c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x18489cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1848a0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1848A0u;
    {
        const bool branch_taken_0x1848a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1848a0) {
            ctx->pc = 0x1848B8u;
            return;
        }
    }
    ctx->pc = 0x1848A8u;
    // 0x1848a8: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1848a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1848ac: 0x94620006  lhu         $v0, 0x6($v1)
    ctx->pc = 0x1848acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x1848b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1848b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1848b4: 0xa4620006  sh          $v0, 0x6($v1)
    ctx->pc = 0x1848b4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1848b8u;
}
