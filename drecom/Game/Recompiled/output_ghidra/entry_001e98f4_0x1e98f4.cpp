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

// Function: entry_001e98f4
// Address: 0x1e98f4 - 0x1e9954
void entry_001e98f4_0x1e98f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e98f4_0x1e98f4");
#endif

    switch (ctx->pc) {
        case 0x1e9918u: goto label_1e9918;
        default: break;
    }

    ctx->pc = 0x1e98f4u;

    // 0x1e98f4: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e98f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e98f8: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x1e98f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x1e98fc: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1e98fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1e9900: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e9900u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1e9904: 0x24040102  addiu       $a0, $zero, 0x102
    ctx->pc = 0x1e9904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
    // 0x1e9908: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x1e9908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1e990c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1e990cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e9910: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1E9910u;
    SET_GPR_U32(ctx, 31, 0x1E9918u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1E9910u, 0x1E9918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9918u;
label_1e9918:
    // 0x1e9918: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e9918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e991c: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1e991cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1e9920: 0x8483005c  lh          $v1, 0x5C($a0)
    ctx->pc = 0x1e9920u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x1e9924: 0x2465fffb  addiu       $a1, $v1, -0x5
    ctx->pc = 0x1e9924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967291));
    // 0x1e9928: 0xa485005c  sh          $a1, 0x5C($a0)
    ctx->pc = 0x1e9928u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 92), (uint16_t)GPR_U32(ctx, 5));
    // 0x1e992c: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e992cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e9930: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1e9930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1e9934: 0x8483005c  lh          $v1, 0x5C($a0)
    ctx->pc = 0x1e9934u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x1e9938: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x1e9938u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1e993c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1e993cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1e9940: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E9940u;
    {
        const bool branch_taken_0x1e9940 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x1e9940) {
            ctx->pc = 0x1E9954u;
            return;
        }
    }
    ctx->pc = 0x1E9948u;
    // 0x1e9948: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e9948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e994c: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x1e994cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1e9950: 0xa440005c  sh          $zero, 0x5C($v0)
    ctx->pc = 0x1e9950u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 92), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1e9954u;
}
