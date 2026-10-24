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

// Function: entry_00107574
// Address: 0x107574 - 0x1075ac
void entry_00107574_0x107574(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107574_0x107574");
#endif

    switch (ctx->pc) {
        case 0x10757cu: goto label_10757c;
        case 0x107594u: goto label_107594;
        default: break;
    }

    ctx->pc = 0x107574u;

    // 0x107574: 0xc041d78  jal         func_1075E0
    ctx->pc = 0x107574u;
    SET_GPR_U32(ctx, 31, 0x10757Cu);
    ctx->pc = 0x1075E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1075E0u, 0x107574u, 0x10757Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10757Cu;
label_10757c:
    // 0x10757c: 0x8e243bf4  lw          $a0, 0x3BF4($s1)
    ctx->pc = 0x10757cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 15348)));
    // 0x107580: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x107580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107584: 0xafb50000  sw          $s5, 0x0($sp)
    ctx->pc = 0x107584u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 21));
    // 0x107588: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x107588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x10758c: 0xc042914  jal         func_10A450
    ctx->pc = 0x10758Cu;
    SET_GPR_U32(ctx, 31, 0x107594u);
    ctx->pc = 0x107590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10758Cu;
    // 0x107590: 0xffb00008  sd          $s0, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A450u, 0x10758Cu, 0x107594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107594u;
label_107594:
    // 0x107594: 0xdfa30008  ld          $v1, 0x8($sp)
    ctx->pc = 0x107594u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x107598: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x107598u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10759c: 0xfee34488  sd          $v1, 0x4488($s7)
    ctx->pc = 0x10759cu;
    WRITE64(ADD32(GPR_U32(ctx, 23), 17544), GPR_U64(ctx, 3));
    // 0x1075a0: 0xffc24490  sd          $v0, 0x4490($fp)
    ctx->pc = 0x1075a0u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 17552), GPR_U64(ctx, 2));
    // 0x1075a4: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1075a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1075a8: 0x8c623d7c  lw          $v0, 0x3D7C($v1)
    ctx->pc = 0x1075a8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x383D7Cu));
    ctx->pc = 0x1075acu;
}
