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

// Function: entry_00175f78
// Address: 0x175f78 - 0x175fb0
void entry_00175f78_0x175f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175f78_0x175f78");
#endif

    ctx->pc = 0x175f78u;

    // 0x175f78: 0x3283ffff  andi        $v1, $s4, 0xFFFF
    ctx->pc = 0x175f78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
    // 0x175f7c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x175f7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x175f80: 0x9422cc8e  lhu         $v0, -0x3372($at)
    ctx->pc = 0x175f80u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x47CC8Eu));
    // 0x175f84: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x175f84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x175f88: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x175f88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x175f8c: 0x1440ffa0  bnez        $v0, . + 4 + (-0x60 << 2)
    ctx->pc = 0x175F8Cu;
    {
        const bool branch_taken_0x175f8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x175f8c) {
            ctx->pc = 0x175E10u;
            return;
        }
    }
    ctx->pc = 0x175F94u;
    // 0x175f94: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x175f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x175f98: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x175f98u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x175f9c: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x175F9Cu;
    {
        const bool branch_taken_0x175f9c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x175f9c) {
            ctx->pc = 0x175FB0u;
            return;
        }
    }
    ctx->pc = 0x175FA4u;
    // 0x175fa4: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x175fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x175fa8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x175FA8u;
    {
        const bool branch_taken_0x175fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x175fa8) {
            ctx->pc = 0x175FB8u;
            return;
        }
    }
    ctx->pc = 0x175FB0u;
}
