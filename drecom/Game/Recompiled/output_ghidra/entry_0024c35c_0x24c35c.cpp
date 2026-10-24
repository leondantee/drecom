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

// Function: entry_0024c35c
// Address: 0x24c35c - 0x24c3cc
void entry_0024c35c_0x24c35c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024c35c_0x24c35c");
#endif

    switch (ctx->pc) {
        case 0x24c368u: goto label_24c368;
        case 0x24c388u: goto label_24c388;
        default: break;
    }

    ctx->pc = 0x24c35cu;

    // 0x24c35c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x24c35cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x24c360: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x24C360u;
    SET_GPR_U32(ctx, 31, 0x24C368u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x24C368u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24C368u) { return; }
    ctx->pc = 0x24C368u;
label_24c368:
    // 0x24c368: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x24c368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x24c36c: 0x8c4400c4  lw          $a0, 0xC4($v0)
    ctx->pc = 0x24c36cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x24c370: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x24c370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x24c374: 0x26060480  addiu       $a2, $s0, 0x480
    ctx->pc = 0x24c374u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1152));
    // 0x24c378: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x24c378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x24c37c: 0x24478e98  addiu       $a3, $v0, -0x7168
    ctx->pc = 0x24c37cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938264));
    // 0x24c380: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x24C380u;
    SET_GPR_U32(ctx, 31, 0x24C388u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x24C380u, 0x24C388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C388u;
label_24c388:
    // 0x24c388: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x24C388u;
    {
        const bool branch_taken_0x24c388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c388) {
            ctx->pc = 0x24C3CCu;
            return;
        }
    }
    ctx->pc = 0x24C390u;
    // 0x24c390: 0x26030480  addiu       $v1, $s0, 0x480
    ctx->pc = 0x24c390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1152));
    // 0x24c394: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x24c394u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24c398: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x24c398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x24c39c: 0x246300a0  addiu       $v1, $v1, 0xA0
    ctx->pc = 0x24c39cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
    // 0x24c3a0: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x24c3a0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x24c3a4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x24c3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x24c3a8: 0xac6000d4  sw          $zero, 0xD4($v1)
    ctx->pc = 0x24c3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 212), GPR_U32(ctx, 0));
    // 0x24c3ac: 0x8e030b18  lw          $v1, 0xB18($s0)
    ctx->pc = 0x24c3acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2840)));
    // 0x24c3b0: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x24c3b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x24c3b4: 0xae030b18  sw          $v1, 0xB18($s0)
    ctx->pc = 0x24c3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2840), GPR_U32(ctx, 3));
    // 0x24c3b8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x24c3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24c3bc: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x24c3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x24c3c0: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x24c3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    // 0x24c3c4: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x24C3C4u;
    {
        const bool branch_taken_0x24c3c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c3c4) {
            ctx->pc = 0x24C488u;
            return;
        }
    }
    ctx->pc = 0x24C3CCu;
}
