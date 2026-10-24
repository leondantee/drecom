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

// Function: entry_002922e0
// Address: 0x2922e0 - 0x29230c
void entry_002922e0_0x2922e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002922e0_0x2922e0");
#endif

    switch (ctx->pc) {
        case 0x292304u: goto label_292304;
        default: break;
    }

    ctx->pc = 0x2922e0u;

    // 0x2922e0: 0x920265a8  lbu         $v0, 0x65A8($s0)
    ctx->pc = 0x2922e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26024)));
    // 0x2922e4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2922E4u;
    {
        const bool branch_taken_0x2922e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2922e4) {
            ctx->pc = 0x29230Cu;
            return;
        }
    }
    ctx->pc = 0x2922ECu;
    // 0x2922ec: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2922ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2922f0: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2922f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2922f4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2922f4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2922f8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2922f8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2922fc: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x2922FCu;
    SET_GPR_U32(ctx, 31, 0x292304u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x2922FCu, 0x292304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292304u;
label_292304:
    // 0x292304: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x292304u;
    {
        const bool branch_taken_0x292304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x292304) {
            ctx->pc = 0x292330u;
            return;
        }
    }
    ctx->pc = 0x29230Cu;
}
