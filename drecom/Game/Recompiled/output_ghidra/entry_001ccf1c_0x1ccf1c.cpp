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

// Function: entry_001ccf1c
// Address: 0x1ccf1c - 0x1ccf48
void entry_001ccf1c_0x1ccf1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ccf1c_0x1ccf1c");
#endif

    switch (ctx->pc) {
        case 0x1ccf40u: goto label_1ccf40;
        default: break;
    }

    ctx->pc = 0x1ccf1cu;

    // 0x1ccf1c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ccf1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccf20: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ccf20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccf24: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x1ccf24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x1ccf28: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1ccf28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1ccf2c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1ccf2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1ccf30: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x1ccf30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ccf34: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x1ccf34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ccf38: 0xc058f50  jal         func_163D40
    ctx->pc = 0x1CCF38u;
    SET_GPR_U32(ctx, 31, 0x1CCF40u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x1CCF38u, 0x1CCF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF40u;
label_1ccf40:
    // 0x1ccf40: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1ccf40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccf44: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1ccf44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    ctx->pc = 0x1ccf48u;
}
