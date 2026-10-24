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

// Function: entry_0028f224
// Address: 0x28f224 - 0x28f280
void entry_0028f224_0x28f224(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028f224_0x28f224");
#endif

    ctx->pc = 0x28f224u;

    // 0x28f224: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x28f224u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x28f228: 0x942300c8  lhu         $v1, 0xC8($at)
    ctx->pc = 0x28f228u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00C8u));
    // 0x28f22c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x28f22cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x28f230: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x28f230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x28f234: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x28F234u;
    {
        const bool branch_taken_0x28f234 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f234) {
            ctx->pc = 0x28F280u;
            return;
        }
    }
    ctx->pc = 0x28F23Cu;
    // 0x28f23c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x28f23cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x28f240: 0x942300dc  lhu         $v1, 0xDC($at)
    ctx->pc = 0x28f240u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00DCu));
    // 0x28f244: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x28f244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x28f248: 0x30631000  andi        $v1, $v1, 0x1000
    ctx->pc = 0x28f248u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x28f24c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x28F24Cu;
    {
        const bool branch_taken_0x28f24c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f24c) {
            ctx->pc = 0x28F280u;
            return;
        }
    }
    ctx->pc = 0x28F254u;
    // 0x28f254: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28f254u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28f258: 0x8c232850  lw          $v1, 0x2850($at)
    ctx->pc = 0x28f258u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x622850u));
    // 0x28f25c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x28f25cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x28f260: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28f260u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28f264: 0xac232850  sw          $v1, 0x2850($at)
    ctx->pc = 0x28f264u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x622850u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622850u, _value); } while (0);
    // 0x28f268: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28f268u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28f26c: 0x8c232850  lw          $v1, 0x2850($at)
    ctx->pc = 0x28f26cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x622850u));
    // 0x28f270: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x28F270u;
    {
        const bool branch_taken_0x28f270 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x28f270) {
            ctx->pc = 0x28F280u;
            return;
        }
    }
    ctx->pc = 0x28F278u;
    // 0x28f278: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28f278u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28f27c: 0xac202850  sw          $zero, 0x2850($at)
    ctx->pc = 0x28f27cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x622850u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622850u, _value); } while (0);
    ctx->pc = 0x28f280u;
}
