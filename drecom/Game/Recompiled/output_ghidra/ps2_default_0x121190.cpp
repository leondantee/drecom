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

// Function: default
// Address: 0x121190 - 0x1211c8
void ps2_default_0x121190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2_default_0x121190");
#endif

    ctx->pc = 0x121190u;

    // 0x121190: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121194: 0x9463000e  lhu         $v1, 0xE($v1)
    ctx->pc = 0x121194u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x121198: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x121198u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x12119c: 0x30830040  andi        $v1, $a0, 0x40
    ctx->pc = 0x12119cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)64);
    // 0x1211a0: 0x146000c5  bnez        $v1, . + 4 + (0xC5 << 2)
    ctx->pc = 0x1211A0u;
    {
        const bool branch_taken_0x1211a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1211a0) {
            ctx->pc = 0x1214B8u;
            return;
        }
    }
    ctx->pc = 0x1211A8u;
    // 0x1211a8: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1211a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1211ac: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1211acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1211b0: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x1211b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1211b4: 0x3c040400  lui         $a0, 0x400
    ctx->pc = 0x1211b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1024 << 16));
    // 0x1211b8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1211b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1211bc: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1211BCu;
    {
        const bool branch_taken_0x1211bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1211bc) {
            ctx->pc = 0x1211C8u;
            return;
        }
    }
    ctx->pc = 0x1211C4u;
    // 0x1211c4: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x1211c4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1211c8u;
}
