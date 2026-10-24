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

// Function: entry_002f4d04
// Address: 0x2f4d04 - 0x2f4db0
void entry_002f4d04_0x2f4d04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f4d04_0x2f4d04");
#endif

    switch (ctx->pc) {
        case 0x2f4da0u: goto label_2f4da0;
        default: break;
    }

    ctx->pc = 0x2f4d04u;

    // 0x2f4d04: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2f4d04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2f4d08: 0xc420dce0  lwc1        $f0, -0x2320($at)
    ctx->pc = 0x2f4d08u;
    { uint32_t bits = FAST_READ32(0x3EDCE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f4d0c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2f4d0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2f4d10: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x2f4d10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
    // 0x2f4d14: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f4d14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f4d18: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2f4d18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2f4d1c: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x2f4d1cu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f4d20: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2f4d20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2f4d24: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x2f4d24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2f4d28: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2f4d28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2f4d2c: 0xc420dce8  lwc1        $f0, -0x2318($at)
    ctx->pc = 0x2f4d2cu;
    { uint32_t bits = FAST_READ32(0x3EDCE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f4d30: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x2f4d30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2f4d34: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f4d34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2f4d38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f4d38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f4d3c: 0x0  nop
    ctx->pc = 0x2f4d3cu;
    // NOP
    // 0x2f4d40: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x2f4d40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2f4d44: 0x93a20078  lbu         $v0, 0x78($sp)
    ctx->pc = 0x2f4d44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2f4d48: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f4d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f4d4c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2f4d4cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2f4d50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f4d50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f4d54: 0x0  nop
    ctx->pc = 0x2f4d54u;
    // NOP
    // 0x2f4d58: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2f4d58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2f4d5c: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x2f4d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
    // 0x2f4d60: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2f4d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2f4d64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f4d64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f4d68: 0x0  nop
    ctx->pc = 0x2f4d68u;
    // NOP
    // 0x2f4d6c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2f4d6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2f4d70: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2f4d70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2f4d74: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f4d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2f4d78: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2f4d78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2f4d7c: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x2f4d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x2f4d80: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2f4d80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f4d84: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x2f4d84u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f4d88: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2f4d88u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f4d8c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2f4d8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2f4d90: 0xc7ac006c  lwc1        $f12, 0x6C($sp)
    ctx->pc = 0x2f4d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2f4d94: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2f4d94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f4d98: 0xc086488  jal         func_219220
    ctx->pc = 0x2F4D98u;
    SET_GPR_U32(ctx, 31, 0x2F4DA0u);
    ctx->pc = 0x219220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219220u, 0x2F4D98u, 0x2F4DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4DA0u;
label_2f4da0:
    // 0x2f4da0: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x2f4da0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f4da4: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x2f4da4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2f4da8: 0x3e00008  jr          $ra
    ctx->pc = 0x2F4DA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F4DA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F4DB0u;
}
