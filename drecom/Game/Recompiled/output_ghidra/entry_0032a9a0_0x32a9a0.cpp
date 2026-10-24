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

// Function: entry_0032a9a0
// Address: 0x32a9a0 - 0x32a9fc
void entry_0032a9a0_0x32a9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032a9a0_0x32a9a0");
#endif

    ctx->pc = 0x32a9a0u;

    // 0x32a9a0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32a9a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x32a9a4: 0x942300c8  lhu         $v1, 0xC8($at)
    ctx->pc = 0x32a9a4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00C8u));
    // 0x32a9a8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x32a9a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x32a9ac: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x32a9acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x32a9b0: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x32A9B0u;
    {
        const bool branch_taken_0x32a9b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a9b0) {
            ctx->pc = 0x32A9FCu;
            return;
        }
    }
    ctx->pc = 0x32A9B8u;
    // 0x32a9b8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32a9b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x32a9bc: 0x942300dc  lhu         $v1, 0xDC($at)
    ctx->pc = 0x32a9bcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00DCu));
    // 0x32a9c0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x32a9c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x32a9c4: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x32a9c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x32a9c8: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x32A9C8u;
    {
        const bool branch_taken_0x32a9c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a9c8) {
            ctx->pc = 0x32A9FCu;
            return;
        }
    }
    ctx->pc = 0x32A9D0u;
    // 0x32a9d0: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x32a9d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x32a9d4: 0x8c23a220  lw          $v1, -0x5DE0($at)
    ctx->pc = 0x32a9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x39A220u));
    // 0x32a9d8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x32a9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x32a9dc: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x32a9dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x32a9e0: 0xac23a220  sw          $v1, -0x5DE0($at)
    ctx->pc = 0x32a9e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x39A220u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x39A220u, _value); } while (0);
    // 0x32a9e4: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x32a9e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x32a9e8: 0x8c23a220  lw          $v1, -0x5DE0($at)
    ctx->pc = 0x32a9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x39A220u));
    // 0x32a9ec: 0x1c600003  bgtz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x32A9ECu;
    {
        const bool branch_taken_0x32a9ec = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x32a9ec) {
            ctx->pc = 0x32A9FCu;
            return;
        }
    }
    ctx->pc = 0x32A9F4u;
    // 0x32a9f4: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x32a9f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x32a9f8: 0xac20a220  sw          $zero, -0x5DE0($at)
    ctx->pc = 0x32a9f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x39A220u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x39A220u, _value); } while (0);
    ctx->pc = 0x32a9fcu;
}
