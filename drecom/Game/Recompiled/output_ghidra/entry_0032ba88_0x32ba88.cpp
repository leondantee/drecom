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

// Function: entry_0032ba88
// Address: 0x32ba88 - 0x32bab0
void entry_0032ba88_0x32ba88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032ba88_0x32ba88");
#endif

    ctx->pc = 0x32ba88u;

    // 0x32ba88: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x32ba88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32ba8c: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x32ba8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x32ba90: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x32ba90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32ba94: 0xafa200a4  sw          $v0, 0xA4($sp)
    ctx->pc = 0x32ba94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
    // 0x32ba98: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x32ba98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32ba9c: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x32ba9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
    // 0x32baa0: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x32baa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32baa4: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x32baa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x32baa8: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x32BAA8u;
    {
        const bool branch_taken_0x32baa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32baa8) {
            ctx->pc = 0x32BBA0u;
            return;
        }
    }
    ctx->pc = 0x32BAB0u;
}
