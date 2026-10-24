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

// Function: entry_0024a0d8
// Address: 0x24a0d8 - 0x24a12c
void entry_0024a0d8_0x24a0d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024a0d8_0x24a0d8");
#endif

    switch (ctx->pc) {
        case 0x24a124u: goto label_24a124;
        default: break;
    }

    ctx->pc = 0x24a0d8u;

    // 0x24a0d8: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x24a0d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24a0dc: 0x84a40030  lh          $a0, 0x30($a1)
    ctx->pc = 0x24a0dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x24a0e0: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x24a0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x24a0e4: 0xa4a30030  sh          $v1, 0x30($a1)
    ctx->pc = 0x24a0e4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 48), (uint16_t)GPR_U32(ctx, 3));
    // 0x24a0e8: 0x1480029f  bnez        $a0, . + 4 + (0x29F << 2)
    ctx->pc = 0x24A0E8u;
    {
        const bool branch_taken_0x24a0e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x24a0e8) {
            ctx->pc = 0x24AB68u;
            return;
        }
    }
    ctx->pc = 0x24A0F0u;
    // 0x24a0f0: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x24a0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x24a0f4: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24a0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24a0f8: 0xa4440030  sh          $a0, 0x30($v0)
    ctx->pc = 0x24a0f8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 48), (uint16_t)GPR_U32(ctx, 4));
    // 0x24a0fc: 0x8fa301c8  lw          $v1, 0x1C8($sp)
    ctx->pc = 0x24a0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
    // 0x24a100: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x24a100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x24a104: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x24a104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x24a108: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x24a108u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x24a10c: 0x24040507  addiu       $a0, $zero, 0x507
    ctx->pc = 0x24a10cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1287));
    // 0x24a110: 0x24630120  addiu       $v1, $v1, 0x120
    ctx->pc = 0x24a110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x24a114: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x24a114u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x24a118: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x24a118u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24a11c: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x24A11Cu;
    SET_GPR_U32(ctx, 31, 0x24A124u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x24A11Cu, 0x24A124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A124u;
label_24a124:
    // 0x24a124: 0x10000290  b           . + 4 + (0x290 << 2)
    ctx->pc = 0x24A124u;
    {
        const bool branch_taken_0x24a124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a124) {
            ctx->pc = 0x24AB68u;
            return;
        }
    }
    ctx->pc = 0x24A12Cu;
}
