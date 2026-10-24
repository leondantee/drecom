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

// Function: R501_light_pos_set_sub
// Address: 0x31e3f0 - 0x31e488
void R501_light_pos_set_sub_0x31e3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R501_light_pos_set_sub_0x31e3f0");
#endif

    switch (ctx->pc) {
        case 0x31e40cu: goto label_31e40c;
        case 0x31e424u: goto label_31e424;
        case 0x31e468u: goto label_31e468;
        case 0x31e478u: goto label_31e478;
        default: break;
    }

    ctx->pc = 0x31e3f0u;

    // 0x31e3f0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x31e3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x31e3f4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x31e3f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x31e3f8: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x31e3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x31e3fc: 0xe7ac0068  swc1        $f12, 0x68($sp)
    ctx->pc = 0x31e3fcu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x31e400: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x31e400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x31e404: 0xc056abc  jal         func_15AAF0
    ctx->pc = 0x31E404u;
    SET_GPR_U32(ctx, 31, 0x31E40Cu);
    ctx->pc = 0x15AAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15AAF0u, 0x31E404u, 0x31E40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E40Cu;
label_31e40c:
    // 0x31e40c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x31e40cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x31e410: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x31e410u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x31e414: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x31e414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x31e418: 0x24450190  addiu       $a1, $v0, 0x190
    ctx->pc = 0x31e418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
    // 0x31e41c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x31E41Cu;
    SET_GPR_U32(ctx, 31, 0x31E424u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x31E424u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x31E424u) { return; }
    ctx->pc = 0x31E424u;
label_31e424:
    // 0x31e424: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31e424u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31e428: 0x0  nop
    ctx->pc = 0x31e428u;
    // NOP
    // 0x31e42c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x31e42cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x31e430: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31e430u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31e434: 0x0  nop
    ctx->pc = 0x31e434u;
    // NOP
    // 0x31e438: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x31e438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x31e43c: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x31e43cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31e440: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x31e440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x31e444: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x31e444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x31e448: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31e448u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31e44c: 0x0  nop
    ctx->pc = 0x31e44cu;
    // NOP
    // 0x31e450: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x31e450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x31e454: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x31e454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x31e458: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x31e458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x31e45c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x31e45cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x31e460: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x31E460u;
    SET_GPR_U32(ctx, 31, 0x31E468u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x31E468u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x31E468u) { return; }
    ctx->pc = 0x31E468u;
label_31e468:
    // 0x31e468: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x31e468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x31e46c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x31e46cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x31e470: 0xc05dafc  jal         func_176BF0
    ctx->pc = 0x31E470u;
    SET_GPR_U32(ctx, 31, 0x31E478u);
    ctx->pc = 0x176BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176BF0u, 0x31E470u, 0x31E478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E478u;
label_31e478:
    // 0x31e478: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x31e478u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31e47c: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x31e47cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x31e480: 0x3e00008  jr          $ra
    ctx->pc = 0x31E480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E480u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31E488u;
}
