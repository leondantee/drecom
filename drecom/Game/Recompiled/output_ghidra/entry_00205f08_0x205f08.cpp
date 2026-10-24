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

// Function: entry_00205f08
// Address: 0x205f08 - 0x205f30
void entry_00205f08_0x205f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00205f08_0x205f08");
#endif

    ctx->pc = 0x205f08u;

    // 0x205f08: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x205f08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x205f0c: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x205f0cu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x205f10: 0x3c03458c  lui         $v1, 0x458C
    ctx->pc = 0x205f10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17804 << 16));
    // 0x205f14: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x205f14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
    // 0x205f18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x205f18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x205f1c: 0x0  nop
    ctx->pc = 0x205f1cu;
    // NOP
    // 0x205f20: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x205f20u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x205f24: 0x0  nop
    ctx->pc = 0x205f24u;
    // NOP
    // 0x205f28: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x205F28u;
    {
        const bool branch_taken_0x205f28 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x205f28) {
            ctx->pc = 0x205F60u;
            return;
        }
    }
    ctx->pc = 0x205F30u;
}
