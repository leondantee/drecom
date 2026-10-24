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

// Function: entry_00297b0c
// Address: 0x297b0c - 0x297b60
void entry_00297b0c_0x297b0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00297b0c_0x297b0c");
#endif

    switch (ctx->pc) {
        case 0x297b14u: goto label_297b14;
        case 0x297b5cu: goto label_297b5c;
        default: break;
    }

    ctx->pc = 0x297b0cu;

    // 0x297b0c: 0xc067648  jal         func_19D920
    ctx->pc = 0x297B0Cu;
    SET_GPR_U32(ctx, 31, 0x297B14u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x297B0Cu, 0x297B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297B14u;
label_297b14:
    // 0x297b14: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x297b14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x297b18: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x297b18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x297b1c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x297b1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x297b20: 0x0  nop
    ctx->pc = 0x297b20u;
    // NOP
    // 0x297b24: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x297b24u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x297b28: 0x3c023da3  lui         $v0, 0x3DA3
    ctx->pc = 0x297b28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15779 << 16));
    // 0x297b2c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x297b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x297b30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x297b30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x297b34: 0x0  nop
    ctx->pc = 0x297b34u;
    // NOP
    // 0x297b38: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x297b38u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x297b3c: 0x2602000e  addiu       $v0, $s0, 0xE
    ctx->pc = 0x297b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 14));
    // 0x297b40: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x297b40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x297b44: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x297b44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x297b48: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x297b48u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x297b4c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x297b4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x297b50: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x297b50u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x297b54: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x297B54u;
    SET_GPR_U32(ctx, 31, 0x297B5Cu);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x297B54u, 0x297B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297B5Cu;
label_297b5c:
    // 0x297b5c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x297b5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x297b60u;
}
