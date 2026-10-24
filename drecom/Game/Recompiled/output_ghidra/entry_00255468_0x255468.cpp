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

// Function: entry_00255468
// Address: 0x255468 - 0x2554c8
void entry_00255468_0x255468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00255468_0x255468");
#endif

    ctx->pc = 0x255468u;

    // 0x255468: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x255468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x25546c: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x25546cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x255470: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x255470u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x255474: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x255474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x255478: 0x34420404  ori         $v0, $v0, 0x404
    ctx->pc = 0x255478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x25547c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x25547cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x255480: 0x3c026c03  lui         $v0, 0x6C03
    ctx->pc = 0x255480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27651 << 16));
    // 0x255484: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x255484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x255488: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x255488u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x25548c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x25548cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x255490: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x255490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x255494: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x255494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x255498: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x255498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x25549c: 0xfe020010  sd          $v0, 0x10($s0)
    ctx->pc = 0x25549cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 2));
    // 0x2554a0: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x2554a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2554a4: 0xfe020018  sd          $v0, 0x18($s0)
    ctx->pc = 0x2554a4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 2));
    // 0x2554a8: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2554a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2554ac: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2554acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2554b0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2554B0u;
    {
        const bool branch_taken_0x2554b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2554b0) {
            ctx->pc = 0x2554C8u;
            return;
        }
    }
    ctx->pc = 0x2554B8u;
    // 0x2554b8: 0xde620008  ld          $v0, 0x8($s3)
    ctx->pc = 0x2554b8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2554bc: 0xfe020020  sd          $v0, 0x20($s0)
    ctx->pc = 0x2554bcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 2));
    // 0x2554c0: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x2554C0u;
    {
        const bool branch_taken_0x2554c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2554c0) {
            ctx->pc = 0x255570u;
            return;
        }
    }
    ctx->pc = 0x2554C8u;
}
