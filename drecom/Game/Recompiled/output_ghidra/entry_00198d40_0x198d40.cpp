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

// Function: entry_00198d40
// Address: 0x198d40 - 0x198d9c
void entry_00198d40_0x198d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198d40_0x198d40");
#endif

    ctx->pc = 0x198d40u;

    // 0x198d40: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x198d40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x198d44: 0x8c24dbc8  lw          $a0, -0x2438($at)
    ctx->pc = 0x198d44u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3EDBC8u));
    // 0x198d48: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x198d48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x198d4c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x198d4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x198d50: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x198D50u;
    {
        const bool branch_taken_0x198d50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x198d50) {
            ctx->pc = 0x198D9Cu;
            return;
        }
    }
    ctx->pc = 0x198D58u;
    // 0x198d58: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x198d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x198d5c: 0x8c631338  lw          $v1, 0x1338($v1)
    ctx->pc = 0x198d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4920)));
    // 0x198d60: 0x2c6101e1  sltiu       $at, $v1, 0x1E1
    ctx->pc = 0x198d60u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)481) ? 1 : 0);
    // 0x198d64: 0x1420000d  bnez        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x198D64u;
    {
        const bool branch_taken_0x198d64 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x198d64) {
            ctx->pc = 0x198D9Cu;
            return;
        }
    }
    ctx->pc = 0x198D6Cu;
    // 0x198d6c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x198d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x198d70: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x198d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x198d74: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x198d74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x198d78: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x198d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x198d7c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x198d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x198d80: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x198d80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x198d84: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x198d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x198d88: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x198d88u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x198d8c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x198d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x198d90: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x198d90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x198d94: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x198d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x198d98: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x198d98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x198d9cu;
}
