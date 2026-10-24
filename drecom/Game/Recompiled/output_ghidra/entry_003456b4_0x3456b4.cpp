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

// Function: entry_003456b4
// Address: 0x3456b4 - 0x345710
void entry_003456b4_0x3456b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003456b4_0x3456b4");
#endif

    switch (ctx->pc) {
        case 0x3456d4u: goto label_3456d4;
        case 0x345708u: goto label_345708;
        default: break;
    }

    ctx->pc = 0x3456b4u;

    // 0x3456b4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3456b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3456b8: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x3456b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3456bc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x3456bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3456c0: 0x2402feff  addiu       $v0, $zero, -0x101
    ctx->pc = 0x3456c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
    // 0x3456c4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3456c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3456c8: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x3456c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x3456cc: 0xc067694  jal         func_19DA50
    ctx->pc = 0x3456CCu;
    SET_GPR_U32(ctx, 31, 0x3456D4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x3456CCu, 0x3456D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3456D4u;
label_3456d4:
    // 0x3456d4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3456d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3456d8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3456d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3456dc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3456DCu;
    {
        const bool branch_taken_0x3456dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3456dc) {
            ctx->pc = 0x345710u;
            return;
        }
    }
    ctx->pc = 0x3456E4u;
    // 0x3456e4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3456e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3456e8: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x3456e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x3456ec: 0x34460f00  ori         $a2, $v0, 0xF00
    ctx->pc = 0x3456ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3840);
    // 0x3456f0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3456f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3456f4: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x3456f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x3456f8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3456f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3456fc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x3456fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x345700: 0xc0965d0  jal         func_259740
    ctx->pc = 0x345700u;
    SET_GPR_U32(ctx, 31, 0x345708u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x345700u, 0x345708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345708u;
label_345708:
    // 0x345708: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x345708u;
    {
        const bool branch_taken_0x345708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x345708) {
            ctx->pc = 0x345734u;
            return;
        }
    }
    ctx->pc = 0x345710u;
}
