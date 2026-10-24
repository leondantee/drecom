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

// Function: entry_0020c350
// Address: 0x20c350 - 0x20c3a8
void entry_0020c350_0x20c350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020c350_0x20c350");
#endif

    ctx->pc = 0x20c350u;

    // 0x20c350: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20c350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c354: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x20c354u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x20c358: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20c358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20c35c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x20c35cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x20c360: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x20C360u;
    {
        const bool branch_taken_0x20c360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c360) {
            ctx->pc = 0x20C3B8u;
            return;
        }
    }
    ctx->pc = 0x20C368u;
    // 0x20c368: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20c368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c36c: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x20c36cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x20c370: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20c370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20c374: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x20c374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x20c378: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x20C378u;
    {
        const bool branch_taken_0x20c378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c378) {
            ctx->pc = 0x20C3B8u;
            return;
        }
    }
    ctx->pc = 0x20C380u;
    // 0x20c380: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x20c380u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x20c384: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x20c384u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x20c388: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x20c388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x20c38c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x20c38cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x20c390: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20C390u;
    {
        const bool branch_taken_0x20c390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c390) {
            ctx->pc = 0x20C3A8u;
            return;
        }
    }
    ctx->pc = 0x20C398u;
    // 0x20c398: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x20c398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c39c: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x20c39cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x20c3a0: 0xc0bac10  jal         func_2EB040
    ctx->pc = 0x20C3A0u;
    SET_GPR_U32(ctx, 31, 0x20C3A8u);
    ctx->pc = 0x2EB040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EB040u, 0x20C3A0u, 0x20C3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C3A8u;
}
