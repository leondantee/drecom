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

// Function: entry_0026c5d8
// Address: 0x26c5d8 - 0x26c648
void entry_0026c5d8_0x26c5d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026c5d8_0x26c5d8");
#endif

    switch (ctx->pc) {
        case 0x26c628u: goto label_26c628;
        default: break;
    }

    ctx->pc = 0x26c5d8u;

    // 0x26c5d8: 0x8fa80058  lw          $t0, 0x58($sp)
    ctx->pc = 0x26c5d8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c5dc: 0x910209e7  lbu         $v0, 0x9E7($t0)
    ctx->pc = 0x26c5dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2535)));
    // 0x26c5e0: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x26C5E0u;
    {
        const bool branch_taken_0x26c5e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c5e0) {
            ctx->pc = 0x26C654u;
            return;
        }
    }
    ctx->pc = 0x26C5E8u;
    // 0x26c5e8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26c5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c5ec: 0x8c441b68  lw          $a0, 0x1B68($v0)
    ctx->pc = 0x26c5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7016)));
    // 0x26c5f0: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x26C5F0u;
    {
        const bool branch_taken_0x26c5f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c5f0) {
            ctx->pc = 0x26C648u;
            return;
        }
    }
    ctx->pc = 0x26C5F8u;
    // 0x26c5f8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26c5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c5fc: 0xac401b68  sw          $zero, 0x1B68($v0)
    ctx->pc = 0x26c5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7016), GPR_U32(ctx, 0));
    // 0x26c600: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x26c600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x26c604: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26c604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c608: 0xac821b60  sw          $v0, 0x1B60($a0)
    ctx->pc = 0x26c608u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7008), GPR_U32(ctx, 2));
    // 0x26c60c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26c60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c610: 0xac4013e8  sw          $zero, 0x13E8($v0)
    ctx->pc = 0x26c610u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5096), GPR_U32(ctx, 0));
    // 0x26c614: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26c614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c618: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x26c618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26c61c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x26c61cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26c620: 0xc056f24  jal         func_15BC90
    ctx->pc = 0x26C620u;
    SET_GPR_U32(ctx, 31, 0x26C628u);
    ctx->pc = 0x15BC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BC90u, 0x26C620u, 0x26C628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C628u;
label_26c628:
    // 0x26c628: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x26C628u;
    {
        const bool branch_taken_0x26c628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c628) {
            ctx->pc = 0x26C654u;
            return;
        }
    }
    ctx->pc = 0x26C630u;
    // 0x26c630: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26c630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c634: 0x8c4313ec  lw          $v1, 0x13EC($v0)
    ctx->pc = 0x26c634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5100)));
    // 0x26c638: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26c638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c63c: 0xac4313e8  sw          $v1, 0x13E8($v0)
    ctx->pc = 0x26c63cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5096), GPR_U32(ctx, 3));
    // 0x26c640: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x26C640u;
    {
        const bool branch_taken_0x26c640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c640) {
            ctx->pc = 0x26C654u;
            return;
        }
    }
    ctx->pc = 0x26C648u;
}
