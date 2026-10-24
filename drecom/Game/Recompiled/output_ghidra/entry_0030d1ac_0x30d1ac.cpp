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

// Function: entry_0030d1ac
// Address: 0x30d1ac - 0x30d1f4
void entry_0030d1ac_0x30d1ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030d1ac_0x30d1ac");
#endif

    switch (ctx->pc) {
        case 0x30d1d8u: goto label_30d1d8;
        case 0x30d1ecu: goto label_30d1ec;
        default: break;
    }

    ctx->pc = 0x30d1acu;

    // 0x30d1ac: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x30d1acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d1b0: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x30d1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d1b4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30d1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d1b8: 0x3c023b83  lui         $v0, 0x3B83
    ctx->pc = 0x30d1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15235 << 16));
    // 0x30d1bc: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x30d1bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x30d1c0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x30d1c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x30d1c4: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x30d1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x30d1c8: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x30d1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30d1cc: 0x24651240  addiu       $a1, $v1, 0x1240
    ctx->pc = 0x30d1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4672));
    // 0x30d1d0: 0xc05c848  jal         func_172120
    ctx->pc = 0x30D1D0u;
    SET_GPR_U32(ctx, 31, 0x30D1D8u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x30D1D0u, 0x30D1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D1D8u;
label_30d1d8:
    // 0x30d1d8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x30d1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d1dc: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x30d1dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30d1e0: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x30d1e0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x30d1e4: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x30D1E4u;
    SET_GPR_U32(ctx, 31, 0x30D1ECu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x30D1E4u, 0x30D1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D1ECu;
label_30d1ec:
    // 0x30d1ec: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x30d1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d1f0: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x30d1f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    ctx->pc = 0x30d1f4u;
}
