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

// Function: entry_002d8684
// Address: 0x2d8684 - 0x2d86d0
void entry_002d8684_0x2d8684(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d8684_0x2d8684");
#endif

    switch (ctx->pc) {
        case 0x2d8690u: goto label_2d8690;
        default: break;
    }

    ctx->pc = 0x2d8684u;

    // 0x2d8684: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2d8684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8688: 0xc0b63e8  jal         func_2D8FA0
    ctx->pc = 0x2D8688u;
    SET_GPR_U32(ctx, 31, 0x2D8690u);
    ctx->pc = 0x2D8FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8FA0u, 0x2D8688u, 0x2D8690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8690u;
label_2d8690:
    // 0x2d8690: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2d8690u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2d8694: 0x920300d5  lbu         $v1, 0xD5($s0)
    ctx->pc = 0x2d8694u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 213)));
    // 0x2d8698: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2d8698u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d869c: 0x28610005  slti        $at, $v1, 0x5
    ctx->pc = 0x2d869cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2d86a0: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x2D86A0u;
    {
        const bool branch_taken_0x2d86a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d86a0) {
            ctx->pc = 0x2D86D0u;
            return;
        }
    }
    ctx->pc = 0x2D86A8u;
    // 0x2d86a8: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x2d86a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d86ac: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2d86acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2d86b0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x2d86b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x2d86b4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2d86b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2d86b8: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x2d86b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x2d86bc: 0x920300d5  lbu         $v1, 0xD5($s0)
    ctx->pc = 0x2d86bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 213)));
    // 0x2d86c0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2d86c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d86c4: 0xa20300d5  sb          $v1, 0xD5($s0)
    ctx->pc = 0x2d86c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 213), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d86c8: 0x1000022d  b           . + 4 + (0x22D << 2)
    ctx->pc = 0x2D86C8u;
    {
        const bool branch_taken_0x2d86c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d86c8) {
            ctx->pc = 0x2D8F80u;
            return;
        }
    }
    ctx->pc = 0x2D86D0u;
}
