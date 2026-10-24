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

// Function: entry_002dd758
// Address: 0x2dd758 - 0x2dd7c0
void entry_002dd758_0x2dd758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002dd758_0x2dd758");
#endif

    switch (ctx->pc) {
        case 0x2dd79cu: goto label_2dd79c;
        case 0x2dd7b8u: goto label_2dd7b8;
        default: break;
    }

    ctx->pc = 0x2dd758u;

    // 0x2dd758: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dd758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd75c: 0x8463127e  lh          $v1, 0x127E($v1)
    ctx->pc = 0x2dd75cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4734)));
    // 0x2dd760: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2DD760u;
    {
        const bool branch_taken_0x2dd760 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd760) {
            ctx->pc = 0x2DD7C0u;
            return;
        }
    }
    ctx->pc = 0x2DD768u;
    // 0x2dd768: 0x3c0243e1  lui         $v0, 0x43E1
    ctx->pc = 0x2dd768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17377 << 16));
    // 0x2dd76c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2dd76cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dd770: 0x0  nop
    ctx->pc = 0x2dd770u;
    // NOP
    // 0x2dd774: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2dd774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2dd778: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dd778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd77c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dd77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd780: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2dd780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2dd784: 0x244503c0  addiu       $a1, $v0, 0x3C0
    ctx->pc = 0x2dd784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 960));
    // 0x2dd788: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2dd788u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2dd78c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2dd78cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2dd790: 0x24478df4  addiu       $a3, $v0, -0x720C
    ctx->pc = 0x2dd790u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938100));
    // 0x2dd794: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2DD794u;
    SET_GPR_U32(ctx, 31, 0x2DD79Cu);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2DD794u, 0x2DD79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD79Cu;
label_2dd79c:
    // 0x2dd79c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2DD79Cu;
    {
        const bool branch_taken_0x2dd79c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd79c) {
            ctx->pc = 0x2DD7C0u;
            return;
        }
    }
    ctx->pc = 0x2DD7A4u;
    // 0x2dd7a4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2dd7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2dd7a8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dd7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd7ac: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x2dd7acu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x2dd7b0: 0xc0b6534  jal         func_2D94D0
    ctx->pc = 0x2DD7B0u;
    SET_GPR_U32(ctx, 31, 0x2DD7B8u);
    ctx->pc = 0x2D94D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D94D0u, 0x2DD7B0u, 0x2DD7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD7B8u;
label_2dd7b8:
    // 0x2dd7b8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dd7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd7bc: 0xa460127e  sh          $zero, 0x127E($v1)
    ctx->pc = 0x2dd7bcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4734), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x2dd7c0u;
}
