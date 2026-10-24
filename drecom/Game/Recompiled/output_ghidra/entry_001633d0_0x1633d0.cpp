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

// Function: entry_001633d0
// Address: 0x1633d0 - 0x1633f4
void entry_001633d0_0x1633d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001633d0_0x1633d0");
#endif

    ctx->pc = 0x1633d0u;

    // 0x1633d0: 0xc7a100f8  lwc1        $f1, 0xF8($sp)
    ctx->pc = 0x1633d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1633d4: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x1633d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x1633d8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1633d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1633dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1633dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1633e0: 0x0  nop
    ctx->pc = 0x1633e0u;
    // NOP
    // 0x1633e4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1633e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1633e8: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x1633e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x1633ec: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1633ECu;
    {
        const bool branch_taken_0x1633ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1633ec) {
            ctx->pc = 0x163484u;
            return;
        }
    }
    ctx->pc = 0x1633F4u;
}
