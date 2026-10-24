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

// Function: entry_00264688
// Address: 0x264688 - 0x2646c4
void entry_00264688_0x264688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00264688_0x264688");
#endif

    ctx->pc = 0x264688u;

    // 0x264688: 0x92e30002  lbu         $v1, 0x2($s7)
    ctx->pc = 0x264688u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 2)));
    // 0x26468c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x26468cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x264690: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x264690u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x264694: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x264694u;
    {
        const bool branch_taken_0x264694 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x264694) {
            ctx->pc = 0x264658u;
            return;
        }
    }
    ctx->pc = 0x26469Cu;
    // 0x26469c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x26469cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2646a0: 0xae23009c  sw          $v1, 0x9C($s1)
    ctx->pc = 0x2646a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 3));
    // 0x2646a4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2646a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2646a8: 0xae2300a8  sw          $v1, 0xA8($s1)
    ctx->pc = 0x2646a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 3));
    // 0x2646ac: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2646acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2646b0: 0xae2300a0  sw          $v1, 0xA0($s1)
    ctx->pc = 0x2646b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 3));
    // 0x2646b4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2646b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2646b8: 0xae2300a4  sw          $v1, 0xA4($s1)
    ctx->pc = 0x2646b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 3));
    // 0x2646bc: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x2646BCu;
    {
        const bool branch_taken_0x2646bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2646bc) {
            ctx->pc = 0x264870u;
            return;
        }
    }
    ctx->pc = 0x2646C4u;
}
