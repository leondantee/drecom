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

// Function: entry_002d60f0
// Address: 0x2d60f0 - 0x2d6178
void entry_002d60f0_0x2d60f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d60f0_0x2d60f0");
#endif

    switch (ctx->pc) {
        case 0x2d60fcu: goto label_2d60fc;
        default: break;
    }

    ctx->pc = 0x2d60f0u;

    // 0x2d60f0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d60f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d60f4: 0xc0b5fa0  jal         func_2D7E80
    ctx->pc = 0x2D60F4u;
    SET_GPR_U32(ctx, 31, 0x2D60FCu);
    ctx->pc = 0x2D7E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7E80u, 0x2D60F4u, 0x2D60FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D60FCu;
label_2d60fc:
    // 0x2d60fc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d60fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d6100: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2d6100u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2d6104: 0x10600037  beqz        $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x2D6104u;
    {
        const bool branch_taken_0x2d6104 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d6104) {
            ctx->pc = 0x2D61E4u;
            return;
        }
    }
    ctx->pc = 0x2D610Cu;
    // 0x2d610c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d610cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d6110: 0x2463134c  addiu       $v1, $v1, 0x134C
    ctx->pc = 0x2d6110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
    // 0x2d6114: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2d6114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d6118: 0x8c631334  lw          $v1, 0x1334($v1)
    ctx->pc = 0x2d6118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4916)));
    // 0x2d611c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2d611cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2d6120: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2D6120u;
    {
        const bool branch_taken_0x2d6120 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d6120) {
            ctx->pc = 0x2D6178u;
            return;
        }
    }
    ctx->pc = 0x2D6128u;
    // 0x2d6128: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d6128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d612c: 0x2463134c  addiu       $v1, $v1, 0x134C
    ctx->pc = 0x2d612cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
    // 0x2d6130: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2d6130u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d6134: 0x8ca41334  lw          $a0, 0x1334($a1)
    ctx->pc = 0x2d6134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4916)));
    // 0x2d6138: 0x2403fffa  addiu       $v1, $zero, -0x6
    ctx->pc = 0x2d6138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
    // 0x2d613c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2d613cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2d6140: 0xaca31334  sw          $v1, 0x1334($a1)
    ctx->pc = 0x2d6140u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4916), GPR_U32(ctx, 3));
    // 0x2d6144: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d6144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d6148: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d6148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d614c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d614cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d6150: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d6150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d6154: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x2d6154u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d6158: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d6158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d615c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d615cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d6160: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d6160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d6164: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d6164u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d6168: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d6168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d616c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d616cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2d6170: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2D6170u;
    {
        const bool branch_taken_0x2d6170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d6170) {
            ctx->pc = 0x2D61E4u;
            return;
        }
    }
    ctx->pc = 0x2D6178u;
}
