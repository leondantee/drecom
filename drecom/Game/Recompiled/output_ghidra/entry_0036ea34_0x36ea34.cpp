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

// Function: entry_0036ea34
// Address: 0x36ea34 - 0x36ea80
void entry_0036ea34_0x36ea34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036ea34_0x36ea34");
#endif

    switch (ctx->pc) {
        case 0x36ea6cu: goto label_36ea6c;
        case 0x36ea7cu: goto label_36ea7c;
        default: break;
    }

    ctx->pc = 0x36ea34u;

    // 0x36ea34: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x36ea34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x36ea38: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x36ea38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x36ea3c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x36ea3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36ea40: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x36ea40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x36ea44: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x36ea44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x36ea48: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x36ea48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x36ea4c: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x36ea4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x36ea50: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x36ea50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x36ea54: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x36ea54u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36ea58: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x36ea58u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36ea5c: 0x24660370  addiu       $a2, $v1, 0x370
    ctx->pc = 0x36ea5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 880));
    // 0x36ea60: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x36ea60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36ea64: 0xc086488  jal         func_219220
    ctx->pc = 0x36EA64u;
    SET_GPR_U32(ctx, 31, 0x36EA6Cu);
    ctx->pc = 0x219220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219220u, 0x36EA64u, 0x36EA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EA6Cu;
label_36ea6c:
    // 0x36ea6c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x36ea6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36ea70: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x36ea70u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36ea74: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x36EA74u;
    SET_GPR_U32(ctx, 31, 0x36EA7Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x36EA74u, 0x36EA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EA7Cu;
label_36ea7c:
    // 0x36ea7c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x36ea7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    ctx->pc = 0x36ea80u;
}
