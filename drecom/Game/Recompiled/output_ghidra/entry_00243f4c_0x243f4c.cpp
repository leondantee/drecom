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

// Function: entry_00243f4c
// Address: 0x243f4c - 0x243f88
void entry_00243f4c_0x243f4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00243f4c_0x243f4c");
#endif

    ctx->pc = 0x243f4cu;

    // 0x243f4c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x243f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243f50: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x243f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x243f54: 0x8463005c  lh          $v1, 0x5C($v1)
    ctx->pc = 0x243f54u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x243f58: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x243F58u;
    {
        const bool branch_taken_0x243f58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x243f58) {
            ctx->pc = 0x243F88u;
            return;
        }
    }
    ctx->pc = 0x243F60u;
    // 0x243f60: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x243f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243f64: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x243f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x243f68: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x243f68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x243f6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x243f6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x243f70: 0x0  nop
    ctx->pc = 0x243f70u;
    // NOP
    // 0x243f74: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x243f74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x243f78: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x243f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x243f7c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x243F7Cu;
    {
        const bool branch_taken_0x243f7c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x243f7c) {
            ctx->pc = 0x243F88u;
            return;
        }
    }
    ctx->pc = 0x243F84u;
    // 0x243f84: 0x70001e28  paddub      $v1, $zero, $zero
    ctx->pc = 0x243f84u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x243f88u;
}
