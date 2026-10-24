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

// Function: entry_0025c4c0
// Address: 0x25c4c0 - 0x25c4e8
void entry_0025c4c0_0x25c4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025c4c0_0x25c4c0");
#endif

    ctx->pc = 0x25c4c0u;

    // 0x25c4c0: 0x8fa40168  lw          $a0, 0x168($sp)
    ctx->pc = 0x25c4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x25c4c4: 0x8c8309f8  lw          $v1, 0x9F8($a0)
    ctx->pc = 0x25c4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2552)));
    // 0x25c4c8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x25c4c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25c4cc: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x25C4CCu;
    {
        const bool branch_taken_0x25c4cc = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x25c4cc) {
            ctx->pc = 0x25C4E8u;
            return;
        }
    }
    ctx->pc = 0x25C4D4u;
    // 0x25c4d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x25c4d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25c4d8: 0x0  nop
    ctx->pc = 0x25c4d8u;
    // NOP
    // 0x25c4dc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x25c4dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x25c4e0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x25C4E0u;
    {
        const bool branch_taken_0x25c4e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c4e0) {
            ctx->pc = 0x25C504u;
            return;
        }
    }
    ctx->pc = 0x25C4E8u;
}
