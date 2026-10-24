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

// Function: entry_003093e4
// Address: 0x3093e4 - 0x309440
void entry_003093e4_0x3093e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003093e4_0x3093e4");
#endif

    switch (ctx->pc) {
        case 0x309404u: goto label_309404;
        case 0x309430u: goto label_309430;
        default: break;
    }

    ctx->pc = 0x3093e4u;

    // 0x3093e4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3093e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3093e8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3093e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3093ec: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3093ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3093f0: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x3093f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x3093f4: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x3093f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3093f8: 0x24451240  addiu       $a1, $v0, 0x1240
    ctx->pc = 0x3093f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4672));
    // 0x3093fc: 0xc05cc90  jal         func_173240
    ctx->pc = 0x3093FCu;
    SET_GPR_U32(ctx, 31, 0x309404u);
    ctx->pc = 0x173240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173240u, 0x3093FCu, 0x309404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309404u;
label_309404:
    // 0x309404: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x309404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x309408: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x309408u;
    {
        const bool branch_taken_0x309408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x309408) {
            ctx->pc = 0x309440u;
            return;
        }
    }
    ctx->pc = 0x309410u;
    // 0x309410: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x309410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309414: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x309414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309418: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x309418u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x30941c: 0x24062834  addiu       $a2, $zero, 0x2834
    ctx->pc = 0x30941cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10292));
    // 0x309420: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x309420u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x309424: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x309424u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x309428: 0xc0965d0  jal         func_259740
    ctx->pc = 0x309428u;
    SET_GPR_U32(ctx, 31, 0x309430u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x309428u, 0x309430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309430u;
label_309430:
    // 0x309430: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x309430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309434: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x309434u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x309438: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x309438u;
    {
        const bool branch_taken_0x309438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x309438) {
            ctx->pc = 0x30946Cu;
            return;
        }
    }
    ctx->pc = 0x309440u;
}
