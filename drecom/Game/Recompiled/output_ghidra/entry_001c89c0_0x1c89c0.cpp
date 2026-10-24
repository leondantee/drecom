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

// Function: entry_001c89c0
// Address: 0x1c89c0 - 0x1c8a04
void entry_001c89c0_0x1c89c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c89c0_0x1c89c0");
#endif

    switch (ctx->pc) {
        case 0x1c89d0u: goto label_1c89d0;
        case 0x1c89f4u: goto label_1c89f4;
        default: break;
    }

    ctx->pc = 0x1c89c0u;

    // 0x1c89c0: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x1c89c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c89c4: 0xc7ad0038  lwc1        $f13, 0x38($sp)
    ctx->pc = 0x1c89c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c89c8: 0xc0455e6  jal         func_115798
    ctx->pc = 0x1C89C8u;
    SET_GPR_U32(ctx, 31, 0x1C89D0u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x1C89C8u, 0x1C89D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C89D0u;
label_1c89d0:
    // 0x1c89d0: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x1c89d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x1c89d4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c89d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c89d8: 0x3c023dd6  lui         $v0, 0x3DD6
    ctx->pc = 0x1c89d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15830 << 16));
    // 0x1c89dc: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x1c89dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x1c89e0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1c89e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1c89e4: 0xc7ac007c  lwc1        $f12, 0x7C($sp)
    ctx->pc = 0x1c89e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c89e8: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x1c89e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c89ec: 0xc058f50  jal         func_163D40
    ctx->pc = 0x1C89ECu;
    SET_GPR_U32(ctx, 31, 0x1C89F4u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x1C89ECu, 0x1C89F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C89F4u;
label_1c89f4:
    // 0x1c89f4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c89f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c89f8: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x1c89f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
    // 0x1c89fc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C89FCu;
    {
        const bool branch_taken_0x1c89fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c89fc) {
            ctx->pc = 0x1C8A0Cu;
            return;
        }
    }
    ctx->pc = 0x1C8A04u;
}
