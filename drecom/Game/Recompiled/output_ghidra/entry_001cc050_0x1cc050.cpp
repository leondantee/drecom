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

// Function: entry_001cc050
// Address: 0x1cc050 - 0x1cc080
void entry_001cc050_0x1cc050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cc050_0x1cc050");
#endif

    switch (ctx->pc) {
        case 0x1cc05cu: goto label_1cc05c;
        default: break;
    }

    ctx->pc = 0x1cc050u;

    // 0x1cc050: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1cc050u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cc054: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1CC054u;
    SET_GPR_U32(ctx, 31, 0x1CC05Cu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1CC054u, 0x1CC05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC05Cu;
label_1cc05c:
    // 0x1cc05c: 0x8e23009c  lw          $v1, 0x9C($s1)
    ctx->pc = 0x1cc05cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x1cc060: 0x30631000  andi        $v1, $v1, 0x1000
    ctx->pc = 0x1cc060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x1cc064: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CC064u;
    {
        const bool branch_taken_0x1cc064 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cc064) {
            ctx->pc = 0x1CC080u;
            return;
        }
    }
    ctx->pc = 0x1CC06Cu;
    // 0x1cc06c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1cc06cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1cc070: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x1cc070u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1cc074: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x1cc074u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x1cc078: 0x14600020  bnez        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x1CC078u;
    {
        const bool branch_taken_0x1cc078 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cc078) {
            ctx->pc = 0x1CC0FCu;
            return;
        }
    }
    ctx->pc = 0x1CC080u;
}
