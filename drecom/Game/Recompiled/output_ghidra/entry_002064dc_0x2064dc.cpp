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

// Function: entry_002064dc
// Address: 0x2064dc - 0x206534
void entry_002064dc_0x2064dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002064dc_0x2064dc");
#endif

    ctx->pc = 0x2064dcu;

    // 0x2064dc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2064dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2064e0: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x2064e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x2064e4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2064e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2064e8: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x2064e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x2064ec: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2064ECu;
    {
        const bool branch_taken_0x2064ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2064ec) {
            ctx->pc = 0x206584u;
            return;
        }
    }
    ctx->pc = 0x2064F4u;
    // 0x2064f4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2064f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2064f8: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x2064f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x2064fc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2064fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x206500: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x206500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x206504: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x206504u;
    {
        const bool branch_taken_0x206504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x206504) {
            ctx->pc = 0x20654Cu;
            return;
        }
    }
    ctx->pc = 0x20650Cu;
    // 0x20650c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x20650cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x206510: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x206510u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x206514: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x206514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x206518: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x206518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x20651c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20651Cu;
    {
        const bool branch_taken_0x20651c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20651c) {
            ctx->pc = 0x206534u;
            return;
        }
    }
    ctx->pc = 0x206524u;
    // 0x206524: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x206524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x206528: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x206528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x20652c: 0xc0bac10  jal         func_2EB040
    ctx->pc = 0x20652Cu;
    SET_GPR_U32(ctx, 31, 0x206534u);
    ctx->pc = 0x2EB040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EB040u, 0x20652Cu, 0x206534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206534u;
}
