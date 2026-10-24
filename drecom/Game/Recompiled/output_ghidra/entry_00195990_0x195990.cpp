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

// Function: entry_00195990
// Address: 0x195990 - 0x1959b8
void entry_00195990_0x195990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195990_0x195990");
#endif

    ctx->pc = 0x195990u;

    // 0x195990: 0x920300e2  lbu         $v1, 0xE2($s0)
    ctx->pc = 0x195990u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 226)));
    // 0x195994: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x195994u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x195998: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x195998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19599c: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x19599Cu;
    {
        const bool branch_taken_0x19599c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x19599c) {
            ctx->pc = 0x1959B8u;
            return;
        }
    }
    ctx->pc = 0x1959A4u;
    // 0x1959a4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1959a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1959a8: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1959a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1959ac: 0x14830022  bne         $a0, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x1959ACu;
    {
        const bool branch_taken_0x1959ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1959ac) {
            ctx->pc = 0x195A38u;
            return;
        }
    }
    ctx->pc = 0x1959B4u;
    // 0x1959b4: 0x0  nop
    ctx->pc = 0x1959b4u;
    // NOP
    ctx->pc = 0x1959b8u;
}
