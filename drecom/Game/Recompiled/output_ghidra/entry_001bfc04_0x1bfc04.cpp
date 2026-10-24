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

// Function: entry_001bfc04
// Address: 0x1bfc04 - 0x1bfc88
void entry_001bfc04_0x1bfc04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bfc04_0x1bfc04");
#endif

    ctx->pc = 0x1bfc04u;

    // 0x1bfc04: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bfc04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bfc08: 0x90631084  lbu         $v1, 0x1084($v1)
    ctx->pc = 0x1bfc08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4228)));
    // 0x1bfc0c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1bfc0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1bfc10: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x1bfc10u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1bfc14: 0x1020001c  beqz        $at, . + 4 + (0x1C << 2)
    ctx->pc = 0x1BFC14u;
    {
        const bool branch_taken_0x1bfc14 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfc14) {
            ctx->pc = 0x1BFC88u;
            return;
        }
    }
    ctx->pc = 0x1BFC1Cu;
    // 0x1bfc1c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bfc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bfc20: 0x8463127c  lh          $v1, 0x127C($v1)
    ctx->pc = 0x1bfc20u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
    // 0x1bfc24: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1BFC24u;
    {
        const bool branch_taken_0x1bfc24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bfc24) {
            ctx->pc = 0x1BFC88u;
            return;
        }
    }
    ctx->pc = 0x1BFC2Cu;
    // 0x1bfc2c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bfc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bfc30: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1bfc30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1bfc34: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1bfc34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1bfc38: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1bfc38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1bfc3c: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1BFC3Cu;
    {
        const bool branch_taken_0x1bfc3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfc3c) {
            ctx->pc = 0x1BFC88u;
            return;
        }
    }
    ctx->pc = 0x1BFC44u;
    // 0x1bfc44: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1bfc44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1bfc48: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bfc48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bfc4c: 0xa464127c  sh          $a0, 0x127C($v1)
    ctx->pc = 0x1bfc4cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 4));
    // 0x1bfc50: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1bfc50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bfc54: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bfc54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bfc58: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1bfc58u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1bfc5c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1bfc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1bfc60: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bfc60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bfc64: 0xa464127a  sh          $a0, 0x127A($v1)
    ctx->pc = 0x1bfc64u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 4));
    // 0x1bfc68: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bfc68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bfc6c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1bfc6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bfc70: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1bfc70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bfc74: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1bfc74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1bfc78: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x1bfc78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x1bfc7c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1bfc7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1bfc80: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1bfc80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1bfc84: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1bfc84u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x1bfc88u;
}
