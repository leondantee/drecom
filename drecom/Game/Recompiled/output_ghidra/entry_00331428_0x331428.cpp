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

// Function: entry_00331428
// Address: 0x331428 - 0x331450
void entry_00331428_0x331428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00331428_0x331428");
#endif

    ctx->pc = 0x331428u;

    // 0x331428: 0x2402004c  addiu       $v0, $zero, 0x4C
    ctx->pc = 0x331428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x33142c: 0xafa20220  sw          $v0, 0x220($sp)
    ctx->pc = 0x33142cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 2));
    // 0x331430: 0x2405005a  addiu       $a1, $zero, 0x5A
    ctx->pc = 0x331430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x331434: 0xafa50224  sw          $a1, 0x224($sp)
    ctx->pc = 0x331434u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 548), GPR_U32(ctx, 5));
    // 0x331438: 0x240300a2  addiu       $v1, $zero, 0xA2
    ctx->pc = 0x331438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 162));
    // 0x33143c: 0xafa30228  sw          $v1, 0x228($sp)
    ctx->pc = 0x33143cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 552), GPR_U32(ctx, 3));
    // 0x331440: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x331440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x331444: 0xafa4022c  sw          $a0, 0x22C($sp)
    ctx->pc = 0x331444u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 556), GPR_U32(ctx, 4));
    // 0x331448: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x331448u;
    {
        const bool branch_taken_0x331448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x331448) {
            ctx->pc = 0x3314B0u;
            return;
        }
    }
    ctx->pc = 0x331450u;
}
