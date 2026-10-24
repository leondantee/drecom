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

// Function: entry_0012f938
// Address: 0x12f938 - 0x12f960
void entry_0012f938_0x12f938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012f938_0x12f938");
#endif

    ctx->pc = 0x12f938u;

    // 0x12f938: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x12f938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12f93c: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x12f93cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x12f940: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x12f940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x12f944: 0x3043f000  andi        $v1, $v0, 0xF000
    ctx->pc = 0x12f944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
    // 0x12f948: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x12f948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x12f94c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12F94Cu;
    {
        const bool branch_taken_0x12f94c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x12f94c) {
            ctx->pc = 0x12F960u;
            return;
        }
    }
    ctx->pc = 0x12F954u;
    // 0x12f954: 0x2411003d  addiu       $s1, $zero, 0x3D
    ctx->pc = 0x12f954u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x12f958: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x12F958u;
    {
        const bool branch_taken_0x12f958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f958) {
            ctx->pc = 0x12F964u;
            return;
        }
    }
    ctx->pc = 0x12F960u;
}
