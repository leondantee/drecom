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

// Function: entry_002de27c
// Address: 0x2de27c - 0x2de2c0
void entry_002de27c_0x2de27c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002de27c_0x2de27c");
#endif

    switch (ctx->pc) {
        case 0x2de28cu: goto label_2de28c;
        case 0x2de2b0u: goto label_2de2b0;
        default: break;
    }

    ctx->pc = 0x2de27cu;

    // 0x2de27c: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x2de27cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2de280: 0xc7ad0038  lwc1        $f13, 0x38($sp)
    ctx->pc = 0x2de280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2de284: 0xc0455e6  jal         func_115798
    ctx->pc = 0x2DE284u;
    SET_GPR_U32(ctx, 31, 0x2DE28Cu);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x2DE284u, 0x2DE28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE28Cu;
label_2de28c:
    // 0x2de28c: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x2de28cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x2de290: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2de290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2de294: 0x3c023dd6  lui         $v0, 0x3DD6
    ctx->pc = 0x2de294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15830 << 16));
    // 0x2de298: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x2de298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x2de29c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2de29cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2de2a0: 0xc7ac004c  lwc1        $f12, 0x4C($sp)
    ctx->pc = 0x2de2a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2de2a4: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x2de2a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2de2a8: 0xc058f50  jal         func_163D40
    ctx->pc = 0x2DE2A8u;
    SET_GPR_U32(ctx, 31, 0x2DE2B0u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x2DE2A8u, 0x2DE2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE2B0u;
label_2de2b0:
    // 0x2de2b0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2de2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2de2b4: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x2de2b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
    // 0x2de2b8: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x2DE2B8u;
    {
        const bool branch_taken_0x2de2b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de2b8) {
            ctx->pc = 0x2DE45Cu;
            return;
        }
    }
    ctx->pc = 0x2DE2C0u;
}
