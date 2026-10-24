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

// Function: entry_00136a20
// Address: 0x136a20 - 0x136a84
void entry_00136a20_0x136a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136a20_0x136a20");
#endif

    ctx->pc = 0x136a20u;

    // 0x136a20: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x136a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x136a24: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x136a24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x136a28: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x136a28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x136a2c: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x136a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x136a30: 0x24634e80  addiu       $v1, $v1, 0x4E80
    ctx->pc = 0x136a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20096));
    // 0x136a34: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x136a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x136a38: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x136a38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x136a3c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x136a3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x136a40: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x136a40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x136a44: 0x1060004e  beqz        $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x136A44u;
    {
        const bool branch_taken_0x136a44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x136a44) {
            ctx->pc = 0x136B80u;
            return;
        }
    }
    ctx->pc = 0x136A4Cu;
    // 0x136a4c: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x136a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x136a50: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x136a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x136a54: 0x2470004c  addiu       $s0, $v1, 0x4C
    ctx->pc = 0x136a54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 76));
    // 0x136a58: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x136a58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x136a5c: 0x14600048  bnez        $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x136A5Cu;
    {
        const bool branch_taken_0x136a5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x136a5c) {
            ctx->pc = 0x136B80u;
            return;
        }
    }
    ctx->pc = 0x136A64u;
    // 0x136a64: 0x82030002  lb          $v1, 0x2($s0)
    ctx->pc = 0x136a64u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x136a68: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x136A68u;
    {
        const bool branch_taken_0x136a68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x136a68) {
            ctx->pc = 0x136A84u;
            return;
        }
    }
    ctx->pc = 0x136A70u;
    // 0x136a70: 0x82030002  lb          $v1, 0x2($s0)
    ctx->pc = 0x136a70u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x136a74: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x136a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x136a78: 0xa2030002  sb          $v1, 0x2($s0)
    ctx->pc = 0x136a78u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x136a7c: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x136A7Cu;
    {
        const bool branch_taken_0x136a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136a7c) {
            ctx->pc = 0x136B80u;
            return;
        }
    }
    ctx->pc = 0x136A84u;
}
