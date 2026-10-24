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

// Function: entry_001bc354
// Address: 0x1bc354 - 0x1bc3c4
void entry_001bc354_0x1bc354(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bc354_0x1bc354");
#endif

    ctx->pc = 0x1bc354u;

    // 0x1bc354: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bc354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bc358: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x1bc358u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1bc35c: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x1bc35cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x1bc360: 0xa41824  and         $v1, $a1, $a0
    ctx->pc = 0x1bc360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x1bc364: 0x10600371  beqz        $v1, . + 4 + (0x371 << 2)
    ctx->pc = 0x1BC364u;
    {
        const bool branch_taken_0x1bc364 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc364) {
            ctx->pc = 0x1BD12Cu;
            return;
        }
    }
    ctx->pc = 0x1BC36Cu;
    // 0x1bc36c: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x1bc36cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bc370: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x1bc370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1bc374: 0x3c05feff  lui         $a1, 0xFEFF
    ctx->pc = 0x1bc374u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65279 << 16));
    // 0x1bc378: 0x34a3ffff  ori         $v1, $a1, 0xFFFF
    ctx->pc = 0x1bc378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x1bc37c: 0x833024  and         $a2, $a0, $v1
    ctx->pc = 0x1bc37cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1bc380: 0xace60008  sw          $a2, 0x8($a3)
    ctx->pc = 0x1bc380u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 6));
    // 0x1bc384: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x1bc384u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bc388: 0x90e813a6  lbu         $t0, 0x13A6($a3)
    ctx->pc = 0x1bc388u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 5030)));
    // 0x1bc38c: 0x310500ff  andi        $a1, $t0, 0xFF
    ctx->pc = 0x1bc38cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x1bc390: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1bc390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bc394: 0x10a4000b  beq         $a1, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x1BC394u;
    {
        const bool branch_taken_0x1bc394 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x1bc394) {
            ctx->pc = 0x1BC3C4u;
            return;
        }
    }
    ctx->pc = 0x1BC39Cu;
    // 0x1bc39c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bc39cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bc3a0: 0x10a30008  beq         $a1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BC3A0u;
    {
        const bool branch_taken_0x1bc3a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bc3a0) {
            ctx->pc = 0x1BC3C4u;
            return;
        }
    }
    ctx->pc = 0x1BC3A8u;
    // 0x1bc3a8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1bc3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bc3ac: 0x10a3035f  beq         $a1, $v1, . + 4 + (0x35F << 2)
    ctx->pc = 0x1BC3ACu;
    {
        const bool branch_taken_0x1bc3ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bc3ac) {
            ctx->pc = 0x1BD12Cu;
            return;
        }
    }
    ctx->pc = 0x1BC3B4u;
    // 0x1bc3b4: 0x10a0035d  beqz        $a1, . + 4 + (0x35D << 2)
    ctx->pc = 0x1BC3B4u;
    {
        const bool branch_taken_0x1bc3b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc3b4) {
            ctx->pc = 0x1BD12Cu;
            return;
        }
    }
    ctx->pc = 0x1BC3BCu;
    // 0x1bc3bc: 0x1000035b  b           . + 4 + (0x35B << 2)
    ctx->pc = 0x1BC3BCu;
    {
        const bool branch_taken_0x1bc3bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc3bc) {
            ctx->pc = 0x1BD12Cu;
            return;
        }
    }
    ctx->pc = 0x1BC3C4u;
}
