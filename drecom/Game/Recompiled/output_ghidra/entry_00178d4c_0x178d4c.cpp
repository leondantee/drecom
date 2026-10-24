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

// Function: entry_00178d4c
// Address: 0x178d4c - 0x178d90
void entry_00178d4c_0x178d4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178d4c_0x178d4c");
#endif

    ctx->pc = 0x178d4cu;

    // 0x178d4c: 0x9603000e  lhu         $v1, 0xE($s0)
    ctx->pc = 0x178d4cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x178d50: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x178d50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x178d54: 0x2464000f  addiu       $a0, $v1, 0xF
    ctx->pc = 0x178d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x178d58: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x178d58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x178d5c: 0x41903  sra         $v1, $a0, 4
    ctx->pc = 0x178d5cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
    // 0x178d60: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x178d60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x178d64: 0x93a30060  lbu         $v1, 0x60($sp)
    ctx->pc = 0x178d64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x178d68: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x178d68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x178d6c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x178d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x178d70: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x178d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x178d74: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x178d74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x178d78: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x178d78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x178d7c: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x178d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x178d80: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x178d80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x178d84: 0xa0650002  sb          $a1, 0x2($v1)
    ctx->pc = 0x178d84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 5));
    // 0x178d88: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x178D88u;
    {
        const bool branch_taken_0x178d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x178d88) {
            ctx->pc = 0x178DD0u;
            return;
        }
    }
    ctx->pc = 0x178D90u;
}
