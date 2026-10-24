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

// Function: entry_0013bce8
// Address: 0x13bce8 - 0x13bd10
void entry_0013bce8_0x13bce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013bce8_0x13bce8");
#endif

    switch (ctx->pc) {
        case 0x13bd0cu: goto label_13bd0c;
        default: break;
    }

    ctx->pc = 0x13bce8u;

    // 0x13bce8: 0x92030101  lbu         $v1, 0x101($s0)
    ctx->pc = 0x13bce8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 257)));
    // 0x13bcec: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x13bcecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x13bcf0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x13bcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13bcf4: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x13BCF4u;
    {
        const bool branch_taken_0x13bcf4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x13bcf4) {
            ctx->pc = 0x13BD10u;
            return;
        }
    }
    ctx->pc = 0x13BCFCu;
    // 0x13bcfc: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x13bcfcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x13bd00: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x13bd00u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x13bd04: 0xc04f7e0  jal         func_13DF80
    ctx->pc = 0x13BD04u;
    SET_GPR_U32(ctx, 31, 0x13BD0Cu);
    ctx->pc = 0x13DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DF80u, 0x13BD04u, 0x13BD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BD0Cu;
label_13bd0c:
    // 0x13bd0c: 0x0  nop
    ctx->pc = 0x13bd0cu;
    // NOP
    ctx->pc = 0x13bd10u;
}
