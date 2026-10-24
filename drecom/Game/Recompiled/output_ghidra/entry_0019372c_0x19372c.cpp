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

// Function: entry_0019372c
// Address: 0x19372c - 0x193770
void entry_0019372c_0x19372c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019372c_0x19372c");
#endif

    switch (ctx->pc) {
        case 0x193748u: goto label_193748;
        case 0x193758u: goto label_193758;
        default: break;
    }

    ctx->pc = 0x19372cu;

    // 0x19372c: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x19372cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x193730: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x193730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x193734: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x193734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x193738: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x193738u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x19373c: 0x24460480  addiu       $a2, $v0, 0x480
    ctx->pc = 0x19373cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1152));
    // 0x193740: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x193740u;
    SET_GPR_U32(ctx, 31, 0x193748u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x193748u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x193748u) { return; }
    ctx->pc = 0x193748u;
label_193748:
    // 0x193748: 0xc7b600ec  lwc1        $f22, 0xEC($sp)
    ctx->pc = 0x193748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x19374c: 0xc7ac00ec  lwc1        $f12, 0xEC($sp)
    ctx->pc = 0x19374cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x193750: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x193750u;
    SET_GPR_U32(ctx, 31, 0x193758u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x193750u, 0x193758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193758u;
label_193758:
    // 0x193758: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x193758u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x19375c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x19375cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x193760: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x193760u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x193764: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x193764u;
    {
        const bool branch_taken_0x193764 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x193764) {
            ctx->pc = 0x193770u;
            return;
        }
    }
    ctx->pc = 0x19376Cu;
    // 0x19376c: 0x3411ffff  ori         $s1, $zero, 0xFFFF
    ctx->pc = 0x19376cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->pc = 0x193770u;
}
