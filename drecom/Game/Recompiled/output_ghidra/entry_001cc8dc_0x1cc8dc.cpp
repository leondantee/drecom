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

// Function: entry_001cc8dc
// Address: 0x1cc8dc - 0x1cc908
void entry_001cc8dc_0x1cc8dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cc8dc_0x1cc8dc");
#endif

    switch (ctx->pc) {
        case 0x1cc900u: goto label_1cc900;
        default: break;
    }

    ctx->pc = 0x1cc8dcu;

    // 0x1cc8dc: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x1cc8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x1cc8e0: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x1cc8e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1cc8e4: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x1cc8e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1cc8e8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1cc8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cc8ec: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1cc8ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cc8f0: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x1cc8f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cc8f4: 0xc4cd00d4  lwc1        $f13, 0xD4($a2)
    ctx->pc = 0x1cc8f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1cc8f8: 0xc058f50  jal         func_163D40
    ctx->pc = 0x1CC8F8u;
    SET_GPR_U32(ctx, 31, 0x1CC900u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x1CC8F8u, 0x1CC900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC900u;
label_1cc900:
    // 0x1cc900: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1cc900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cc904: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1cc904u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    ctx->pc = 0x1cc908u;
}
