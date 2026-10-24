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

// Function: entry_0016536c
// Address: 0x16536c - 0x16539c
void entry_0016536c_0x16536c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016536c_0x16536c");
#endif

    switch (ctx->pc) {
        case 0x165388u: goto label_165388;
        default: break;
    }

    ctx->pc = 0x16536cu;

    // 0x16536c: 0x3c100300  lui         $s0, 0x300
    ctx->pc = 0x16536cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)768 << 16));
    // 0x165370: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x165370u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x165374: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x165374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x165378: 0x244556d0  addiu       $a1, $v0, 0x56D0
    ctx->pc = 0x165378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 22224));
    // 0x16537c: 0x24060036  addiu       $a2, $zero, 0x36
    ctx->pc = 0x16537cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x165380: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x165380u;
    SET_GPR_U32(ctx, 31, 0x165388u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x165388u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x165388u) { return; }
    ctx->pc = 0x165388u;
label_165388:
    // 0x165388: 0x3c020305  lui         $v0, 0x305
    ctx->pc = 0x165388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)773 << 16));
    // 0x16538c: 0x34534036  ori         $s3, $v0, 0x4036
    ctx->pc = 0x16538cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16438);
    // 0x165390: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x165390u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x165394: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x165394u;
    {
        const bool branch_taken_0x165394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x165394) {
            ctx->pc = 0x165400u;
            return;
        }
    }
    ctx->pc = 0x16539Cu;
}
