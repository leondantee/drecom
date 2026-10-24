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

// Function: entry_001943e8
// Address: 0x1943e8 - 0x194434
void entry_001943e8_0x1943e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001943e8_0x1943e8");
#endif

    ctx->pc = 0x1943e8u;

    // 0x1943e8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1943e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1943ec: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x1943ecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x1943f0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1943f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1943f4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1943f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1943f8: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x1943f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x1943fc: 0x8c42036c  lw          $v0, 0x36C($v0)
    ctx->pc = 0x1943fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 876)));
    // 0x194400: 0x2a28023  subu        $s0, $s5, $v0
    ctx->pc = 0x194400u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x194404: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x194404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x194408: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x194408u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x19440c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x19440cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x194410: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x194410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x194414: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x194414u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x194418: 0x2603fff0  addiu       $v1, $s0, -0x10
    ctx->pc = 0x194418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x19441c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x19441cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x194420: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x194420u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x194424: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x194424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x194428: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x194428u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x19442c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x19442cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x194430: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x194430u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x194434u;
}
