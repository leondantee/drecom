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

// Function: entry_003740b8
// Address: 0x3740b8 - 0x374108
void entry_003740b8_0x3740b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003740b8_0x3740b8");
#endif

    ctx->pc = 0x3740b8u;

label_3740b8:
    // 0x3740b8: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x3740b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x3740bc: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x3740bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x3740c0: 0x722021  addu        $a0, $v1, $s2
    ctx->pc = 0x3740c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x3740c4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3740c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3740c8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3740c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3740cc: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x3740ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3740d0: 0x8ca302d0  lw          $v1, 0x2D0($a1)
    ctx->pc = 0x3740d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x3740d4: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x3740d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3740d8: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x3740d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x3740dc: 0x3063ffbf  andi        $v1, $v1, 0xFFBF
    ctx->pc = 0x3740dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65471);
    // 0x3740e0: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x3740e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x3740e4: 0x26100190  addiu       $s0, $s0, 0x190
    ctx->pc = 0x3740e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x3740e8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3740e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x3740ec: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x3740ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x3740f0: 0x94630050  lhu         $v1, 0x50($v1)
    ctx->pc = 0x3740f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x3740f4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x3740f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3740f8: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x3740f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3740fc: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x3740FCu;
    {
        const bool branch_taken_0x3740fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3740fc) {
            ctx->pc = 0x3740B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3740b8;
        }
    }
    ctx->pc = 0x374104u;
    // 0x374104: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x374104u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x374108u;
}
