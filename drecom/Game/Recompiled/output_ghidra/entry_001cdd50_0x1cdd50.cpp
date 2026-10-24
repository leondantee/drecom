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

// Function: entry_001cdd50
// Address: 0x1cdd50 - 0x1cdd7c
void entry_001cdd50_0x1cdd50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cdd50_0x1cdd50");
#endif

    switch (ctx->pc) {
        case 0x1cdd74u: goto label_1cdd74;
        default: break;
    }

    ctx->pc = 0x1cdd50u;

    // 0x1cdd50: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x1cdd50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x1cdd54: 0x34460fdb  ori         $a2, $v0, 0xFDB
    ctx->pc = 0x1cdd54u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1cdd58: 0x44867000  mtc1        $a2, $f14
    ctx->pc = 0x1cdd58u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1cdd5c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cdd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdd60: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1cdd60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdd64: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x1cdd64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cdd68: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x1cdd68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1cdd6c: 0xc058f50  jal         func_163D40
    ctx->pc = 0x1CDD6Cu;
    SET_GPR_U32(ctx, 31, 0x1CDD74u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x1CDD6Cu, 0x1CDD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDD74u;
label_1cdd74:
    // 0x1cdd74: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cdd74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdd78: 0xe48000d4  swc1        $f0, 0xD4($a0)
    ctx->pc = 0x1cdd78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 212), bits); }
    ctx->pc = 0x1cdd7cu;
}
