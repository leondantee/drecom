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

// Function: caseD_5
// Address: 0x1876d8 - 0x18770c
void caseD_5_0x1876d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x1876d8");
#endif

    switch (ctx->pc) {
        case 0x1876f8u: goto label_1876f8;
        default: break;
    }

    ctx->pc = 0x1876d8u;

    // 0x1876d8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1876d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1876dc: 0x8c231a64  lw          $v1, 0x1A64($at)
    ctx->pc = 0x1876dcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x1876e0: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x1876e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x1876e4: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1876E4u;
    {
        const bool branch_taken_0x1876e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1876e4) {
            ctx->pc = 0x18770Cu;
            return;
        }
    }
    ctx->pc = 0x1876ECu;
    // 0x1876ec: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x1876ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1876f0: 0xc061014  jal         func_184050
    ctx->pc = 0x1876F0u;
    SET_GPR_U32(ctx, 31, 0x1876F8u);
    ctx->pc = 0x184050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184050u, 0x1876F0u, 0x1876F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1876F8u;
label_1876f8:
    // 0x1876f8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1876f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1876fc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1876fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x187700: 0xac230350  sw          $v1, 0x350($at)
    ctx->pc = 0x187700u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x480350u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x480350u, _value); } while (0);
    // 0x187704: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x187704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x187708: 0xae030168  sw          $v1, 0x168($s0)
    ctx->pc = 0x187708u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 360), GPR_U32(ctx, 3));
    ctx->pc = 0x18770cu;
}
