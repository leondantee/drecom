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

// Function: entry_0032ea68
// Address: 0x32ea68 - 0x32eabc
void entry_0032ea68_0x32ea68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032ea68_0x32ea68");
#endif

    ctx->pc = 0x32ea68u;

    // 0x32ea68: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32ea68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x32ea6c: 0x8c24011c  lw          $a0, 0x11C($at)
    ctx->pc = 0x32ea6cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D011Cu));
    // 0x32ea70: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x32ea70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x32ea74: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x32ea74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x32ea78: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x32EA78u;
    {
        const bool branch_taken_0x32ea78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32ea78) {
            ctx->pc = 0x32EABCu;
            return;
        }
    }
    ctx->pc = 0x32EA80u;
    // 0x32ea80: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x32ea80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x32ea84: 0x8c23ec10  lw          $v1, -0x13F0($at)
    ctx->pc = 0x32ea84u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x88EC10u));
    // 0x32ea88: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x32ea88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x32ea8c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x32ea8cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x32ea90: 0xa20365ae  sb          $v1, 0x65AE($s0)
    ctx->pc = 0x32ea90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26030), (uint8_t)GPR_U32(ctx, 3));
    // 0x32ea94: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x32ea94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x32ea98: 0x8c23ec18  lw          $v1, -0x13E8($at)
    ctx->pc = 0x32ea98u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x88EC18u));
    // 0x32ea9c: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x32ea9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x32eaa0: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x32eaa0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x32eaa4: 0xa20365b0  sb          $v1, 0x65B0($s0)
    ctx->pc = 0x32eaa4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26032), (uint8_t)GPR_U32(ctx, 3));
    // 0x32eaa8: 0x8e035dc8  lw          $v1, 0x5DC8($s0)
    ctx->pc = 0x32eaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24008)));
    // 0x32eaac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x32eaacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x32eab0: 0xae035dc8  sw          $v1, 0x5DC8($s0)
    ctx->pc = 0x32eab0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24008), GPR_U32(ctx, 3));
    // 0x32eab4: 0xae005dcc  sw          $zero, 0x5DCC($s0)
    ctx->pc = 0x32eab4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24012), GPR_U32(ctx, 0));
    // 0x32eab8: 0xae005dd0  sw          $zero, 0x5DD0($s0)
    ctx->pc = 0x32eab8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24016), GPR_U32(ctx, 0));
    ctx->pc = 0x32eabcu;
}
