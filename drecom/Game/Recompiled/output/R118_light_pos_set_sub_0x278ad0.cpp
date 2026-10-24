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

// Function: R118_light_pos_set_sub
// Address: 0x278ad0 - 0x278b68
void R118_light_pos_set_sub_0x278ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R118_light_pos_set_sub_0x278ad0");
#endif

    switch (ctx->pc) {
        case 0x278aecu: goto label_278aec;
        case 0x278b04u: goto label_278b04;
        case 0x278b48u: goto label_278b48;
        case 0x278b58u: goto label_278b58;
        default: break;
    }

    ctx->pc = 0x278ad0u;

    // 0x278ad0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x278ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x278ad4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x278ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x278ad8: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x278ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x278adc: 0xe7ac0068  swc1        $f12, 0x68($sp)
    ctx->pc = 0x278adcu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x278ae0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x278ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x278ae4: 0xc056abc  jal         func_15AAF0
    ctx->pc = 0x278AE4u;
    SET_GPR_U32(ctx, 31, 0x278AECu);
    ctx->pc = 0x15AAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15AAF0u, 0x278AE4u, 0x278AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278AECu;
label_278aec:
    // 0x278aec: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x278aecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x278af0: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x278af0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x278af4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x278af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x278af8: 0x24450190  addiu       $a1, $v0, 0x190
    ctx->pc = 0x278af8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
    // 0x278afc: 0xc040c9e  jal         func_103278
    ctx->pc = 0x278AFCu;
    SET_GPR_U32(ctx, 31, 0x278B04u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x278B04u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x278B04u) { return; }
    ctx->pc = 0x278B04u;
label_278b04:
    // 0x278b04: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x278b04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x278b08: 0x0  nop
    ctx->pc = 0x278b08u;
    // NOP
    // 0x278b0c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x278b0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x278b10: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x278b10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x278b14: 0x0  nop
    ctx->pc = 0x278b14u;
    // NOP
    // 0x278b18: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x278b18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x278b1c: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x278b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x278b20: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x278b20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x278b24: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x278b24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x278b28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x278b28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x278b2c: 0x0  nop
    ctx->pc = 0x278b2cu;
    // NOP
    // 0x278b30: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x278b30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x278b34: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x278b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x278b38: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x278b38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x278b3c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x278b3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x278b40: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x278B40u;
    SET_GPR_U32(ctx, 31, 0x278B48u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x278B48u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x278B48u) { return; }
    ctx->pc = 0x278B48u;
label_278b48:
    // 0x278b48: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x278b48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x278b4c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x278b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x278b50: 0xc05dafc  jal         func_176BF0
    ctx->pc = 0x278B50u;
    SET_GPR_U32(ctx, 31, 0x278B58u);
    ctx->pc = 0x176BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176BF0u, 0x278B50u, 0x278B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278B58u;
label_278b58:
    // 0x278b58: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x278b58u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x278b5c: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x278b5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x278b60: 0x3e00008  jr          $ra
    ctx->pc = 0x278B60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278B60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x278B68u;
}
