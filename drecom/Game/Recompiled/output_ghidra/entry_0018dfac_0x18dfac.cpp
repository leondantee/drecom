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

// Function: entry_0018dfac
// Address: 0x18dfac - 0x18dfe4
void entry_0018dfac_0x18dfac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018dfac_0x18dfac");
#endif

    switch (ctx->pc) {
        case 0x18dfd8u: goto label_18dfd8;
        default: break;
    }

    ctx->pc = 0x18dfacu;

    // 0x18dfac: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x18dfacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x18dfb0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x18dfb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x18dfb4: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x18DFB4u;
    {
        const bool branch_taken_0x18dfb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18dfb4) {
            ctx->pc = 0x18E008u;
            return;
        }
    }
    ctx->pc = 0x18DFBCu;
    // 0x18dfbc: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x18dfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x18dfc0: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x18dfc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x18dfc4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18DFC4u;
    {
        const bool branch_taken_0x18dfc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18dfc4) {
            ctx->pc = 0x18DFE4u;
            return;
        }
    }
    ctx->pc = 0x18DFCCu;
    // 0x18dfcc: 0x72802628  paddub      $a0, $s4, $zero
    ctx->pc = 0x18dfccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x18dfd0: 0xc063bec  jal         func_18EFB0
    ctx->pc = 0x18DFD0u;
    SET_GPR_U32(ctx, 31, 0x18DFD8u);
    ctx->pc = 0x18EFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EFB0u, 0x18DFD0u, 0x18DFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DFD8u;
label_18dfd8:
    // 0x18dfd8: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x18dfd8u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x18dfdc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x18DFDCu;
    {
        const bool branch_taken_0x18dfdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18dfdc) {
            ctx->pc = 0x18E038u;
            return;
        }
    }
    ctx->pc = 0x18DFE4u;
}
