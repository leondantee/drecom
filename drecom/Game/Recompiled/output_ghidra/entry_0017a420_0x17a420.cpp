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

// Function: entry_0017a420
// Address: 0x17a420 - 0x17a460
void entry_0017a420_0x17a420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a420_0x17a420");
#endif

    ctx->pc = 0x17a420u;

    // 0x17a420: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17a420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17a424: 0x93a400ac  lbu         $a0, 0xAC($sp)
    ctx->pc = 0x17a424u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x17a428: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x17a428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x17a42c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x17a42cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17a430: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x17a430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x17a434: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x17a434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x17a438: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x17a438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x17a43c: 0xa3a200ac  sb          $v0, 0xAC($sp)
    ctx->pc = 0x17a43cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 172), (uint8_t)GPR_U32(ctx, 2));
    // 0x17a440: 0x27a200a8  addiu       $v0, $sp, 0xA8
    ctx->pc = 0x17a440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x17a444: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x17a444u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17a448: 0x26020018  addiu       $v0, $s0, 0x18
    ctx->pc = 0x17a448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x17a44c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x17a44cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x17a450: 0xde230010  ld          $v1, 0x10($s1)
    ctx->pc = 0x17a450u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x17a454: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x17a454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x17a458: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x17a458u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x17a45c: 0x0  nop
    ctx->pc = 0x17a45cu;
    // NOP
    ctx->pc = 0x17a460u;
}
