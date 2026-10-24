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

// Function: entry_001ce384
// Address: 0x1ce384 - 0x1ce3b0
void entry_001ce384_0x1ce384(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ce384_0x1ce384");
#endif

    switch (ctx->pc) {
        case 0x1ce3a8u: goto label_1ce3a8;
        default: break;
    }

    ctx->pc = 0x1ce384u;

    // 0x1ce384: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x1ce384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x1ce388: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1ce388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1ce38c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1ce38cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1ce390: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce394: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1ce394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce398: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x1ce398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ce39c: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x1ce39cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ce3a0: 0xc058f50  jal         func_163D40
    ctx->pc = 0x1CE3A0u;
    SET_GPR_U32(ctx, 31, 0x1CE3A8u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x1CE3A0u, 0x1CE3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE3A8u;
label_1ce3a8:
    // 0x1ce3a8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1ce3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce3ac: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1ce3acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    ctx->pc = 0x1ce3b0u;
}
