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

// Function: entry_00258b54
// Address: 0x258b54 - 0x258b70
void entry_00258b54_0x258b54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00258b54_0x258b54");
#endif

    switch (ctx->pc) {
        case 0x258b6cu: goto label_258b6c;
        default: break;
    }

    ctx->pc = 0x258b54u;

    // 0x258b54: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x258b54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x258b58: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x258b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x258b5c: 0xc7ad0038  lwc1        $f13, 0x38($sp)
    ctx->pc = 0x258b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x258b60: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x258b60u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x258b64: 0xc0962e4  jal         func_258B90
    ctx->pc = 0x258B64u;
    SET_GPR_U32(ctx, 31, 0x258B6Cu);
    ctx->pc = 0x258B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258B90u, 0x258B64u, 0x258B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258B6Cu;
label_258b6c:
    // 0x258b6c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x258b6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x258b70u;
}
