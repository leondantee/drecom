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

// Function: entry_0027c9c8
// Address: 0x27c9c8 - 0x27c9f8
void entry_0027c9c8_0x27c9c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027c9c8_0x27c9c8");
#endif

    ctx->pc = 0x27c9c8u;

    // 0x27c9c8: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x27c9c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x27c9cc: 0x3042ffbf  andi        $v0, $v0, 0xFFBF
    ctx->pc = 0x27c9ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65471);
    // 0x27c9d0: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x27c9d0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x27c9d4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27c9d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27c9d8: 0x8c30f9e4  lw          $s0, -0x61C($at)
    ctx->pc = 0x27c9d8u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x61F9E4u));
    // 0x27c9dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27c9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27c9e0: 0xae021290  sw          $v0, 0x1290($s0)
    ctx->pc = 0x27c9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4752), GPR_U32(ctx, 2));
    // 0x27c9e4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27c9e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27c9e8: 0x8c221a9c  lw          $v0, 0x1A9C($at)
    ctx->pc = 0x27c9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A9Cu));
    // 0x27c9ec: 0x2107c  dsll32      $v0, $v0, 1
    ctx->pc = 0x27c9ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 1));
    // 0x27c9f0: 0x2107e  dsrl32      $v0, $v0, 1
    ctx->pc = 0x27c9f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 1));
    // 0x27c9f4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27c9f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    ctx->pc = 0x27c9f8u;
}
