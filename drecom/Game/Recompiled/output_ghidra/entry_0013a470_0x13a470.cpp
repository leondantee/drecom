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

// Function: entry_0013a470
// Address: 0x13a470 - 0x13a4a8
void entry_0013a470_0x13a470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013a470_0x13a470");
#endif

    switch (ctx->pc) {
        case 0x13a498u: goto label_13a498;
        default: break;
    }

    ctx->pc = 0x13a470u;

    // 0x13a470: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13a470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a474: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x13a474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x13a478: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x13a478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x13a47c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x13a47cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x13a480: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x13a480u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x13a484: 0x2404051d  addiu       $a0, $zero, 0x51D
    ctx->pc = 0x13a484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1309));
    // 0x13a488: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x13a488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x13a48c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x13a48cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13a490: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x13A490u;
    SET_GPR_U32(ctx, 31, 0x13A498u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x13A490u, 0x13A498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A498u;
label_13a498:
    // 0x13a498: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a49c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x13a49cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x13a4a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13a4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13a4a4: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x13a4a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x13a4a8u;
}
