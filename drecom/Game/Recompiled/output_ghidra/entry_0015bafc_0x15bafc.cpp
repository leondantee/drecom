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

// Function: entry_0015bafc
// Address: 0x15bafc - 0x15bb3c
void entry_0015bafc_0x15bafc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015bafc_0x15bafc");
#endif

    switch (ctx->pc) {
        case 0x15bb04u: goto label_15bb04;
        default: break;
    }

    ctx->pc = 0x15bafcu;

    // 0x15bafc: 0xc056fe0  jal         func_15BF80
    ctx->pc = 0x15BAFCu;
    SET_GPR_U32(ctx, 31, 0x15BB04u);
    ctx->pc = 0x15BF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BF80u, 0x15BAFCu, 0x15BB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BB04u;
label_15bb04:
    // 0x15bb04: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x15BB04u;
    {
        const bool branch_taken_0x15bb04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bb04) {
            ctx->pc = 0x15BB90u;
            return;
        }
    }
    ctx->pc = 0x15BB0Cu;
    // 0x15bb0c: 0x8e0313ec  lw          $v1, 0x13EC($s0)
    ctx->pc = 0x15bb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5100)));
    // 0x15bb10: 0x90630012  lbu         $v1, 0x12($v1)
    ctx->pc = 0x15bb10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x15bb14: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x15bb14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x15bb18: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x15bb18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x15bb1c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x15BB1Cu;
    {
        const bool branch_taken_0x15bb1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bb1c) {
            ctx->pc = 0x15BB3Cu;
            return;
        }
    }
    ctx->pc = 0x15BB24u;
    // 0x15bb24: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15bb24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15bb28: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x15bb28u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x15bb2c: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x15bb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x15bb30: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x15bb30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x15bb34: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15bb34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15bb38: 0xac231a98  sw          $v1, 0x1A98($at)
    ctx->pc = 0x15bb38u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    ctx->pc = 0x15bb3cu;
}
