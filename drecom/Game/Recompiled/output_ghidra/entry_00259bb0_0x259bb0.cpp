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

// Function: entry_00259bb0
// Address: 0x259bb0 - 0x259c10
void entry_00259bb0_0x259bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00259bb0_0x259bb0");
#endif

    switch (ctx->pc) {
        case 0x259becu: goto label_259bec;
        default: break;
    }

    ctx->pc = 0x259bb0u;

label_259bb0:
    // 0x259bb0: 0x32a200ff  andi        $v0, $s5, 0xFF
    ctx->pc = 0x259bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x259bb4: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x259bb4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x259bb8: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x259bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259bbc: 0x32c300ff  andi        $v1, $s6, 0xFF
    ctx->pc = 0x259bbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    // 0x259bc0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x259bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x259bc4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x259bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x259bc8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x259bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x259bcc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x259bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x259bd0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x259bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x259bd4: 0x8c8202d0  lw          $v0, 0x2D0($a0)
    ctx->pc = 0x259bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x259bd8: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x259bd8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x259bdc: 0x26640080  addiu       $a0, $s3, 0x80
    ctx->pc = 0x259bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
    // 0x259be0: 0x72602e28  paddub      $a1, $s3, $zero
    ctx->pc = 0x259be0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x259be4: 0xc067634  jal         func_19D8D0
    ctx->pc = 0x259BE4u;
    SET_GPR_U32(ctx, 31, 0x259BECu);
    ctx->pc = 0x19D8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D8D0u, 0x259BE4u, 0x259BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259BECu;
label_259bec:
    // 0x259bec: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x259becu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x259bf0: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x259bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259bf4: 0x94420050  lhu         $v0, 0x50($v0)
    ctx->pc = 0x259bf4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x259bf8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x259bf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x259bfc: 0x2a2102b  sltu        $v0, $s5, $v0
    ctx->pc = 0x259bfcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x259c00: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x259C00u;
    {
        const bool branch_taken_0x259c00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x259c00) {
            ctx->pc = 0x259BB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_259bb0;
        }
    }
    ctx->pc = 0x259C08u;
    // 0x259c08: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x259C08u;
    {
        const bool branch_taken_0x259c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x259c08) {
            ctx->pc = 0x259C24u;
            return;
        }
    }
    ctx->pc = 0x259C10u;
}
