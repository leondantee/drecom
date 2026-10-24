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

// Function: entry_00329470
// Address: 0x329470 - 0x3294d8
void entry_00329470_0x329470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00329470_0x329470");
#endif

    ctx->pc = 0x329470u;

    // 0x329470: 0x2643fe69  addiu       $v1, $s2, -0x197
    ctx->pc = 0x329470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294966889));
    // 0x329474: 0x8ee228c4  lw          $v0, 0x28C4($s7)
    ctx->pc = 0x329474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 10436)));
    // 0x329478: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x329478u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x32947c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x32947cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x329480: 0x3c0238e3  lui         $v0, 0x38E3
    ctx->pc = 0x329480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14563 << 16));
    // 0x329484: 0x34428e39  ori         $v0, $v0, 0x8E39
    ctx->pc = 0x329484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36409);
    // 0x329488: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x329488u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x32948c: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x32948cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x329490: 0x0  nop
    ctx->pc = 0x329490u;
    // NOP
    // 0x329494: 0x1010  mfhi        $v0
    ctx->pc = 0x329494u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x329498: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x329498u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x32949c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32949cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3294a0: 0x24520197  addiu       $s2, $v0, 0x197
    ctx->pc = 0x3294a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 407));
    // 0x3294a4: 0x2683fe69  addiu       $v1, $s4, -0x197
    ctx->pc = 0x3294a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294966889));
    // 0x3294a8: 0x8ee228c4  lw          $v0, 0x28C4($s7)
    ctx->pc = 0x3294a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 10436)));
    // 0x3294ac: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x3294acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3294b0: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x3294b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3294b4: 0x3c0238e3  lui         $v0, 0x38E3
    ctx->pc = 0x3294b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14563 << 16));
    // 0x3294b8: 0x34428e39  ori         $v0, $v0, 0x8E39
    ctx->pc = 0x3294b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36409);
    // 0x3294bc: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x3294bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3294c0: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x3294c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x3294c4: 0x0  nop
    ctx->pc = 0x3294c4u;
    // NOP
    // 0x3294c8: 0x1010  mfhi        $v0
    ctx->pc = 0x3294c8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x3294cc: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x3294ccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x3294d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3294d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3294d4: 0x24540197  addiu       $s4, $v0, 0x197
    ctx->pc = 0x3294d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 407));
    ctx->pc = 0x3294d8u;
}
