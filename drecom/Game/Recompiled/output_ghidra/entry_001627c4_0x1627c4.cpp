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

// Function: entry_001627c4
// Address: 0x1627c4 - 0x1627f4
void entry_001627c4_0x1627c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001627c4_0x1627c4");
#endif

    ctx->pc = 0x1627c4u;

    // 0x1627c4: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x1627c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1627c8: 0x3c02400a  lui         $v0, 0x400A
    ctx->pc = 0x1627c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16394 << 16));
    // 0x1627cc: 0x34423ae6  ori         $v0, $v0, 0x3AE6
    ctx->pc = 0x1627ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15078);
    // 0x1627d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1627d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1627d4: 0x0  nop
    ctx->pc = 0x1627d4u;
    // NOP
    // 0x1627d8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1627d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1627dc: 0x0  nop
    ctx->pc = 0x1627dcu;
    // NOP
    // 0x1627e0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1627E0u;
    {
        const bool branch_taken_0x1627e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1627e0) {
            ctx->pc = 0x1627F4u;
            return;
        }
    }
    ctx->pc = 0x1627E8u;
    // 0x1627e8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1627e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1627ec: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x1627ECu;
    {
        const bool branch_taken_0x1627ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1627ec) {
            ctx->pc = 0x162A7Cu;
            return;
        }
    }
    ctx->pc = 0x1627F4u;
}
