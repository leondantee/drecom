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

// Function: entry_00234d24
// Address: 0x234d24 - 0x234d84
void entry_00234d24_0x234d24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00234d24_0x234d24");
#endif

    switch (ctx->pc) {
        case 0x234d48u: goto label_234d48;
        default: break;
    }

    ctx->pc = 0x234d24u;

    // 0x234d24: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x234d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x234d28: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x234d28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x234d2c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x234d2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x234d30: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x234d30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x234d34: 0x24040102  addiu       $a0, $zero, 0x102
    ctx->pc = 0x234d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
    // 0x234d38: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x234d38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x234d3c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x234d3cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x234d40: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x234D40u;
    SET_GPR_U32(ctx, 31, 0x234D48u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x234D40u, 0x234D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234D48u;
label_234d48:
    // 0x234d48: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x234d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x234d4c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x234d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x234d50: 0x8462005c  lh          $v0, 0x5C($v1)
    ctx->pc = 0x234d50u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x234d54: 0x2442fffb  addiu       $v0, $v0, -0x5
    ctx->pc = 0x234d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967291));
    // 0x234d58: 0xa462005c  sh          $v0, 0x5C($v1)
    ctx->pc = 0x234d58u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 92), (uint16_t)GPR_U32(ctx, 2));
    // 0x234d5c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x234d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x234d60: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x234d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x234d64: 0x8442005c  lh          $v0, 0x5C($v0)
    ctx->pc = 0x234d64u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x234d68: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x234d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x234d6c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x234d6cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x234d70: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x234D70u;
    {
        const bool branch_taken_0x234d70 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x234d70) {
            ctx->pc = 0x234D84u;
            return;
        }
    }
    ctx->pc = 0x234D78u;
    // 0x234d78: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x234d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x234d7c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x234d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x234d80: 0xa440005c  sh          $zero, 0x5C($v0)
    ctx->pc = 0x234d80u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 92), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x234d84u;
}
