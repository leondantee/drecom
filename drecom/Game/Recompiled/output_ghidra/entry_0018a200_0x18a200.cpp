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

// Function: entry_0018a200
// Address: 0x18a200 - 0x18a288
void entry_0018a200_0x18a200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018a200_0x18a200");
#endif

    ctx->pc = 0x18a200u;

    // 0x18a200: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x18a200u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x18a204: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x18a204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x18a208: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x18a208u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x18a20c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x18a20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x18a210: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x18a210u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x18a214: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x18a214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x18a218: 0x2442e890  addiu       $v0, $v0, -0x1770
    ctx->pc = 0x18a218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961296));
    // 0x18a21c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x18a21cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18a220: 0x90620097  lbu         $v0, 0x97($v1)
    ctx->pc = 0x18a220u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 151)));
    // 0x18a224: 0x304200f7  andi        $v0, $v0, 0xF7
    ctx->pc = 0x18a224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)247);
    // 0x18a228: 0xa0620097  sb          $v0, 0x97($v1)
    ctx->pc = 0x18a228u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 151), (uint8_t)GPR_U32(ctx, 2));
    // 0x18a22c: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x18a22cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x18a230: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x18a230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x18a234: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x18a234u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x18a238: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x18a238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x18a23c: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x18a23cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x18a240: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x18a240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x18a244: 0x2442e890  addiu       $v0, $v0, -0x1770
    ctx->pc = 0x18a244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961296));
    // 0x18a248: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x18a248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18a24c: 0x90620097  lbu         $v0, 0x97($v1)
    ctx->pc = 0x18a24cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 151)));
    // 0x18a250: 0x304200ef  andi        $v0, $v0, 0xEF
    ctx->pc = 0x18a250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)239);
    // 0x18a254: 0xa0620097  sb          $v0, 0x97($v1)
    ctx->pc = 0x18a254u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 151), (uint8_t)GPR_U32(ctx, 2));
    // 0x18a258: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x18a258u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x18a25c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x18a25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x18a260: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x18a260u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x18a264: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x18a264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x18a268: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x18a268u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x18a26c: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x18a26cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x18a270: 0x2442e890  addiu       $v0, $v0, -0x1770
    ctx->pc = 0x18a270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961296));
    // 0x18a274: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x18a274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18a278: 0x90620097  lbu         $v0, 0x97($v1)
    ctx->pc = 0x18a278u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 151)));
    // 0x18a27c: 0x304200df  andi        $v0, $v0, 0xDF
    ctx->pc = 0x18a27cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)223);
    // 0x18a280: 0xa0620097  sb          $v0, 0x97($v1)
    ctx->pc = 0x18a280u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 151), (uint8_t)GPR_U32(ctx, 2));
    // 0x18a284: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18a284u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x18a288u;
}
