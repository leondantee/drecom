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

// Function: entry_0018a428
// Address: 0x18a428 - 0x18a490
void entry_0018a428_0x18a428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018a428_0x18a428");
#endif

    ctx->pc = 0x18a428u;

    // 0x18a428: 0x2e0301ff  sltiu       $v1, $s0, 0x1FF
    ctx->pc = 0x18a428u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)511) ? 1 : 0);
    // 0x18a42c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x18A42Cu;
    {
        const bool branch_taken_0x18a42c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18a42c) {
            ctx->pc = 0x18A410u;
            return;
        }
    }
    ctx->pc = 0x18A434u;
    // 0x18a434: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x18a434u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
    // 0x18a438: 0x2463c440  addiu       $v1, $v1, -0x3BC0
    ctx->pc = 0x18a438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952000));
    // 0x18a43c: 0xae230050  sw          $v1, 0x50($s1)
    ctx->pc = 0x18a43cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 3));
    // 0x18a440: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x18a440u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
    // 0x18a444: 0x2463e510  addiu       $v1, $v1, -0x1AF0
    ctx->pc = 0x18a444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960400));
    // 0x18a448: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x18a448u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
    // 0x18a44c: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x18a44cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x18a450: 0xac20c65c  sw          $zero, -0x39A4($at)
    ctx->pc = 0x18a450u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x57C65Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x57C65Cu, _value); } while (0);
    // 0x18a454: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x18a454u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
    // 0x18a458: 0x2463c670  addiu       $v1, $v1, -0x3990
    ctx->pc = 0x18a458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952560));
    // 0x18a45c: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x18a45cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x18a460: 0xac23c660  sw          $v1, -0x39A0($at)
    ctx->pc = 0x18a460u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x57C660u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x57C660u, _value); } while (0);
    // 0x18a464: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x18a464u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
    // 0x18a468: 0x2463e2e0  addiu       $v1, $v1, -0x1D20
    ctx->pc = 0x18a468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959840));
    // 0x18a46c: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x18a46cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x18a470: 0xac23e72c  sw          $v1, -0x18D4($at)
    ctx->pc = 0x18a470u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x57E72Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x57E72Cu, _value); } while (0);
    // 0x18a474: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x18a474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x18a478: 0xac20e730  sw          $zero, -0x18D0($at)
    ctx->pc = 0x18a478u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x57E730u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x57E730u, _value); } while (0);
    // 0x18a47c: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x18a47cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
    // 0x18a480: 0x2473c670  addiu       $s3, $v1, -0x3990
    ctx->pc = 0x18a480u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952560));
    // 0x18a484: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x18a484u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18a488: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18A488u;
    {
        const bool branch_taken_0x18a488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a488) {
            ctx->pc = 0x18A4A8u;
            return;
        }
    }
    ctx->pc = 0x18A490u;
}
