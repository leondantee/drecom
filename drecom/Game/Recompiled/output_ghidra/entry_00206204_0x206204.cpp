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

// Function: entry_00206204
// Address: 0x206204 - 0x20625c
void entry_00206204_0x206204(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00206204_0x206204");
#endif

    ctx->pc = 0x206204u;

    // 0x206204: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x206204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x206208: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x206208u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x20620c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20620cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x206210: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x206210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x206214: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x206214u;
    {
        const bool branch_taken_0x206214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x206214) {
            ctx->pc = 0x2062ACu;
            return;
        }
    }
    ctx->pc = 0x20621Cu;
    // 0x20621c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x20621cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x206220: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x206220u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x206224: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x206224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x206228: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x206228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x20622c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x20622Cu;
    {
        const bool branch_taken_0x20622c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20622c) {
            ctx->pc = 0x206274u;
            return;
        }
    }
    ctx->pc = 0x206234u;
    // 0x206234: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x206234u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x206238: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x206238u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x20623c: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x20623cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x206240: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x206240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x206244: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x206244u;
    {
        const bool branch_taken_0x206244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x206244) {
            ctx->pc = 0x20625Cu;
            return;
        }
    }
    ctx->pc = 0x20624Cu;
    // 0x20624c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x20624cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x206250: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x206250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x206254: 0xc0bac10  jal         func_2EB040
    ctx->pc = 0x206254u;
    SET_GPR_U32(ctx, 31, 0x20625Cu);
    ctx->pc = 0x2EB040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EB040u, 0x206254u, 0x20625Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20625Cu;
}
