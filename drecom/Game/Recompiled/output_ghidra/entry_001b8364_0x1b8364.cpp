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

// Function: entry_001b8364
// Address: 0x1b8364 - 0x1b83bc
void entry_001b8364_0x1b8364(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b8364_0x1b8364");
#endif

    ctx->pc = 0x1b8364u;

    // 0x1b8364: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1b8364u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8368: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x1b8368u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1b836c: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x1b836cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x1b8370: 0xa32024  and         $a0, $a1, $v1
    ctx->pc = 0x1b8370u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1b8374: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1B8374u;
    {
        const bool branch_taken_0x1b8374 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8374) {
            ctx->pc = 0x1B83C8u;
            return;
        }
    }
    ctx->pc = 0x1B837Cu;
    // 0x1b837c: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1b837cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8380: 0x90c513a6  lbu         $a1, 0x13A6($a2)
    ctx->pc = 0x1b8380u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 5030)));
    // 0x1b8384: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x1b8384u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1b8388: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1b8388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b838c: 0x1064000b  beq         $v1, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x1B838Cu;
    {
        const bool branch_taken_0x1b838c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1b838c) {
            ctx->pc = 0x1B83BCu;
            return;
        }
    }
    ctx->pc = 0x1B8394u;
    // 0x1b8394: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b8394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b8398: 0x10650008  beq         $v1, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B8398u;
    {
        const bool branch_taken_0x1b8398 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x1b8398) {
            ctx->pc = 0x1B83BCu;
            return;
        }
    }
    ctx->pc = 0x1B83A0u;
    // 0x1b83a0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1b83a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b83a4: 0x10640008  beq         $v1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B83A4u;
    {
        const bool branch_taken_0x1b83a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1b83a4) {
            ctx->pc = 0x1B83C8u;
            return;
        }
    }
    ctx->pc = 0x1B83ACu;
    // 0x1b83ac: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B83ACu;
    {
        const bool branch_taken_0x1b83ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b83ac) {
            ctx->pc = 0x1B83C8u;
            return;
        }
    }
    ctx->pc = 0x1B83B4u;
    // 0x1b83b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1B83B4u;
    {
        const bool branch_taken_0x1b83b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b83b4) {
            ctx->pc = 0x1B83C8u;
            return;
        }
    }
    ctx->pc = 0x1B83BCu;
}
