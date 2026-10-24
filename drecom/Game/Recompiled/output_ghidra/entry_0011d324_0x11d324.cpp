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

// Function: entry_0011d324
// Address: 0x11d324 - 0x11d384
void entry_0011d324_0x11d324(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d324_0x11d324");
#endif

    ctx->pc = 0x11d324u;

    // 0x11d324: 0xd183c  dsll32      $v1, $t5, 0
    ctx->pc = 0x11d324u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 13) << (32 + 0));
    // 0x11d328: 0x2c03e  dsrl32      $t8, $v0, 0
    ctx->pc = 0x11d328u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x11d32c: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x11d32cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x11d330: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x11d330u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x11d334: 0x11e00013  beqz        $t7, . + 4 + (0x13 << 2)
    ctx->pc = 0x11D334u;
    {
        const bool branch_taken_0x11d334 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D334u;
        // 0x11d338: 0x3032025  or          $a0, $t8, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 24) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d334) {
            ctx->pc = 0x11D384u;
            return;
        }
    }
    ctx->pc = 0x11D33Cu;
    // 0x11d33c: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x11d33cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x11d340: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x11d340u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x11d344: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x11d344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11d348: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x11d348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x11d34c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x11d34cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x11d350: 0x1c37024  and         $t6, $t6, $v1
    ctx->pc = 0x11d350u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & GPR_U64(ctx, 3));
    // 0x11d354: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x11d354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x11d358: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x11d358u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x11d35c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x11d35cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x11d360: 0x42023  negu        $a0, $a0
    ctx->pc = 0x11d360u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x11d364: 0x1c27025  or          $t6, $t6, $v0
    ctx->pc = 0x11d364u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 2));
    // 0x11d368: 0xe183c  dsll32      $v1, $t6, 0
    ctx->pc = 0x11d368u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 14) << (32 + 0));
    // 0x11d36c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x11d36cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x11d370: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x11d370u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x11d374: 0x1c57024  and         $t6, $t6, $a1
    ctx->pc = 0x11d374u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & GPR_U64(ctx, 5));
    // 0x11d378: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x11d378u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x11d37c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x11d37cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x11d380: 0x1c42025  or          $a0, $t6, $a0
    ctx->pc = 0x11d380u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 14) | GPR_U64(ctx, 4));
    ctx->pc = 0x11d384u;
}
