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

// Function: entry_0019b680
// Address: 0x19b680 - 0x19b6f0
void entry_0019b680_0x19b680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b680_0x19b680");
#endif

    switch (ctx->pc) {
        case 0x19b690u: goto label_19b690;
        case 0x19b69cu: goto label_19b69c;
        default: break;
    }

    ctx->pc = 0x19b680u;

    // 0x19b680: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x19b680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b684: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x19b684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19b688: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x19B688u;
    SET_GPR_U32(ctx, 31, 0x19B690u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x19B688u, 0x19B690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B690u;
label_19b690:
    // 0x19b690: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x19b690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b694: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x19B694u;
    SET_GPR_U32(ctx, 31, 0x19B69Cu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x19B694u, 0x19B69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B69Cu;
label_19b69c:
    // 0x19b69c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x19b69cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b6a0: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x19b6a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x19b6a4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19b6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19b6a8: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x19b6a8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x19b6ac: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19b6acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b6b0: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x19b6b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x19b6b4: 0x10600044  beqz        $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x19B6B4u;
    {
        const bool branch_taken_0x19b6b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b6b4) {
            ctx->pc = 0x19B7C8u;
            return;
        }
    }
    ctx->pc = 0x19B6BCu;
    // 0x19b6bc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19b6bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19b6c0: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x19b6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x19b6c4: 0x3c03ffdf  lui         $v1, 0xFFDF
    ctx->pc = 0x19b6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65503 << 16));
    // 0x19b6c8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x19b6c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x19b6cc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x19b6ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x19b6d0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19b6d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19b6d4: 0xac231a98  sw          $v1, 0x1A98($at)
    ctx->pc = 0x19b6d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x19b6d8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x19b6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b6dc: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x19b6dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x19b6e0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19b6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19b6e4: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x19b6e4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x19b6e8: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x19B6E8u;
    {
        const bool branch_taken_0x19b6e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b6e8) {
            ctx->pc = 0x19B7C8u;
            return;
        }
    }
    ctx->pc = 0x19B6F0u;
}
