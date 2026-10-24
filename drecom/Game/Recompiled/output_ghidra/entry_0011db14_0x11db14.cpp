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

// Function: entry_0011db14
// Address: 0x11db14 - 0x11db70
void entry_0011db14_0x11db14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011db14_0x11db14");
#endif

    ctx->pc = 0x11db14u;

    // 0x11db14: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x11DB14u;
    {
        const bool branch_taken_0x11db14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DB14u;
        // 0x11db18: 0xdfa30000  ld          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11db14) {
            ctx->pc = 0x11DB70u;
            return;
        }
    }
    ctx->pc = 0x11DB1Cu;
    // 0x11db1c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x11db1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11db20: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x11db20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x11db24: 0x304c024  and         $t8, $t8, $a0
    ctx->pc = 0x11db24u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) & GPR_U64(ctx, 4));
    // 0x11db28: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x11db28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x11db2c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x11db2cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x11db30: 0x21023  negu        $v0, $v0
    ctx->pc = 0x11db30u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x11db34: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x11db34u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x11db38: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x11db38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x11db3c: 0x31823  negu        $v1, $v1
    ctx->pc = 0x11db3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x11db40: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x11db40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x11db44: 0x302c025  or          $t8, $t8, $v0
    ctx->pc = 0x11db44u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | GPR_U64(ctx, 2));
    // 0x11db48: 0x18203c  dsll32      $a0, $t8, 0
    ctx->pc = 0x11db48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 24) << (32 + 0));
    // 0x11db4c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x11db4cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x11db50: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x11db50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x11db54: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x11db54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x11db58: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x11db58u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x11db5c: 0x302c024  and         $t8, $t8, $v0
    ctx->pc = 0x11db5cu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) & GPR_U64(ctx, 2));
    // 0x11db60: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x11db60u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x11db64: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x11db64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x11db68: 0x303c025  or          $t8, $t8, $v1
    ctx->pc = 0x11db68u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | GPR_U64(ctx, 3));
    // 0x11db6c: 0xffb80000  sd          $t8, 0x0($sp)
    ctx->pc = 0x11db6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 24));
    ctx->pc = 0x11db70u;
}
