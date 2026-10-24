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

// Function: entry_0019f330
// Address: 0x19f330 - 0x19f370
void entry_0019f330_0x19f330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f330_0x19f330");
#endif

    ctx->pc = 0x19f330u;

    // 0x19f330: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19f330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19f334: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19f334u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19f338: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x19f338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x19f33c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x19f33cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19f340: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19f340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19f344: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x19F344u;
    {
        const bool branch_taken_0x19f344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19f344) {
            ctx->pc = 0x19F370u;
            return;
        }
    }
    ctx->pc = 0x19F34Cu;
    // 0x19f34c: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x19f34cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x19f350: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x19f350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x19f354: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x19f354u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x19f358: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x19f358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x19f35c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19F35Cu;
    {
        const bool branch_taken_0x19f35c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f35c) {
            ctx->pc = 0x19F370u;
            return;
        }
    }
    ctx->pc = 0x19F364u;
    // 0x19f364: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x19f364u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x19f368: 0xc067c50  jal         func_19F140
    ctx->pc = 0x19F368u;
    SET_GPR_U32(ctx, 31, 0x19F370u);
    ctx->pc = 0x19F140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F140u, 0x19F368u, 0x19F370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F370u;
}
