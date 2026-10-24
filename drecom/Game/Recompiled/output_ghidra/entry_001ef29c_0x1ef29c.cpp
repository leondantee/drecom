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

// Function: entry_001ef29c
// Address: 0x1ef29c - 0x1ef2dc
void entry_001ef29c_0x1ef29c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ef29c_0x1ef29c");
#endif

    ctx->pc = 0x1ef29cu;

    // 0x1ef29c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ef29cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ef2a0: 0x8c231a58  lw          $v1, 0x1A58($at)
    ctx->pc = 0x1ef2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1ef2a4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1ef2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1ef2a8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1ef2a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1ef2ac: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1EF2ACu;
    {
        const bool branch_taken_0x1ef2ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef2ac) {
            ctx->pc = 0x1EF2DCu;
            return;
        }
    }
    ctx->pc = 0x1EF2B4u;
    // 0x1ef2b4: 0x3c02c270  lui         $v0, 0xC270
    ctx->pc = 0x1ef2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49776 << 16));
    // 0x1ef2b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ef2b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ef2bc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ef2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef2c0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ef2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ef2c4: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x1ef2c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x1ef2c8: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x1ef2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x1ef2cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ef2ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ef2d0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ef2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef2d4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ef2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ef2d8: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x1ef2d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    ctx->pc = 0x1ef2dcu;
}
