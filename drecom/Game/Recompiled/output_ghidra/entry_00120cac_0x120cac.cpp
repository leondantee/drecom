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

// Function: entry_00120cac
// Address: 0x120cac - 0x120ce8
void entry_00120cac_0x120cac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00120cac_0x120cac");
#endif

    ctx->pc = 0x120cacu;

    // 0x120cac: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x120cacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x120cb0: 0x8423ef68  lh          $v1, -0x1098($at)
    ctx->pc = 0x120cb0u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x3EEF68u));
    // 0x120cb4: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x120cb4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x120cb8: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x120cb8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x120cbc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x120cbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x120cc0: 0x8423ef6a  lh          $v1, -0x1096($at)
    ctx->pc = 0x120cc0u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x3EEF6Au));
    // 0x120cc4: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x120cc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x120cc8: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x120cc8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x120ccc: 0x86082a  slt         $at, $a0, $a2
    ctx->pc = 0x120cccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x120cd0: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x120CD0u;
    {
        const bool branch_taken_0x120cd0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x120cd0) {
            ctx->pc = 0x120CE8u;
            return;
        }
    }
    ctx->pc = 0x120CD8u;
    // 0x120cd8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x120cd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x120cdc: 0x8423ef6a  lh          $v1, -0x1096($at)
    ctx->pc = 0x120cdcu;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x3EEF6Au));
    // 0x120ce0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x120ce0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x120ce4: 0xa423ef68  sh          $v1, -0x1098($at)
    ctx->pc = 0x120ce4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3EEF68u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3EEF68u, _value); } while (0);
    ctx->pc = 0x120ce8u;
}
