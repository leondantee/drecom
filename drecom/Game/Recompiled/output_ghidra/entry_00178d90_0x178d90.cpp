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

// Function: entry_00178d90
// Address: 0x178d90 - 0x178dd0
void entry_00178d90_0x178d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178d90_0x178d90");
#endif

    ctx->pc = 0x178d90u;

    // 0x178d90: 0x9603000e  lhu         $v1, 0xE($s0)
    ctx->pc = 0x178d90u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x178d94: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x178d94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x178d98: 0x246400ff  addiu       $a0, $v1, 0xFF
    ctx->pc = 0x178d98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 255));
    // 0x178d9c: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x178d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x178da0: 0x41a03  sra         $v1, $a0, 8
    ctx->pc = 0x178da0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 8));
    // 0x178da4: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x178da4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x178da8: 0x93a30060  lbu         $v1, 0x60($sp)
    ctx->pc = 0x178da8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x178dac: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x178dacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x178db0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x178db0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x178db4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x178db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x178db8: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x178db8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x178dbc: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x178dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x178dc0: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x178dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x178dc4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x178dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x178dc8: 0xa0650002  sb          $a1, 0x2($v1)
    ctx->pc = 0x178dc8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 5));
    // 0x178dcc: 0x0  nop
    ctx->pc = 0x178dccu;
    // NOP
    ctx->pc = 0x178dd0u;
}
