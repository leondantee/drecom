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

// Function: entry_00298ff8
// Address: 0x298ff8 - 0x299070
void entry_00298ff8_0x298ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00298ff8_0x298ff8");
#endif

    switch (ctx->pc) {
        case 0x299034u: goto label_299034;
        case 0x299068u: goto label_299068;
        default: break;
    }

    ctx->pc = 0x298ff8u;

    // 0x298ff8: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x298ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x298ffc: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x298ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x299000: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x299000u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x299004: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x299004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x299008: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x299008u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x29900c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x29900cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x299010: 0x8c4201a4  lw          $v0, 0x1A4($v0)
    ctx->pc = 0x299010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 420)));
    // 0x299014: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x299014u;
    {
        const bool branch_taken_0x299014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x299014) {
            ctx->pc = 0x2990A0u;
            return;
        }
    }
    ctx->pc = 0x29901Cu;
    // 0x29901c: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x29901cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x299020: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x299020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x299024: 0x24640020  addiu       $a0, $v1, 0x20
    ctx->pc = 0x299024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x299028: 0x8c4501a4  lw          $a1, 0x1A4($v0)
    ctx->pc = 0x299028u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 420)));
    // 0x29902c: 0xc040ca2  jal         func_103288
    ctx->pc = 0x29902Cu;
    SET_GPR_U32(ctx, 31, 0x299034u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x299034u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x299034u) { return; }
    ctx->pc = 0x299034u;
label_299034:
    // 0x299034: 0x8fb00138  lw          $s0, 0x138($sp)
    ctx->pc = 0x299034u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x299038: 0x960201a8  lhu         $v0, 0x1A8($s0)
    ctx->pc = 0x299038u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 424)));
    // 0x29903c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x29903cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x299040: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x299040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x299044: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x299044u;
    {
        const bool branch_taken_0x299044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x299044) {
            ctx->pc = 0x299070u;
            return;
        }
    }
    ctx->pc = 0x29904Cu;
    // 0x29904c: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x29904cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x299050: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x299050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x299054: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x299054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x299058: 0x24650050  addiu       $a1, $v1, 0x50
    ctx->pc = 0x299058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x29905c: 0x244600c0  addiu       $a2, $v0, 0xC0
    ctx->pc = 0x29905cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x299060: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x299060u;
    SET_GPR_U32(ctx, 31, 0x299068u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x299060u, 0x299068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299068u;
label_299068:
    // 0x299068: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x299068u;
    {
        const bool branch_taken_0x299068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x299068) {
            ctx->pc = 0x29908Cu;
            return;
        }
    }
    ctx->pc = 0x299070u;
}
