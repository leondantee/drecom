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

// Function: entry_0011e784
// Address: 0x11e784 - 0x11e7a0
void entry_0011e784_0x11e784(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e784_0x11e784");
#endif

    ctx->pc = 0x11e784u;

    // 0x11e784: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x11e784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x11e788: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x11e788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x11e78c: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11E78Cu;
    {
        const bool branch_taken_0x11e78c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x11e78c) {
            ctx->pc = 0x11E790u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E78Cu;
            // 0x11e790: 0x64a5007f  daddiu      $a1, $a1, 0x7F (Delay Slot)
            SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)127);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E7A0u;
            return;
        }
    }
    ctx->pc = 0x11E794u;
    // 0x11e794: 0x30a30100  andi        $v1, $a1, 0x100
    ctx->pc = 0x11e794u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)256);
    // 0x11e798: 0x64a20080  daddiu      $v0, $a1, 0x80
    ctx->pc = 0x11e798u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)128);
    // 0x11e79c: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x11e79cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    ctx->pc = 0x11e7a0u;
}
