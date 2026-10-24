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

// Function: entry_00201008
// Address: 0x201008 - 0x201050
void entry_00201008_0x201008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00201008_0x201008");
#endif

    ctx->pc = 0x201008u;

    // 0x201008: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x201008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x20100c: 0x904200d0  lbu         $v0, 0xD0($v0)
    ctx->pc = 0x20100cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 208)));
    // 0x201010: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x201010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x201014: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x201014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x201018: 0x8c4200c8  lw          $v0, 0xC8($v0)
    ctx->pc = 0x201018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 200)));
    // 0x20101c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20101cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x201020: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x201020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x201024: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x201024u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x201028: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x201028u;
    {
        const bool branch_taken_0x201028 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x201028) {
            ctx->pc = 0x201050u;
            return;
        }
    }
    ctx->pc = 0x201030u;
    // 0x201030: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x201030u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x201034: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x201034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x201038: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x201038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20103c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x20103cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x201040: 0x8c4200d4  lw          $v0, 0xD4($v0)
    ctx->pc = 0x201040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
    // 0x201044: 0x1062ff67  beq         $v1, $v0, . + 4 + (-0x99 << 2)
    ctx->pc = 0x201044u;
    {
        const bool branch_taken_0x201044 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x201044) {
            ctx->pc = 0x200DE4u;
            return;
        }
    }
    ctx->pc = 0x20104Cu;
    // 0x20104c: 0x0  nop
    ctx->pc = 0x20104cu;
    // NOP
    ctx->pc = 0x201050u;
}
