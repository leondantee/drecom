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

// Function: entry_002de3c4
// Address: 0x2de3c4 - 0x2de420
void entry_002de3c4_0x2de3c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002de3c4_0x2de3c4");
#endif

    switch (ctx->pc) {
        case 0x2de408u: goto label_2de408;
        case 0x2de418u: goto label_2de418;
        default: break;
    }

    ctx->pc = 0x2de3c4u;

    // 0x2de3c4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2de3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2de3c8: 0x8463127e  lh          $v1, 0x127E($v1)
    ctx->pc = 0x2de3c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4734)));
    // 0x2de3cc: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2DE3CCu;
    {
        const bool branch_taken_0x2de3cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de3cc) {
            ctx->pc = 0x2DE420u;
            return;
        }
    }
    ctx->pc = 0x2DE3D4u;
    // 0x2de3d4: 0x3c0243e1  lui         $v0, 0x43E1
    ctx->pc = 0x2de3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17377 << 16));
    // 0x2de3d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2de3d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2de3dc: 0x0  nop
    ctx->pc = 0x2de3dcu;
    // NOP
    // 0x2de3e0: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2de3e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2de3e4: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2de3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2de3e8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2de3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2de3ec: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2de3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2de3f0: 0x244503c0  addiu       $a1, $v0, 0x3C0
    ctx->pc = 0x2de3f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 960));
    // 0x2de3f4: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2de3f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2de3f8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2de3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2de3fc: 0x24478e0c  addiu       $a3, $v0, -0x71F4
    ctx->pc = 0x2de3fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938124));
    // 0x2de400: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2DE400u;
    SET_GPR_U32(ctx, 31, 0x2DE408u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2DE400u, 0x2DE408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE408u;
label_2de408:
    // 0x2de408: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DE408u;
    {
        const bool branch_taken_0x2de408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de408) {
            ctx->pc = 0x2DE420u;
            return;
        }
    }
    ctx->pc = 0x2DE410u;
    // 0x2de410: 0xc0b6534  jal         func_2D94D0
    ctx->pc = 0x2DE410u;
    SET_GPR_U32(ctx, 31, 0x2DE418u);
    ctx->pc = 0x2D94D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D94D0u, 0x2DE410u, 0x2DE418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE418u;
label_2de418:
    // 0x2de418: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2de418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2de41c: 0xa460127e  sh          $zero, 0x127E($v1)
    ctx->pc = 0x2de41cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4734), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x2de420u;
}
