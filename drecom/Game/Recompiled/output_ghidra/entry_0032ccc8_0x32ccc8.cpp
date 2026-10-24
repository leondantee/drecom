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

// Function: entry_0032ccc8
// Address: 0x32ccc8 - 0x32cd14
void entry_0032ccc8_0x32ccc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032ccc8_0x32ccc8");
#endif

    switch (ctx->pc) {
        case 0x32cd10u: goto label_32cd10;
        default: break;
    }

    ctx->pc = 0x32ccc8u;

    // 0x32ccc8: 0x2b4102a  slt         $v0, $s5, $s4
    ctx->pc = 0x32ccc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x32cccc: 0x1440ff79  bnez        $v0, . + 4 + (-0x87 << 2)
    ctx->pc = 0x32CCCCu;
    {
        const bool branch_taken_0x32cccc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32cccc) {
            ctx->pc = 0x32CAB4u;
            return;
        }
    }
    ctx->pc = 0x32CCD4u;
    // 0x32ccd4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x32ccd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x32ccd8: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x32ccd8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x32ccdc: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x32ccdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x32cce0: 0x34421043  ori         $v0, $v0, 0x1043
    ctx->pc = 0x32cce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4163);
    // 0x32cce4: 0xaee20004  sw          $v0, 0x4($s7)
    ctx->pc = 0x32cce4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 2));
    // 0x32cce8: 0x24030044  addiu       $v1, $zero, 0x44
    ctx->pc = 0x32cce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x32ccec: 0xfee30008  sd          $v1, 0x8($s7)
    ctx->pc = 0x32ccecu;
    WRITE64(ADD32(GPR_U32(ctx, 23), 8), GPR_U64(ctx, 3));
    // 0x32ccf0: 0x92652830  lbu         $a1, 0x2830($s3)
    ctx->pc = 0x32ccf0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 10288)));
    // 0x32ccf4: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x32CCF4u;
    {
        const bool branch_taken_0x32ccf4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x32ccf4) {
            ctx->pc = 0x32CD14u;
            return;
        }
    }
    ctx->pc = 0x32CCFCu;
    // 0x32ccfc: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x32ccfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x32cd00: 0x24641a14  addiu       $a0, $v1, 0x1A14
    ctx->pc = 0x32cd00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 6676));
    // 0x32cd04: 0x72e02e28  paddub      $a1, $s7, $zero
    ctx->pc = 0x32cd04u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x32cd08: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x32CD08u;
    SET_GPR_U32(ctx, 31, 0x32CD10u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x32CD08u, 0x32CD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CD10u;
label_32cd10:
    // 0x32cd10: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x32cd10u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x32cd14u;
}
