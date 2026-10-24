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

// Function: entry_002262f0
// Address: 0x2262f0 - 0x226368
void entry_002262f0_0x2262f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002262f0_0x2262f0");
#endif

    switch (ctx->pc) {
        case 0x226310u: goto label_226310;
        case 0x226334u: goto label_226334;
        default: break;
    }

    ctx->pc = 0x2262f0u;

    // 0x2262f0: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x2262f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2262f4: 0x84a4127e  lh          $a0, 0x127E($a1)
    ctx->pc = 0x2262f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4734)));
    // 0x2262f8: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x2262f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2262fc: 0xa4a3127e  sh          $v1, 0x127E($a1)
    ctx->pc = 0x2262fcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4734), (uint16_t)GPR_U32(ctx, 3));
    // 0x226300: 0x14800019  bnez        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x226300u;
    {
        const bool branch_taken_0x226300 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x226300) {
            ctx->pc = 0x226368u;
            return;
        }
    }
    ctx->pc = 0x226308u;
    // 0x226308: 0xc067694  jal         func_19DA50
    ctx->pc = 0x226308u;
    SET_GPR_U32(ctx, 31, 0x226310u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x226308u, 0x226310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226310u;
label_226310:
    // 0x226310: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x226310u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x226314: 0x24620258  addiu       $v0, $v1, 0x258
    ctx->pc = 0x226314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 600));
    // 0x226318: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x226318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x22631c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x22631cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x226320: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x226320u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x226324: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x226324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226328: 0xa443127e  sh          $v1, 0x127E($v0)
    ctx->pc = 0x226328u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 3));
    // 0x22632c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22632Cu;
    SET_GPR_U32(ctx, 31, 0x226334u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22632Cu, 0x226334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226334u;
label_226334:
    // 0x226334: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x226334u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x226338: 0x3083000f  andi        $v1, $a0, 0xF
    ctx->pc = 0x226338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x22633c: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x22633Cu;
    {
        const bool branch_taken_0x22633c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22633c) {
            ctx->pc = 0x226368u;
            return;
        }
    }
    ctx->pc = 0x226344u;
    // 0x226344: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x226344u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226348: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x226348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
    // 0x22634c: 0x34434000  ori         $v1, $v0, 0x4000
    ctx->pc = 0x22634cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x226350: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x226350u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x226354: 0x24040520  addiu       $a0, $zero, 0x520
    ctx->pc = 0x226354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1312));
    // 0x226358: 0x24a50120  addiu       $a1, $a1, 0x120
    ctx->pc = 0x226358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
    // 0x22635c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x22635cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x226360: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x226360u;
    SET_GPR_U32(ctx, 31, 0x226368u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x226360u, 0x226368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226368u;
}
