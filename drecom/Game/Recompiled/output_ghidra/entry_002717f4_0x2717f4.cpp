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

// Function: entry_002717f4
// Address: 0x2717f4 - 0x271854
void entry_002717f4_0x2717f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002717f4_0x2717f4");
#endif

    switch (ctx->pc) {
        case 0x271824u: goto label_271824;
        case 0x271834u: goto label_271834;
        case 0x271844u: goto label_271844;
        default: break;
    }

    ctx->pc = 0x2717f4u;

    // 0x2717f4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2717f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2717f8: 0x8c24fd58  lw          $a0, -0x2A8($at)
    ctx->pc = 0x2717f8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x61FD58u));
    // 0x2717fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2717fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x271800: 0x10830014  beq         $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x271800u;
    {
        const bool branch_taken_0x271800 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x271800) {
            ctx->pc = 0x271854u;
            return;
        }
    }
    ctx->pc = 0x271808u;
    // 0x271808: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x271808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27180c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27180cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x271810: 0xac22fd58  sw          $v0, -0x2A8($at)
    ctx->pc = 0x271810u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x61FD58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61FD58u, _value); } while (0);
    // 0x271814: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x271814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x271818: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x271818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27181c: 0xc050018  jal         func_140060
    ctx->pc = 0x27181Cu;
    SET_GPR_U32(ctx, 31, 0x271824u);
    ctx->pc = 0x140060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140060u, 0x27181Cu, 0x271824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271824u;
label_271824:
    // 0x271824: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x271824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x271828: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x271828u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27182c: 0xc050018  jal         func_140060
    ctx->pc = 0x27182Cu;
    SET_GPR_U32(ctx, 31, 0x271834u);
    ctx->pc = 0x140060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140060u, 0x27182Cu, 0x271834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271834u;
label_271834:
    // 0x271834: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x271834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x271838: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x271838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27183c: 0xc09c6ec  jal         func_271BB0
    ctx->pc = 0x27183Cu;
    SET_GPR_U32(ctx, 31, 0x271844u);
    ctx->pc = 0x271BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271BB0u, 0x27183Cu, 0x271844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271844u;
label_271844:
    // 0x271844: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x271844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x271848: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x271848u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27184c: 0xc09c6ec  jal         func_271BB0
    ctx->pc = 0x27184Cu;
    SET_GPR_U32(ctx, 31, 0x271854u);
    ctx->pc = 0x271BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271BB0u, 0x27184Cu, 0x271854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271854u;
}
