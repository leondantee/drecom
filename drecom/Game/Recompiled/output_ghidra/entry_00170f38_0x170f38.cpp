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

// Function: entry_00170f38
// Address: 0x170f38 - 0x170fc4
void entry_00170f38_0x170f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170f38_0x170f38");
#endif

    switch (ctx->pc) {
        case 0x170f8cu: goto label_170f8c;
        case 0x170fb0u: goto label_170fb0;
        default: break;
    }

    ctx->pc = 0x170f38u;

    // 0x170f38: 0x26b50090  addiu       $s5, $s5, 0x90
    ctx->pc = 0x170f38u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 144));
    // 0x170f3c: 0x26e80010  addiu       $t0, $s7, 0x10
    ctx->pc = 0x170f3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
    // 0x170f40: 0x7100be28  paddub      $s7, $t0, $zero
    ctx->pc = 0x170f40u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x170f44: 0x11e382b  sltu        $a3, $t0, $fp
    ctx->pc = 0x170f44u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
    // 0x170f48: 0x14e0fea5  bnez        $a3, . + 4 + (-0x15B << 2)
    ctx->pc = 0x170F48u;
    {
        const bool branch_taken_0x170f48 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x170f48) {
            ctx->pc = 0x1709E0u;
            return;
        }
    }
    ctx->pc = 0x170F50u;
    // 0x170f50: 0x8fa30158  lw          $v1, 0x158($sp)
    ctx->pc = 0x170f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x170f54: 0x90750003  lbu         $s5, 0x3($v1)
    ctx->pc = 0x170f54u;
    SET_GPR_ZE32(ctx, 21, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x170f58: 0x32b700ff  andi        $s7, $s5, 0xFF
    ctx->pc = 0x170f58u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x170f5c: 0x32e30040  andi        $v1, $s7, 0x40
    ctx->pc = 0x170f5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)64);
    // 0x170f60: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x170F60u;
    {
        const bool branch_taken_0x170f60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x170f60) {
            ctx->pc = 0x170FF0u;
            return;
        }
    }
    ctx->pc = 0x170F68u;
    // 0x170f68: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x170f68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x170f6c: 0x8c340af0  lw          $s4, 0xAF0($at)
    ctx->pc = 0x170f6cu;
    SET_GPR_S32(ctx, 20, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x170f70: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x170f70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x170f74: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x170f74u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x170f78: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x170f78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x170f7c: 0x26850190  addiu       $a1, $s4, 0x190
    ctx->pc = 0x170f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 400));
    // 0x170f80: 0x244601a0  addiu       $a2, $v0, 0x1A0
    ctx->pc = 0x170f80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 416));
    // 0x170f84: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x170F84u;
    SET_GPR_U32(ctx, 31, 0x170F8Cu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x170F84u, 0x170F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170F8Cu;
label_170f8c:
    // 0x170f8c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x170f8cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x170f90: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x170f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x170f94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x170f94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x170f98: 0x0  nop
    ctx->pc = 0x170f98u;
    // NOP
    // 0x170f9c: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x170f9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
    // 0x170fa0: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x170fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x170fa4: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x170fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x170fa8: 0xc040c24  jal         func_103090
    ctx->pc = 0x170FA8u;
    SET_GPR_U32(ctx, 31, 0x170FB0u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x170FB0u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x170FB0u) { return; }
    ctx->pc = 0x170FB0u;
label_170fb0:
    // 0x170fb0: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x170fb0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x170fb4: 0x8fa30188  lw          $v1, 0x188($sp)
    ctx->pc = 0x170fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x170fb8: 0x8c750058  lw          $s5, 0x58($v1)
    ctx->pc = 0x170fb8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x170fbc: 0x8fa30158  lw          $v1, 0x158($sp)
    ctx->pc = 0x170fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x170fc0: 0x24770008  addiu       $s7, $v1, 0x8
    ctx->pc = 0x170fc0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    ctx->pc = 0x170fc4u;
}
