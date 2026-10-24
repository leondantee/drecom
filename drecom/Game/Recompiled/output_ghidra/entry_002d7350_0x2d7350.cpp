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

// Function: entry_002d7350
// Address: 0x2d7350 - 0x2d73b8
void entry_002d7350_0x2d7350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d7350_0x2d7350");
#endif

    switch (ctx->pc) {
        case 0x2d735cu: goto label_2d735c;
        default: break;
    }

    ctx->pc = 0x2d7350u;

    // 0x2d7350: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d7350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7354: 0xc0b5fa0  jal         func_2D7E80
    ctx->pc = 0x2D7354u;
    SET_GPR_U32(ctx, 31, 0x2D735Cu);
    ctx->pc = 0x2D7E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7E80u, 0x2D7354u, 0x2D735Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D735Cu;
label_2d735c:
    // 0x2d735c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d735cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7360: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2d7360u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2d7364: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2D7364u;
    {
        const bool branch_taken_0x2d7364 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d7364) {
            ctx->pc = 0x2D73B8u;
            return;
        }
    }
    ctx->pc = 0x2D736Cu;
    // 0x2d736c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d736cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7370: 0x2463134c  addiu       $v1, $v1, 0x134C
    ctx->pc = 0x2d7370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
    // 0x2d7374: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2d7374u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d7378: 0x8ca41334  lw          $a0, 0x1334($a1)
    ctx->pc = 0x2d7378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4916)));
    // 0x2d737c: 0x2403ff05  addiu       $v1, $zero, -0xFB
    ctx->pc = 0x2d737cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967045));
    // 0x2d7380: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2d7380u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2d7384: 0xaca31334  sw          $v1, 0x1334($a1)
    ctx->pc = 0x2d7384u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4916), GPR_U32(ctx, 3));
    // 0x2d7388: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d7388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d738c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d738cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7390: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d7390u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d7394: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2d7394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d7398: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d7398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d739c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d739cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d73a0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d73a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d73a4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d73a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d73a8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d73a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d73ac: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d73acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d73b0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d73b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d73b4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d73b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2d73b8u;
}
