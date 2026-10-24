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
// Address: 0x1499a0 - 0x1499f8
void caseD_0_0x1499a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x1499a0");
#endif

    switch (ctx->pc) {
        case 0x1499e4u: goto label_1499e4;
        default: break;
    }

    ctx->pc = 0x1499a0u;

    // 0x1499a0: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1499a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1499a4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1499a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1499a8: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x1499a8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x1499ac: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1499acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1499b0: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x1499b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x1499b4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1499b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1499b8: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x1499b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x1499bc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1499BCu;
    {
        const bool branch_taken_0x1499bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1499bc) {
            ctx->pc = 0x1499F8u;
            return;
        }
    }
    ctx->pc = 0x1499C4u;
    // 0x1499c4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1499c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1499c8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1499c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1499cc: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1499ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1499d0: 0x24060a2e  addiu       $a2, $zero, 0xA2E
    ctx->pc = 0x1499d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2606));
    // 0x1499d4: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1499d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1499d8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1499d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1499dc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1499DCu;
    SET_GPR_U32(ctx, 31, 0x1499E4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1499DCu, 0x1499E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1499E4u;
label_1499e4:
    // 0x1499e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1499e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1499e8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1499e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1499ec: 0xac431b60  sw          $v1, 0x1B60($v0)
    ctx->pc = 0x1499ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7008), GPR_U32(ctx, 3));
    // 0x1499f0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1499F0u;
    {
        const bool branch_taken_0x1499f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1499f0) {
            ctx->pc = 0x149A20u;
            return;
        }
    }
    ctx->pc = 0x1499F8u;
}
