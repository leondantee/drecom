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

// Function: entry_0015e748
// Address: 0x15e748 - 0x15e7a8
void entry_0015e748_0x15e748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e748_0x15e748");
#endif

    ctx->pc = 0x15e748u;

    // 0x15e748: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15e748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15e74c: 0x946311f6  lhu         $v1, 0x11F6($v1)
    ctx->pc = 0x15e74cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
    // 0x15e750: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x15e750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x15e754: 0x28630004  slti        $v1, $v1, 0x4
    ctx->pc = 0x15e754u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x15e758: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x15E758u;
    {
        const bool branch_taken_0x15e758 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e758) {
            ctx->pc = 0x15E7A8u;
            return;
        }
    }
    ctx->pc = 0x15E760u;
    // 0x15e760: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x15e760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x15e764: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15e764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15e768: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x15e768u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x15e76c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15e76cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15e770: 0x946311f6  lhu         $v1, 0x11F6($v1)
    ctx->pc = 0x15e770u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
    // 0x15e774: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x15e774u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x15e778: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x15e778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x15e77c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x15e77cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x15e780: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15e780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15e784: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x15e784u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x15e788: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15e788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15e78c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x15e78cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x15e790: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15e790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15e794: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x15e794u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x15e798: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15e798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15e79c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x15e79cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x15e7a0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x15E7A0u;
    {
        const bool branch_taken_0x15e7a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e7a0) {
            ctx->pc = 0x15E7E0u;
            return;
        }
    }
    ctx->pc = 0x15E7A8u;
}
