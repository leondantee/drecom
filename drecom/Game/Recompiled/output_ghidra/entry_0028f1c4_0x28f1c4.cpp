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

// Function: entry_0028f1c4
// Address: 0x28f1c4 - 0x28f224
void entry_0028f1c4_0x28f1c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028f1c4_0x28f1c4");
#endif

    ctx->pc = 0x28f1c4u;

    // 0x28f1c4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x28f1c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x28f1c8: 0x942300c8  lhu         $v1, 0xC8($at)
    ctx->pc = 0x28f1c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00C8u));
    // 0x28f1cc: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x28f1ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x28f1d0: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x28f1d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x28f1d4: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x28F1D4u;
    {
        const bool branch_taken_0x28f1d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f1d4) {
            ctx->pc = 0x28F224u;
            return;
        }
    }
    ctx->pc = 0x28F1DCu;
    // 0x28f1dc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x28f1dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x28f1e0: 0x942300dc  lhu         $v1, 0xDC($at)
    ctx->pc = 0x28f1e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00DCu));
    // 0x28f1e4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x28f1e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x28f1e8: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x28f1e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x28f1ec: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x28F1ECu;
    {
        const bool branch_taken_0x28f1ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f1ec) {
            ctx->pc = 0x28F224u;
            return;
        }
    }
    ctx->pc = 0x28F1F4u;
    // 0x28f1f4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28f1f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28f1f8: 0x8c232850  lw          $v1, 0x2850($at)
    ctx->pc = 0x28f1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x622850u));
    // 0x28f1fc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x28f1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x28f200: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28f200u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28f204: 0xac232850  sw          $v1, 0x2850($at)
    ctx->pc = 0x28f204u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x622850u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622850u, _value); } while (0);
    // 0x28f208: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28f208u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28f20c: 0x8c232850  lw          $v1, 0x2850($at)
    ctx->pc = 0x28f20cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x622850u));
    // 0x28f210: 0x18600004  blez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x28F210u;
    {
        const bool branch_taken_0x28f210 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x28f210) {
            ctx->pc = 0x28F224u;
            return;
        }
    }
    ctx->pc = 0x28F218u;
    // 0x28f218: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x28f218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28f21c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28f21cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28f220: 0xac232850  sw          $v1, 0x2850($at)
    ctx->pc = 0x28f220u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x622850u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622850u, _value); } while (0);
    ctx->pc = 0x28f224u;
}
