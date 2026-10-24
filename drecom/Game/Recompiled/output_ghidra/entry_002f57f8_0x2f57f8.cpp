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

// Function: entry_002f57f8
// Address: 0x2f57f8 - 0x2f5848
void entry_002f57f8_0x2f57f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f57f8_0x2f57f8");
#endif

    switch (ctx->pc) {
        case 0x2f5828u: goto label_2f5828;
        default: break;
    }

    ctx->pc = 0x2f57f8u;

    // 0x2f57f8: 0x3c024060  lui         $v0, 0x4060
    ctx->pc = 0x2f57f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16480 << 16));
    // 0x2f57fc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2f57fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f5800: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x2f5800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
    // 0x2f5804: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2f5804u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2f5808: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2f5808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f580c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2f580cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f5810: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2f5810u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f5814: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x2f5814u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2f5818: 0x27a80070  addiu       $t0, $sp, 0x70
    ctx->pc = 0x2f5818u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2f581c: 0x24090096  addiu       $t1, $zero, 0x96
    ctx->pc = 0x2f581cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x2f5820: 0xc0c47d0  jal         func_311F40
    ctx->pc = 0x2F5820u;
    SET_GPR_U32(ctx, 31, 0x2F5828u);
    ctx->pc = 0x311F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311F40u, 0x2F5820u, 0x2F5828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5828u;
label_2f5828:
    // 0x2f5828: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x2f5828u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f582c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2f582cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2f5830: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2f5830u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2f5834: 0x12230004  beq         $s1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F5834u;
    {
        const bool branch_taken_0x2f5834 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f5834) {
            ctx->pc = 0x2F5848u;
            return;
        }
    }
    ctx->pc = 0x2F583Cu;
    // 0x2f583c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2f583cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f5840: 0x8c630100  lw          $v1, 0x100($v1)
    ctx->pc = 0x2f5840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 256)));
    // 0x2f5844: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2f5844u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x2f5848u;
}
