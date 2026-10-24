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

// Function: entry_0023ae84
// Address: 0x23ae84 - 0x23aec4
void entry_0023ae84_0x23ae84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023ae84_0x23ae84");
#endif

    switch (ctx->pc) {
        case 0x23aeacu: goto label_23aeac;
        default: break;
    }

    ctx->pc = 0x23ae84u;

    // 0x23ae84: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x23ae84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23ae88: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x23ae88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x23ae8c: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x23ae8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23ae90: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x23ae90u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x23ae94: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23ae94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23ae98: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x23ae98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23ae9c: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x23ae9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
    // 0x23aea0: 0x24100020  addiu       $s0, $zero, 0x20
    ctx->pc = 0x23aea0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x23aea4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23AEA4u;
    SET_GPR_U32(ctx, 31, 0x23AEACu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23AEA4u, 0x23AEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AEACu;
label_23aeac:
    // 0x23aeac: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x23aeacu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x23aeb0: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x23aeb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x23aeb4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x23aeb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x23aeb8: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x23AEB8u;
    {
        const bool branch_taken_0x23aeb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23aeb8) {
            ctx->pc = 0x23AEC4u;
            return;
        }
    }
    ctx->pc = 0x23AEC0u;
    // 0x23aec0: 0x24100021  addiu       $s0, $zero, 0x21
    ctx->pc = 0x23aec0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    ctx->pc = 0x23aec4u;
}
