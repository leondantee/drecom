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

// Function: entry_002672b8
// Address: 0x2672b8 - 0x267348
void entry_002672b8_0x2672b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002672b8_0x2672b8");
#endif

    ctx->pc = 0x2672b8u;

    // 0x2672b8: 0x8e021338  lw          $v0, 0x1338($s0)
    ctx->pc = 0x2672b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4920)));
    // 0x2672bc: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x2672bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x2672c0: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x2672c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2672c4: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x2672c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x2672c8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2672c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2672cc: 0x2442bbf0  addiu       $v0, $v0, -0x4410
    ctx->pc = 0x2672ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949872));
    // 0x2672d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2672d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2672d4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2672d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2672d8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2672d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2672dc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2672dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2672e0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2672e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2672e4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2672E4u;
    {
        const bool branch_taken_0x2672e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2672e4) {
            ctx->pc = 0x267348u;
            return;
        }
    }
    ctx->pc = 0x2672ECu;
    // 0x2672ec: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x2672ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x2672f0: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x2672f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x2672f4: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x2672f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x2672f8: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x2672f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x2672fc: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x2672fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x267300: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x267300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x267304: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x267304u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x267308: 0x8e021338  lw          $v0, 0x1338($s0)
    ctx->pc = 0x267308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4920)));
    // 0x26730c: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x26730cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x267310: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x267310u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x267314: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x267314u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x267318: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x267318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x26731c: 0x2442bbf0  addiu       $v0, $v0, -0x4410
    ctx->pc = 0x26731cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949872));
    // 0x267320: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x267320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x267324: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x267324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x267328: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x267328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x26732c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x26732cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x267330: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x267330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x267334: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x267334u;
    {
        const bool branch_taken_0x267334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x267334) {
            ctx->pc = 0x267348u;
            return;
        }
    }
    ctx->pc = 0x26733Cu;
    // 0x26733c: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x26733cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x267340: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x267340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x267344: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x267344u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x267348u;
}
