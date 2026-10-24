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

// Function: entry_00361938
// Address: 0x361938 - 0x361984
void entry_00361938_0x361938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00361938_0x361938");
#endif

    ctx->pc = 0x361938u;

    // 0x361938: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x361938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36193c: 0x8c641240  lw          $a0, 0x1240($v1)
    ctx->pc = 0x36193cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4672)));
    // 0x361940: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x361940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x361944: 0x10830023  beq         $a0, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x361944u;
    {
        const bool branch_taken_0x361944 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x361944) {
            ctx->pc = 0x3619D4u;
            return;
        }
    }
    ctx->pc = 0x36194Cu;
    // 0x36194c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x36194cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x361950: 0x8c631240  lw          $v1, 0x1240($v1)
    ctx->pc = 0x361950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4672)));
    // 0x361954: 0x8c720000  lw          $s2, 0x0($v1)
    ctx->pc = 0x361954u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x361958: 0x97a30050  lhu         $v1, 0x50($sp)
    ctx->pc = 0x361958u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x36195c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x36195cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x361960: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x361960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x361964: 0x1483000f  bne         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x361964u;
    {
        const bool branch_taken_0x361964 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x361964) {
            ctx->pc = 0x3619A4u;
            return;
        }
    }
    ctx->pc = 0x36196Cu;
    // 0x36196c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x36196cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x361970: 0x8c631240  lw          $v1, 0x1240($v1)
    ctx->pc = 0x361970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4672)));
    // 0x361974: 0x24700004  addiu       $s0, $v1, 0x4
    ctx->pc = 0x361974u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x361978: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x361978u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36197c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x36197Cu;
    {
        const bool branch_taken_0x36197c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36197c) {
            ctx->pc = 0x361990u;
            return;
        }
    }
    ctx->pc = 0x361984u;
}
