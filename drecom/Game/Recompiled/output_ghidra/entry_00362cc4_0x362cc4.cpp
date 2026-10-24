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

// Function: entry_00362cc4
// Address: 0x362cc4 - 0x362d1c
void entry_00362cc4_0x362cc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00362cc4_0x362cc4");
#endif

    switch (ctx->pc) {
        case 0x362ce8u: goto label_362ce8;
        default: break;
    }

    ctx->pc = 0x362cc4u;

    // 0x362cc4: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x362cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x362cc8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x362cc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x362ccc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x362cccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x362cd0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x362cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x362cd4: 0x2404042b  addiu       $a0, $zero, 0x42B
    ctx->pc = 0x362cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1067));
    // 0x362cd8: 0x24450110  addiu       $a1, $v0, 0x110
    ctx->pc = 0x362cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
    // 0x362cdc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x362cdcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x362ce0: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x362CE0u;
    SET_GPR_U32(ctx, 31, 0x362CE8u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x362CE0u, 0x362CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362CE8u;
label_362ce8:
    // 0x362ce8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x362ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x362cec: 0x8c640368  lw          $a0, 0x368($v1)
    ctx->pc = 0x362cecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x362cf0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x362cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x362cf4: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x362CF4u;
    {
        const bool branch_taken_0x362cf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x362cf4) {
            ctx->pc = 0x362D1Cu;
            return;
        }
    }
    ctx->pc = 0x362CFCu;
    // 0x362cfc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x362cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x362d00: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x362d00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x362d04: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x362d04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x362d08: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x362d08u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x362d0c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x362d0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x362d10: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x362d10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x362d14: 0xc0965d0  jal         func_259740
    ctx->pc = 0x362D14u;
    SET_GPR_U32(ctx, 31, 0x362D1Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x362D14u, 0x362D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362D1Cu;
}
