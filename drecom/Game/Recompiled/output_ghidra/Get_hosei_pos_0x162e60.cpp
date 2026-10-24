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

// Function: Get_hosei_pos
// Address: 0x162e60 - 0x162f38
void Get_hosei_pos_0x162e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Get_hosei_pos_0x162e60");
#endif

    switch (ctx->pc) {
        case 0x162e94u: goto label_162e94;
        case 0x162ea4u: goto label_162ea4;
        case 0x162ef0u: goto label_162ef0;
        case 0x162f04u: goto label_162f04;
        default: break;
    }

    ctx->pc = 0x162e60u;

    // 0x162e60: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x162e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x162e64: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x162e64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x162e68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x162e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x162e6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x162e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x162e70: 0xafa40088  sw          $a0, 0x88($sp)
    ctx->pc = 0x162e70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 4));
    // 0x162e74: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x162e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x162e78: 0x2451dbc0  addiu       $s1, $v0, -0x2440
    ctx->pc = 0x162e78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x162e7c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x162e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x162e80: 0x2450eea0  addiu       $s0, $v0, -0x1160
    ctx->pc = 0x162e80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962848));
    // 0x162e84: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x162e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x162e88: 0xc60c0018  lwc1        $f12, 0x18($s0)
    ctx->pc = 0x162e88u;
    { uint32_t bits = FAST_READ32(0x3EEEB8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x162e8c: 0xc067844  jal         func_19E110
    ctx->pc = 0x162E8Cu;
    SET_GPR_U32(ctx, 31, 0x162E94u);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x162E8Cu, 0x162E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162E94u;
label_162e94:
    // 0x162e94: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x162e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x162e98: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x162e98u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x162e9c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x162E9Cu;
    SET_GPR_U32(ctx, 31, 0x162EA4u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x162EA4u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x162EA4u) { return; }
    ctx->pc = 0x162EA4u;
label_162ea4:
    // 0x162ea4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x162ea4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162ea8: 0x0  nop
    ctx->pc = 0x162ea8u;
    // NOP
    // 0x162eac: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x162eacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x162eb0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x162eb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162eb4: 0x0  nop
    ctx->pc = 0x162eb4u;
    // NOP
    // 0x162eb8: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x162eb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x162ebc: 0x3c02c37a  lui         $v0, 0xC37A
    ctx->pc = 0x162ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50042 << 16));
    // 0x162ec0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162ec0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162ec4: 0x0  nop
    ctx->pc = 0x162ec4u;
    // NOP
    // 0x162ec8: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x162ec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x162ecc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x162eccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x162ed0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162ed0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162ed4: 0x0  nop
    ctx->pc = 0x162ed4u;
    // NOP
    // 0x162ed8: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x162ed8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x162edc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x162edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x162ee0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x162ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x162ee4: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x162ee4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x162ee8: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x162EE8u;
    SET_GPR_U32(ctx, 31, 0x162EF0u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x162EF0u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x162EF0u) { return; }
    ctx->pc = 0x162EF0u;
label_162ef0:
    // 0x162ef0: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x162ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x162ef4: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x162ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x162ef8: 0x26260120  addiu       $a2, $s1, 0x120
    ctx->pc = 0x162ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
    // 0x162efc: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x162EFCu;
    SET_GPR_U32(ctx, 31, 0x162F04u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x162EFCu, 0x162F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162F04u;
label_162f04:
    // 0x162f04: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x162f04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162f08: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x162f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x162f0c: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x162f0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x162f10: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x162f10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x162f14: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x162f14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162f18: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x162f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x162f1c: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x162f1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x162f20: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x162f20u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x162f24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x162f24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x162f28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x162f28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162f2c: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x162f2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x162f30: 0x3e00008  jr          $ra
    ctx->pc = 0x162F30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162F30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x162F38u;
}
