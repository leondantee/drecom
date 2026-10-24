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

// Function: entry_001791c0
// Address: 0x1791c0 - 0x179218
void entry_001791c0_0x1791c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001791c0_0x1791c0");
#endif

    ctx->pc = 0x1791c0u;

    // 0x1791c0: 0x2603fffc  addiu       $v1, $s0, -0x4
    ctx->pc = 0x1791c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
    // 0x1791c4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1791c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1791c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1791c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1791cc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1791ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1791d0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1791d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1791d4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1791d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1791d8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1791d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1791dc: 0x621814  dsllv       $v1, $v0, $v1
    ctx->pc = 0x1791dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (GPR_U32(ctx, 3) & 0x3F));
    // 0x1791e0: 0xde420008  ld          $v0, 0x8($s2)
    ctx->pc = 0x1791e0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1791e4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1791e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1791e8: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x1791e8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
    // 0x1791ec: 0x2603fffc  addiu       $v1, $s0, -0x4
    ctx->pc = 0x1791ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
    // 0x1791f0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1791f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1791f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1791f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1791f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1791f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1791fc: 0x2443000e  addiu       $v1, $v0, 0xE
    ctx->pc = 0x1791fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 14));
    // 0x179200: 0x14103c  dsll32      $v0, $s4, 0
    ctx->pc = 0x179200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 0));
    // 0x179204: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x179204u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x179208: 0x621814  dsllv       $v1, $v0, $v1
    ctx->pc = 0x179208u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (GPR_U32(ctx, 3) & 0x3F));
    // 0x17920c: 0xde420008  ld          $v0, 0x8($s2)
    ctx->pc = 0x17920cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x179210: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x179210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x179214: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x179214u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
    ctx->pc = 0x179218u;
}
