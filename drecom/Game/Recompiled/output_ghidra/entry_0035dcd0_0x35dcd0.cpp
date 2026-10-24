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

// Function: entry_0035dcd0
// Address: 0x35dcd0 - 0x35dd10
void entry_0035dcd0_0x35dcd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035dcd0_0x35dcd0");
#endif

    switch (ctx->pc) {
        case 0x35dd04u: goto label_35dd04;
        default: break;
    }

    ctx->pc = 0x35dcd0u;

label_35dcd0:
    // 0x35dcd0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35dcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35dcd4: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x35dcd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
    // 0x35dcd8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x35dcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x1000B000u));
    // 0x35dcdc: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x35dcdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x35dce0: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x35dce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x35dce4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35DCE4u;
    {
        const bool branch_taken_0x35dce4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35dce4) {
            ctx->pc = 0x35DCD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35dcd0;
        }
    }
    ctx->pc = 0x35DCECu;
    // 0x35dcec: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35dcecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35dcf0: 0x3444d000  ori         $a0, $v0, 0xD000
    ctx->pc = 0x35dcf0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x35dcf4: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x35dcf4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x35dcf8: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x35dcf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x35dcfc: 0xc040986  jal         func_102618
    ctx->pc = 0x35DCFCu;
    SET_GPR_U32(ctx, 31, 0x35DD04u);
    ctx->pc = 0x102618u;
    {
        ctx->pc = 0x35DD04u;
        ps2_stubs::sceDmaRecvI(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x35DD04u) { return; }
    ctx->pc = 0x35DD04u;
label_35dd04:
    // 0x35dd04: 0x26730400  addiu       $s3, $s3, 0x400
    ctx->pc = 0x35dd04u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1024));
    // 0x35dd08: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x35dd08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x35dd0c: 0x0  nop
    ctx->pc = 0x35dd0cu;
    // NOP
    ctx->pc = 0x35dd10u;
}
