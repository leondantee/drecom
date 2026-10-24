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

// Function: entry_00111428
// Address: 0x111428 - 0x111458
void entry_00111428_0x111428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111428_0x111428");
#endif

    ctx->pc = 0x111428u;

    // 0x111428: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x111428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x11142c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x11142cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x111430: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x111430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x111434: 0x102503  sra         $a0, $s0, 20
    ctx->pc = 0x111434u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 16), 20));
    // 0x111438: 0x2493fbea  addiu       $s3, $a0, -0x416
    ctx->pc = 0x111438u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966250));
    // 0x11143c: 0x131d00  sll         $v1, $s3, 20
    ctx->pc = 0x11143cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 20));
    // 0x111440: 0x2031823  subu        $v1, $s0, $v1
    ctx->pc = 0x111440u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x111444: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x111444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x111448: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x111448u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x11144c: 0x438825  or          $s1, $v0, $v1
    ctx->pc = 0x11144cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x111450: 0x3a0902d  daddu       $s2, $sp, $zero
    ctx->pc = 0x111450u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111454: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x111454u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x111458u;
}
