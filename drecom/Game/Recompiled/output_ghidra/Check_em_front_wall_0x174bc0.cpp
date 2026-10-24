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

// Function: Check_em_front_wall
// Address: 0x174bc0 - 0x174c94
void Check_em_front_wall_0x174bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Check_em_front_wall_0x174bc0");
#endif

    switch (ctx->pc) {
        case 0x174be8u: goto label_174be8;
        case 0x174c00u: goto label_174c00;
        case 0x174c44u: goto label_174c44;
        case 0x174c64u: goto label_174c64;
        default: break;
    }

    ctx->pc = 0x174bc0u;

    // 0x174bc0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x174bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x174bc4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x174bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x174bc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x174bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x174bcc: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x174bccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x174bd0: 0xe7ac0078  swc1        $f12, 0x78($sp)
    ctx->pc = 0x174bd0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x174bd4: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x174bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x174bd8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x174bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x174bdc: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x174bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x174be0: 0xc067844  jal         func_19E110
    ctx->pc = 0x174BE0u;
    SET_GPR_U32(ctx, 31, 0x174BE8u);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x174BE0u, 0x174BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174BE8u;
label_174be8:
    // 0x174be8: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x174be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x174bec: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x174becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x174bf0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x174bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x174bf4: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x174bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x174bf8: 0xc040c9e  jal         func_103278
    ctx->pc = 0x174BF8u;
    SET_GPR_U32(ctx, 31, 0x174C00u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x174C00u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x174C00u) { return; }
    ctx->pc = 0x174C00u;
label_174c00:
    // 0x174c00: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x174c00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x174c04: 0x0  nop
    ctx->pc = 0x174c04u;
    // NOP
    // 0x174c08: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x174c08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x174c0c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x174c0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x174c10: 0x0  nop
    ctx->pc = 0x174c10u;
    // NOP
    // 0x174c14: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x174c14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x174c18: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x174c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x174c1c: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x174c1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x174c20: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x174c20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x174c24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x174c24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x174c28: 0x0  nop
    ctx->pc = 0x174c28u;
    // NOP
    // 0x174c2c: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x174c2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x174c30: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x174c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x174c34: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x174c34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x174c38: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x174c38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x174c3c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x174C3Cu;
    SET_GPR_U32(ctx, 31, 0x174C44u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x174C44u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x174C44u) { return; }
    ctx->pc = 0x174C44u;
label_174c44:
    // 0x174c44: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x174c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x174c48: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x174c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x174c4c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x174c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x174c50: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x174c50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x174c54: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x174c54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x174c58: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x174c58u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x174c5c: 0xc059e1c  jal         func_167870
    ctx->pc = 0x174C5Cu;
    SET_GPR_U32(ctx, 31, 0x174C64u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x174C5Cu, 0x174C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174C64u;
label_174c64:
    // 0x174c64: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x174c64u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x174c68: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x174C68u;
    {
        const bool branch_taken_0x174c68 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x174c68) {
            ctx->pc = 0x174C7Cu;
            goto label_174c7c;
        }
    }
    ctx->pc = 0x174C70u;
    // 0x174c70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x174c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x174c74: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x174C74u;
    {
        const bool branch_taken_0x174c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x174c74) {
            ctx->pc = 0x174C80u;
            goto label_174c80;
        }
    }
    ctx->pc = 0x174C7Cu;
label_174c7c:
    // 0x174c7c: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x174c7cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_174c80:
    // 0x174c80: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x174c80u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174c84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x174c84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174c88: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x174c88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x174c8c: 0x3e00008  jr          $ra
    ctx->pc = 0x174C8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174C8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174C94u;
}
