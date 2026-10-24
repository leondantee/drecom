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

// Function: entry_0019c928
// Address: 0x19c928 - 0x19c960
void entry_0019c928_0x19c928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c928_0x19c928");
#endif

    switch (ctx->pc) {
        case 0x19c950u: goto label_19c950;
        default: break;
    }

    ctx->pc = 0x19c928u;

    // 0x19c928: 0x1240000d  beqz        $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x19C928u;
    {
        const bool branch_taken_0x19c928 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c928) {
            ctx->pc = 0x19C960u;
            return;
        }
    }
    ctx->pc = 0x19C930u;
    // 0x19c930: 0x151100  sll         $v0, $s5, 4
    ctx->pc = 0x19c930u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x19c934: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x19c934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x19c938: 0x244400a0  addiu       $a0, $v0, 0xA0
    ctx->pc = 0x19c938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x19c93c: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x19c93cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x19c940: 0xc60c0010  lwc1        $f12, 0x10($s0)
    ctx->pc = 0x19c940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19c944: 0xc60d0014  lwc1        $f13, 0x14($s0)
    ctx->pc = 0x19c944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x19c948: 0xc05692c  jal         func_15A4B0
    ctx->pc = 0x19C948u;
    SET_GPR_U32(ctx, 31, 0x19C950u);
    ctx->pc = 0x15A4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A4B0u, 0x19C948u, 0x19C950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C950u;
label_19c950:
    // 0x19c950: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19C950u;
    {
        const bool branch_taken_0x19c950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c950) {
            ctx->pc = 0x19C960u;
            return;
        }
    }
    ctx->pc = 0x19C958u;
    // 0x19c958: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x19c958u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19c95c: 0x0  nop
    ctx->pc = 0x19c95cu;
    // NOP
    ctx->pc = 0x19c960u;
}
