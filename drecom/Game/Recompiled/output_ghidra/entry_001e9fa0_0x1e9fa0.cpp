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

// Function: entry_001e9fa0
// Address: 0x1e9fa0 - 0x1ea00c
void entry_001e9fa0_0x1e9fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e9fa0_0x1e9fa0");
#endif

    switch (ctx->pc) {
        case 0x1e9facu: goto label_1e9fac;
        case 0x1e9fc0u: goto label_1e9fc0;
        default: break;
    }

    ctx->pc = 0x1e9fa0u;

    // 0x1e9fa0: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1e9fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1e9fa4: 0xc07e82c  jal         func_1FA0B0
    ctx->pc = 0x1E9FA4u;
    SET_GPR_U32(ctx, 31, 0x1E9FACu);
    ctx->pc = 0x1FA0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA0B0u, 0x1E9FA4u, 0x1E9FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9FACu;
label_1e9fac:
    // 0x1e9fac: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1e9facu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e9fb0: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1e9fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1e9fb4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1e9fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e9fb8: 0xc07e8a8  jal         func_1FA2A0
    ctx->pc = 0x1E9FB8u;
    SET_GPR_U32(ctx, 31, 0x1E9FC0u);
    ctx->pc = 0x1FA2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA2A0u, 0x1E9FB8u, 0x1E9FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9FC0u;
label_1e9fc0:
    // 0x1e9fc0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1e9fc0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e9fc4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1e9fc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1e9fc8: 0x8c241a58  lw          $a0, 0x1A58($at)
    ctx->pc = 0x1e9fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1e9fcc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1e9fccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1e9fd0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1e9fd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1e9fd4: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1E9FD4u;
    {
        const bool branch_taken_0x1e9fd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9fd4) {
            ctx->pc = 0x1EA00Cu;
            return;
        }
    }
    ctx->pc = 0x1E9FDCu;
    // 0x1e9fdc: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1e9fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1e9fe0: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1e9fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1e9fe4: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1e9fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x1e9fe8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E9FE8u;
    {
        const bool branch_taken_0x1e9fe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e9fe8) {
            ctx->pc = 0x1EA00Cu;
            return;
        }
    }
    ctx->pc = 0x1E9FF0u;
    // 0x1e9ff0: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1e9ff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1e9ff4: 0x8c220aa8  lw          $v0, 0xAA8($at)
    ctx->pc = 0x1e9ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x600AA8u));
    // 0x1e9ff8: 0x24570001  addiu       $s7, $v0, 0x1
    ctx->pc = 0x1e9ff8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e9ffc: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1e9ffcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1ea000: 0xac370aa8  sw          $s7, 0xAA8($at)
    ctx->pc = 0x1ea000u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 23)); ps2TraceGuestWrite(rdram, 0x600AA8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600AA8u, _value); } while (0);
    // 0x1ea004: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1EA004u;
    {
        const bool branch_taken_0x1ea004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea004) {
            ctx->pc = 0x1EA028u;
            return;
        }
    }
    ctx->pc = 0x1EA00Cu;
}
