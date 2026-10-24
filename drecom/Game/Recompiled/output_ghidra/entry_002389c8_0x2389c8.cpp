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

// Function: entry_002389c8
// Address: 0x2389c8 - 0x238a14
void entry_002389c8_0x2389c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002389c8_0x2389c8");
#endif

    switch (ctx->pc) {
        case 0x2389d8u: goto label_2389d8;
        case 0x2389e4u: goto label_2389e4;
        default: break;
    }

    ctx->pc = 0x2389c8u;

    // 0x2389c8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2389c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2389cc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2389ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2389d0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2389D0u;
    SET_GPR_U32(ctx, 31, 0x2389D8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2389D0u, 0x2389D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2389D8u;
label_2389d8:
    // 0x2389d8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2389d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2389dc: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2389DCu;
    SET_GPR_U32(ctx, 31, 0x2389E4u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2389DCu, 0x2389E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2389E4u;
label_2389e4:
    // 0x2389e4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2389e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2389e8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2389e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2389ec: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2389ECu;
    {
        const bool branch_taken_0x2389ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2389ec) {
            ctx->pc = 0x238A14u;
            return;
        }
    }
    ctx->pc = 0x2389F4u;
    // 0x2389f4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2389f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2389f8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2389f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2389fc: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2389fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x238a00: 0x24061e00  addiu       $a2, $zero, 0x1E00
    ctx->pc = 0x238a00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7680));
    // 0x238a04: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x238a04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x238a08: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x238a08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x238a0c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x238A0Cu;
    SET_GPR_U32(ctx, 31, 0x238A14u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x238A0Cu, 0x238A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238A14u;
}
