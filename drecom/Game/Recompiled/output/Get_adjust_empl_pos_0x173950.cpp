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

// Function: Get_adjust_empl_pos
// Address: 0x173950 - 0x173a20
void Get_adjust_empl_pos_0x173950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Get_adjust_empl_pos_0x173950");
#endif

    switch (ctx->pc) {
        case 0x173980u: goto label_173980;
        case 0x173990u: goto label_173990;
        case 0x1739acu: goto label_1739ac;
        case 0x1739bcu: goto label_1739bc;
        case 0x1739d4u: goto label_1739d4;
        case 0x1739f0u: goto label_1739f0;
        default: break;
    }

    ctx->pc = 0x173950u;

    // 0x173950: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x173950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x173954: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x173954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x173958: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x173958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17395c: 0xafa40078  sw          $a0, 0x78($sp)
    ctx->pc = 0x17395cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 4));
    // 0x173960: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x173960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x173964: 0x2450dbc0  addiu       $s0, $v0, -0x2440
    ctx->pc = 0x173964u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x173968: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x173968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x17396c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x17396cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x173970: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x173970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x173974: 0x24460120  addiu       $a2, $v0, 0x120
    ctx->pc = 0x173974u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x173978: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x173978u;
    SET_GPR_U32(ctx, 31, 0x173980u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x173978u, 0x173980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173980u;
label_173980:
    // 0x173980: 0xc7ac0060  lwc1        $f12, 0x60($sp)
    ctx->pc = 0x173980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x173984: 0xc7ad0068  lwc1        $f13, 0x68($sp)
    ctx->pc = 0x173984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x173988: 0xc0455e6  jal         func_115798
    ctx->pc = 0x173988u;
    SET_GPR_U32(ctx, 31, 0x173990u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x173988u, 0x173990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173990u;
label_173990:
    // 0x173990: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x173990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x173994: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x173994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x173998: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x173998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x17399c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x17399cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1739a0: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x1739a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1739a4: 0xc067874  jal         func_19E1D0
    ctx->pc = 0x1739A4u;
    SET_GPR_U32(ctx, 31, 0x1739ACu);
    ctx->pc = 0x19E1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E1D0u, 0x1739A4u, 0x1739ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1739ACu;
label_1739ac:
    // 0x1739ac: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1739acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1739b0: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x1739b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x1739b4: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1739B4u;
    SET_GPR_U32(ctx, 31, 0x1739BCu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1739BCu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1739BCu) { return; }
    ctx->pc = 0x1739BCu;
label_1739bc:
    // 0x1739bc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1739bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1739c0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1739c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1739c4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1739c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1739c8: 0x244612b0  addiu       $a2, $v0, 0x12B0
    ctx->pc = 0x1739c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4784));
    // 0x1739cc: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1739CCu;
    SET_GPR_U32(ctx, 31, 0x1739D4u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1739D4u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1739D4u) { return; }
    ctx->pc = 0x1739D4u;
label_1739d4:
    // 0x1739d4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1739d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1739d8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1739d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1739dc: 0x246412a0  addiu       $a0, $v1, 0x12A0
    ctx->pc = 0x1739dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4768));
    // 0x1739e0: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1739e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1739e4: 0x24460120  addiu       $a2, $v0, 0x120
    ctx->pc = 0x1739e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x1739e8: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1739E8u;
    SET_GPR_U32(ctx, 31, 0x1739F0u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1739E8u, 0x1739F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1739F0u;
label_1739f0:
    // 0x1739f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1739f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1739f4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1739f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1739f8: 0xe46012a4  swc1        $f0, 0x12A4($v1)
    ctx->pc = 0x1739f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4772), bits); }
    // 0x1739fc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1739fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x173a00: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x173a00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x173a04: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x173a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x173a08: 0xe46012ac  swc1        $f0, 0x12AC($v1)
    ctx->pc = 0x173a08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4780), bits); }
    // 0x173a0c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x173a0cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x173a10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x173a10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173a14: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x173a14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x173a18: 0x3e00008  jr          $ra
    ctx->pc = 0x173A18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173A18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x173A20u;
}
