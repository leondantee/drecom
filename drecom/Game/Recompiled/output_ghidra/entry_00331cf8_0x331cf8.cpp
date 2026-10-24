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

// Function: entry_00331cf8
// Address: 0x331cf8 - 0x331d7c
void entry_00331cf8_0x331cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00331cf8_0x331cf8");
#endif

    switch (ctx->pc) {
        case 0x331d50u: goto label_331d50;
        default: break;
    }

    ctx->pc = 0x331cf8u;

    // 0x331cf8: 0x826365ae  lb          $v1, 0x65AE($s3)
    ctx->pc = 0x331cf8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 26030)));
    // 0x331cfc: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x331cfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x331d00: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x331d00u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x331d04: 0x33880  sll         $a3, $v1, 2
    ctx->pc = 0x331d04u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x331d08: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x331d08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x331d0c: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x331d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x331d10: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x331d10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x331d14: 0x74100  sll         $t0, $a3, 4
    ctx->pc = 0x331d14u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x331d18: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x331d18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x331d1c: 0x24674ab0  addiu       $a3, $v1, 0x4AB0
    ctx->pc = 0x331d1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 19120));
    // 0x331d20: 0xe81821  addu        $v1, $a3, $t0
    ctx->pc = 0x331d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x331d24: 0x1738c0  sll         $a3, $s7, 3
    ctx->pc = 0x331d24u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 23), 3));
    // 0x331d28: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x331d28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x331d2c: 0xafa70268  sw          $a3, 0x268($sp)
    ctx->pc = 0x331d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 7));
    // 0x331d30: 0x826765ae  lb          $a3, 0x65AE($s3)
    ctx->pc = 0x331d30u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 26030)));
    // 0x331d34: 0x71e3c  dsll32      $v1, $a3, 24
    ctx->pc = 0x331d34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 24));
    // 0x331d38: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x331d38u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x331d3c: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x331d3cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x331d40: 0x72e02e28  paddub      $a1, $s7, $zero
    ctx->pc = 0x331d40u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x331d44: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x331d44u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x331d48: 0xc0cc938  jal         func_3324E0
    ctx->pc = 0x331D48u;
    SET_GPR_U32(ctx, 31, 0x331D50u);
    ctx->pc = 0x3324E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3324E0u, 0x331D48u, 0x331D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331D50u;
label_331d50:
    // 0x331d50: 0x10400149  beqz        $v0, . + 4 + (0x149 << 2)
    ctx->pc = 0x331D50u;
    {
        const bool branch_taken_0x331d50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x331d50) {
            ctx->pc = 0x332278u;
            return;
        }
    }
    ctx->pc = 0x331D58u;
    // 0x331d58: 0x8fa20268  lw          $v0, 0x268($sp)
    ctx->pc = 0x331d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
    // 0x331d5c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x331d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x331d60: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x331D60u;
    {
        const bool branch_taken_0x331d60 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x331d60) {
            ctx->pc = 0x331D7Cu;
            return;
        }
    }
    ctx->pc = 0x331D68u;
    // 0x331d68: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x331d68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x331d6c: 0x0  nop
    ctx->pc = 0x331d6cu;
    // NOP
    // 0x331d70: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x331d70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x331d74: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x331D74u;
    {
        const bool branch_taken_0x331d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x331d74) {
            ctx->pc = 0x331D98u;
            return;
        }
    }
    ctx->pc = 0x331D7Cu;
}
