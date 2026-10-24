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

// Function: entry_0027e5a8
// Address: 0x27e5a8 - 0x27e618
void entry_0027e5a8_0x27e5a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027e5a8_0x27e5a8");
#endif

    switch (ctx->pc) {
        case 0x27e5b8u: goto label_27e5b8;
        default: break;
    }

    ctx->pc = 0x27e5a8u;

    // 0x27e5a8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27e5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27e5ac: 0x244413f0  addiu       $a0, $v0, 0x13F0
    ctx->pc = 0x27e5acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5104));
    // 0x27e5b0: 0xc0a1048  jal         func_284120
    ctx->pc = 0x27E5B0u;
    SET_GPR_U32(ctx, 31, 0x27E5B8u);
    ctx->pc = 0x284120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284120u, 0x27E5B0u, 0x27E5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E5B8u;
label_27e5b8:
    // 0x27e5b8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27e5b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27e5bc: 0x8c241aa4  lw          $a0, 0x1AA4($at)
    ctx->pc = 0x27e5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1AA4u));
    // 0x27e5c0: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x27e5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x27e5c4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x27e5c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x27e5c8: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x27E5C8u;
    {
        const bool branch_taken_0x27e5c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27e5c8) {
            ctx->pc = 0x27E618u;
            return;
        }
    }
    ctx->pc = 0x27E5D0u;
    // 0x27e5d0: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x27e5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x27e5d4: 0x2463ed50  addiu       $v1, $v1, -0x12B0
    ctx->pc = 0x27e5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962512));
    // 0x27e5d8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27e5d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27e5dc: 0xac23dafc  sw          $v1, -0x2504($at)
    ctx->pc = 0x27e5dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CDAFCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CDAFCu, _value); } while (0);
    // 0x27e5e0: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x27e5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x27e5e4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27e5e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27e5e8: 0xac23daf8  sw          $v1, -0x2508($at)
    ctx->pc = 0x27e5e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CDAF8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CDAF8u, _value); } while (0);
    // 0x27e5ec: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x27e5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x27e5f0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27e5f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27e5f4: 0xa023daf1  sb          $v1, -0x250F($at)
    ctx->pc = 0x27e5f4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CDAF1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CDAF1u, _value); } while (0);
    // 0x27e5f8: 0x24030091  addiu       $v1, $zero, 0x91
    ctx->pc = 0x27e5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 145));
    // 0x27e5fc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27e5fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27e600: 0xa023daf3  sb          $v1, -0x250D($at)
    ctx->pc = 0x27e600u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CDAF3u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CDAF3u, _value); } while (0);
    // 0x27e604: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x27e604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27e608: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27e608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27e60c: 0xa023d551  sb          $v1, -0x2AAF($at)
    ctx->pc = 0x27e60cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CD551u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD551u, _value); } while (0);
    // 0x27e610: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x27E610u;
    {
        const bool branch_taken_0x27e610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e610) {
            ctx->pc = 0x27E624u;
            return;
        }
    }
    ctx->pc = 0x27E618u;
}
