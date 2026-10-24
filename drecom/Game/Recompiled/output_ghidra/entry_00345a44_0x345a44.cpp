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

// Function: entry_00345a44
// Address: 0x345a44 - 0x345ac4
void entry_00345a44_0x345a44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00345a44_0x345a44");
#endif

    ctx->pc = 0x345a44u;

    // 0x345a44: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x345a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345a48: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x345a48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x345a4c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x345a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x345a50: 0x2402feff  addiu       $v0, $zero, -0x101
    ctx->pc = 0x345a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
    // 0x345a54: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x345a54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x345a58: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x345a58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x345a5c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x345a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345a60: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x345a60u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x345a64: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x345a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345a68: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x345a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x345a6c: 0x24500960  addiu       $s0, $v0, 0x960
    ctx->pc = 0x345a6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2400));
    // 0x345a70: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x345a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x345a74: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x345a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x345a78: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x345a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x345a7c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x345a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x345a80: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x345a80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x345a84: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x345a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345a88: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x345a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x345a8c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x345a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x345a90: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x345a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x345a94: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x345a94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x345a98: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x345a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345a9c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x345a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x345aa0: 0xa040006e  sb          $zero, 0x6E($v0)
    ctx->pc = 0x345aa0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 110), (uint8_t)GPR_U32(ctx, 0));
    // 0x345aa4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x345aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x345aa8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x345aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345aac: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x345aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x345ab0: 0xa043006f  sb          $v1, 0x6F($v0)
    ctx->pc = 0x345ab0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 111), (uint8_t)GPR_U32(ctx, 3));
    // 0x345ab4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x345ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x345ab8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x345ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x345abc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x345abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x345ac0: 0xa0430072  sb          $v1, 0x72($v0)
    ctx->pc = 0x345ac0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 114), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x345ac4u;
}
