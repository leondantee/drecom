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

// Function: entry_00197b7c
// Address: 0x197b7c - 0x197ba8
void entry_00197b7c_0x197b7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197b7c_0x197b7c");
#endif

    ctx->pc = 0x197b7cu;

    // 0x197b7c: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x197b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x197b80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x197b80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x197b84: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x197b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x197b88: 0xe44011e0  swc1        $f0, 0x11E0($v0)
    ctx->pc = 0x197b88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4576), bits); }
    // 0x197b8c: 0x3c0244da  lui         $v0, 0x44DA
    ctx->pc = 0x197b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17626 << 16));
    // 0x197b90: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x197b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x197b94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x197b94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x197b98: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x197b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x197b9c: 0xe44011e4  swc1        $f0, 0x11E4($v0)
    ctx->pc = 0x197b9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4580), bits); }
    // 0x197ba0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x197BA0u;
    {
        const bool branch_taken_0x197ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x197ba0) {
            ctx->pc = 0x197BD0u;
            return;
        }
    }
    ctx->pc = 0x197BA8u;
}
