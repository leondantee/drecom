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

// Function: entry_0025a088
// Address: 0x25a088 - 0x25a0fc
void entry_0025a088_0x25a088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025a088_0x25a088");
#endif

    ctx->pc = 0x25a088u;

    // 0x25a088: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25a088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25a08c: 0x8c630a10  lw          $v1, 0xA10($v1)
    ctx->pc = 0x25a08cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2576)));
    // 0x25a090: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x25a090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x25a094: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x25a094u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25a098: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x25a098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25a09c: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x25a09cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x25a0a0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x25a0a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25a0a4: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x25a0a4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25a0a8: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25a0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25a0ac: 0x8c630a10  lw          $v1, 0xA10($v1)
    ctx->pc = 0x25a0acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2576)));
    // 0x25a0b0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x25a0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x25a0b4: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x25a0b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25a0b8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x25a0b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25a0bc: 0x306300c0  andi        $v1, $v1, 0xC0
    ctx->pc = 0x25a0bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)192);
    // 0x25a0c0: 0x10600032  beqz        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x25A0C0u;
    {
        const bool branch_taken_0x25a0c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a0c0) {
            ctx->pc = 0x25A18Cu;
            return;
        }
    }
    ctx->pc = 0x25A0C8u;
    // 0x25a0c8: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25a0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25a0cc: 0x8c630a10  lw          $v1, 0xA10($v1)
    ctx->pc = 0x25a0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2576)));
    // 0x25a0d0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x25a0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x25a0d4: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x25a0d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25a0d8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x25a0d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25a0dc: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x25a0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x25a0e0: 0x1083004d  beq         $a0, $v1, . + 4 + (0x4D << 2)
    ctx->pc = 0x25A0E0u;
    {
        const bool branch_taken_0x25a0e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x25a0e0) {
            ctx->pc = 0x25A218u;
            return;
        }
    }
    ctx->pc = 0x25A0E8u;
    // 0x25a0e8: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x25a0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x25a0ec: 0x1083004a  beq         $a0, $v1, . + 4 + (0x4A << 2)
    ctx->pc = 0x25A0ECu;
    {
        const bool branch_taken_0x25a0ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x25a0ec) {
            ctx->pc = 0x25A218u;
            return;
        }
    }
    ctx->pc = 0x25A0F4u;
    // 0x25a0f4: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x25A0F4u;
    {
        const bool branch_taken_0x25a0f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a0f4) {
            ctx->pc = 0x25A0FCu;
            return;
        }
    }
    ctx->pc = 0x25A0FCu;
}
