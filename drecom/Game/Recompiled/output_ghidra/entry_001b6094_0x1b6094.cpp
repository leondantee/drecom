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

// Function: entry_001b6094
// Address: 0x1b6094 - 0x1b6104
void entry_001b6094_0x1b6094(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6094_0x1b6094");
#endif

    ctx->pc = 0x1b6094u;

    // 0x1b6094: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b6094u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6098: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1b6098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1b609c: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x1b609cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x1b60a0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1b60a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1b60a4: 0x1060030e  beqz        $v1, . + 4 + (0x30E << 2)
    ctx->pc = 0x1B60A4u;
    {
        const bool branch_taken_0x1b60a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b60a4) {
            ctx->pc = 0x1B6CE0u;
            return;
        }
    }
    ctx->pc = 0x1B60ACu;
    // 0x1b60ac: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1b60acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b60b0: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1b60b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1b60b4: 0x3c04feff  lui         $a0, 0xFEFF
    ctx->pc = 0x1b60b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65279 << 16));
    // 0x1b60b8: 0x3485ffff  ori         $a1, $a0, 0xFFFF
    ctx->pc = 0x1b60b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1b60bc: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x1b60bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x1b60c0: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x1b60c0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x1b60c4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b60c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b60c8: 0x906313a6  lbu         $v1, 0x13A6($v1)
    ctx->pc = 0x1b60c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5030)));
    // 0x1b60cc: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x1b60ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1b60d0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1b60d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b60d4: 0x10c4000b  beq         $a2, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x1B60D4u;
    {
        const bool branch_taken_0x1b60d4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x1b60d4) {
            ctx->pc = 0x1B6104u;
            return;
        }
    }
    ctx->pc = 0x1B60DCu;
    // 0x1b60dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b60dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b60e0: 0x10c30008  beq         $a2, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B60E0u;
    {
        const bool branch_taken_0x1b60e0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x1b60e0) {
            ctx->pc = 0x1B6104u;
            return;
        }
    }
    ctx->pc = 0x1B60E8u;
    // 0x1b60e8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1b60e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b60ec: 0x10c502fc  beq         $a2, $a1, . + 4 + (0x2FC << 2)
    ctx->pc = 0x1B60ECu;
    {
        const bool branch_taken_0x1b60ec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x1b60ec) {
            ctx->pc = 0x1B6CE0u;
            return;
        }
    }
    ctx->pc = 0x1B60F4u;
    // 0x1b60f4: 0x10c002fa  beqz        $a2, . + 4 + (0x2FA << 2)
    ctx->pc = 0x1B60F4u;
    {
        const bool branch_taken_0x1b60f4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b60f4) {
            ctx->pc = 0x1B6CE0u;
            return;
        }
    }
    ctx->pc = 0x1B60FCu;
    // 0x1b60fc: 0x100002f8  b           . + 4 + (0x2F8 << 2)
    ctx->pc = 0x1B60FCu;
    {
        const bool branch_taken_0x1b60fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b60fc) {
            ctx->pc = 0x1B6CE0u;
            return;
        }
    }
    ctx->pc = 0x1B6104u;
}
