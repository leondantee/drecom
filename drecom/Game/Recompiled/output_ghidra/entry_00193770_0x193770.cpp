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

// Function: entry_00193770
// Address: 0x193770 - 0x1937b0
void entry_00193770_0x193770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193770_0x193770");
#endif

    switch (ctx->pc) {
        case 0x193798u: goto label_193798;
        default: break;
    }

    ctx->pc = 0x193770u;

    // 0x193770: 0x118982  srl         $s1, $s1, 6
    ctx->pc = 0x193770u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), 6));
    // 0x193774: 0x92c20348  lbu         $v0, 0x348($s6)
    ctx->pc = 0x193774u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 840)));
    // 0x193778: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x193778u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19377c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19377cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x193780: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x193780u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x193784: 0x1602000c  bne         $s0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x193784u;
    {
        const bool branch_taken_0x193784 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x193784) {
            ctx->pc = 0x1937B8u;
            return;
        }
    }
    ctx->pc = 0x19378Cu;
    // 0x19378c: 0xc7ac00ec  lwc1        $f12, 0xEC($sp)
    ctx->pc = 0x19378cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x193790: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x193790u;
    SET_GPR_U32(ctx, 31, 0x193798u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x193790u, 0x193798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193798u;
label_193798:
    // 0x193798: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x193798u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x19379c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x19379cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1937a0: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x1937a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1937a4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1937A4u;
    {
        const bool branch_taken_0x1937a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1937a4) {
            ctx->pc = 0x1937B0u;
            return;
        }
    }
    ctx->pc = 0x1937ACu;
    // 0x1937ac: 0x3411ffff  ori         $s1, $zero, 0xFFFF
    ctx->pc = 0x1937acu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->pc = 0x1937b0u;
}
