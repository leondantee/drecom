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

// Function: entry_0032da30
// Address: 0x32da30 - 0x32da78
void entry_0032da30_0x32da30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032da30_0x32da30");
#endif

    ctx->pc = 0x32da30u;

    // 0x32da30: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x32da30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32da34: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x32da34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x32da38: 0x8c22c2a0  lw          $v0, -0x3D60($at)
    ctx->pc = 0x32da38u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x85C2A0u));
    // 0x32da3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32da3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32da40: 0x0  nop
    ctx->pc = 0x32da40u;
    // NOP
    // 0x32da44: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x32da44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x32da48: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x32da48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32da4c: 0x0  nop
    ctx->pc = 0x32da4cu;
    // NOP
    // 0x32da50: 0x4501ffaa  bc1t        . + 4 + (-0x56 << 2)
    ctx->pc = 0x32DA50u;
    {
        const bool branch_taken_0x32da50 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x32da50) {
            ctx->pc = 0x32D8FCu;
            return;
        }
    }
    ctx->pc = 0x32DA58u;
    // 0x32da58: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x32da58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32da5c: 0xa2262906  sb          $a2, 0x2906($s1)
    ctx->pc = 0x32da5cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 10502), (uint8_t)GPR_U32(ctx, 6));
    // 0x32da60: 0x82222907  lb          $v0, 0x2907($s1)
    ctx->pc = 0x32da60u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 10503)));
    // 0x32da64: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x32da64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x32da68: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x32da68u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x32da6c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x32DA6Cu;
    {
        const bool branch_taken_0x32da6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32da6c) {
            ctx->pc = 0x32DA78u;
            return;
        }
    }
    ctx->pc = 0x32DA74u;
    // 0x32da74: 0xa2202907  sb          $zero, 0x2907($s1)
    ctx->pc = 0x32da74u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 10503), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x32da78u;
}
