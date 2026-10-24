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

// Function: entry_003424b8
// Address: 0x3424b8 - 0x342540
void entry_003424b8_0x3424b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003424b8_0x3424b8");
#endif

    ctx->pc = 0x3424b8u;

    // 0x3424b8: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x3424b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x3424bc: 0x24671330  addiu       $a3, $v1, 0x1330
    ctx->pc = 0x3424bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3424c0: 0x84e4003a  lh          $a0, 0x3A($a3)
    ctx->pc = 0x3424c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 58)));
    // 0x3424c4: 0x42c3c  dsll32      $a1, $a0, 16
    ctx->pc = 0x3424c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
    // 0x3424c8: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x3424c8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x3424cc: 0x26260068  addiu       $a2, $s1, 0x68
    ctx->pc = 0x3424ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 104));
    // 0x3424d0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x3424d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3424d4: 0xa2082a  slt         $at, $a1, $v0
    ctx->pc = 0x3424d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3424d8: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
    ctx->pc = 0x3424D8u;
    {
        const bool branch_taken_0x3424d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3424d8) {
            ctx->pc = 0x342540u;
            return;
        }
    }
    ctx->pc = 0x3424E0u;
    // 0x3424e0: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x3424e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x3424e4: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x3424e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3424e8: 0x8444003c  lh          $a0, 0x3C($v0)
    ctx->pc = 0x3424e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x3424ec: 0x42c3c  dsll32      $a1, $a0, 16
    ctx->pc = 0x3424ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
    // 0x3424f0: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x3424f0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x3424f4: 0x8e260068  lw          $a2, 0x68($s1)
    ctx->pc = 0x3424f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x3424f8: 0xc51023  subu        $v0, $a2, $a1
    ctx->pc = 0x3424f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x3424fc: 0xae220068  sw          $v0, 0x68($s1)
    ctx->pc = 0x3424fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 2));
    // 0x342500: 0x8fa50118  lw          $a1, 0x118($sp)
    ctx->pc = 0x342500u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x342504: 0x24a41330  addiu       $a0, $a1, 0x1330
    ctx->pc = 0x342504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x342508: 0x8486003a  lh          $a2, 0x3A($a0)
    ctx->pc = 0x342508u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 58)));
    // 0x34250c: 0x6143c  dsll32      $v0, $a2, 16
    ctx->pc = 0x34250cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 16));
    // 0x342510: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x342510u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x342514: 0x26230068  addiu       $v1, $s1, 0x68
    ctx->pc = 0x342514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 104));
    // 0x342518: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x342518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34251c: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x34251cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x342520: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x342520u;
    {
        const bool branch_taken_0x342520 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x342520) {
            ctx->pc = 0x342540u;
            return;
        }
    }
    ctx->pc = 0x342528u;
    // 0x342528: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x342528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x34252c: 0x24571330  addiu       $s7, $v0, 0x1330
    ctx->pc = 0x34252cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x342530: 0x86e2003a  lh          $v0, 0x3A($s7)
    ctx->pc = 0x342530u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 58)));
    // 0x342534: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x342534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x342538: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x342538u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x34253c: 0xae220068  sw          $v0, 0x68($s1)
    ctx->pc = 0x34253cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 2));
    ctx->pc = 0x342540u;
}
