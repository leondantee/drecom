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

// Function: entry_001211c8
// Address: 0x1211c8 - 0x1211f0
void entry_001211c8_0x1211c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001211c8_0x1211c8");
#endif

    ctx->pc = 0x1211c8u;

    // 0x1211c8: 0xc7a1006c  lwc1        $f1, 0x6C($sp)
    ctx->pc = 0x1211c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1211cc: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x1211ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x1211d0: 0x34640fdb  ori         $a0, $v1, 0xFDB
    ctx->pc = 0x1211d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1211d4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1211d4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1211d8: 0x0  nop
    ctx->pc = 0x1211d8u;
    // NOP
    // 0x1211dc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1211dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1211e0: 0x0  nop
    ctx->pc = 0x1211e0u;
    // NOP
    // 0x1211e4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1211E4u;
    {
        const bool branch_taken_0x1211e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1211e4) {
            ctx->pc = 0x1211F0u;
            return;
        }
    }
    ctx->pc = 0x1211ECu;
    // 0x1211ec: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x1211ecu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1211f0u;
}
