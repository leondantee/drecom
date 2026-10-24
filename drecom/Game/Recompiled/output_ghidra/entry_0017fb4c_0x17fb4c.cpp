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

// Function: entry_0017fb4c
// Address: 0x17fb4c - 0x17fbbc
void entry_0017fb4c_0x17fb4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017fb4c_0x17fb4c");
#endif

    switch (ctx->pc) {
        case 0x17fb9cu: goto label_17fb9c;
        case 0x17fba8u: goto label_17fba8;
        default: break;
    }

    ctx->pc = 0x17fb4cu;

    // 0x17fb4c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17fb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17fb50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17fb50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17fb54: 0x0  nop
    ctx->pc = 0x17fb54u;
    // NOP
    // 0x17fb58: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x17fb58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x17fb5c: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x17fb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17fb60: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x17fb60u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17fb64: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x17fb64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17fb68: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x17fb68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x17fb6c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x17fb6cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x17fb70: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x17fb70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17fb74: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x17fb74u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17fb78: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x17fb78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17fb7c: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x17fb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x17fb80: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x17fb80u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x17fb84: 0xc60001b0  lwc1        $f0, 0x1B0($s0)
    ctx->pc = 0x17fb84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17fb88: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x17fb88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17fb8c: 0xe4400080  swc1        $f0, 0x80($v0)
    ctx->pc = 0x17fb8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 128), bits); }
    // 0x17fb90: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x17fb90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17fb94: 0xc05f8f8  jal         func_17E3E0
    ctx->pc = 0x17FB94u;
    SET_GPR_U32(ctx, 31, 0x17FB9Cu);
    ctx->pc = 0x17E3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E3E0u, 0x17FB94u, 0x17FB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FB9Cu;
label_17fb9c:
    // 0x17fb9c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x17fb9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17fba0: 0xc05f910  jal         func_17E440
    ctx->pc = 0x17FBA0u;
    SET_GPR_U32(ctx, 31, 0x17FBA8u);
    ctx->pc = 0x17E440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E440u, 0x17FBA0u, 0x17FBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FBA8u;
label_17fba8:
    // 0x17fba8: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x17fba8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17fbac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17fbacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17fbb0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x17fbb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x17fbb4: 0x3e00008  jr          $ra
    ctx->pc = 0x17FBB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17FBB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17FBBCu;
}
