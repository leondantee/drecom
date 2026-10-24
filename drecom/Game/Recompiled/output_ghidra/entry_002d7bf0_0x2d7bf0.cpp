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

// Function: entry_002d7bf0
// Address: 0x2d7bf0 - 0x2d7e0c
void entry_002d7bf0_0x2d7bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d7bf0_0x2d7bf0");
#endif

    switch (ctx->pc) {
        case 0x2d7c28u: goto label_2d7c28;
        case 0x2d7c64u: goto label_2d7c64;
        case 0x2d7c88u: goto label_2d7c88;
        case 0x2d7cacu: goto label_2d7cac;
        case 0x2d7cd0u: goto label_2d7cd0;
        case 0x2d7cf4u: goto label_2d7cf4;
        case 0x2d7d18u: goto label_2d7d18;
        case 0x2d7d3cu: goto label_2d7d3c;
        case 0x2d7d60u: goto label_2d7d60;
        case 0x2d7d84u: goto label_2d7d84;
        case 0x2d7d90u: goto label_2d7d90;
        default: break;
    }

    ctx->pc = 0x2d7bf0u;

    // 0x2d7bf0: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2d7bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2d7bf4: 0x24428990  addiu       $v0, $v0, -0x7670
    ctx->pc = 0x2d7bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936976));
    // 0x2d7bf8: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x2d7bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d7bfc: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2d7bfcu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x398990u));
    // 0x2d7c00: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x2d7c00u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x2d7c04: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d7c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7c08: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d7c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d7c0c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d7c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7c10: 0x24450400  addiu       $a1, $v0, 0x400
    ctx->pc = 0x2d7c10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x2d7c14: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2d7c14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d7c18: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2d7c18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2d7c1c: 0x24478ce8  addiu       $a3, $v0, -0x7318
    ctx->pc = 0x2d7c1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937832));
    // 0x2d7c20: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2D7C20u;
    SET_GPR_U32(ctx, 31, 0x2D7C28u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2D7C20u, 0x2D7C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7C28u;
label_2d7c28:
    // 0x2d7c28: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d7c28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d7c2c: 0x0  nop
    ctx->pc = 0x2d7c2cu;
    // NOP
    // 0x2d7c30: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2d7c30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2d7c34: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d7c34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d7c38: 0x0  nop
    ctx->pc = 0x2d7c38u;
    // NOP
    // 0x2d7c3c: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2d7c3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2d7c40: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d7c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7c44: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d7c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d7c48: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d7c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7c4c: 0x24450040  addiu       $a1, $v0, 0x40
    ctx->pc = 0x2d7c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x2d7c50: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2d7c50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d7c54: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2d7c54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2d7c58: 0x24478ce8  addiu       $a3, $v0, -0x7318
    ctx->pc = 0x2d7c58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937832));
    // 0x2d7c5c: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2D7C5Cu;
    SET_GPR_U32(ctx, 31, 0x2D7C64u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2D7C5Cu, 0x2D7C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7C64u;
label_2d7c64:
    // 0x2d7c64: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d7c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7c68: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d7c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d7c6c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d7c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7c70: 0x24450080  addiu       $a1, $v0, 0x80
    ctx->pc = 0x2d7c70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x2d7c74: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2d7c74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d7c78: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2d7c78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2d7c7c: 0x24478ce8  addiu       $a3, $v0, -0x7318
    ctx->pc = 0x2d7c7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937832));
    // 0x2d7c80: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2D7C80u;
    SET_GPR_U32(ctx, 31, 0x2D7C88u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2D7C80u, 0x2D7C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7C88u;
label_2d7c88:
    // 0x2d7c88: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d7c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7c8c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d7c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d7c90: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d7c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7c94: 0x244500c0  addiu       $a1, $v0, 0xC0
    ctx->pc = 0x2d7c94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x2d7c98: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2d7c98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d7c9c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2d7c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2d7ca0: 0x24478ce8  addiu       $a3, $v0, -0x7318
    ctx->pc = 0x2d7ca0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937832));
    // 0x2d7ca4: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2D7CA4u;
    SET_GPR_U32(ctx, 31, 0x2D7CACu);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2D7CA4u, 0x2D7CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7CACu;
label_2d7cac:
    // 0x2d7cac: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d7cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7cb0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d7cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d7cb4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d7cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7cb8: 0x24450100  addiu       $a1, $v0, 0x100
    ctx->pc = 0x2d7cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x2d7cbc: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2d7cbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d7cc0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2d7cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2d7cc4: 0x24478ce8  addiu       $a3, $v0, -0x7318
    ctx->pc = 0x2d7cc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937832));
    // 0x2d7cc8: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2D7CC8u;
    SET_GPR_U32(ctx, 31, 0x2D7CD0u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2D7CC8u, 0x2D7CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7CD0u;
label_2d7cd0:
    // 0x2d7cd0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d7cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7cd4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d7cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d7cd8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d7cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7cdc: 0x24450180  addiu       $a1, $v0, 0x180
    ctx->pc = 0x2d7cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x2d7ce0: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2d7ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d7ce4: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2d7ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2d7ce8: 0x24478ce8  addiu       $a3, $v0, -0x7318
    ctx->pc = 0x2d7ce8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937832));
    // 0x2d7cec: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2D7CECu;
    SET_GPR_U32(ctx, 31, 0x2D7CF4u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2D7CECu, 0x2D7CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7CF4u;
label_2d7cf4:
    // 0x2d7cf4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d7cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7cf8: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d7cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d7cfc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d7cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7d00: 0x24450200  addiu       $a1, $v0, 0x200
    ctx->pc = 0x2d7d00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x2d7d04: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2d7d04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d7d08: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2d7d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2d7d0c: 0x24478ce8  addiu       $a3, $v0, -0x7318
    ctx->pc = 0x2d7d0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937832));
    // 0x2d7d10: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2D7D10u;
    SET_GPR_U32(ctx, 31, 0x2D7D18u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2D7D10u, 0x2D7D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7D18u;
label_2d7d18:
    // 0x2d7d18: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d7d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7d1c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d7d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d7d20: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d7d20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7d24: 0x24450280  addiu       $a1, $v0, 0x280
    ctx->pc = 0x2d7d24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
    // 0x2d7d28: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2d7d28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d7d2c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2d7d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2d7d30: 0x24478ce8  addiu       $a3, $v0, -0x7318
    ctx->pc = 0x2d7d30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937832));
    // 0x2d7d34: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2D7D34u;
    SET_GPR_U32(ctx, 31, 0x2D7D3Cu);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2D7D34u, 0x2D7D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7D3Cu;
label_2d7d3c:
    // 0x2d7d3c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d7d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7d40: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d7d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d7d44: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d7d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7d48: 0x24450300  addiu       $a1, $v0, 0x300
    ctx->pc = 0x2d7d48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x2d7d4c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2d7d4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d7d50: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2d7d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2d7d54: 0x24478ce8  addiu       $a3, $v0, -0x7318
    ctx->pc = 0x2d7d54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937832));
    // 0x2d7d58: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2D7D58u;
    SET_GPR_U32(ctx, 31, 0x2D7D60u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2D7D58u, 0x2D7D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7D60u;
label_2d7d60:
    // 0x2d7d60: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d7d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7d64: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d7d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d7d68: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d7d68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7d6c: 0x24450380  addiu       $a1, $v0, 0x380
    ctx->pc = 0x2d7d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 896));
    // 0x2d7d70: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2d7d70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d7d74: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2d7d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2d7d78: 0x24478ce8  addiu       $a3, $v0, -0x7318
    ctx->pc = 0x2d7d78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937832));
    // 0x2d7d7c: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2D7D7Cu;
    SET_GPR_U32(ctx, 31, 0x2D7D84u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2D7D7Cu, 0x2D7D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7D84u;
label_2d7d84:
    // 0x2d7d84: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d7d84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7d88: 0xc0b5fa0  jal         func_2D7E80
    ctx->pc = 0x2D7D88u;
    SET_GPR_U32(ctx, 31, 0x2D7D90u);
    ctx->pc = 0x2D7E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7E80u, 0x2D7D88u, 0x2D7D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7D90u;
label_2d7d90:
    // 0x2d7d90: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d7d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7d94: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2d7d94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2d7d98: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x2D7D98u;
    {
        const bool branch_taken_0x2d7d98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d7d98) {
            ctx->pc = 0x2D7E0Cu;
            return;
        }
    }
    ctx->pc = 0x2D7DA0u;
    // 0x2d7da0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d7da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7da4: 0x2463134c  addiu       $v1, $v1, 0x134C
    ctx->pc = 0x2d7da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
    // 0x2d7da8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2d7da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d7dac: 0x8c831334  lw          $v1, 0x1334($a0)
    ctx->pc = 0x2d7dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4916)));
    // 0x2d7db0: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x2d7db0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x2d7db4: 0xac831334  sw          $v1, 0x1334($a0)
    ctx->pc = 0x2d7db4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4916), GPR_U32(ctx, 3));
    // 0x2d7db8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d7db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7dbc: 0x2463134c  addiu       $v1, $v1, 0x134C
    ctx->pc = 0x2d7dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
    // 0x2d7dc0: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2d7dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d7dc4: 0x8ca41334  lw          $a0, 0x1334($a1)
    ctx->pc = 0x2d7dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4916)));
    // 0x2d7dc8: 0x2403ff05  addiu       $v1, $zero, -0xFB
    ctx->pc = 0x2d7dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967045));
    // 0x2d7dcc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2d7dccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2d7dd0: 0xaca31334  sw          $v1, 0x1334($a1)
    ctx->pc = 0x2d7dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4916), GPR_U32(ctx, 3));
    // 0x2d7dd4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d7dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7dd8: 0xac601334  sw          $zero, 0x1334($v1)
    ctx->pc = 0x2d7dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4916), GPR_U32(ctx, 0));
    // 0x2d7ddc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d7ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d7de0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d7de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7de4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d7de4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d7de8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2d7de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d7dec: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d7decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7df0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d7df0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d7df4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d7df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7df8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d7df8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d7dfc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d7dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7e00: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d7e00u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d7e04: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d7e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7e08: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d7e08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2d7e0cu;
}
