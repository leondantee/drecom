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

// Function: entry_001873d0
// Address: 0x1873d0 - 0x187404
void entry_001873d0_0x1873d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001873d0_0x1873d0");
#endif

    switch (ctx->pc) {
        case 0x1873f0u: goto label_1873f0;
        default: break;
    }

    ctx->pc = 0x1873d0u;

    // 0x1873d0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1873d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1873d4: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x1873d4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1873d8: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x1873d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x1873dc: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1873DCu;
    {
        const bool branch_taken_0x1873dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1873dc) {
            ctx->pc = 0x187430u;
            return;
        }
    }
    ctx->pc = 0x1873E4u;
    // 0x1873e4: 0x24040021  addiu       $a0, $zero, 0x21
    ctx->pc = 0x1873e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x1873e8: 0xc061014  jal         func_184050
    ctx->pc = 0x1873E8u;
    SET_GPR_U32(ctx, 31, 0x1873F0u);
    ctx->pc = 0x184050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184050u, 0x1873E8u, 0x1873F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1873F0u;
label_1873f0:
    // 0x1873f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1873f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1873f4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1873f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1873f8: 0xac230358  sw          $v1, 0x358($at)
    ctx->pc = 0x1873f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x480358u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x480358u, _value); } while (0);
    // 0x1873fc: 0x100001d1  b           . + 4 + (0x1D1 << 2)
    ctx->pc = 0x1873FCu;
    {
        const bool branch_taken_0x1873fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1873fc) {
            ctx->pc = 0x187B44u;
            return;
        }
    }
    ctx->pc = 0x187404u;
}
