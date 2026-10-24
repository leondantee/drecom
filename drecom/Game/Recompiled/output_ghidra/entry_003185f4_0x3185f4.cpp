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

// Function: entry_003185f4
// Address: 0x3185f4 - 0x318648
void entry_003185f4_0x3185f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003185f4_0x3185f4");
#endif

    switch (ctx->pc) {
        case 0x318614u: goto label_318614;
        default: break;
    }

    ctx->pc = 0x3185f4u;

    // 0x3185f4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3185f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3185f8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x3185f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3185fc: 0x244500e0  addiu       $a1, $v0, 0xE0
    ctx->pc = 0x3185fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x318600: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x318600u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x318604: 0x3c020086  lui         $v0, 0x86
    ctx->pc = 0x318604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)134 << 16));
    // 0x318608: 0x2447ae90  addiu       $a3, $v0, -0x5170
    ctx->pc = 0x318608u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946448));
    // 0x31860c: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x31860Cu;
    SET_GPR_U32(ctx, 31, 0x318614u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x31860Cu, 0x318614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318614u;
label_318614:
    // 0x318614: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x318614u;
    {
        const bool branch_taken_0x318614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x318614) {
            ctx->pc = 0x318684u;
            return;
        }
    }
    ctx->pc = 0x31861Cu;
    // 0x31861c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31861cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x318620: 0x8c631294  lw          $v1, 0x1294($v1)
    ctx->pc = 0x318620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4756)));
    // 0x318624: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x318624u;
    {
        const bool branch_taken_0x318624 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x318624) {
            ctx->pc = 0x318648u;
            return;
        }
    }
    ctx->pc = 0x31862Cu;
    // 0x31862c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x31862cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x318630: 0x9023edae  lbu         $v1, -0x1252($at)
    ctx->pc = 0x318630u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3EEDAEu));
    // 0x318634: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x318634u;
    {
        const bool branch_taken_0x318634 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x318634) {
            ctx->pc = 0x318648u;
            return;
        }
    }
    ctx->pc = 0x31863Cu;
    // 0x31863c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x31863cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x318640: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x318640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x318644: 0xac6412a0  sw          $a0, 0x12A0($v1)
    ctx->pc = 0x318644u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4768), GPR_U32(ctx, 4));
    ctx->pc = 0x318648u;
}
