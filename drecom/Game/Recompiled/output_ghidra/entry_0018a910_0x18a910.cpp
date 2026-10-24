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

// Function: entry_0018a910
// Address: 0x18a910 - 0x18a960
void entry_0018a910_0x18a910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018a910_0x18a910");
#endif

    switch (ctx->pc) {
        case 0x18a928u: goto label_18a928;
        case 0x18a94cu: goto label_18a94c;
        default: break;
    }

    ctx->pc = 0x18a910u;

    // 0x18a910: 0x24040037  addiu       $a0, $zero, 0x37
    ctx->pc = 0x18a910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x18a914: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18a914u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18a918: 0x8c25ac50  lw          $a1, -0x53B0($at)
    ctx->pc = 0x18a918u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5CAC50u));
    // 0x18a91c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18a91cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18a920: 0xc076590  jal         func_1D9640
    ctx->pc = 0x18A920u;
    SET_GPR_U32(ctx, 31, 0x18A928u);
    ctx->pc = 0x1D9640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9640u, 0x18A920u, 0x18A928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A928u;
label_18a928:
    // 0x18a928: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x18a928u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x18a92c: 0x600000c  bltz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x18A92Cu;
    {
        const bool branch_taken_0x18a92c = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x18a92c) {
            ctx->pc = 0x18A960u;
            return;
        }
    }
    ctx->pc = 0x18A934u;
    // 0x18a934: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x18a934u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18a938: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18a938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18a93c: 0x8c25ac50  lw          $a1, -0x53B0($at)
    ctx->pc = 0x18a93cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5CAC50u));
    // 0x18a940: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18a940u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18a944: 0xc062c2c  jal         func_18B0B0
    ctx->pc = 0x18A944u;
    SET_GPR_U32(ctx, 31, 0x18A94Cu);
    ctx->pc = 0x18B0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B0B0u, 0x18A944u, 0x18A94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A94Cu;
label_18a94c:
    // 0x18a94c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18a94cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18a950: 0x8c23ac50  lw          $v1, -0x53B0($at)
    ctx->pc = 0x18a950u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5CAC50u));
    // 0x18a954: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x18a954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x18a958: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18a958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18a95c: 0xac23ac50  sw          $v1, -0x53B0($at)
    ctx->pc = 0x18a95cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CAC50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CAC50u, _value); } while (0);
    ctx->pc = 0x18a960u;
}
