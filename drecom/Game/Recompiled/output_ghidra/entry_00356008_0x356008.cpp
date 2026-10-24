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

// Function: entry_00356008
// Address: 0x356008 - 0x356084
void entry_00356008_0x356008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00356008_0x356008");
#endif

    switch (ctx->pc) {
        case 0x356054u: goto label_356054;
        default: break;
    }

    ctx->pc = 0x356008u;

    // 0x356008: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x356008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35600c: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x35600cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x356010: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x356010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x356014: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x356014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x356018: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x356018u;
    {
        const bool branch_taken_0x356018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x356018) {
            ctx->pc = 0x356084u;
            return;
        }
    }
    ctx->pc = 0x356020u;
    // 0x356020: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x356020u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x356024: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x356024u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x356028: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x356028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x35602c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x35602cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x356030: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x356030u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x356034: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x356034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x356038: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x356038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35603c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x35603cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x356040: 0x8c841344  lw          $a0, 0x1344($a0)
    ctx->pc = 0x356040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4932)));
    // 0x356044: 0x8c651334  lw          $a1, 0x1334($v1)
    ctx->pc = 0x356044u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4916)));
    // 0x356048: 0x8c46133c  lw          $a2, 0x133C($v0)
    ctx->pc = 0x356048u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4924)));
    // 0x35604c: 0xc050f5c  jal         func_143D70
    ctx->pc = 0x35604Cu;
    SET_GPR_U32(ctx, 31, 0x356054u);
    ctx->pc = 0x143D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143D70u, 0x35604Cu, 0x356054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356054u;
label_356054:
    // 0x356054: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x356054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x356058: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x356058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x35605c: 0xa0400a20  sb          $zero, 0xA20($v0)
    ctx->pc = 0x35605cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2592), (uint8_t)GPR_U32(ctx, 0));
    // 0x356060: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x356060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x356064: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x356064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x356068: 0xa0400990  sb          $zero, 0x990($v0)
    ctx->pc = 0x356068u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2448), (uint8_t)GPR_U32(ctx, 0));
    // 0x35606c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x35606cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x356070: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x356070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x356074: 0xa0400900  sb          $zero, 0x900($v0)
    ctx->pc = 0x356074u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2304), (uint8_t)GPR_U32(ctx, 0));
    // 0x356078: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x356078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35607c: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x35607cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x356080: 0xa04002d0  sb          $zero, 0x2D0($v0)
    ctx->pc = 0x356080u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 720), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x356084u;
}
