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

// Function: entry_00331490
// Address: 0x331490 - 0x3314b0
void entry_00331490_0x331490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00331490_0x331490");
#endif

    ctx->pc = 0x331490u;

    // 0x331490: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x331490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x331494: 0xafa20220  sw          $v0, 0x220($sp)
    ctx->pc = 0x331494u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 2));
    // 0x331498: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x331498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x33149c: 0xafa40224  sw          $a0, 0x224($sp)
    ctx->pc = 0x33149cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 548), GPR_U32(ctx, 4));
    // 0x3314a0: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x3314a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3314a4: 0xafa50228  sw          $a1, 0x228($sp)
    ctx->pc = 0x3314a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 552), GPR_U32(ctx, 5));
    // 0x3314a8: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x3314a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3314ac: 0xafa6022c  sw          $a2, 0x22C($sp)
    ctx->pc = 0x3314acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 556), GPR_U32(ctx, 6));
    ctx->pc = 0x3314b0u;
}
