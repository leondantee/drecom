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

// Function: entry_001bb790
// Address: 0x1bb790 - 0x1bb7c4
void entry_001bb790_0x1bb790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bb790_0x1bb790");
#endif

    switch (ctx->pc) {
        case 0x1bb79cu: goto label_1bb79c;
        default: break;
    }

    ctx->pc = 0x1bb790u;

    // 0x1bb790: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1bb790u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1bb794: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1BB794u;
    SET_GPR_U32(ctx, 31, 0x1BB79Cu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1BB794u, 0x1BB79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB79Cu;
label_1bb79c:
    // 0x1bb79c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bb79cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb7a0: 0x8c631b60  lw          $v1, 0x1B60($v1)
    ctx->pc = 0x1bb7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7008)));
    // 0x1bb7a4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BB7A4u;
    {
        const bool branch_taken_0x1bb7a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb7a4) {
            ctx->pc = 0x1BB7C4u;
            return;
        }
    }
    ctx->pc = 0x1BB7ACu;
    // 0x1bb7ac: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1bb7acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb7b0: 0x90910003  lbu         $s1, 0x3($a0)
    ctx->pc = 0x1bb7b0u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x1bb7b4: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x1bb7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1bb7b8: 0xa0830003  sb          $v1, 0x3($a0)
    ctx->pc = 0x1bb7b8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x1bb7bc: 0x100000d4  b           . + 4 + (0xD4 << 2)
    ctx->pc = 0x1BB7BCu;
    {
        const bool branch_taken_0x1bb7bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb7bc) {
            ctx->pc = 0x1BBB10u;
            return;
        }
    }
    ctx->pc = 0x1BB7C4u;
}
