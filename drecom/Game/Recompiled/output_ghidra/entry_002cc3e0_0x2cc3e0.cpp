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

// Function: entry_002cc3e0
// Address: 0x2cc3e0 - 0x2cc454
void entry_002cc3e0_0x2cc3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002cc3e0_0x2cc3e0");
#endif

    switch (ctx->pc) {
        case 0x2cc3f4u: goto label_2cc3f4;
        default: break;
    }

    ctx->pc = 0x2cc3e0u;

    // 0x2cc3e0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2cc3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc3e4: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x2cc3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x2cc3e8: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x2cc3e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc3ec: 0xc0c7a0c  jal         func_31E830
    ctx->pc = 0x2CC3ECu;
    SET_GPR_U32(ctx, 31, 0x2CC3F4u);
    ctx->pc = 0x31E830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E830u, 0x2CC3ECu, 0x2CC3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC3F4u;
label_2cc3f4:
    // 0x2cc3f4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2cc3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc3f8: 0x245110b0  addiu       $s1, $v0, 0x10B0
    ctx->pc = 0x2cc3f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
    // 0x2cc3fc: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x2cc3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x2cc400: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2cc400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2cc404: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2cc404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2cc408: 0xae2200f0  sw          $v0, 0xF0($s1)
    ctx->pc = 0x2cc408u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
    // 0x2cc40c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2cc40cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc410: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2cc410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2cc414: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x2cc414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x2cc418: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x2cc418u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x2cc41c: 0x3c023fa6  lui         $v0, 0x3FA6
    ctx->pc = 0x2cc41cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
    // 0x2cc420: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x2cc420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x2cc424: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cc424u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cc428: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2cc428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc42c: 0xe44001a0  swc1        $f0, 0x1A0($v0)
    ctx->pc = 0x2cc42cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 416), bits); }
    // 0x2cc430: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2cc430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2cc434: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cc434u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cc438: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2cc438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc43c: 0xe44001a4  swc1        $f0, 0x1A4($v0)
    ctx->pc = 0x2cc43cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 420), bits); }
    // 0x2cc440: 0x3c023fa6  lui         $v0, 0x3FA6
    ctx->pc = 0x2cc440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
    // 0x2cc444: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x2cc444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x2cc448: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cc448u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cc44c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2cc44cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc450: 0xe44001a8  swc1        $f0, 0x1A8($v0)
    ctx->pc = 0x2cc450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 424), bits); }
    ctx->pc = 0x2cc454u;
}
