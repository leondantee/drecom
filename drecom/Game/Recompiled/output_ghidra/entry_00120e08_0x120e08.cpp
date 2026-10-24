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

// Function: entry_00120e08
// Address: 0x120e08 - 0x120e58
void entry_00120e08_0x120e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00120e08_0x120e08");
#endif

    switch (ctx->pc) {
        case 0x120e4cu: goto label_120e4c;
        default: break;
    }

    ctx->pc = 0x120e08u;

    // 0x120e08: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x120e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x120e0c: 0x948311f4  lhu         $v1, 0x11F4($a0)
    ctx->pc = 0x120e0cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4596)));
    // 0x120e10: 0x3074ffff  andi        $s4, $v1, 0xFFFF
    ctx->pc = 0x120e10u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x120e14: 0x16800010  bnez        $s4, . + 4 + (0x10 << 2)
    ctx->pc = 0x120E14u;
    {
        const bool branch_taken_0x120e14 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x120e14) {
            ctx->pc = 0x120E58u;
            return;
        }
    }
    ctx->pc = 0x120E1Cu;
    // 0x120e1c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x120e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x120e20: 0xa2030098  sb          $v1, 0x98($s0)
    ctx->pc = 0x120e20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 152), (uint8_t)GPR_U32(ctx, 3));
    // 0x120e24: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x120e24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x120e28: 0x8c860130  lw          $a2, 0x130($a0)
    ctx->pc = 0x120e28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x120e2c: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x120e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
    // 0x120e30: 0x34654000  ori         $a1, $v1, 0x4000
    ctx->pc = 0x120e30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x120e34: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x120e34u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x120e38: 0x24040522  addiu       $a0, $zero, 0x522
    ctx->pc = 0x120e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1314));
    // 0x120e3c: 0x24c50570  addiu       $a1, $a2, 0x570
    ctx->pc = 0x120e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 1392));
    // 0x120e40: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x120e40u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x120e44: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x120E44u;
    SET_GPR_U32(ctx, 31, 0x120E4Cu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x120E44u, 0x120E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120E4Cu;
label_120e4c:
    // 0x120e4c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x120e4cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x120e50: 0x100007b7  b           . + 4 + (0x7B7 << 2)
    ctx->pc = 0x120E50u;
    {
        const bool branch_taken_0x120e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x120e50) {
            ctx->pc = 0x122D30u;
            return;
        }
    }
    ctx->pc = 0x120E58u;
}
