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

// Function: entry_00197ba8
// Address: 0x197ba8 - 0x197bd0
void entry_00197ba8_0x197ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197ba8_0x197ba8");
#endif

    ctx->pc = 0x197ba8u;

    // 0x197ba8: 0x3c0244bb  lui         $v0, 0x44BB
    ctx->pc = 0x197ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
    // 0x197bac: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x197bacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x197bb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x197bb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x197bb4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x197bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x197bb8: 0xe44011e0  swc1        $f0, 0x11E0($v0)
    ctx->pc = 0x197bb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4576), bits); }
    // 0x197bbc: 0x3c0244da  lui         $v0, 0x44DA
    ctx->pc = 0x197bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17626 << 16));
    // 0x197bc0: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x197bc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x197bc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x197bc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x197bc8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x197bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x197bcc: 0xe44011e4  swc1        $f0, 0x11E4($v0)
    ctx->pc = 0x197bccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4580), bits); }
    ctx->pc = 0x197bd0u;
}
