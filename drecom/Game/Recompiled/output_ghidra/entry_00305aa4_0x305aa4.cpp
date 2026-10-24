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

// Function: entry_00305aa4
// Address: 0x305aa4 - 0x305b28
void entry_00305aa4_0x305aa4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00305aa4_0x305aa4");
#endif

    switch (ctx->pc) {
        case 0x305b20u: goto label_305b20;
        default: break;
    }

    ctx->pc = 0x305aa4u;

    // 0x305aa4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x305aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305aa8: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x305aa8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x305aac: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x305AACu;
    {
        const bool branch_taken_0x305aac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x305aac) {
            ctx->pc = 0x305B28u;
            return;
        }
    }
    ctx->pc = 0x305AB4u;
    // 0x305ab4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x305ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x305ab8: 0x24429660  addiu       $v0, $v0, -0x69A0
    ctx->pc = 0x305ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940256));
    // 0x305abc: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x305abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x305ac0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x305ac0u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x399660u));
    // 0x305ac4: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x305ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x305ac8: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x305ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x305acc: 0x24429670  addiu       $v0, $v0, -0x6990
    ctx->pc = 0x305accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940272));
    // 0x305ad0: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x305ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x305ad4: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x305ad4u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x399670u));
    // 0x305ad8: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x305ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x305adc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x305adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305ae0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x305ae0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x305ae4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x305ae4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x305ae8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x305ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x305aec: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x305aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x305af0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x305af0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x305af4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x305af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x305af8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x305af8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x305afc: 0x34440106  ori         $a0, $v0, 0x106
    ctx->pc = 0x305afcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)262);
    // 0x305b00: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x305b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305b04: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x305b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x305b08: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x305b08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x305b0c: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x305b0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x305b10: 0x24470300  addiu       $a3, $v0, 0x300
    ctx->pc = 0x305b10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x305b14: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x305b14u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x305b18: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x305B18u;
    SET_GPR_U32(ctx, 31, 0x305B20u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x305B18u, 0x305B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305B20u;
label_305b20:
    // 0x305b20: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x305b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305b24: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x305b24u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x305b28u;
}
