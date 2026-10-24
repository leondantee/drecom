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

// Function: caseD_0
// Address: 0x1b5834 - 0x1b5894
void caseD_0_0x1b5834(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x1b5834");
#endif

    switch (ctx->pc) {
        case 0x1b5868u: goto label_1b5868;
        default: break;
    }

    ctx->pc = 0x1b5834u;

    // 0x1b5834: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1b5834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1b5838: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b5838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b583c: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x1b583cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
    // 0x1b5840: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b5840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b5844: 0xac6013f0  sw          $zero, 0x13F0($v1)
    ctx->pc = 0x1b5844u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5104), GPR_U32(ctx, 0));
    // 0x1b5848: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b5848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b584c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b584cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b5850: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1b5850u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x1b5854: 0x24060a4a  addiu       $a2, $zero, 0xA4A
    ctx->pc = 0x1b5854u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2634));
    // 0x1b5858: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1b5858u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b585c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1b585cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1b5860: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1B5860u;
    SET_GPR_U32(ctx, 31, 0x1B5868u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1B5860u, 0x1B5868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5868u;
label_1b5868:
    // 0x1b5868: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b5868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b586c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b586cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b5870: 0xac441b6c  sw          $a0, 0x1B6C($v0)
    ctx->pc = 0x1b5870u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7020), GPR_U32(ctx, 4));
    // 0x1b5874: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b5874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b5878: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1b5878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1b587c: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x1b587cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
    // 0x1b5880: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1b5880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1b5884: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B5884u;
    {
        const bool branch_taken_0x1b5884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5884) {
            ctx->pc = 0x1B5894u;
            return;
        }
    }
    ctx->pc = 0x1B588Cu;
    // 0x1b588c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b588cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b5890: 0xac801b6c  sw          $zero, 0x1B6C($a0)
    ctx->pc = 0x1b5890u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7020), GPR_U32(ctx, 0));
    ctx->pc = 0x1b5894u;
}
