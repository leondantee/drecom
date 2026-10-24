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

// Function: entry_00209b54
// Address: 0x209b54 - 0x209b90
void entry_00209b54_0x209b54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00209b54_0x209b54");
#endif

    switch (ctx->pc) {
        case 0x209b7cu: goto label_209b7c;
        case 0x209b88u: goto label_209b88;
        default: break;
    }

    ctx->pc = 0x209b54u;

    // 0x209b54: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x209b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x209b58: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x209b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x209b5c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x209b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x209b60: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x209b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x209b64: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x209b64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x209b68: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x209b68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x209b6c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x209b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x209b70: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x209b70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x209b74: 0xc080f60  jal         func_203D80
    ctx->pc = 0x209B74u;
    SET_GPR_U32(ctx, 31, 0x209B7Cu);
    ctx->pc = 0x203D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203D80u, 0x209B74u, 0x209B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209B7Cu;
label_209b7c:
    // 0x209b7c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x209b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x209b80: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x209B80u;
    SET_GPR_U32(ctx, 31, 0x209B88u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x209B80u, 0x209B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209B88u;
label_209b88:
    // 0x209b88: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x209B88u;
    {
        const bool branch_taken_0x209b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x209b88) {
            ctx->pc = 0x209CA0u;
            return;
        }
    }
    ctx->pc = 0x209B90u;
}
