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

// Function: entry_0025f310
// Address: 0x25f310 - 0x25f360
void entry_0025f310_0x25f310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025f310_0x25f310");
#endif

    ctx->pc = 0x25f310u;

label_25f310:
    // 0x25f310: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x25f310u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25f314: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x25f314u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x25f318: 0x722021  addu        $a0, $v1, $s2
    ctx->pc = 0x25f318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x25f31c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x25f31cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x25f320: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x25f320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x25f324: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x25f324u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x25f328: 0x8ca302d0  lw          $v1, 0x2D0($a1)
    ctx->pc = 0x25f328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x25f32c: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x25f32cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25f330: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x25f330u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x25f334: 0x3063ffbf  andi        $v1, $v1, 0xFFBF
    ctx->pc = 0x25f334u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65471);
    // 0x25f338: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x25f338u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x25f33c: 0x26100190  addiu       $s0, $s0, 0x190
    ctx->pc = 0x25f33cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x25f340: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x25f340u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x25f344: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25f344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25f348: 0x94630050  lhu         $v1, 0x50($v1)
    ctx->pc = 0x25f348u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x25f34c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x25f34cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x25f350: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x25f350u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x25f354: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x25F354u;
    {
        const bool branch_taken_0x25f354 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25f354) {
            ctx->pc = 0x25F310u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25f310;
        }
    }
    ctx->pc = 0x25F35Cu;
    // 0x25f35c: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x25f35cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x25f360u;
}
