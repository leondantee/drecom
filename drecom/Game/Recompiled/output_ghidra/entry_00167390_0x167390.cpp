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

// Function: entry_00167390
// Address: 0x167390 - 0x1673dc
void entry_00167390_0x167390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00167390_0x167390");
#endif

    ctx->pc = 0x167390u;

    // 0x167390: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x167390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x167394: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x167394u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x167398: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x167398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x16739c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x16739cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1673a0: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1673a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1673a4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1673a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1673a8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1673a8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1673ac: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x1673acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1673b0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1673b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1673b4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1673b4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1673b8: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1673b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1673bc: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1673bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1673c0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1673c0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1673c4: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x1673c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1673c8: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1673c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1673cc: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1673ccu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1673d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1673d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1673d4: 0x10000121  b           . + 4 + (0x121 << 2)
    ctx->pc = 0x1673D4u;
    {
        const bool branch_taken_0x1673d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1673d4) {
            ctx->pc = 0x16785Cu;
            return;
        }
    }
    ctx->pc = 0x1673DCu;
}
