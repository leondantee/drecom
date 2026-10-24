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

// Function: caseD_b
// Address: 0x1878ac - 0x1878f8
void caseD_b_0x1878ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_b_0x1878ac");
#endif

    switch (ctx->pc) {
        case 0x1878e8u: goto label_1878e8;
        default: break;
    }

    ctx->pc = 0x1878acu;

    // 0x1878ac: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1878acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1878b0: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x1878b0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1878b4: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x1878b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x1878b8: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1878B8u;
    {
        const bool branch_taken_0x1878b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1878b8) {
            ctx->pc = 0x1878F8u;
            return;
        }
    }
    ctx->pc = 0x1878C0u;
    // 0x1878c0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1878c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1878c4: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x1878c4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1878c8: 0x3c02fffb  lui         $v0, 0xFFFB
    ctx->pc = 0x1878c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65531 << 16));
    // 0x1878cc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1878ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1878d0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1878d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1878d4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1878d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1878d8: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x1878d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x1878dc: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x1878dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1878e0: 0xc061014  jal         func_184050
    ctx->pc = 0x1878E0u;
    SET_GPR_U32(ctx, 31, 0x1878E8u);
    ctx->pc = 0x184050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184050u, 0x1878E0u, 0x1878E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1878E8u;
label_1878e8:
    // 0x1878e8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1878e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1878ec: 0xac200350  sw          $zero, 0x350($at)
    ctx->pc = 0x1878ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x480350u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x480350u, _value); } while (0);
    // 0x1878f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1878F0u;
    {
        const bool branch_taken_0x1878f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1878f0) {
            ctx->pc = 0x187900u;
            return;
        }
    }
    ctx->pc = 0x1878F8u;
}
