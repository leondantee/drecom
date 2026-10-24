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

// Function: entry_002dd464
// Address: 0x2dd464 - 0x2dd4d4
void entry_002dd464_0x2dd464(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002dd464_0x2dd464");
#endif

    switch (ctx->pc) {
        case 0x2dd4a8u: goto label_2dd4a8;
        case 0x2dd4c8u: goto label_2dd4c8;
        default: break;
    }

    ctx->pc = 0x2dd464u;

    // 0x2dd464: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dd464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd468: 0x8467127e  lh          $a3, 0x127E($v1)
    ctx->pc = 0x2dd468u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4734)));
    // 0x2dd46c: 0x10e00019  beqz        $a3, . + 4 + (0x19 << 2)
    ctx->pc = 0x2DD46Cu;
    {
        const bool branch_taken_0x2dd46c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd46c) {
            ctx->pc = 0x2DD4D4u;
            return;
        }
    }
    ctx->pc = 0x2DD474u;
    // 0x2dd474: 0x3c0243e1  lui         $v0, 0x43E1
    ctx->pc = 0x2dd474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17377 << 16));
    // 0x2dd478: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2dd478u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dd47c: 0x0  nop
    ctx->pc = 0x2dd47cu;
    // NOP
    // 0x2dd480: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2dd480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2dd484: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dd484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd488: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dd488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd48c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2dd48cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2dd490: 0x244503c0  addiu       $a1, $v0, 0x3C0
    ctx->pc = 0x2dd490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 960));
    // 0x2dd494: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2dd494u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2dd498: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x2dd498u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x2dd49c: 0x24678de8  addiu       $a3, $v1, -0x7218
    ctx->pc = 0x2dd49cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938088));
    // 0x2dd4a0: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2DD4A0u;
    SET_GPR_U32(ctx, 31, 0x2DD4A8u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2DD4A0u, 0x2DD4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD4A8u;
label_2dd4a8:
    // 0x2dd4a8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2dd4a8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2dd4ac: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2DD4ACu;
    {
        const bool branch_taken_0x2dd4ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd4ac) {
            ctx->pc = 0x2DD4D4u;
            return;
        }
    }
    ctx->pc = 0x2DD4B4u;
    // 0x2dd4b4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2dd4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2dd4b8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dd4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd4bc: 0xa483127a  sh          $v1, 0x127A($a0)
    ctx->pc = 0x2dd4bcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x2dd4c0: 0xc0b6534  jal         func_2D94D0
    ctx->pc = 0x2DD4C0u;
    SET_GPR_U32(ctx, 31, 0x2DD4C8u);
    ctx->pc = 0x2D94D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D94D0u, 0x2DD4C0u, 0x2DD4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD4C8u;
label_2dd4c8:
    // 0x2dd4c8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2dd4c8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2dd4cc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dd4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd4d0: 0xa480127e  sh          $zero, 0x127E($a0)
    ctx->pc = 0x2dd4d0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4734), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x2dd4d4u;
}
