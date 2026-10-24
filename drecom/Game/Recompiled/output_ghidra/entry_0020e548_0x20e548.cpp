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

// Function: entry_0020e548
// Address: 0x20e548 - 0x20e5b8
void entry_0020e548_0x20e548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020e548_0x20e548");
#endif

    switch (ctx->pc) {
        case 0x20e558u: goto label_20e558;
        case 0x20e564u: goto label_20e564;
        default: break;
    }

    ctx->pc = 0x20e548u;

    // 0x20e548: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x20e548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e54c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x20e54cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20e550: 0xc080f60  jal         func_203D80
    ctx->pc = 0x20E550u;
    SET_GPR_U32(ctx, 31, 0x20E558u);
    ctx->pc = 0x203D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203D80u, 0x20E550u, 0x20E558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E558u;
label_20e558:
    // 0x20e558: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x20e558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e55c: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x20E55Cu;
    SET_GPR_U32(ctx, 31, 0x20E564u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x20E55Cu, 0x20E564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E564u;
label_20e564:
    // 0x20e564: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x20e564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e568: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x20e568u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x20e56c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x20e56cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x20e570: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x20e570u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x20e574: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x20e574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e578: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x20e578u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x20e57c: 0x1060003a  beqz        $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x20E57Cu;
    {
        const bool branch_taken_0x20e57c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e57c) {
            ctx->pc = 0x20E668u;
            return;
        }
    }
    ctx->pc = 0x20E584u;
    // 0x20e584: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x20e584u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x20e588: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x20e588u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x20e58c: 0x3c03ffdf  lui         $v1, 0xFFDF
    ctx->pc = 0x20e58cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65503 << 16));
    // 0x20e590: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x20e590u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x20e594: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x20e594u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x20e598: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x20e598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x20e59c: 0xac231a98  sw          $v1, 0x1A98($at)
    ctx->pc = 0x20e59cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x20e5a0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x20e5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e5a4: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x20e5a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x20e5a8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x20e5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x20e5ac: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x20e5acu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x20e5b0: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x20E5B0u;
    {
        const bool branch_taken_0x20e5b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e5b0) {
            ctx->pc = 0x20E668u;
            return;
        }
    }
    ctx->pc = 0x20E5B8u;
}
