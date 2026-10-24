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

// Function: entry_00272078
// Address: 0x272078 - 0x2720d8
void entry_00272078_0x272078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00272078_0x272078");
#endif

    ctx->pc = 0x272078u;

    // 0x272078: 0xc6010090  lwc1        $f1, 0x90($s0)
    ctx->pc = 0x272078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27207c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x27207cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x272080: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x272080u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x272084: 0x0  nop
    ctx->pc = 0x272084u;
    // NOP
    // 0x272088: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x272088u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27208c: 0x0  nop
    ctx->pc = 0x27208cu;
    // NOP
    // 0x272090: 0x45010017  bc1t        . + 4 + (0x17 << 2)
    ctx->pc = 0x272090u;
    {
        const bool branch_taken_0x272090 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x272090) {
            ctx->pc = 0x2720F0u;
            return;
        }
    }
    ctx->pc = 0x272098u;
    // 0x272098: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x272098u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27209c: 0x0  nop
    ctx->pc = 0x27209cu;
    // NOP
    // 0x2720a0: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2720a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2720a4: 0x96020094  lhu         $v0, 0x94($s0)
    ctx->pc = 0x2720a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x2720a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2720a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2720ac: 0xa6020094  sh          $v0, 0x94($s0)
    ctx->pc = 0x2720acu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 148), (uint16_t)GPR_U32(ctx, 2));
    // 0x2720b0: 0x86020096  lh          $v0, 0x96($s0)
    ctx->pc = 0x2720b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 150)));
    // 0x2720b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2720b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2720b8: 0xa6020096  sh          $v0, 0x96($s0)
    ctx->pc = 0x2720b8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 150), (uint16_t)GPR_U32(ctx, 2));
    // 0x2720bc: 0x86020096  lh          $v0, 0x96($s0)
    ctx->pc = 0x2720bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 150)));
    // 0x2720c0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2720c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2720c4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2720c4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2720c8: 0x28420029  slti        $v0, $v0, 0x29
    ctx->pc = 0x2720c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x2720cc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2720CCu;
    {
        const bool branch_taken_0x2720cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2720cc) {
            ctx->pc = 0x2720D8u;
            return;
        }
    }
    ctx->pc = 0x2720D4u;
    // 0x2720d4: 0xa6000096  sh          $zero, 0x96($s0)
    ctx->pc = 0x2720d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 150), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x2720d8u;
}
