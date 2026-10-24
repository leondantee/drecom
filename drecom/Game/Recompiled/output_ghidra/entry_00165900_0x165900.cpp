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

// Function: entry_00165900
// Address: 0x165900 - 0x165944
void entry_00165900_0x165900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165900_0x165900");
#endif

    switch (ctx->pc) {
        case 0x16593cu: goto label_16593c;
        default: break;
    }

    ctx->pc = 0x165900u;

    // 0x165900: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x165900u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x165904: 0xac205890  sw          $zero, 0x5890($at)
    ctx->pc = 0x165904u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3F5890u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F5890u, _value); } while (0);
    // 0x165908: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x165908u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x16590c: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x16590cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x165910: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x165910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x165914: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x165914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x165918: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x165918u;
    {
        const bool branch_taken_0x165918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165918) {
            ctx->pc = 0x165944u;
            return;
        }
    }
    ctx->pc = 0x165920u;
    // 0x165920: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x165920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x165924: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x165924u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x165928: 0xac225a08  sw          $v0, 0x5A08($at)
    ctx->pc = 0x165928u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F5A08u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F5A08u, _value); } while (0);
    // 0x16592c: 0x8e0500c0  lw          $a1, 0xC0($s0)
    ctx->pc = 0x16592cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x165930: 0x26040590  addiu       $a0, $s0, 0x590
    ctx->pc = 0x165930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1424));
    // 0x165934: 0xc0598c0  jal         func_166300
    ctx->pc = 0x165934u;
    SET_GPR_U32(ctx, 31, 0x16593Cu);
    ctx->pc = 0x166300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166300u, 0x165934u, 0x16593Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16593Cu;
label_16593c:
    // 0x16593c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x16593Cu;
    {
        const bool branch_taken_0x16593c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16593c) {
            ctx->pc = 0x165960u;
            return;
        }
    }
    ctx->pc = 0x165944u;
}
