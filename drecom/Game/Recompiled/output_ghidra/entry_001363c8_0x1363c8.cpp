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

// Function: entry_001363c8
// Address: 0x1363c8 - 0x1363f8
void entry_001363c8_0x1363c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001363c8_0x1363c8");
#endif

    ctx->pc = 0x1363c8u;

    // 0x1363c8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1363c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1363cc: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x1363ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1363d0: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x1363d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
    // 0x1363d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1363d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1363d8: 0x0  nop
    ctx->pc = 0x1363d8u;
    // NOP
    // 0x1363dc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1363dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1363e0: 0x0  nop
    ctx->pc = 0x1363e0u;
    // NOP
    // 0x1363e4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1363E4u;
    {
        const bool branch_taken_0x1363e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1363e4) {
            ctx->pc = 0x1363F8u;
            return;
        }
    }
    ctx->pc = 0x1363ECu;
    // 0x1363ec: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x1363ecu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1363f0: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1363F0u;
    {
        const bool branch_taken_0x1363f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1363f0) {
            ctx->pc = 0x1364A4u;
            return;
        }
    }
    ctx->pc = 0x1363F8u;
}
