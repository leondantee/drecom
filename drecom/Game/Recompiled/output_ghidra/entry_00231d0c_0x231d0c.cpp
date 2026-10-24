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

// Function: entry_00231d0c
// Address: 0x231d0c - 0x231d5c
void entry_00231d0c_0x231d0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00231d0c_0x231d0c");
#endif

    switch (ctx->pc) {
        case 0x231d50u: goto label_231d50;
        default: break;
    }

    ctx->pc = 0x231d0cu;

    // 0x231d0c: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x231d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x231d10: 0x84a30030  lh          $v1, 0x30($a1)
    ctx->pc = 0x231d10u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x231d14: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x231d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x231d18: 0xa4a40030  sh          $a0, 0x30($a1)
    ctx->pc = 0x231d18u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 48), (uint16_t)GPR_U32(ctx, 4));
    // 0x231d1c: 0x146002c4  bnez        $v1, . + 4 + (0x2C4 << 2)
    ctx->pc = 0x231D1Cu;
    {
        const bool branch_taken_0x231d1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x231d1c) {
            ctx->pc = 0x232830u;
            return;
        }
    }
    ctx->pc = 0x231D24u;
    // 0x231d24: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x231d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x231d28: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x231d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x231d2c: 0xa4430030  sh          $v1, 0x30($v0)
    ctx->pc = 0x231d2cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 48), (uint16_t)GPR_U32(ctx, 3));
    // 0x231d30: 0x3c05469c  lui         $a1, 0x469C
    ctx->pc = 0x231d30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18076 << 16));
    // 0x231d34: 0x34a44000  ori         $a0, $a1, 0x4000
    ctx->pc = 0x231d34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
    // 0x231d38: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x231d38u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x231d3c: 0x24040507  addiu       $a0, $zero, 0x507
    ctx->pc = 0x231d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1287));
    // 0x231d40: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x231d40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x231d44: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x231d44u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x231d48: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x231D48u;
    SET_GPR_U32(ctx, 31, 0x231D50u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x231D48u, 0x231D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231D50u;
label_231d50:
    // 0x231d50: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x231d50u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x231d54: 0x100002b6  b           . + 4 + (0x2B6 << 2)
    ctx->pc = 0x231D54u;
    {
        const bool branch_taken_0x231d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x231d54) {
            ctx->pc = 0x232830u;
            return;
        }
    }
    ctx->pc = 0x231D5Cu;
}
