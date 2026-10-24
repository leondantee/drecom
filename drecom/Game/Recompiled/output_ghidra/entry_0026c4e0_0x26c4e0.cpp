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

// Function: entry_0026c4e0
// Address: 0x26c4e0 - 0x26c550
void entry_0026c4e0_0x26c4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026c4e0_0x26c4e0");
#endif

    switch (ctx->pc) {
        case 0x26c530u: goto label_26c530;
        default: break;
    }

    ctx->pc = 0x26c4e0u;

    // 0x26c4e0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26c4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c4e4: 0x904209e7  lbu         $v0, 0x9E7($v0)
    ctx->pc = 0x26c4e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2535)));
    // 0x26c4e8: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x26C4E8u;
    {
        const bool branch_taken_0x26c4e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c4e8) {
            ctx->pc = 0x26C55Cu;
            return;
        }
    }
    ctx->pc = 0x26C4F0u;
    // 0x26c4f0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26c4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c4f4: 0x8c421b68  lw          $v0, 0x1B68($v0)
    ctx->pc = 0x26c4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7016)));
    // 0x26c4f8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x26C4F8u;
    {
        const bool branch_taken_0x26c4f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c4f8) {
            ctx->pc = 0x26C550u;
            return;
        }
    }
    ctx->pc = 0x26C500u;
    // 0x26c500: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26c500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c504: 0xac401b68  sw          $zero, 0x1B68($v0)
    ctx->pc = 0x26c504u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7016), GPR_U32(ctx, 0));
    // 0x26c508: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x26c508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26c50c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26c50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c510: 0xac431b60  sw          $v1, 0x1B60($v0)
    ctx->pc = 0x26c510u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7008), GPR_U32(ctx, 3));
    // 0x26c514: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26c514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c518: 0xac4013e8  sw          $zero, 0x13E8($v0)
    ctx->pc = 0x26c518u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5096), GPR_U32(ctx, 0));
    // 0x26c51c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26c51cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c520: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x26c520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26c524: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x26c524u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26c528: 0xc056f24  jal         func_15BC90
    ctx->pc = 0x26C528u;
    SET_GPR_U32(ctx, 31, 0x26C530u);
    ctx->pc = 0x15BC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BC90u, 0x26C528u, 0x26C530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C530u;
label_26c530:
    // 0x26c530: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x26C530u;
    {
        const bool branch_taken_0x26c530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c530) {
            ctx->pc = 0x26C55Cu;
            return;
        }
    }
    ctx->pc = 0x26C538u;
    // 0x26c538: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26c538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c53c: 0x8c4313ec  lw          $v1, 0x13EC($v0)
    ctx->pc = 0x26c53cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5100)));
    // 0x26c540: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26c540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c544: 0xac4313e8  sw          $v1, 0x13E8($v0)
    ctx->pc = 0x26c544u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5096), GPR_U32(ctx, 3));
    // 0x26c548: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x26C548u;
    {
        const bool branch_taken_0x26c548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c548) {
            ctx->pc = 0x26C55Cu;
            return;
        }
    }
    ctx->pc = 0x26C550u;
}
