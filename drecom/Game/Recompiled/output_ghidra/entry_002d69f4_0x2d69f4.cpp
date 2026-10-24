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

// Function: entry_002d69f4
// Address: 0x2d69f4 - 0x2d6a5c
void entry_002d69f4_0x2d69f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d69f4_0x2d69f4");
#endif

    switch (ctx->pc) {
        case 0x2d6a00u: goto label_2d6a00;
        default: break;
    }

    ctx->pc = 0x2d69f4u;

    // 0x2d69f4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d69f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d69f8: 0xc0b5fa0  jal         func_2D7E80
    ctx->pc = 0x2D69F8u;
    SET_GPR_U32(ctx, 31, 0x2D6A00u);
    ctx->pc = 0x2D7E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7E80u, 0x2D69F8u, 0x2D6A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6A00u;
label_2d6a00:
    // 0x2d6a00: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d6a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d6a04: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2d6a04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2d6a08: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2D6A08u;
    {
        const bool branch_taken_0x2d6a08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d6a08) {
            ctx->pc = 0x2D6A5Cu;
            return;
        }
    }
    ctx->pc = 0x2D6A10u;
    // 0x2d6a10: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d6a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d6a14: 0x2463134c  addiu       $v1, $v1, 0x134C
    ctx->pc = 0x2d6a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
    // 0x2d6a18: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2d6a18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d6a1c: 0x8ca41334  lw          $a0, 0x1334($a1)
    ctx->pc = 0x2d6a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4916)));
    // 0x2d6a20: 0x2403ff05  addiu       $v1, $zero, -0xFB
    ctx->pc = 0x2d6a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967045));
    // 0x2d6a24: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2d6a24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2d6a28: 0xaca31334  sw          $v1, 0x1334($a1)
    ctx->pc = 0x2d6a28u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4916), GPR_U32(ctx, 3));
    // 0x2d6a2c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d6a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d6a30: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d6a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d6a34: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d6a34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d6a38: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2d6a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d6a3c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d6a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d6a40: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d6a40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d6a44: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d6a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d6a48: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d6a48u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d6a4c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d6a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d6a50: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d6a50u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d6a54: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d6a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d6a58: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d6a58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2d6a5cu;
}
