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

// Function: entry_001f43b4
// Address: 0x1f43b4 - 0x1f4410
void entry_001f43b4_0x1f43b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f43b4_0x1f43b4");
#endif

    switch (ctx->pc) {
        case 0x1f43c0u: goto label_1f43c0;
        default: break;
    }

    ctx->pc = 0x1f43b4u;

    // 0x1f43b4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1f43b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f43b8: 0xc097b94  jal         func_25EE50
    ctx->pc = 0x1F43B8u;
    SET_GPR_U32(ctx, 31, 0x1F43C0u);
    ctx->pc = 0x25EE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EE50u, 0x1F43B8u, 0x1F43C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F43C0u;
label_1f43c0:
    // 0x1f43c0: 0x24100080  addiu       $s0, $zero, 0x80
    ctx->pc = 0x1f43c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f43c4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f43c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f43c8: 0xa07010a8  sb          $s0, 0x10A8($v1)
    ctx->pc = 0x1f43c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 16));
    // 0x1f43cc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1f43ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f43d0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1f43d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1f43d4: 0x34700004  ori         $s0, $v1, 0x4
    ctx->pc = 0x1f43d4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x1f43d8: 0xac900008  sw          $s0, 0x8($a0)
    ctx->pc = 0x1f43d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 16));
    // 0x1f43dc: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1f43dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f43e0: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1f43e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1f43e4: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x1f43e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1f43e8: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1f43e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1f43ec: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x1f43ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x1f43f0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f43f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f43f4: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x1f43f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f43f8: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x1f43f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1f43fc: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x1f43fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x1f4400: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1f4400u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1f4404: 0xaca30030  sw          $v1, 0x30($a1)
    ctx->pc = 0x1f4404u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 3));
    // 0x1f4408: 0x100001c2  b           . + 4 + (0x1C2 << 2)
    ctx->pc = 0x1F4408u;
    {
        const bool branch_taken_0x1f4408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4408) {
            ctx->pc = 0x1F4B14u;
            return;
        }
    }
    ctx->pc = 0x1F4410u;
}
