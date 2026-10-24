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

// Function: entry_00140994
// Address: 0x140994 - 0x1409d4
void entry_00140994_0x140994(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140994_0x140994");
#endif

    switch (ctx->pc) {
        case 0x1409ccu: goto label_1409cc;
        default: break;
    }

    ctx->pc = 0x140994u;

    // 0x140994: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x140994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x140998: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x140998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x14099c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14099cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10000800u));
    // 0x1409a0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1409a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1409a4: 0xac228ee8  sw          $v0, -0x7118($at)
    ctx->pc = 0x1409a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3E8EE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E8EE8u, _value); } while (0);
    // 0x1409a8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1409a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1409ac: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x1409acu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1409b0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1409b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1409b4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1409b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1409b8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1409B8u;
    {
        const bool branch_taken_0x1409b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1409b8) {
            ctx->pc = 0x1409D4u;
            return;
        }
    }
    ctx->pc = 0x1409C0u;
    // 0x1409c0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1409c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1409c4: 0xc061c5c  jal         func_187170
    ctx->pc = 0x1409C4u;
    SET_GPR_U32(ctx, 31, 0x1409CCu);
    ctx->pc = 0x187170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187170u, 0x1409C4u, 0x1409CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1409CCu;
label_1409cc:
    // 0x1409cc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1409CCu;
    {
        const bool branch_taken_0x1409cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1409cc) {
            ctx->pc = 0x140A0Cu;
            return;
        }
    }
    ctx->pc = 0x1409D4u;
}
