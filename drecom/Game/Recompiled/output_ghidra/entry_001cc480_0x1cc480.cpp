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

// Function: entry_001cc480
// Address: 0x1cc480 - 0x1cc4f0
void entry_001cc480_0x1cc480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cc480_0x1cc480");
#endif

    switch (ctx->pc) {
        case 0x1cc4d0u: goto label_1cc4d0;
        default: break;
    }

    ctx->pc = 0x1cc480u;

    // 0x1cc480: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1cc480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cc484: 0x904209e7  lbu         $v0, 0x9E7($v0)
    ctx->pc = 0x1cc484u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2535)));
    // 0x1cc488: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1CC488u;
    {
        const bool branch_taken_0x1cc488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc488) {
            ctx->pc = 0x1CC4FCu;
            return;
        }
    }
    ctx->pc = 0x1CC490u;
    // 0x1cc490: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1cc490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cc494: 0x8c621b68  lw          $v0, 0x1B68($v1)
    ctx->pc = 0x1cc494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7016)));
    // 0x1cc498: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1CC498u;
    {
        const bool branch_taken_0x1cc498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc498) {
            ctx->pc = 0x1CC4F0u;
            return;
        }
    }
    ctx->pc = 0x1CC4A0u;
    // 0x1cc4a0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1cc4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cc4a4: 0xac401b68  sw          $zero, 0x1B68($v0)
    ctx->pc = 0x1cc4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7016), GPR_U32(ctx, 0));
    // 0x1cc4a8: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x1cc4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1cc4ac: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1cc4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cc4b0: 0xac441b60  sw          $a0, 0x1B60($v0)
    ctx->pc = 0x1cc4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7008), GPR_U32(ctx, 4));
    // 0x1cc4b4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1cc4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cc4b8: 0xac6013e8  sw          $zero, 0x13E8($v1)
    ctx->pc = 0x1cc4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5096), GPR_U32(ctx, 0));
    // 0x1cc4bc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1cc4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cc4c0: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x1cc4c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cc4c4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1cc4c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cc4c8: 0xc056f24  jal         func_15BC90
    ctx->pc = 0x1CC4C8u;
    SET_GPR_U32(ctx, 31, 0x1CC4D0u);
    ctx->pc = 0x15BC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BC90u, 0x1CC4C8u, 0x1CC4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC4D0u;
label_1cc4d0:
    // 0x1cc4d0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1CC4D0u;
    {
        const bool branch_taken_0x1cc4d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc4d0) {
            ctx->pc = 0x1CC4FCu;
            return;
        }
    }
    ctx->pc = 0x1CC4D8u;
    // 0x1cc4d8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1cc4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cc4dc: 0x8c4413ec  lw          $a0, 0x13EC($v0)
    ctx->pc = 0x1cc4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5100)));
    // 0x1cc4e0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1cc4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cc4e4: 0xac4413e8  sw          $a0, 0x13E8($v0)
    ctx->pc = 0x1cc4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5096), GPR_U32(ctx, 4));
    // 0x1cc4e8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1CC4E8u;
    {
        const bool branch_taken_0x1cc4e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc4e8) {
            ctx->pc = 0x1CC4FCu;
            return;
        }
    }
    ctx->pc = 0x1CC4F0u;
}
