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

// Function: entry_001804dc
// Address: 0x1804dc - 0x180518
void entry_001804dc_0x1804dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001804dc_0x1804dc");
#endif

    ctx->pc = 0x1804dcu;

    // 0x1804dc: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1804dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1804e0: 0x2466f140  addiu       $a2, $v1, -0xEC0
    ctx->pc = 0x1804e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963520));
    // 0x1804e4: 0x78c50000  lq          $a1, 0x0($a2)
    ctx->pc = 0x1804e4u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x47F140u));
    // 0x1804e8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1804e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1804ec: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x1804ecu;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x1804f0: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x1804f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1804f4: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1804f4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1804f8: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1804f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1804fc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1804fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x180500: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x180500u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x180504: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x180504u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x180508: 0x24631380  addiu       $v1, $v1, 0x1380
    ctx->pc = 0x180508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x18050c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x18050cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x180510: 0x248300b0  addiu       $v1, $a0, 0xB0
    ctx->pc = 0x180510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 176));
    // 0x180514: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x180514u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    ctx->pc = 0x180518u;
}
