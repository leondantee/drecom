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

// Function: entry_00171e70
// Address: 0x171e70 - 0x171f0c
void entry_00171e70_0x171e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171e70_0x171e70");
#endif

    switch (ctx->pc) {
        case 0x171eccu: goto label_171ecc;
        case 0x171ef0u: goto label_171ef0;
        default: break;
    }

    ctx->pc = 0x171e70u;

    // 0x171e70: 0x26c30090  addiu       $v1, $s6, 0x90
    ctx->pc = 0x171e70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 144));
    // 0x171e74: 0x7060b628  paddub      $s6, $v1, $zero
    ctx->pc = 0x171e74u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x171e78: 0x27c50010  addiu       $a1, $fp, 0x10
    ctx->pc = 0x171e78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
    // 0x171e7c: 0x70a0f628  paddub      $fp, $a1, $zero
    ctx->pc = 0x171e7cu;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x171e80: 0x8fa3015c  lw          $v1, 0x15C($sp)
    ctx->pc = 0x171e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x171e84: 0xa3202b  sltu        $a0, $a1, $v1
    ctx->pc = 0x171e84u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x171e88: 0x1480fe4b  bnez        $a0, . + 4 + (-0x1B5 << 2)
    ctx->pc = 0x171E88u;
    {
        const bool branch_taken_0x171e88 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x171e88) {
            ctx->pc = 0x1717B8u;
            return;
        }
    }
    ctx->pc = 0x171E90u;
    // 0x171e90: 0x8fa30158  lw          $v1, 0x158($sp)
    ctx->pc = 0x171e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x171e94: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x171e94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x171e98: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x171e98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x171e9c: 0x30830040  andi        $v1, $a0, 0x40
    ctx->pc = 0x171e9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)64);
    // 0x171ea0: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x171EA0u;
    {
        const bool branch_taken_0x171ea0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x171ea0) {
            ctx->pc = 0x171F48u;
            return;
        }
    }
    ctx->pc = 0x171EA8u;
    // 0x171ea8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x171ea8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x171eac: 0x8c230af0  lw          $v1, 0xAF0($at)
    ctx->pc = 0x171eacu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x171eb0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x171eb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x171eb4: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x171eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x171eb8: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x171eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x171ebc: 0x24650190  addiu       $a1, $v1, 0x190
    ctx->pc = 0x171ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 400));
    // 0x171ec0: 0x244601a0  addiu       $a2, $v0, 0x1A0
    ctx->pc = 0x171ec0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 416));
    // 0x171ec4: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x171EC4u;
    SET_GPR_U32(ctx, 31, 0x171ECCu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x171EC4u, 0x171ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171ECCu;
label_171ecc:
    // 0x171ecc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x171eccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x171ed0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x171ed0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x171ed4: 0x0  nop
    ctx->pc = 0x171ed4u;
    // NOP
    // 0x171ed8: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x171ed8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
    // 0x171edc: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x171edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x171ee0: 0x27a20120  addiu       $v0, $sp, 0x120
    ctx->pc = 0x171ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x171ee4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x171ee4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x171ee8: 0xc040c24  jal         func_103090
    ctx->pc = 0x171EE8u;
    SET_GPR_U32(ctx, 31, 0x171EF0u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x171EF0u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x171EF0u) { return; }
    ctx->pc = 0x171EF0u;
label_171ef0:
    // 0x171ef0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x171ef0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x171ef4: 0x8fa50188  lw          $a1, 0x188($sp)
    ctx->pc = 0x171ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x171ef8: 0x8ca30058  lw          $v1, 0x58($a1)
    ctx->pc = 0x171ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x171efc: 0x7060b628  paddub      $s6, $v1, $zero
    ctx->pc = 0x171efcu;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x171f00: 0x8fa40158  lw          $a0, 0x158($sp)
    ctx->pc = 0x171f00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x171f04: 0x24830008  addiu       $v1, $a0, 0x8
    ctx->pc = 0x171f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x171f08: 0x7060f628  paddub      $fp, $v1, $zero
    ctx->pc = 0x171f08u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    ctx->pc = 0x171f0cu;
}
