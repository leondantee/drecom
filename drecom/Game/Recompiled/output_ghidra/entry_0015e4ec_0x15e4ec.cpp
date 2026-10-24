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

// Function: entry_0015e4ec
// Address: 0x15e4ec - 0x15e558
void entry_0015e4ec_0x15e4ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e4ec_0x15e4ec");
#endif

    switch (ctx->pc) {
        case 0x15e520u: goto label_15e520;
        default: break;
    }

    ctx->pc = 0x15e4ecu;

    // 0x15e4ec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15e4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15e4f0: 0xa4601416  sh          $zero, 0x1416($v1)
    ctx->pc = 0x15e4f0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 5142), (uint16_t)GPR_U32(ctx, 0));
    // 0x15e4f4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15e4f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15e4f8: 0x8c231a40  lw          $v1, 0x1A40($at)
    ctx->pc = 0x15e4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A40u));
    // 0x15e4fc: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x15e4fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x15e500: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x15E500u;
    {
        const bool branch_taken_0x15e500 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e500) {
            ctx->pc = 0x15E558u;
            return;
        }
    }
    ctx->pc = 0x15E508u;
    // 0x15e508: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x15e508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15e50c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x15e50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15e510: 0x844611f2  lh          $a2, 0x11F2($v0)
    ctx->pc = 0x15e510u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4594)));
    // 0x15e514: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x15e514u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x15e518: 0xc06d1d8  jal         func_1B4760
    ctx->pc = 0x15E518u;
    SET_GPR_U32(ctx, 31, 0x15E520u);
    ctx->pc = 0x1B4760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4760u, 0x15E518u, 0x15E520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E520u;
label_15e520:
    // 0x15e520: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15e520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15e524: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x15e524u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x15e528: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x15e528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x15e52c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x15e52cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x15e530: 0x4610009  bgez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x15E530u;
    {
        const bool branch_taken_0x15e530 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x15e530) {
            ctx->pc = 0x15E558u;
            return;
        }
    }
    ctx->pc = 0x15E538u;
    // 0x15e538: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15e538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15e53c: 0x906311ee  lbu         $v1, 0x11EE($v1)
    ctx->pc = 0x15e53cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4590)));
    // 0x15e540: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x15e540u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x15e544: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x15e544u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x15e548: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15E548u;
    {
        const bool branch_taken_0x15e548 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e548) {
            ctx->pc = 0x15E558u;
            return;
        }
    }
    ctx->pc = 0x15E550u;
    // 0x15e550: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15e550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15e554: 0xa46010a6  sh          $zero, 0x10A6($v1)
    ctx->pc = 0x15e554u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4262), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x15e558u;
}
