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

// Function: entry_00187354
// Address: 0x187354 - 0x18738c
void entry_00187354_0x187354(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187354_0x187354");
#endif

    ctx->pc = 0x187354u;

    // 0x187354: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x187354u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x187358: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x187358u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47F138u));
    // 0x18735c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x18735cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x187360: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x187360u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x187364: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x187364u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x187368: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x187368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18736c: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x18736cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x187370: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x187370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x187374: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x187374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x187378: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x187378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18737c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18737cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x187380: 0xac220af8  sw          $v0, 0xAF8($at)
    ctx->pc = 0x187380u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D0AF8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AF8u, _value); } while (0);
    // 0x187384: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x187384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x187388: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x187388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
    ctx->pc = 0x18738cu;
}
