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

// Function: entry_001ef8c8
// Address: 0x1ef8c8 - 0x1ef908
void entry_001ef8c8_0x1ef8c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ef8c8_0x1ef8c8");
#endif

    ctx->pc = 0x1ef8c8u;

    // 0x1ef8c8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ef8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ef8cc: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x1ef8ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ef8d0: 0x3c024461  lui         $v0, 0x4461
    ctx->pc = 0x1ef8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17505 << 16));
    // 0x1ef8d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ef8d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ef8d8: 0x0  nop
    ctx->pc = 0x1ef8d8u;
    // NOP
    // 0x1ef8dc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ef8dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ef8e0: 0x0  nop
    ctx->pc = 0x1ef8e0u;
    // NOP
    // 0x1ef8e4: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1EF8E4u;
    {
        const bool branch_taken_0x1ef8e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ef8e4) {
            ctx->pc = 0x1EF908u;
            return;
        }
    }
    ctx->pc = 0x1EF8ECu;
    // 0x1ef8ec: 0x3c02c120  lui         $v0, 0xC120
    ctx->pc = 0x1ef8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49440 << 16));
    // 0x1ef8f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ef8f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ef8f4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ef8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ef8f8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ef8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ef8fc: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x1ef8fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x1ef900: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1EF900u;
    {
        const bool branch_taken_0x1ef900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef900) {
            ctx->pc = 0x1EF918u;
            return;
        }
    }
    ctx->pc = 0x1EF908u;
}
