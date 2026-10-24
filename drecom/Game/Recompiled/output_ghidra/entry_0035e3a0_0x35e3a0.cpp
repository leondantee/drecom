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

// Function: entry_0035e3a0
// Address: 0x35e3a0 - 0x35e3fc
void entry_0035e3a0_0x35e3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035e3a0_0x35e3a0");
#endif

    switch (ctx->pc) {
        case 0x35e3d8u: goto label_35e3d8;
        case 0x35e3f0u: goto label_35e3f0;
        default: break;
    }

    ctx->pc = 0x35e3a0u;

    // 0x35e3a0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x35e3a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x35e3a4: 0x8c240140  lw          $a0, 0x140($at)
    ctx->pc = 0x35e3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0140u));
    // 0x35e3a8: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x35e3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x35e3ac: 0x441823  subu        $v1, $v0, $a0
    ctx->pc = 0x35e3acu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x35e3b0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x35e3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x35e3b4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x35e3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x35e3b8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x35e3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x35e3bc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x35e3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x35e3c0: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x35e3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x35e3c4: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x35e3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x35e3c8: 0x24425ec0  addiu       $v0, $v0, 0x5EC0
    ctx->pc = 0x35e3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24256));
    // 0x35e3cc: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x35e3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x35e3d0: 0xc0d72ec  jal         func_35CBB0
    ctx->pc = 0x35E3D0u;
    SET_GPR_U32(ctx, 31, 0x35E3D8u);
    ctx->pc = 0x35CBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CBB0u, 0x35E3D0u, 0x35E3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E3D8u;
label_35e3d8:
    // 0x35e3d8: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x35e3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x35e3dc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x35e3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x35e3e0: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x35e3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
    // 0x35e3e4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x35e3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35e3e8: 0xc06750c  jal         func_19D430
    ctx->pc = 0x35E3E8u;
    SET_GPR_U32(ctx, 31, 0x35E3F0u);
    ctx->pc = 0x19D430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D430u, 0x35E3E8u, 0x35E3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E3F0u;
label_35e3f0:
    // 0x35e3f0: 0x3a310001  xori        $s1, $s1, 0x1
    ctx->pc = 0x35e3f0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)1);
    // 0x35e3f4: 0x1000ff69  b           . + 4 + (-0x97 << 2)
    ctx->pc = 0x35E3F4u;
    {
        const bool branch_taken_0x35e3f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35e3f4) {
            ctx->pc = 0x35E19Cu;
            return;
        }
    }
    ctx->pc = 0x35E3FCu;
}
