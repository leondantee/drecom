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

// Function: entry_001fa6bc
// Address: 0x1fa6bc - 0x1fa6f4
void entry_001fa6bc_0x1fa6bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fa6bc_0x1fa6bc");
#endif

    switch (ctx->pc) {
        case 0x1fa6d4u: goto label_1fa6d4;
        default: break;
    }

    ctx->pc = 0x1fa6bcu;

    // 0x1fa6bc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1fa6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1fa6c0: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1fa6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1fa6c4: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1fa6c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1fa6c8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1fa6c8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fa6cc: 0xc059e1c  jal         func_167870
    ctx->pc = 0x1FA6CCu;
    SET_GPR_U32(ctx, 31, 0x1FA6D4u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x1FA6CCu, 0x1FA6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA6D4u;
label_1fa6d4:
    // 0x1fa6d4: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x1fa6d4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1fa6d8: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FA6D8u;
    {
        const bool branch_taken_0x1fa6d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa6d8) {
            ctx->pc = 0x1FA6F4u;
            return;
        }
    }
    ctx->pc = 0x1FA6E0u;
    // 0x1fa6e0: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1fa6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1fa6e4: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1fa6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1fa6e8: 0x94830082  lhu         $v1, 0x82($a0)
    ctx->pc = 0x1fa6e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 130)));
    // 0x1fa6ec: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x1fa6ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x1fa6f0: 0xa4830082  sh          $v1, 0x82($a0)
    ctx->pc = 0x1fa6f0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 130), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1fa6f4u;
}
