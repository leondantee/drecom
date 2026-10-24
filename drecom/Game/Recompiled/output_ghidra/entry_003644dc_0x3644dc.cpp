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

// Function: entry_003644dc
// Address: 0x3644dc - 0x36452c
void entry_003644dc_0x3644dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003644dc_0x3644dc");
#endif

    switch (ctx->pc) {
        case 0x364500u: goto label_364500;
        case 0x36451cu: goto label_36451c;
        default: break;
    }

    ctx->pc = 0x3644dcu;

    // 0x3644dc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x3644dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3644e0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3644e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3644e4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3644e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3644e8: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x3644e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x3644ec: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x3644ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3644f0: 0x24451240  addiu       $a1, $v0, 0x1240
    ctx->pc = 0x3644f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4672));
    // 0x3644f4: 0xc60d0064  lwc1        $f13, 0x64($s0)
    ctx->pc = 0x3644f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3644f8: 0xc05c848  jal         func_172120
    ctx->pc = 0x3644F8u;
    SET_GPR_U32(ctx, 31, 0x364500u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x3644F8u, 0x364500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364500u;
label_364500:
    // 0x364500: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x364500u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x364504: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x364504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x364508: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x364508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36450c: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x36450cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x364510: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x364510u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x364514: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x364514u;
    SET_GPR_U32(ctx, 31, 0x36451Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x364514u, 0x36451Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36451Cu;
label_36451c:
    // 0x36451c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x36451cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x364520: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x364520u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x364524: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x364524u;
    {
        const bool branch_taken_0x364524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x364524) {
            ctx->pc = 0x364538u;
            return;
        }
    }
    ctx->pc = 0x36452Cu;
}
