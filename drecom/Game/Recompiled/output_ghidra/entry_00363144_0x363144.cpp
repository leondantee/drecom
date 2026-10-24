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

// Function: entry_00363144
// Address: 0x363144 - 0x3631dc
void entry_00363144_0x363144(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00363144_0x363144");
#endif

    ctx->pc = 0x363144u;

    // 0x363144: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x363144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x363148: 0x844211f2  lh          $v0, 0x11F2($v0)
    ctx->pc = 0x363148u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4594)));
    // 0x36314c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x36314cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x363150: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x363150u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x363154: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x363154u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x363158: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x363158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x36315c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x36315cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x363160: 0x8602006c  lh          $v0, 0x6C($s0)
    ctx->pc = 0x363160u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x363164: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x363164u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x363168: 0xa602006c  sh          $v0, 0x6C($s0)
    ctx->pc = 0x363168u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 108), (uint16_t)GPR_U32(ctx, 2));
    // 0x36316c: 0x8602006c  lh          $v0, 0x6C($s0)
    ctx->pc = 0x36316cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x363170: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x363170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x363174: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x363174u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x363178: 0x4410018  bgez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x363178u;
    {
        const bool branch_taken_0x363178 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x363178) {
            ctx->pc = 0x3631DCu;
            return;
        }
    }
    ctx->pc = 0x363180u;
    // 0x363180: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x363180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x363184: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x363184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x363188: 0x3c02fbff  lui         $v0, 0xFBFF
    ctx->pc = 0x363188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64511 << 16));
    // 0x36318c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x36318cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x363190: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x363190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x363194: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x363194u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x363198: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x363198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x36319c: 0x8c83121c  lw          $v1, 0x121C($a0)
    ctx->pc = 0x36319cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4636)));
    // 0x3631a0: 0x3c02f7ff  lui         $v0, 0xF7FF
    ctx->pc = 0x3631a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63487 << 16));
    // 0x3631a4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3631a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3631a8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3631a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3631ac: 0xac82121c  sw          $v0, 0x121C($a0)
    ctx->pc = 0x3631acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4636), GPR_U32(ctx, 2));
    // 0x3631b0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x3631b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3631b4: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x3631b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x3631b8: 0x245303f0  addiu       $s3, $v0, 0x3F0
    ctx->pc = 0x3631b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 1008));
    // 0x3631bc: 0x8e740034  lw          $s4, 0x34($s3)
    ctx->pc = 0x3631bcu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x3631c0: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x3631c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x3631c4: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x3631c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x3631c8: 0xae820024  sw          $v0, 0x24($s4)
    ctx->pc = 0x3631c8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 2));
    // 0x3631cc: 0xa2600000  sb          $zero, 0x0($s3)
    ctx->pc = 0x3631ccu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3631d0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3631d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3631d4: 0xa202006e  sb          $v0, 0x6E($s0)
    ctx->pc = 0x3631d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 110), (uint8_t)GPR_U32(ctx, 2));
    // 0x3631d8: 0xa200006f  sb          $zero, 0x6F($s0)
    ctx->pc = 0x3631d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 111), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x3631dcu;
}
