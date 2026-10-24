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

// Function: entry_00200e38
// Address: 0x200e38 - 0x200e80
void entry_00200e38_0x200e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00200e38_0x200e38");
#endif

    switch (ctx->pc) {
        case 0x200e58u: goto label_200e58;
        default: break;
    }

    ctx->pc = 0x200e38u;

    // 0x200e38: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x200e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x200e3c: 0x8c5300f8  lw          $s3, 0xF8($v0)
    ctx->pc = 0x200e3cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 248)));
    // 0x200e40: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x200e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x200e44: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x200e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x200e48: 0x26450020  addiu       $a1, $s2, 0x20
    ctx->pc = 0x200e48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x200e4c: 0x244600a0  addiu       $a2, $v0, 0xA0
    ctx->pc = 0x200e4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x200e50: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x200E50u;
    SET_GPR_U32(ctx, 31, 0x200E58u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x200E50u, 0x200E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200E58u;
label_200e58:
    // 0x200e58: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x200e58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x200e5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x200e5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x200e60: 0x0  nop
    ctx->pc = 0x200e60u;
    // NOP
    // 0x200e64: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x200e64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x200e68: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x200e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x200e6c: 0x8c6200f8  lw          $v0, 0xF8($v1)
    ctx->pc = 0x200e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 248)));
    // 0x200e70: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x200e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x200e74: 0xac6200f8  sw          $v0, 0xF8($v1)
    ctx->pc = 0x200e74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 248), GPR_U32(ctx, 2));
    // 0x200e78: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x200E78u;
    {
        const bool branch_taken_0x200e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x200e78) {
            ctx->pc = 0x200FF8u;
            return;
        }
    }
    ctx->pc = 0x200E80u;
}
