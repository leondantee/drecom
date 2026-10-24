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

// Function: entry_0020c8b4
// Address: 0x20c8b4 - 0x20c90c
void entry_0020c8b4_0x20c8b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020c8b4_0x20c8b4");
#endif

    ctx->pc = 0x20c8b4u;

    // 0x20c8b4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20c8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c8b8: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x20c8b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x20c8bc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20c8bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20c8c0: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x20c8c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x20c8c4: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x20C8C4u;
    {
        const bool branch_taken_0x20c8c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c8c4) {
            ctx->pc = 0x20C9A8u;
            return;
        }
    }
    ctx->pc = 0x20C8CCu;
    // 0x20c8cc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20c8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c8d0: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x20c8d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x20c8d4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20c8d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20c8d8: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x20c8d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x20c8dc: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x20C8DCu;
    {
        const bool branch_taken_0x20c8dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c8dc) {
            ctx->pc = 0x20C970u;
            return;
        }
    }
    ctx->pc = 0x20C8E4u;
    // 0x20c8e4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x20c8e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x20c8e8: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x20c8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x20c8ec: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x20c8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x20c8f0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x20c8f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x20c8f4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20C8F4u;
    {
        const bool branch_taken_0x20c8f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c8f4) {
            ctx->pc = 0x20C90Cu;
            return;
        }
    }
    ctx->pc = 0x20C8FCu;
    // 0x20c8fc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x20c8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c900: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x20c900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x20c904: 0xc0bac10  jal         func_2EB040
    ctx->pc = 0x20C904u;
    SET_GPR_U32(ctx, 31, 0x20C90Cu);
    ctx->pc = 0x2EB040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EB040u, 0x20C904u, 0x20C90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C90Cu;
}
