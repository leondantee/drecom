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

// Function: entry_0026c6d0
// Address: 0x26c6d0 - 0x26c744
void entry_0026c6d0_0x26c6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026c6d0_0x26c6d0");
#endif

    switch (ctx->pc) {
        case 0x26c720u: goto label_26c720;
        default: break;
    }

    ctx->pc = 0x26c6d0u;

    // 0x26c6d0: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x26c6d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c6d4: 0x90c709e7  lbu         $a3, 0x9E7($a2)
    ctx->pc = 0x26c6d4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2535)));
    // 0x26c6d8: 0x10e0001d  beqz        $a3, . + 4 + (0x1D << 2)
    ctx->pc = 0x26C6D8u;
    {
        const bool branch_taken_0x26c6d8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c6d8) {
            ctx->pc = 0x26C750u;
            return;
        }
    }
    ctx->pc = 0x26C6E0u;
    // 0x26c6e0: 0x8fa80058  lw          $t0, 0x58($sp)
    ctx->pc = 0x26c6e0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c6e4: 0x8d021b68  lw          $v0, 0x1B68($t0)
    ctx->pc = 0x26c6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 7016)));
    // 0x26c6e8: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x26C6E8u;
    {
        const bool branch_taken_0x26c6e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c6e8) {
            ctx->pc = 0x26C744u;
            return;
        }
    }
    ctx->pc = 0x26C6F0u;
    // 0x26c6f0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26c6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c6f4: 0xac801b68  sw          $zero, 0x1B68($a0)
    ctx->pc = 0x26c6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7016), GPR_U32(ctx, 0));
    // 0x26c6f8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x26c6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26c6fc: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x26c6fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c700: 0xaca21b60  sw          $v0, 0x1B60($a1)
    ctx->pc = 0x26c700u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 7008), GPR_U32(ctx, 2));
    // 0x26c704: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x26c704u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c708: 0xacc013e8  sw          $zero, 0x13E8($a2)
    ctx->pc = 0x26c708u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 5096), GPR_U32(ctx, 0));
    // 0x26c70c: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x26c70cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c710: 0xc4ec00d4  lwc1        $f12, 0xD4($a3)
    ctx->pc = 0x26c710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26c714: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x26c714u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26c718: 0xc056f24  jal         func_15BC90
    ctx->pc = 0x26C718u;
    SET_GPR_U32(ctx, 31, 0x26C720u);
    ctx->pc = 0x15BC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BC90u, 0x26C718u, 0x26C720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C720u;
label_26c720:
    // 0x26c720: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x26c720u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x26c724: 0x1100000a  beqz        $t0, . + 4 + (0xA << 2)
    ctx->pc = 0x26C724u;
    {
        const bool branch_taken_0x26c724 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c724) {
            ctx->pc = 0x26C750u;
            return;
        }
    }
    ctx->pc = 0x26C72Cu;
    // 0x26c72c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26c72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c730: 0x8c4413ec  lw          $a0, 0x13EC($v0)
    ctx->pc = 0x26c730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5100)));
    // 0x26c734: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26c734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c738: 0xac4413e8  sw          $a0, 0x13E8($v0)
    ctx->pc = 0x26c738u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5096), GPR_U32(ctx, 4));
    // 0x26c73c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x26C73Cu;
    {
        const bool branch_taken_0x26c73c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c73c) {
            ctx->pc = 0x26C750u;
            return;
        }
    }
    ctx->pc = 0x26C744u;
}
