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

// Function: entry_001a27a4
// Address: 0x1a27a4 - 0x1a2804
void entry_001a27a4_0x1a27a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a27a4_0x1a27a4");
#endif

    switch (ctx->pc) {
        case 0x1a27fcu: goto label_1a27fc;
        default: break;
    }

    ctx->pc = 0x1a27a4u;

    // 0x1a27a4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1a27a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1a27a8: 0xac730010  sw          $s3, 0x10($v1)
    ctx->pc = 0x1a27a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 19));
    // 0x1a27ac: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x1a27acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1a27b0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1a27b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1a27b4: 0x34630800  ori         $v1, $v1, 0x800
    ctx->pc = 0x1a27b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
    // 0x1a27b8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1a27b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1a27bc: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1A27BCu;
    {
        const bool branch_taken_0x1a27bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a27bc) {
            ctx->pc = 0x1A2834u;
            return;
        }
    }
    ctx->pc = 0x1A27C4u;
    // 0x1a27c4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1a27c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1a27c8: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x1a27c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1a27cc: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1A27CCu;
    {
        const bool branch_taken_0x1a27cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a27cc) {
            ctx->pc = 0x1A2804u;
            return;
        }
    }
    ctx->pc = 0x1A27D4u;
    // 0x1a27d4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a27d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a27d8: 0x8c231a40  lw          $v1, 0x1A40($at)
    ctx->pc = 0x1a27d8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A40u));
    // 0x1a27dc: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x1a27dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x1a27e0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1a27e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1a27e4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a27e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a27e8: 0xac221a40  sw          $v0, 0x1A40($at)
    ctx->pc = 0x1a27e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A40u, _value); } while (0);
    // 0x1a27ec: 0x3c0403ff  lui         $a0, 0x3FF
    ctx->pc = 0x1a27ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1023 << 16));
    // 0x1a27f0: 0x3c05001e  lui         $a1, 0x1E
    ctx->pc = 0x1a27f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
    // 0x1a27f4: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x1A27F4u;
    SET_GPR_U32(ctx, 31, 0x1A27FCu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x1A27F4u, 0x1A27FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A27FCu;
label_1a27fc:
    // 0x1a27fc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1A27FCu;
    {
        const bool branch_taken_0x1a27fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a27fc) {
            ctx->pc = 0x1A2818u;
            return;
        }
    }
    ctx->pc = 0x1A2804u;
}
