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

// Function: entry_0032a834
// Address: 0x32a834 - 0x32a87c
void entry_0032a834_0x32a834(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032a834_0x32a834");
#endif

    switch (ctx->pc) {
        case 0x32a83cu: goto label_32a83c;
        case 0x32a844u: goto label_32a844;
        case 0x32a84cu: goto label_32a84c;
        default: break;
    }

    ctx->pc = 0x32a834u;

    // 0x32a834: 0xc0ca854  jal         func_32A150
    ctx->pc = 0x32A834u;
    SET_GPR_U32(ctx, 31, 0x32A83Cu);
    ctx->pc = 0x32A150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A150u, 0x32A834u, 0x32A83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A83Cu;
label_32a83c:
    // 0x32a83c: 0xc0ca5a8  jal         func_3296A0
    ctx->pc = 0x32A83Cu;
    SET_GPR_U32(ctx, 31, 0x32A844u);
    ctx->pc = 0x3296A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3296A0u, 0x32A83Cu, 0x32A844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A844u;
label_32a844:
    // 0x32a844: 0xc0cab34  jal         func_32ACD0
    ctx->pc = 0x32A844u;
    SET_GPR_U32(ctx, 31, 0x32A84Cu);
    ctx->pc = 0x32ACD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32ACD0u, 0x32A844u, 0x32A84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A84Cu;
label_32a84c:
    // 0x32a84c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32a84cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x32a850: 0x942300dc  lhu         $v1, 0xDC($at)
    ctx->pc = 0x32a850u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00DCu));
    // 0x32a854: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x32a854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x32a858: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x32a858u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x32a85c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x32A85Cu;
    {
        const bool branch_taken_0x32a85c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a85c) {
            ctx->pc = 0x32A87Cu;
            return;
        }
    }
    ctx->pc = 0x32A864u;
    // 0x32a864: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x32a864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x32a868: 0x8c23a230  lw          $v1, -0x5DD0($at)
    ctx->pc = 0x32a868u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x39A230u));
    // 0x32a86c: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x32a86cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x32a870: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x32a870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x32a874: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x32a874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x32a878: 0xac23a230  sw          $v1, -0x5DD0($at)
    ctx->pc = 0x32a878u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x39A230u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x39A230u, _value); } while (0);
    ctx->pc = 0x32a87cu;
}
