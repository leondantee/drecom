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

// Function: entry_0032aa60
// Address: 0x32aa60 - 0x32aabc
void entry_0032aa60_0x32aa60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032aa60_0x32aa60");
#endif

    ctx->pc = 0x32aa60u;

    // 0x32aa60: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32aa60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x32aa64: 0x942300c8  lhu         $v1, 0xC8($at)
    ctx->pc = 0x32aa64u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00C8u));
    // 0x32aa68: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x32aa68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x32aa6c: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x32aa6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x32aa70: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x32AA70u;
    {
        const bool branch_taken_0x32aa70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32aa70) {
            ctx->pc = 0x32AABCu;
            return;
        }
    }
    ctx->pc = 0x32AA78u;
    // 0x32aa78: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32aa78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x32aa7c: 0x942300dc  lhu         $v1, 0xDC($at)
    ctx->pc = 0x32aa7cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00DCu));
    // 0x32aa80: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x32aa80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x32aa84: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x32aa84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x32aa88: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x32AA88u;
    {
        const bool branch_taken_0x32aa88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32aa88) {
            ctx->pc = 0x32AABCu;
            return;
        }
    }
    ctx->pc = 0x32AA90u;
    // 0x32aa90: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x32aa90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x32aa94: 0x8c23a224  lw          $v1, -0x5DDC($at)
    ctx->pc = 0x32aa94u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x39A224u));
    // 0x32aa98: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x32aa98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x32aa9c: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x32aa9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x32aaa0: 0xac23a224  sw          $v1, -0x5DDC($at)
    ctx->pc = 0x32aaa0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x39A224u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x39A224u, _value); } while (0);
    // 0x32aaa4: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x32aaa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x32aaa8: 0x8c23a224  lw          $v1, -0x5DDC($at)
    ctx->pc = 0x32aaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x39A224u));
    // 0x32aaac: 0x1c600003  bgtz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x32AAACu;
    {
        const bool branch_taken_0x32aaac = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x32aaac) {
            ctx->pc = 0x32AABCu;
            return;
        }
    }
    ctx->pc = 0x32AAB4u;
    // 0x32aab4: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x32aab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x32aab8: 0xac20a224  sw          $zero, -0x5DDC($at)
    ctx->pc = 0x32aab8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x39A224u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x39A224u, _value); } while (0);
    ctx->pc = 0x32aabcu;
}
