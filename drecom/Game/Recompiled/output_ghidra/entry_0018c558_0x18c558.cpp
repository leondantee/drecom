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

// Function: entry_0018c558
// Address: 0x18c558 - 0x18c5d4
void entry_0018c558_0x18c558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018c558_0x18c558");
#endif

    ctx->pc = 0x18c558u;

    // 0x18c558: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18c558u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18c55c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18c55cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18c560: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x18c560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x18c564: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x18C564u;
    {
        const bool branch_taken_0x18c564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c564) {
            ctx->pc = 0x18C5D4u;
            return;
        }
    }
    ctx->pc = 0x18C56Cu;
    // 0x18c56c: 0x8e22008c  lw          $v0, 0x8C($s1)
    ctx->pc = 0x18c56cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x18c570: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x18c570u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18c574: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x18c574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x18c578: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x18c578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x18c57c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18c57cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18c580: 0x3c020130  lui         $v0, 0x130
    ctx->pc = 0x18c580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)304 << 16));
    // 0x18c584: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18c584u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18c588: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x18c588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x18c58c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18c58cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18c590: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x18c590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18c594: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18c594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18c598: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18c598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18c59c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x18c59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18c5a0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18c5a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18c5a4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18c5a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18c5a8: 0x8e220090  lw          $v0, 0x90($s1)
    ctx->pc = 0x18c5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x18c5ac: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18c5acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18c5b0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x18c5b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x18c5b4: 0x2117c  dsll32      $v0, $v0, 5
    ctx->pc = 0x18c5b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 5));
    // 0x18c5b8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18c5b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18c5bc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x18c5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x18c5c0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18c5c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18c5c4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x18c5c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18c5c8: 0xfe0201e0  sd          $v0, 0x1E0($s0)
    ctx->pc = 0x18c5c8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 480), GPR_U64(ctx, 2));
    // 0x18c5cc: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x18C5CCu;
    {
        const bool branch_taken_0x18c5cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c5cc) {
            ctx->pc = 0x18C634u;
            return;
        }
    }
    ctx->pc = 0x18C5D4u;
}
