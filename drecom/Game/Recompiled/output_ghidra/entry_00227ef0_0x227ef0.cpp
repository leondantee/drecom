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

// Function: entry_00227ef0
// Address: 0x227ef0 - 0x227f20
void entry_00227ef0_0x227ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00227ef0_0x227ef0");
#endif

    switch (ctx->pc) {
        case 0x227efcu: goto label_227efc;
        default: break;
    }

    ctx->pc = 0x227ef0u;

    // 0x227ef0: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x227ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x227ef4: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x227EF4u;
    SET_GPR_U32(ctx, 31, 0x227EFCu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x227EF4u, 0x227EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227EFCu;
label_227efc:
    // 0x227efc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x227efcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x227f00: 0x8fb300a8  lw          $s3, 0xA8($sp)
    ctx->pc = 0x227f00u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x227f04: 0x8665127a  lh          $a1, 0x127A($s3)
    ctx->pc = 0x227f04u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 4730)));
    // 0x227f08: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x227F08u;
    {
        const bool branch_taken_0x227f08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x227f08) {
            ctx->pc = 0x227F20u;
            return;
        }
    }
    ctx->pc = 0x227F10u;
    // 0x227f10: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x227f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x227f14: 0x8483127a  lh          $v1, 0x127A($a0)
    ctx->pc = 0x227f14u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4730)));
    // 0x227f18: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x227f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x227f1c: 0xa483127a  sh          $v1, 0x127A($a0)
    ctx->pc = 0x227f1cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4730), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x227f20u;
}
