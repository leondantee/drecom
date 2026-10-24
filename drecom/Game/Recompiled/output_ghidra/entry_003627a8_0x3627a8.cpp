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

// Function: entry_003627a8
// Address: 0x3627a8 - 0x362818
void entry_003627a8_0x3627a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003627a8_0x3627a8");
#endif

    switch (ctx->pc) {
        case 0x3627b8u: goto label_3627b8;
        case 0x3627f0u: goto label_3627f0;
        case 0x362810u: goto label_362810;
        default: break;
    }

    ctx->pc = 0x3627a8u;

    // 0x3627a8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3627a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3627ac: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x3627acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3627b0: 0xc0d85c4  jal         func_361710
    ctx->pc = 0x3627B0u;
    SET_GPR_U32(ctx, 31, 0x3627B8u);
    ctx->pc = 0x361710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x361710u, 0x3627B0u, 0x3627B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3627B8u;
label_3627b8:
    // 0x3627b8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3627b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3627bc: 0x8c640368  lw          $a0, 0x368($v1)
    ctx->pc = 0x3627bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x3627c0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3627c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3627c4: 0x10830014  beq         $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3627C4u;
    {
        const bool branch_taken_0x3627c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3627c4) {
            ctx->pc = 0x362818u;
            return;
        }
    }
    ctx->pc = 0x3627CCu;
    // 0x3627cc: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x3627ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x3627d0: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x3627d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x3627d4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3627d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3627d8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x3627d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3627dc: 0x2404042a  addiu       $a0, $zero, 0x42A
    ctx->pc = 0x3627dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1066));
    // 0x3627e0: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x3627e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x3627e4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x3627e4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3627e8: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x3627E8u;
    SET_GPR_U32(ctx, 31, 0x3627F0u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x3627E8u, 0x3627F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3627F0u;
label_3627f0:
    // 0x3627f0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x3627f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3627f4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3627f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3627f8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x3627f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x3627fc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x3627fcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x362800: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x362800u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x362804: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x362804u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x362808: 0xc0965d0  jal         func_259740
    ctx->pc = 0x362808u;
    SET_GPR_U32(ctx, 31, 0x362810u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x362808u, 0x362810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362810u;
label_362810:
    // 0x362810: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x362810u;
    {
        const bool branch_taken_0x362810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x362810) {
            ctx->pc = 0x36284Cu;
            return;
        }
    }
    ctx->pc = 0x362818u;
}
