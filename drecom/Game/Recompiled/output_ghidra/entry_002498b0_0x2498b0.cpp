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

// Function: entry_002498b0
// Address: 0x2498b0 - 0x2498f8
void entry_002498b0_0x2498b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002498b0_0x2498b0");
#endif

    ctx->pc = 0x2498b0u;

    // 0x2498b0: 0x8fa401c8  lw          $a0, 0x1C8($sp)
    ctx->pc = 0x2498b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
    // 0x2498b4: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x2498b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x2498b8: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x2498b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x2498bc: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x2498bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x2498c0: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2498c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2498c4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2498C4u;
    {
        const bool branch_taken_0x2498c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2498c4) {
            ctx->pc = 0x2498F8u;
            return;
        }
    }
    ctx->pc = 0x2498CCu;
    // 0x2498cc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2498ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2498d0: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2498d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2498d4: 0xa0430029  sb          $v1, 0x29($v0)
    ctx->pc = 0x2498d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 41), (uint8_t)GPR_U32(ctx, 3));
    // 0x2498d8: 0x8fa401c8  lw          $a0, 0x1C8($sp)
    ctx->pc = 0x2498d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
    // 0x2498dc: 0x24821330  addiu       $v0, $a0, 0x1330
    ctx->pc = 0x2498dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x2498e0: 0x8c460030  lw          $a2, 0x30($v0)
    ctx->pc = 0x2498e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2498e4: 0x3c03feff  lui         $v1, 0xFEFF
    ctx->pc = 0x2498e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65279 << 16));
    // 0x2498e8: 0x3467ffff  ori         $a3, $v1, 0xFFFF
    ctx->pc = 0x2498e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2498ec: 0xc71824  and         $v1, $a2, $a3
    ctx->pc = 0x2498ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
    // 0x2498f0: 0xac430030  sw          $v1, 0x30($v0)
    ctx->pc = 0x2498f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 3));
    // 0x2498f4: 0x0  nop
    ctx->pc = 0x2498f4u;
    // NOP
    ctx->pc = 0x2498f8u;
}
