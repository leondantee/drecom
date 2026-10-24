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

// Function: entry_001ef888
// Address: 0x1ef888 - 0x1ef8c8
void entry_001ef888_0x1ef888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ef888_0x1ef888");
#endif

    ctx->pc = 0x1ef888u;

    // 0x1ef888: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ef888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ef88c: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x1ef88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ef890: 0x3c0244af  lui         $v0, 0x44AF
    ctx->pc = 0x1ef890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17583 << 16));
    // 0x1ef894: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ef894u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ef898: 0x0  nop
    ctx->pc = 0x1ef898u;
    // NOP
    // 0x1ef89c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ef89cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ef8a0: 0x0  nop
    ctx->pc = 0x1ef8a0u;
    // NOP
    // 0x1ef8a4: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x1EF8A4u;
    {
        const bool branch_taken_0x1ef8a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ef8a4) {
            ctx->pc = 0x1EF8C8u;
            return;
        }
    }
    ctx->pc = 0x1EF8ACu;
    // 0x1ef8ac: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x1ef8acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x1ef8b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ef8b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ef8b4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ef8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ef8b8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ef8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ef8bc: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x1ef8bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x1ef8c0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1EF8C0u;
    {
        const bool branch_taken_0x1ef8c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef8c0) {
            ctx->pc = 0x1EF918u;
            return;
        }
    }
    ctx->pc = 0x1EF8C8u;
}
