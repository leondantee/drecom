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

// Function: entry_00263cb8
// Address: 0x263cb8 - 0x263ce0
void entry_00263cb8_0x263cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00263cb8_0x263cb8");
#endif

    ctx->pc = 0x263cb8u;

    // 0x263cb8: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x263cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x263cbc: 0x8c631098  lw          $v1, 0x1098($v1)
    ctx->pc = 0x263cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4248)));
    // 0x263cc0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x263cc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x263cc4: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x263CC4u;
    {
        const bool branch_taken_0x263cc4 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x263cc4) {
            ctx->pc = 0x263CE0u;
            return;
        }
    }
    ctx->pc = 0x263CCCu;
    // 0x263ccc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x263cccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x263cd0: 0x0  nop
    ctx->pc = 0x263cd0u;
    // NOP
    // 0x263cd4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x263cd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x263cd8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x263CD8u;
    {
        const bool branch_taken_0x263cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x263cd8) {
            ctx->pc = 0x263CFCu;
            return;
        }
    }
    ctx->pc = 0x263CE0u;
}
