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

// Function: entry_001c86fc
// Address: 0x1c86fc - 0x1c8724
void entry_001c86fc_0x1c86fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c86fc_0x1c86fc");
#endif

    ctx->pc = 0x1c86fcu;

    // 0x1c86fc: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c86fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8700: 0x908313a4  lbu         $v1, 0x13A4($a0)
    ctx->pc = 0x1c8700u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5028)));
    // 0x1c8704: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1c8704u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c8708: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1c8708u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1c870c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1c870cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1c8710: 0x24630005  addiu       $v1, $v1, 0x5
    ctx->pc = 0x1c8710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x1c8714: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x1c8714u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1c8718: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1c8718u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1c871c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c871cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8720: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x1c8720u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1c8724u;
}
