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

// Function: entry_00282dc8
// Address: 0x282dc8 - 0x282e3c
void entry_00282dc8_0x282dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00282dc8_0x282dc8");
#endif

    switch (ctx->pc) {
        case 0x282de0u: goto label_282de0;
        case 0x282df8u: goto label_282df8;
        case 0x282e04u: goto label_282e04;
        case 0x282e10u: goto label_282e10;
        case 0x282e1cu: goto label_282e1c;
        default: break;
    }

    ctx->pc = 0x282dc8u;

    // 0x282dc8: 0x2e020003  sltiu       $v0, $s0, 0x3
    ctx->pc = 0x282dc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x282dcc: 0x1440ffcc  bnez        $v0, . + 4 + (-0x34 << 2)
    ctx->pc = 0x282DCCu;
    {
        const bool branch_taken_0x282dcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x282dcc) {
            ctx->pc = 0x282D00u;
            return;
        }
    }
    ctx->pc = 0x282DD4u;
    // 0x282dd4: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x282dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x282dd8: 0xc084900  jal         func_212400
    ctx->pc = 0x282DD8u;
    SET_GPR_U32(ctx, 31, 0x282DE0u);
    ctx->pc = 0x212400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212400u, 0x282DD8u, 0x282DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282DE0u;
label_282de0:
    // 0x282de0: 0x2404040d  addiu       $a0, $zero, 0x40D
    ctx->pc = 0x282de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1037));
    // 0x282de4: 0x2405007f  addiu       $a1, $zero, 0x7F
    ctx->pc = 0x282de4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x282de8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x282de8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x282dec: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x282decu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x282df0: 0xc067c24  jal         func_19F090
    ctx->pc = 0x282DF0u;
    SET_GPR_U32(ctx, 31, 0x282DF8u);
    ctx->pc = 0x19F090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F090u, 0x282DF0u, 0x282DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282DF8u;
label_282df8:
    // 0x282df8: 0x240400c1  addiu       $a0, $zero, 0xC1
    ctx->pc = 0x282df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 193));
    // 0x282dfc: 0xc067f18  jal         func_19FC60
    ctx->pc = 0x282DFCu;
    SET_GPR_U32(ctx, 31, 0x282E04u);
    ctx->pc = 0x19FC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC60u, 0x282DFCu, 0x282E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282E04u;
label_282e04:
    // 0x282e04: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x282e04u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x282e08: 0xc067c50  jal         func_19F140
    ctx->pc = 0x282E08u;
    SET_GPR_U32(ctx, 31, 0x282E10u);
    ctx->pc = 0x19F140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F140u, 0x282E08u, 0x282E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282E10u;
label_282e10:
    // 0x282e10: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x282e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x282e14: 0xc084964  jal         func_212590
    ctx->pc = 0x282E14u;
    SET_GPR_U32(ctx, 31, 0x282E1Cu);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x282E14u, 0x282E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282E1Cu;
label_282e1c:
    // 0x282e1c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x282e1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x282e20: 0xac201b90  sw          $zero, 0x1B90($at)
    ctx->pc = 0x282e20u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x621B90u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621B90u, _value); } while (0);
    // 0x282e24: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x282e24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x282e28: 0x8c231a3c  lw          $v1, 0x1A3C($at)
    ctx->pc = 0x282e28u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x282e2c: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x282e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x282e30: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x282e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x282e34: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x282e34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x282e38: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x282e38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    ctx->pc = 0x282e3cu;
}
