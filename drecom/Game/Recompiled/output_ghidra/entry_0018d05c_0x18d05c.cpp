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

// Function: entry_0018d05c
// Address: 0x18d05c - 0x18d0d8
void entry_0018d05c_0x18d05c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d05c_0x18d05c");
#endif

    ctx->pc = 0x18d05cu;

    // 0x18d05c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18d05cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18d060: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18d060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18d064: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x18d064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x18d068: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x18D068u;
    {
        const bool branch_taken_0x18d068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d068) {
            ctx->pc = 0x18D0D8u;
            return;
        }
    }
    ctx->pc = 0x18D070u;
    // 0x18d070: 0x8e22008c  lw          $v0, 0x8C($s1)
    ctx->pc = 0x18d070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x18d074: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x18d074u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18d078: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x18d078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x18d07c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x18d07cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x18d080: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18d080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18d084: 0x3c020130  lui         $v0, 0x130
    ctx->pc = 0x18d084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)304 << 16));
    // 0x18d088: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18d088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18d08c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x18d08cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x18d090: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18d090u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18d094: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x18d094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18d098: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18d098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18d09c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18d09cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18d0a0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x18d0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18d0a4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18d0a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18d0a8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18d0a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18d0ac: 0x8e220090  lw          $v0, 0x90($s1)
    ctx->pc = 0x18d0acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x18d0b0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18d0b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18d0b4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x18d0b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x18d0b8: 0x2117c  dsll32      $v0, $v0, 5
    ctx->pc = 0x18d0b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 5));
    // 0x18d0bc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18d0bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18d0c0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x18d0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x18d0c4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18d0c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18d0c8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x18d0c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18d0cc: 0xfe020aa0  sd          $v0, 0xAA0($s0)
    ctx->pc = 0x18d0ccu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2720), GPR_U64(ctx, 2));
    // 0x18d0d0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x18D0D0u;
    {
        const bool branch_taken_0x18d0d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d0d0) {
            ctx->pc = 0x18D138u;
            return;
        }
    }
    ctx->pc = 0x18D0D8u;
}
