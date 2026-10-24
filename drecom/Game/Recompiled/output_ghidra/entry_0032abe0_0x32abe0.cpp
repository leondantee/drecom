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

// Function: entry_0032abe0
// Address: 0x32abe0 - 0x32ac3c
void entry_0032abe0_0x32abe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032abe0_0x32abe0");
#endif

    ctx->pc = 0x32abe0u;

    // 0x32abe0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32abe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x32abe4: 0x942300c8  lhu         $v1, 0xC8($at)
    ctx->pc = 0x32abe4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00C8u));
    // 0x32abe8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x32abe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x32abec: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x32abecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x32abf0: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x32ABF0u;
    {
        const bool branch_taken_0x32abf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32abf0) {
            ctx->pc = 0x32AC3Cu;
            return;
        }
    }
    ctx->pc = 0x32ABF8u;
    // 0x32abf8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32abf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x32abfc: 0x942300dc  lhu         $v1, 0xDC($at)
    ctx->pc = 0x32abfcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00DCu));
    // 0x32ac00: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x32ac00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x32ac04: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x32ac04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x32ac08: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x32AC08u;
    {
        const bool branch_taken_0x32ac08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32ac08) {
            ctx->pc = 0x32AC3Cu;
            return;
        }
    }
    ctx->pc = 0x32AC10u;
    // 0x32ac10: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x32ac10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x32ac14: 0x8c23a22c  lw          $v1, -0x5DD4($at)
    ctx->pc = 0x32ac14u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x39A22Cu));
    // 0x32ac18: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x32ac18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x32ac1c: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x32ac1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x32ac20: 0xac23a22c  sw          $v1, -0x5DD4($at)
    ctx->pc = 0x32ac20u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x39A22Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x39A22Cu, _value); } while (0);
    // 0x32ac24: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x32ac24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x32ac28: 0x8c23a22c  lw          $v1, -0x5DD4($at)
    ctx->pc = 0x32ac28u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x39A22Cu));
    // 0x32ac2c: 0x1c600003  bgtz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x32AC2Cu;
    {
        const bool branch_taken_0x32ac2c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x32ac2c) {
            ctx->pc = 0x32AC3Cu;
            return;
        }
    }
    ctx->pc = 0x32AC34u;
    // 0x32ac34: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x32ac34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x32ac38: 0xac20a22c  sw          $zero, -0x5DD4($at)
    ctx->pc = 0x32ac38u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x39A22Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x39A22Cu, _value); } while (0);
    ctx->pc = 0x32ac3cu;
}
