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

// Function: entry_0035a648
// Address: 0x35a648 - 0x35a6b8
void entry_0035a648_0x35a648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035a648_0x35a648");
#endif

    switch (ctx->pc) {
        case 0x35a658u: goto label_35a658;
        case 0x35a690u: goto label_35a690;
        case 0x35a6b0u: goto label_35a6b0;
        default: break;
    }

    ctx->pc = 0x35a648u;

    // 0x35a648: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x35a648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35a64c: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x35a64cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x35a650: 0xc0d85c4  jal         func_361710
    ctx->pc = 0x35A650u;
    SET_GPR_U32(ctx, 31, 0x35A658u);
    ctx->pc = 0x361710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x361710u, 0x35A650u, 0x35A658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A658u;
label_35a658:
    // 0x35a658: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x35a658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35a65c: 0x8c640368  lw          $a0, 0x368($v1)
    ctx->pc = 0x35a65cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x35a660: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x35a660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x35a664: 0x10830014  beq         $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x35A664u;
    {
        const bool branch_taken_0x35a664 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x35a664) {
            ctx->pc = 0x35A6B8u;
            return;
        }
    }
    ctx->pc = 0x35A66Cu;
    // 0x35a66c: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x35a66cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x35a670: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x35a670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x35a674: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x35a674u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x35a678: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x35a678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35a67c: 0x2404042d  addiu       $a0, $zero, 0x42D
    ctx->pc = 0x35a67cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1069));
    // 0x35a680: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x35a680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x35a684: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x35a684u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35a688: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x35A688u;
    SET_GPR_U32(ctx, 31, 0x35A690u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x35A688u, 0x35A690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A690u;
label_35a690:
    // 0x35a690: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x35a690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35a694: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x35a694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35a698: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x35a698u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x35a69c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x35a69cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35a6a0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x35a6a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35a6a4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x35a6a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x35a6a8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x35A6A8u;
    SET_GPR_U32(ctx, 31, 0x35A6B0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x35A6A8u, 0x35A6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A6B0u;
label_35a6b0:
    // 0x35a6b0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x35A6B0u;
    {
        const bool branch_taken_0x35a6b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35a6b0) {
            ctx->pc = 0x35A6ECu;
            return;
        }
    }
    ctx->pc = 0x35A6B8u;
}
